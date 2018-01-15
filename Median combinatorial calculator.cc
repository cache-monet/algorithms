/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main ()
{
  int X;
  cin >> X;
  for (int i = 2; i < X - 1; i++)
    {
      cout << (X - i) * (i - 1);
      printf ("x^%d ", i);
    }
  return 0;
}
