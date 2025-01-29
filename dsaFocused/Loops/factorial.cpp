#include <iostream>
using namespace std;

int main()
{
  int num = 64;
  int fact = 1;
  for (int i = 1; i <= num; i++)
  {
    fact *= i;
    cout << fact << endl;
  }
  cout << fact << endl;
}