//Multiples of 3 and 5
//author: Quinten Huebner
/* Problem statement:
If we list all the natural numbers below 10 that are multiples of 3 or 5,
we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
 */
#include <iostream>
#include<vector>
using namespace std;


//boolean function to determine if number is a multiple of 3 or 5
//parameter int being checked
bool multChecker(int num)
{
    if(num % 3==0 || num % 5 ==0)
    {
         return true;
    }
   else 
   {
       return false;
   }
}

int main()
{

}