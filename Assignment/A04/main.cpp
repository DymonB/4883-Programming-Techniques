/**
* Name      Dymon Browne 
* Class     4883 - Programming Techniques.
* Program   P10055
* Date      08/29/2021
* Email     dymonbrowne@gmail.com
*/

#include <iostream>

using namespace std;

int main() 
{
    int war1,war2 = 0;
    
    while (cin >> war1 >> war2) 
    {
      if (war1 >= war2)
      cout << war1 - war2 << endl;

    else
      cout << "No Battle!" << endl;
      
    }
    return 0;
}
