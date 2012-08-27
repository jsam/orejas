#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  string rec;
  vector< string > arr;
  int n;
  cin >> n;
  for( int i = 0; i < n ; ++i )
    {
      do{ cin >> rec; } while( rec.length() > 20 );
      //for( int j = 0; j < rec.length; ++j)
      n = 1;
      for( string::iterator it = rec.begin(); it != rec.end(); ++it )
      {
	
	  if( n % 2 != 0)
	    {
	      cout << (char) toupper( *it );
	    }
	  else
	    {
	      cout << (char) tolower( *it );
	    }
	  n++;
      }
      //cout << rec << endl;
      //arr.push_back( rec );
      cout << endl;
     
    }
  return 0;
}
