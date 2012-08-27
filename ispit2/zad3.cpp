#include <iostream>
#include <algorithm>

using namespace std;

int nzv(int a, int b)
{
  int mx = max(a, b), mn = min(a, b), x;
  while( mx % mn == 0)
    {
      x = mx / mn;
      mx = mn;
      mn = x;
    }

  return mn;
}

int main()
{
  cout << nzv( 8, 4) << endl;
  return 0;
}
