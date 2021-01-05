//Multiples of 3 and 5
//author: Quinten Huebner
/* Problem statement:
If we list all the natural numbers below 10 that are multiples of 3 or 5,
we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
 */
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

//boolean function to determine if number is a multiple of 3 or 5
//parameter int being checked
bool multChecker(int num)
{
    if (num % 3 == 0 || num % 5 == 0)
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
    int sumOfMults = 0;

    // initialize vector
    vector<int> v(1000); // vector with 1000 ints.
    //fill vector with ints 1-1000
    iota(std::begin(v), std::end(v), 1);

    // loop through vector
    for (int i = 0; i <= v.size(); i++)
    {
        //call multiple checker for each vector element
        if (multChecker(v[i]))
        {
            sumOfMults += v[i];
        }
    }

    cout << "The sum of the multiples of 3 and 5 below 1000 = " << sumOfMults << endl;
    return 0;
}