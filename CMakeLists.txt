cmake_minimum_required(VERSION 3.19)
project(Assignments C)

set(CMAKE_C_STANDARD 11)

# Assignment 1
add_executable(Question1 A1/A1Q1.c)
add_executable(Question2 A1/A1Q2.c)
add_executable(Question3 A1/A1Q3.c)
add_executable(Question4 A1/A1Q4.c)
add_executable(Question5 A1/A1Q5.c)
add_executable(Question6 A1/A1Q6.c)

# Quizzes from the modules
add_executable(Quiz Quizes.c)

# Assignment 2

add_executable(A2Question1 A2/A2Q1.c)
add_executable(A2Question2 A2/A2Q2.c)
add_executable(A2Question3 A2/A2Q3.c)
add_executable(A2Question4 A2/A2Q4.c)
add_executable(A2Question5 A2/A2Q5.c)


