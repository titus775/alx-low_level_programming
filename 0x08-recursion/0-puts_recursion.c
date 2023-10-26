#include <main.h>
/**
 * Write a function that prints a string, followed by a new line.
 * @s: parameter of the function.
 * Return: Always 0.
 */

void _puts_recursion(char *s);{

        if (!*s) return;
        _puts_recursion(s + 1);
        putchar(*s);
}
