#include <qlog.hpp>
#include <cstdio>

int main() {

    // Testing Log
    qlog::LogBook logbook;
    logbook.level = qlog::INFO;

    logbook.add_debug("Log message");
    logbook.add_info("Log message");
    logbook.add_warning("Log message");
    logbook.add_error("Log message");
    logbook.add_fatal("Log message");

    logbook.print();

    return 0;
}