#include <cs50.h>
#include <stdio.h>

int main(void)
{
//declaring an integer
int n;
//do while loop prompting the user
do
{
n = get_int("Height: ");
}
while (n < 1 || n > 8);
//Two nested for loops for height and width
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        {
        printf ("#");
        }
    }
    printf("\n");
}
}
