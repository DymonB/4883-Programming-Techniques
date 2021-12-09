/**
* Name      Dymon Browne 
* Class     4883 - Programming Techniques.
* Program   P10055
* Problem   900
* Email     dymonbrowne@gmail.com
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main() {

  int num;

  cin >> num;

  while(num != 0)
  {
    long sum = 0;
    long x = sum;
    long y = 1;

    while(num)
    {
      sum = x + y;
      x = y;
      y = sum;

      num--;
    }

    cout << sum << endl;

    cin >> num;
  }
  
}
