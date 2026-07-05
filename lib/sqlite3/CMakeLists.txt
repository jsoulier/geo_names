project(sqlite3)
add_library(sqlite3 sqlite3.c)
set_target_properties(sqlite3 PROPERTIES WINDOWS_EXPORT_ALL_SYMBOLS ON)
