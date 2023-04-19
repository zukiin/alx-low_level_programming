#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Milo";
    my_dog.age = 2.0;
    my_dog.owner = "";
    print_dog(&my_dog);
    return (0);
}
