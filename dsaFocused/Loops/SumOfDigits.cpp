#include <iostream>
using namespace std;

int main()
{
  int n, z = 0;
  int m = 0;
  cin >> n;
  int a = n;
  int count = 0;

  for (int i = 0; i <= n; i++)
  {
    n /= 10;
    count++;

    m = a - (n * 10);
    a /= 10;
    z += m;
  }
  cout << z << endl;
}