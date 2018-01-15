#include <iostream>

using namespace std;

int main ()
{
  int X;
  cin >> X;
  for (int i = 2; i < X; i++)
    {
      cout << (X - i) * (i - 1);
      printf ("x^%d ", i);
    }
  return 0;
}
