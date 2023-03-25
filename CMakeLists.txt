
file(GLOB sources src/*.cpp)

find_package(webpp)

add_executable(bakdash)
target_sources(backdash ${sources})
target_link_libraries(backdash
    PRIVATE webpp::webpp
)
install(TARGETS ${EXEC_NAME})
