/**
* Name      Dymon Browne 
* Class     4883 - Programming Techniques.
* Program   P10055
* Problem   920
* Email     dymonbrowne@gmail.com
*/


#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cmath>
using namespace std;

struct Top { 
  float x, y; 

  // Default Constructor
  Top(){
        x = 0;
        y = 0;
    }

};


// Distance between a and b.

double distance(Top a, Top b)
{
    return sqrt((float)(a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));

}

// Using this function to compare the points
bool compar(const Top &a, const Top &b)
{
    return b.x < a.x;
}

int main()
{    

    int t_case;
    // Read in the number of test cases.
    cin >> t_case;


    while ( t_case-- )
    {
        int N;
        cin >> N;
        vector<Top> Tops;
        for (int i = 1; i <= N; ++i)
        {
            Top Top;

            // Read in the x and y coordinates.
            cin >> Top.x >> Top.y;
            Tops.push_back(Top);
        }

        // Sort the Tops in descending order of x-coordinate.
        sort(Tops.begin(), Tops.end(), compar);

        // The line segment marked by with shadow in pdf
        int curr_maxY = 0;        // Read in the x and y coordinates.
        double length = 0;        // Initializing  our length variable to zero

        // Loop- i being equal to the number of elements in the vector minus one
        //
        for (int i = 1; i < Tops.size(); ++i)
        {   
            //Compare the y coordinates to our maximum variable
            if (Tops[i].y > curr_maxY)
            {
                length += distance(Tops[i], Tops[i - 1]) 
                          * (Tops[i].y - curr_maxY) / (Tops[i].y - Tops[i - 1].y); 
                curr_maxY = Tops[i].y;
            }
        }

        // Print 
        cout << setprecision(2) << fixed << length << endl;   // Print with two decimal digits.
      
    }
    return 0;
}
