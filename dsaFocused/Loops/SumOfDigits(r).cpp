#include <iostream>
using namespace std;
int main()
{
  int num;
  int sum = 0;
  cin >> num;

  while (num / 10 == 0)
  {
    sum = sum + (num % (num / 10));
    num = num / 10;
  }
  cout << sum;
}