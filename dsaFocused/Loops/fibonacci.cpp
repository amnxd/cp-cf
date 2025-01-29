#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Print the Fibonacci series upto : ";
  cin >> num;
  int Ary[num];
  Ary[0] = 1;
  Ary[1] = 1;

  for (int i = 2; i <= num; i++)
  {
    Ary[i] = Ary[i - 1] + Ary[i - 2];
  }
  for (int j = 0; j <= num; j++)
  {
    cout << Ary[j] << endl;
  }
  //   cout << Ary[num];
}