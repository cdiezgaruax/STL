cmake_minimum_required(VERSION 3.29)
project(Flujos_C_)

set(CMAKE_CXX_STANDARD 14)

add_executable(Flujos_C_
    main.cpp
    matematicas/Matematicas.cpp
    matematicas/Matematicas.h
    geometria/Geometria.h
    geometria/Triangulo.cpp
    geometria/Circulo.cpp
    ciencia/Ciencia.h
    ciencia/Fisica.cpp
    Eje5/STLContainers.cpp
    Eje5/STLContainers.h
)