/**
* Name      Dymon Browne 
* Class     4883 - Programming Techniques.
* Program   P11080
* Email     dymonbrowne@gmail.com
*/

#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

vector<int>stack[3];
//char c[3] = { 'A','B','C' };



int rods = 3;

int moves,
    mov;


// Using this function to display the results.
void print()
{
    cout << endl;
    for (int i = 0; i < rods; i++)
    {
        if (i == 0)
            cout << "A=>";
        if (i == 1)
            cout << "B=>";
        if (i == 2)
            cout << "C=>";

        for (int j = 0; j < stack[i].size(); j++)
        {
            if (stack[i].size() == 0)
                break;
            if (j == 0)
                cout << "  ";
            cout << " " << stack[i][j];
        }
        cout << endl;
    }
}

void T_O_H(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
        stack[to_rod].push_back(stack[from_rod].back());
        stack[from_rod].pop_back();
        mov++;

        if (mov <= moves)
        {
            print();
        }
        if (mov > moves)
        {
            return;
        }
        return;
    }
    else
    {
        T_O_H(n - 1, from_rod, aux_rod, to_rod);
        
        stack[to_rod].push_back(stack[from_rod].back());
        stack[from_rod].pop_back();
        mov++;
        if (mov <= moves)
        {
            print();
        }
        if (mov > moves)
        {
            return;
        }
        T_O_H(n - 1, aux_rod, to_rod, from_rod);
    }
}

int main() 
{
    int n;      // number of disks
    int problem = 1;

    while (cin >> n >> moves && n != 0)
    { 
        cout << "Problem #" << problem << endl;
        mov = 0;
        
        // all disks start in 0 rod
        for (int i = n; i > 0; i--)
        {
            stack[0].push_back(i);
        }

        // print initial set up
        print();
        T_O_H(n, 0, 2, 1);

        for (int i = 0; i < 3; i++)
            stack[i].clear();
        
        problem++;
        cout << endl;
    }
    return 0;
}
