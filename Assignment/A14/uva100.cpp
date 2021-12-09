/**
* Name      Dymon Browne 
* Class     4883 - Programming Techniques.
* Program   P10055
* Problem   900
* Email     dymonbrowne@gmail.com
*/

#include <iostream>
#include <cmath>

using namespace std;

// greatest common divisor(gcd)
int gcd(int a, int b) {

  return (b == 0) ? a : gcd(b,a%b);
}

// lowest common multiple (lcn)
int lcm(int a, int b) {

  return abs(a*b)/gcd(a,b);
}

int collatz(int m) {

  int count = 1;
  while (m != 1) {

    if (m%2 == 1) m = 3*m+1;
    else m = m/2;
    count++;
  }
return count;
}

int main() {

int m,n;
int max = 0;
int temp;

int m_orig,n_orig;
int i;
while (cin >> m >> n) {

  m_orig = m;
  n_orig = n;
  if (m > n) {

    temp = m;
    m = n;
    n = temp;
  }
max = collatz(m);
for (i=m+1; i<=n; i++) {

  temp = collatz(i);
  if (temp > max)
  max = temp;
}
cout << m_orig << " " << n_orig << " " << max << endl;
}
  return 0;
}
