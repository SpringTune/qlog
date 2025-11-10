# qlog

This repository contains a C++ library for logging.

## Features

Logging is done via LogBook which holds Log.

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