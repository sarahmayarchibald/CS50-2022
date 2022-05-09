#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // prompt user for an amount of change
    float user_input;
    int change, nbCoins;

    do
    {
        user_input = get_float("How much is your change?: ");//input from user

    }
    while (user_input < 0);

    change = round(user_input * 100);

    // keep track of coin used
    nbCoins = 0;

    // always use the largest coin possible for quarters
    while (change >= 25)
    {
        change = change - 25;
        nbCoins++;
    }
    //for dimes
    while (change >= 10)
    {
        change = change - 10;
        nbCoins++;
    }
    //for nickels
    while (change >= 5)
    {
        change = change - 5;
        nbCoins++;
    }
    //for pennies
    while (change >= 1)
    {
        change = change - 1;
        nbCoins++;
    }

    //track of remaining changed owed and printed
    printf("You entered: %.2f\n", user_input);
    // track of number of coins used and  printed
    printf("Fewest number of coins for change: %d\n", nbCoins);

}
