# cmake_minimum_required(VERSION <specify CMake version here>)
project(OpenAir)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        include/common/.get-opt.h.swp
        include/Singleton.h
        out/libair.a
        out/openair
        src/common/.air-memory.cpp.swp
        src/common/.get-opt.cpp.swp
        src/common/air-memory.cpp
        src/common/air-memory.h
        src/common/air-memory.o
        src/common/config.h
        src/common/get-opt.cpp
        src/common/get-opt.h
        src/common/get-opt.o
        src/common/Makefile
        src/log/logger.cpp
        src/log/logger.h
        src/log/Makefile
        src/utility/Makefile
        src/.swp
        src/main.cpp
        src/main.o
        src/Makefile
        src/test
        src/type.h
        Makefile
        Makefile.env src/log/LogMnt.cpp src/log/LogMnt.h src/log/LogRecord.cpp src/log/LogRecord.h src/log/LogPrinter.cpp src/log/LogPrinter.h)

add_executable(OpenAir ${SOURCE_FILES})