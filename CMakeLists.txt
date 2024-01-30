# Version minimale de CMake requise
cmake_minimum_required(VERSION 3.10)

# Nom du projet
project(module-image)

# Configuration de l'exécutable
add_executable(test src/main.cpp)



# Set the output directory for the executable
set_target_properties(test PROPERTIES RUNTIME_OUTPUT_DIRECTORY ./bin)
