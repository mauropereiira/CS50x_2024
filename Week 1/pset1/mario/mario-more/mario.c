#include <cs50.h>
#include <stdio.h>

void print_row_left(int spaces, int bricks);
void print_row_right(int bricks);

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1);

    for (int i = 0; i < n; i++)
    {
        print_row_left(n, i + 1);
        print_row_right(i + 1);
    }
}

void print_row_left(int spaces, int bricks)
{
    for (int s = spaces - bricks; s > 0; s--)
    {
        printf(" ");
    }
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    printf("  ");
}

void print_row_right(int bricks)
{
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    printf("\n");
}
