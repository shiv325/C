# Execution of C Program

Processes involved in execution of C program :

1. Compilation
2. Assembler
3. Linker
4. Loader

# Compilation

1. C program is first compiled.
2. Compiler checks for errors in the program
3. If there is an error, program is terminated
4. If there is no error, program is successfully converted into low-level language

> _Note*_ : Compilers for C language must be downloaded and installed in local machine to execute program. Examples =>
> - `Mac` : GNU or Clang
> - `Windows` : Cygwin or Mingw

# Assembler

1. After compilation, assembler coverts code into assembly language
2. Now the code is in binary form i.e. 0 and 1

# Linker

1. Links all imported files from source code
2. These files are used to implement various functions or algorithms in programs for example 'stdio.h'

# Loader

1. Assembly code is loaded in RAM
2. It is then converted into executable file
3. Memory space allocated for variables
4. Then program is executed
5. After termination of program, the memory space is reallocated i.e. all the memory allocated to the program is marked free and made available for use by other programs
