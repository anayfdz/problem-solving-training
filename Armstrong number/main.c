#include <stdio.h>
#include <math.h>

int accountDigit(int num) 
{
    int count = 0;
    while (num != 0)
    {
        num /= 10;
        count++;
    }
    return count;
}

int isNumberArmstrong(int num)
{
    int original = num;
    int sum = 0;
    int digits = accountDigit(num);
    while(num != 0)
    {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }
    return (sum == original);
}

int main()
{
    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    if(isNumberArmstrong(num))
    {
        printf("%d es un numero de Armstrong. \n", num);
    } else {
        printf("%d no es un numero de Armstrong. \n",num);
    }
    return 0;
}