/**
* Name      Dymon Browne 
* Class     4883 - Programming Techniques.
* Program   P10055
* Date      09/9/2021
* Email     dymonbrowne@gmail.com
*/


#include <iostream>
#include <algorithm>

using namespace std;

// adding space using long long for large numbers
typedef long long int Long;


int main() 
{
  
  Long num, left, right, diff = 0;

  // loop through the number in the cases
  while(cin >> num) 
  { 
    // declare the array
    Long test[num];

    bool fail = false;

    for (int i = 0; i < num; i++)
    { 
      cin >> left;
      // getting the absolute value differences
      diff = abs(left - right);

      // Keeps the previous value gets next value 
      right = left;

      // loop again to fill the array
      if (i > 0)
      {
        test[i-1] = diff;
      }

    }

    // built in sort in algorithm library 
    sort(test, (test + num - 1));

    // Loop checks order after sorting
    // while looping if sequence does have 
    // absolute difference 1 it is not Jolly
    // Jumper. but is does the it it Jolly
    // Jumper
    for (int i = 1; i < num - 1; i++)
    {                                                     
      if (test[i] - test[i - 1] != 1 || test[0] != 1)
      {
          fail = true; 
          break;
      }
    }
    // if the test does not fail
    if (!fail)
    {
      // print Jolly Jumper
      cout << "Jolly" << endl;       
    }
    // else if the test fail
    else
    {
      // Print its not a Jolly Jumper
      cout << "Not jolly" << endl;
    }

  }

  return 0;
}
