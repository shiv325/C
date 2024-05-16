# Comments in C

Comments can be used to explain code, and to make it more readable. It can also be used to prevent execution when testing alternative code. These are ignored by the compiler and are not executed.

## Types of Comments

1. Single-Line Comments
2. Multi-Line Comments

## Single-Line Comments

Syntax =>

    //<Type your Comment here>

- Starts with 2 forward slashes `//`
- Any text between '//' and the end of line will be ignored by the compiler.
- Used to comment out single line of code.

Example :

    int x = 10;   // Assign value 10 to x
    int y = 2 * x;
    // Assign y as twice of x

## Multi-Line Comments

Syntax =>

    /*<Type your Comment here>*/

- Starts with `/*` and ends with `*/`.
- Any text between '/*' and '*/' will be ignored by the compiler.
- Can span multiple lines.
- Used to comment out blocks of code.
- Used to provide longer descriptions.

Example :

    /* 
       The Arithmetic Mean of 2 Numbers 'x' and 'y' is calculated by this formula :
                  AM = (x + y) / 2
       
       A number 'x' is odd if it is divisible by 2 otherwise even
    */
    
    int x = 4;
    int y = 6;
    int AM = (x + y) / 2;
    if (x % 2 == 1) {
        printf("Odd");
    }
    else {
        printf("Even");
    }
