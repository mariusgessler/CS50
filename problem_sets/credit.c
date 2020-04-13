#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    long long cc_number = get_long_long("Enter Creditcard number: ");
    int digit1 = 0;
    int digit2 = 0;
    int num_digits = 0;
    int sum_odds = 0;
    int sum_evens = 0;

    while (cc_number > 0)
    {
        digit2 = digit1;
        digit1 = cc_number % 10;
        
        if (num_digits % 2 == 0)
        {
            sum_evens += digit1;
        }
        else 
        {
            int multiple = 2 * digit1;
            sum_odds += (multiple / 10) + (multiple % 10);
        }
        cc_number /= 10;
        num_digits++;
    }

    bool is_valid = (sum_evens + sum_odds) % 10 == 0;
    int first_two = (digit1 * 10) + digit2;

    if (digit1 == 4 && num_digits >= 13 && num_digits <= 16 && is_valid)
    {
        printf("VISA\n");
    }
    else if (first_two >= 51 && first_two <= 55 && num_digits == 16 && is_valid)
    {
        printf("MASTERCARD\n");
    }
    else if ((first_two == 34 || first_two == 37) && num_digits == 15 && is_valid)
    {
        printf("AMEX\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
