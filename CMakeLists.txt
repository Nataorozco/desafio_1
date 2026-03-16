cmake_minimum_required(VERSION 3.16)

project(desafio_1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_custom_target(Documentacion SOURCES
    README.md
)

add_executable(desafio_1
    main.cpp
    src/configuracion.cpp
    include/configuracion.h
    src/movimiento.cpp
    include/movimiento.h
    src/mecanica.cpp
    include/mecanica.h
    src/frontend.cpp
    include/frontend.h
)


include(GNUInstallDirs)
install(TARGETS desafio_1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

target_include_directories(desafio_1 PRIVATE include)

install(FILES README.md DESTINATION ${CMAKE_INSTALL_DOCDIR})
