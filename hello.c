#include <cs50.h>
#include <stdio.h>

int main(void)

{
    printf("hello, world\n");
    string name = get_string("whats your name?\n");
    printf("hello, %s\n", name);
}
