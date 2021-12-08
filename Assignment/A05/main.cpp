/**
* Name      Dymon Browne 
* Class     4883 - Programming Techniques.
* Program   P10055
* Date      08/29/2021
* Email     dymonbrowne@gmail.com
*/
#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

void T_Format(int Secs);

int main()
{
  // Declare the variable to be use.
  int Time;    
  cin >> Time;
  
  while (Time) 
  {
    // vector that holds the series of integers.
    vector<int> intSeries;

    while (Time)                    
    {
      // push back if the integer time is not 0.
      intSeries.push_back(Time); 
      // read in time
      cin >> Time;                        
    }

    // boolean for the fail to synchronize
    bool SigFail = true;
    float Hrs5 = 18000;

    // Find the smallest element in the range then multiple by 2.
    // if it is less than and equal to 5 hours, find the time
    // at which all lights synchronize or fail.
    for (int i = (*min_element(intSeries.begin(), intSeries.end())) * 2; i <= Hrs5; i++)
    {
    
      bool Green = true; 

      // Looping through our vector of integers.
      for (int j = 0; j < intSeries.size(); j++)
      {
        if (i % (intSeries[j] * 2) >= (intSeries[j]) - 5)
        {
          // The light is not green Time % 2i !>= i-5
          Green = false; 
          break;
        }
      }
        // if We have a green light.
      if (Green) 
      {                
        //the signal is good (bool false) display time
        SigFail = false;
        T_Format(i); 
        break;
      }
    }
    // if this signal fail is true, Print the message
    if (SigFail) 
    {
      cout << "Signals fail to synchronise in 5 hours\n";
    }

    cin >> Time; 
    if (!Time)
    {
      cin >> Time;
    }
  }
}

void T_Format(int Secs)
{   // Display the Time in a nice format(HH:MM:SS).
    cout << setfill('0') << setw(2) << Secs/3600 << ":";
    cout << setfill('0') << setw(2) << (Secs/60)%60 << ":";
    cout << setfill('0') << setw(2) << Secs%60 << endl;
}
