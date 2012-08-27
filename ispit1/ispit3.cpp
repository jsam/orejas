#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int n;
  float number;

  cin >> n;
  vector< float > arr;
  for( int i = 0; i < n; ++i )
  {
    cin >> number;
    arr.push_back( number );
  }

  sort( arr.begin(), arr.end() );

  vector< float >::iterator iter;
  for( iter = arr.begin(); iter != arr.end(); ++iter )
    cout << *iter << endl;

  /* 
   * for( int i = 0; i < n; ++i)
   *     cout << arr[ i ] << endl;
   */

  return 0;
}
