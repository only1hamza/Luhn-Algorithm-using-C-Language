#include <cs50.h>
#include <stdio.h>
#include <math.h>

int len(long);
string check_first_digits(long number);
bool check(long);
bool luhn(long number);

int main(void)
{

    long number;

    // Loop for input only numbers
    do
    {
        number = get_long("Number: ");
    }
    while (number < 0);

    // Check is the len
    if ((len(number) == 13 || len(number) == 15 || len(number) == 16))
    {
        // Luhn's Algorithm
        if (luhn(number))
        {
            // Chek first digits and show card company
            printf("%s", check_first_digits(number));
        }
        else
            //All numeric value except these above, will be invalid
        {
            printf("INVALID\n");
        }

    }
    else
    {
        printf("INVALID\n");
    }

}


// Get length of numbers
int len(long number)
{
    //fonction
    int count = 0;
    while (number != 0)
    {
        number /= 10;
        count += 1;
    }
    return count;
}



// Luhn's Algorithm
bool luhn(long number)
{
    //Variabls
    int sum = 0;
    int current = 2 * (number % 10);
    //fonction
    if ((len(number) == 13 || len(number) == 15 || len(number) == 16))
    {
        // Check if there is 2 numbers
        for (int i = 0; number != 0; i++, number /= 10)
        {
            // Check if there is 2 numbers
            if (i % 2 == 0)
            {
                sum += number % 10;
            }
            else
            {
                int digit = 2 * (number % 10);
                sum += digit / 10 + digit % 10;
            }
        }
    }
    return sum % 2 == 0;
}




// Check the first digits and return name of card
string check_first_digits(long number)
{
    //variables
    long FirstD = 0;
    long SecondD = 0;
    string card = "INVALID\n";
    bool valid = false;
    //fonction
    if (len(number) == 13)
    {
        // Visa
        FirstD = number / pow(10, 12);
        if (FirstD == 4)
        {
            card = "VISA\n";
            valid = true;
        }
    }
    else if (len(number) == 15)
    {
        // Amex
        FirstD = number / pow(10, 14);
        SecondD = number / pow(10, 13);
        if (SecondD == 34 || SecondD == 37)
        {
            card = "AMEX\n";
            valid = true;
        }
    }
    else if (len(number) == 16)
    {
        // MasterCard / Visa
        FirstD = number / pow(10, 15);
        SecondD = number / pow(10, 14);
        if (SecondD == 51 || SecondD == 52 || SecondD == 53 || SecondD == 54 || SecondD == 55)
        {
            card = "MASTERCARD\n";
            valid = true;
        }
        else if (FirstD == 4)
        {
            card = "VISA\n";
            valid = true;
            printf("its visa\n");
        }
        else
        {
            card = "INVALID\n";
            valid = false;
        }
    }
    else
    {
        card = "INVALID\n";
        valid = false;
    }
    //it can return string value or bool value, just switch beetwen card and valid variable
    return card;
}
