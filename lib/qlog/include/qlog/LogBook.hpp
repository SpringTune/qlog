#ifndef __QLOG__LOGBOOK_HPP__
#define __QLOG__LOGBOOK_HPP__

#include <qlog/LogLevel.hpp>
#include <qlog/Log.hpp>

#include <vector>

namespace qlog {

class LogBook {
public:
    LogLevel level;
    std::vector<Log> log_l;

public:
    // Constructor
    LogBook() {}
    LogBook(LogLevel _level) : level(_level) {}

    // Add logs
    void add_debug(std::string message)   { log_l.emplace_back(LogLevel::DEBUG, message);   }
    void add_info(std::string message)    { log_l.emplace_back(LogLevel::INFO, message);    }
    void add_warning(std::string message) { log_l.emplace_back(LogLevel::WARNING, message); }
    void add_error(std::string message)   { log_l.emplace_back(LogLevel::ERROR, message);   }
    void add_fatal(std::string message)   { log_l.emplace_back(LogLevel::FATAL, message);   }

    // Print
    void print() {
        for (int i = 0; i < log_l.size(); i++) {
            log_l[i].print(level);
        }
    }

    // Clear list
    void clear() { log_l.clear(); }
};

} // namespace qlog

#endif