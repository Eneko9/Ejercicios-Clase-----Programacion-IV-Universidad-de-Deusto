#include <stdio.h>

void echo(void);

int main(void)
{
    echo();
}

void echo(void)
{ 
    char c;

    do
    {
        c = getchar();
        if (c != '\n')
        {
            c -= 'a' - 'A';
            printf("Has introducido la letra: %c. ASCII = %i\n", c, c);
            fflush(stdout);
        }
    } while (c != 'Q');
}
