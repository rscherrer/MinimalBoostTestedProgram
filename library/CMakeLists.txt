project(library)

set(
        HEADER_FILES
        function1.h
        function2.h
        function3.h
)

set(
        SOURCE_FILES
        function1.cpp
        function2.cpp
        function3.cpp
)

add_library(library STATIC ${SOURCE_FILES} ${HEADER_FILES})