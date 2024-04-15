set(PROJECT_SOURCES
    main.cpp
)

add_executable(EmployeeSystem
    ${PROJECT_SOURCES}
)

target_include_directories(EmployeeSystem PRIVATE
    ${PROJECT_SOURCE_DIR}/include
)

set_target_properties(EmployeeSystem PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)
