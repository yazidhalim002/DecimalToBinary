#include <stdio.h>
#include <math.h>

long decimalToBinary(long decimal_num)
{
    long binary_num = 0;
    int rem, temp = 1;

    while (decimal_num!=0)
    {
        rem = decimal_num%2;
        decimal_num = decimal_num / 2;
        binary_num = binary_num + rem*temp;
        temp = temp * 10;
    }
    return binary_num;
}

int main()
{
    long decimal_num;
    printf("Enter a Decimal Number: ");
    scanf("%ld", &decimal_num);
    printf("Equivalent Binary Number is: %ld", decimalToBinary(decimal_num));
    return 0;
}
