# C Output

In C, we can output values or print text using function `printf()`.

Syntax =>

    printf(expression);

For example :

    printf("Speed Shobu");

  Output =>

    Speed Shobu

While working with text, make sure to wrap it inside double quotes `""`.

Also, note that multiple printf() function statements doesn't add new line.

For example :

    printf("India is a big country.");
    printf("I live in Germany.");
    printf("Germany is better than India.);

  Output =>

    India is a big country.I live in Germany.Germany is better than India.

To overcome this issue, add new line character `\n`.

For example :

    printf("India is a big country.\n");
    printf("I live in Germany.\n");
    printf("Germany is better than India.);

  Output =>

    India is a big country.
    I live in Germany.
    Germany is better than India.
