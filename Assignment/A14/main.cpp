/**
* Name      Dymon Browne 
* Class     4883 - Programming Techniques.
* Program   P11636
* Email     dymonbrowne@gmail.com
*/


#include <iostream>

using namespace std;

int main()
{
    int h; 
    int Time = 1;
    
    while (cin >> h, h > 0)
    {
        int num = 1, count = 0;
        
        while (num < n)
        {
            num <<= 1;
            ++count;
        }
        
        cout << "Case " << Time++ << ": " << count << '\n';
    }
}
