#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
  // Variable declarations
  long int card_no;  // Stores the credit card number
  card_no = get_long("Number: ");  // Prompt the user for a credit card number

  int digit = 0;  // Variable to store digits
  int count = 0;  // Variable to count the digits
  int sum_a = 0;  // Variable for the first sum
  int sum_b = 0;  // Variable for the second sum
  long long temp_no = card_no;  // Create a copy of the credit card number
  long long company_id = card_no;  // Create a copy of the credit card number

  // Loop to process each digit of the card
  while (card_no != 0)
  {
    digit = card_no % 10;  // Get the last digit
    if (count % 2 == 0)
      sum_a = sum_a + digit;  // Sum digits in even positions
    else
    {
      int m = digit * 2;
      if (m >= 10)
        sum_b = sum_b + (m % 10) + 1;  // Sum digits in odd positions after multiplying by 2
      else
        sum_b = sum_b + m;
    }
    card_no = (card_no - digit) / 10;  // Remove the last digit
    count++;
  }

  // Calculate the total sum
  int total_sum = sum_a + sum_b;

  // Check the validity of the card
  if (total_sum % 10 != 0)
  {
    printf("INVALID\n");
  }
  if (total_sum % 10 == 0)
  {
    // Identify the card brand
    while (company_id > 100)
    {
      company_id = company_id - (company_id % 10);
      company_id = company_id / 10;
    }
    if ((company_id > 50 && company_id < 56) && (count == 16))
    {
      printf("MASTERCARD\n");
    }
    else if ((company_id > 39 && company_id < 50) && (count == 13 || count == 16))
    {
      printf("VISA\n");
    }
    else if ((company_id == 34 || company_id == 37) && (count == 15))
    {
      printf("AMEX\n");
    }
    else
    {
      printf("INVALID\n");
    }
  }

  return 0;
}

