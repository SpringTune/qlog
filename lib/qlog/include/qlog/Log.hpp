#ifndef __QLOG__LOG_HPP__
#define __QLOG__LOG_HPP__

#include <qlog/LogLevel.hpp>

#include <cstdio>
#include <string>

namespace qlog {

class Log {
public:
    LogLevel level;
    std::string message;

public:
    // Constructor
    Log(LogLevel _level, std::string _message) : level(_level), message(_message) {}

    // Print
    void print(LogLevel threshold_level) { if (level >= threshold_level) print_log(); }

private:
    // Print utility
    void print_log() {
        // Select format
        switch(level) {
            case LogLevel::DEBUG:   printf("\e[30m[DEBUG  ] "); break;
            case LogLevel::INFO:    printf("\e[34m[INFO   ] "); break;
            case LogLevel::WARNING: printf("\e[33m[WARNING] "); break;
            case LogLevel::ERROR:   printf("\e[31m[ERROR  ] "); break;
            case LogLevel::FATAL:   printf("\e[37;41m[FATAL  ] "); break;

            default: printf("\e[30;43m[UNKNOWN] "); break;
        }

        // Print message
        printf("%s", message.c_str());

        // Reset format
        printf("\e[0m\n");
    }
};

} // namespace qlog

#endif