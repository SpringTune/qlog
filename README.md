# qlog

This repository contains a C++ library for logging.

## Features

LogBook is the main class used to handle logging.
Logs are incrementally added to the logbook to be printed in bulk at a later time.

Here is a small snippet of how to use the library:

```
// Initialise logbook
qlog::LogBook logbook;
logbook.level = qlog::INFO;

// Add logs
logbook.add_info("Init");
logbook.add_warning("Unexpected output");
logbook.add_info("Quit");

// Print and clear logs
logbook.print();
logbook.clear();
```