/*
Fizzbuzz program

x mod 3 = Fizz
x mod 5 = Buzz
x mod 15 = FizzBuzz
*/

#include<stdio.h>


// print FizzBuzz
void fizzbuzz(int start, int end)
{
        int i;
        for(i=start;i<end;i++)
        {       
			// To find multiples of both
                if(i%15 == 0)
                {
					printf("FizzBuzz");
                }
                else if(i%5 == 0)
                {
					printf("Buzz");
                }
                else if(i%3 == 0)
                {
					printf("Fizz");
                }
				else
				{
					printf("%d",i);
				}

        }
}

int main()
{
        int start = 1;
        int end = 101;
        fizzbuzz(start, end);
		return 0;
}