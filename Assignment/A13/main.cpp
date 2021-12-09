/**
* Name      Dymon Browne 
* Class     4883 - Programming Techniques.
* Program   P1112
* Email     dymonbrowne@gmail.com
*/


#include <iostream>
#include <limits.h>
#include <vector>
#include <stdlib.h>     /* srand, rand */
#include <time.h> 
#include <string>
#include <utility>
#include <set>
#include <list>
#include <algorithm>
#include <queue>

using namespace std;

#define infin 1 << 30
#define max 10000


vector<int> g[max], cost[max];

struct node
{
    int u, cost;

    node(int _u, int _cost)
    {
        u = _u;
        cost = _cost;
    }

    bool operator<(const node &p) const
    {
        return cost > p.cost;
    }
};


void reset()
{
    for (int i = 0; i < max; i++)
    {
        g[i].clear();

        cost[i].clear();
    }
}

void dijstkra(int n, vector<int> g[], vector<int> cost[], int source, int time, int k, int t)
{
    int dist[n + 1];

    for (int i = 1; i <= n; i++)
    {

        dist[i] = infin;
    }

    priority_queue<node> q;

    q.push(node(source, 0));
    dist[source] = 0;

    while (!q.empty())
    {
        node top = q.top();

        q.pop();

        int u = top.u;

        for (int i = 0; i < (int)g[u].size(); i++)
        {
            int v = g[u][i];

            if (dist[u] + cost[u][i] < dist[v])
            {
                dist[v] = dist[u] + cost[u][i];
                q.push(node(v, dist[v]));
            }
        }
    }

    int cn = 0;

    for (int i = 1; i <= n; i++)
    {
        if (dist[i] <= time)
            cn++;
    }

    cout << cn << endl;

    if (k != t - 1)
        cout << endl;
}

int main()
{
    int num_N, num_E;
    int t, exit, time, k;

    cin >> t;

    for (k = 0; k < t; k++)
    {
        reset();

        cin >> num_N >> exit >> time >> num_E;

        for (int i = 0; i < num_E; i++)
        {
            int u, v, w;
            cin >> u >> v >> w;

            g[u].push_back(v);
            g[v].push_back(u);
            cost[u].push_back(w);
            cost[v].push_back(w);
        }
        dijstkra(num_N, g, cost, exit, time, k, t);
    }
}
