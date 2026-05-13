# Molecular Weight Calculator

A small side project to learn C++ — a command-line tool that calculates molecular weights of chemical compounds using periodic table data.

## Prerequisites

- C++17 compatible compiler (GCC, Clang, MSVC)
- CMake 3.15 or higher

## Building

```bash
mkdir build && cd build
cmake ..
make
```

## Running

```bash
./build/my_app
```

## Testing

```bash
cd build
ctest
```

## Project Structure

```
.
├── CMakeLists.txt
├── data/
│   └── periodic_table.json   # Element data (symbols, atomic masses, etc.)
├── include/
│   └── periodic_table.h      # PeriodicTable class definition
├── src/
│   ├── main.cpp              # Application entry point
│   └── periodic_table.cpp    # PeriodicTable implementation
├── tests/
│   └── test_periodic_table.cpp
└── build/                    # Build output (generated)
```

## Dependencies

Fetched automatically via CMake:

- [nlohmann/json](https://github.com/nlohmann/json) — JSON parsing
- [Google Test](https://github.com/google/googletest) — Unit testing

## License

TBD
