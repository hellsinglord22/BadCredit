#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int number = 123;
    int sum = 0 ; 
    
    
    int firstNumber,secondNumber,thirdNumber;
    
    firstNumber = number/100; /// doesn't follow the pattern /// outside for loop /// 
    
    sum += (firstNumber * 100); 
    secondNumber = number - sum; 
    secondNumber /= 10;
    
    sum+= (secondNumber *10);
    thirdNumber = number - sum;
    thridNumber /=1;
    
    printf("the value of first  number : %d\n" , firstNumber);
    printf("the value of second number : %d\n" , secondNumber);
    printf("the value of third  number : %d\n" , thirdNumber);
    
    
       
    return 0;
}
