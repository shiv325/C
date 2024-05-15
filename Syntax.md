# C Syntax

    #include <stdio.h>
    int main() {
      // Write your code here
      return 0;
    }

Let's break this code down to understand it more efficiently.

1. `#` : Indicates a Preprocessor Directive
    - Preprocessor Directives are special commands processed by C processor before compilation.
    - Provides instructions to preprocessor on how to modify source code before it's passed to compiler
    - Examples : #include, #define, #ifdef, #ifndef, #endif
    - These directives are used to include header files, define macros, conditionally compile code, and perform other preprocessing tasks.

2. `#include` : Preprocessor Directive in C programming
    - Preprocessor Directive that tells the compiler to insert the contents of the specified header file at the location where the #include directive is placed in program.

3. `<>` : Angular Bracketsto enclose the Header File Name to be included in the program
   - Encloses the Header File Name to be included in the program.
   - Tells the compiler to look for the specified header file in the system's standard include directories. These directories are predefined by the compiler installation and typically contain standard library header files like stdio.h, stdlib.h, etc.
> _Note_ : We can also use double quotes `""` to enclose header file. It tells the compiler to look for the specified header file in the current directory (as the source file) first. If it's not found there, the compiler will then search the standard include directories.

4. `stdio.h` : Standard Input-Output Header File
    - It's an essential header file which provides declarations for functions used for basic input and output operations in C programming.
    - Some of the commonly used functions declared in stdio.h include:
      - printf( ): Used to display formatted output on the screen.
      - scanf( ): Used to read formatted input from the standard input (keyboard).
      - fprintf( ), fscanf( ): Similar to printf( ) and scanf( ), but used for input/output operations with files.
      - getchar( ), putchar( ): Used to read a single character from the standard input and write a single character to the standard output, respectively.
      - fgets( ), fputs( ): Used for reading and writing strings from/to files, respectively.
      - Many other functions for file handling, such as fopen( ), fclose( ), fseek( ), ftell( ), etc.
    - Including stdio.h in your program allows you to use these functions without having to define them yourself.

5. `main` : Name of function
    - Serves as the entry point for C program.
    - When you run a C program, the operating system starts executing code from the main function.
    - It must return an int value.

6. `int` : Return type of main function
    - An Integer value must be returned.

7. `()` : Parenthesis
    - Encloses the arguments taken by main function
> _Note_ : We can also write `int main(void)` to explicitly state that it doesn't take any arguments.

8. `{}` : Curly Braces
    - Encloses the body of main function.
    - Inside them, we can write the statements that make up the program.

9. `return` : Keyword
    - Statement used to exit a function
    - Optionally returns a value to the caller of that function.
Here, we are returning value 0 by `return 0;`
> _Note_ : Returning 0 is not strictly necessary, but it's considered good practice for a few reasons :
> - Status Code : Returning 0 from main indicates to the operating system that the program executed successfully. Other values, typically non-zero, can be used to indicate different types of errors or abnormal terminations.
> - Explicitness : Including `return 0;` makes the intention of the code clear. While many compilers will implicitly assume `return 0;` at the end of main if it's not explicitly stated, being explicit can enhance readability and maintainability, especially for those who might not be familiar with the implicit behavior.
> - Portability: Some older compilers might not have the implicit return behavior, so explicitly including `return 0;` ensures portability across different environments.

> So, while `return 0;` is technically optional in many cases due to implicit return behavior, it's a good practice to include it for clarity, consistency, and portability.

10. `//` : Comments
    -  Non-executable lines of text that are ignored by the compiler or interpreter.
    -  Used to add explanations or notes within the code, aiding in understanding for developers.
    -  Used to document code, provide explanations, or temporarily disable code during debugging without actually removing it.
    -  Makes code more readable and maintainable.

11. `;` : Statement Terminator
    - Indicates the end of a statement.
    - Each statement ends with a semicolon.
    - The semicolon tells the compiler that the statement has finished, and it should move on to the next statement.
    - Omitting the semicolon or placing it incorrectly can lead to syntax errors during compilation.
   
# Alternative Syntax

The main function can also take command-line arguments. In this case, it's declared as int main(int argc, char *argv[]), where argc is an integer representing the number of arguments passed to the program, and argv is an array of strings containing those arguments. The `*` is used to point to the array argv.

Syntax =>

    int main(int argc, char *argv[]) {
        // Statements
        return 0; // Optional: Indicates successful termination of the program
    }

Inside the main function, you write the instructions that define the behavior of your program. This can include variable declarations, function calls, control structures like loops and conditionals, and input/output operations.
