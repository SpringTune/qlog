#include <qlog.hpp>
#include <cstdio>

int main() {

    // Testing Log
    qlog::Log log0 = qlog::Log(qlog::DEBUG,   "Log message");
    qlog::Log log1 = qlog::Log(qlog::INFO,    "Log message");
    qlog::Log log2 = qlog::Log(qlog::WARNING, "Log message");
    qlog::Log log3 = qlog::Log(qlog::ERROR,   "Log message");
    qlog::Log log4 = qlog::Log(qlog::FATAL,   "Log message");
    qlog::Log log5 = qlog::Log((qlog::LogLevel)6,   "Log message");

    qlog::LogLevel threshold_level = qlog::DEBUG;
    log0.print(threshold_level);
    log1.print(threshold_level);
    log2.print(threshold_level);
    log3.print(threshold_level);
    log4.print(threshold_level);
    log5.print(threshold_level);

    return 0;
}