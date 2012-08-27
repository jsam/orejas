B1;2802;0c#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> prosti_brojevi( int n )
{
  int j;
  vector< int > arr;
  while ( n > 1 )
    {
      for( j = 2; j <= n; ++j )
	{
	  if( n % j == 0 )
	    {
	      arr.push_back( j );
	      n /= j;
	      break;
	    }
	}
    }
  sort( arr.begin(), arr.end() );
  return arr;
}

int main()
{
  vector< int > arr, noDuplicate;
  int n, num, counter;
  

  cin >> n;
  for( int i = 0; i < n; ++i)
    {
      cin >> num;
      arr = prosti_brojevi( num );
      noDuplicate = arr; 
      noDuplicate.erase( unique( noDuplicate.begin(), noDuplicate.end() ), noDuplicate.end() );
      cout << "Prosti broj \t Broj pojavljivanja \n";
      for( int j = 0; j < noDuplicate.size(); ++j)
      {
	counter = (int) count( arr.begin(), arr.end(), noDuplicate[ j ] );
	cout << noDuplicate[j] << "\t\t" << counter << endl;
      }
    }

  return 0;
}
