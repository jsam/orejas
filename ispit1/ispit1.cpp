#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  string rec, rijec;
  string polje[ 100 ];
  int iter = 0;

  do
  {
    getline(cin, rec);
  } while(rec.length() > 50);

  for( int i = 0; i < rec.length(); ++i )
  {
    if( rec[ i ] != ' ' && i != ( rec.length() - 1 ) )
    {
      if ( rec[ i ] == ',')
	continue;

      rijec += rec[i];
    }
    else
    {
      polje[ iter ] = rijec;
      rijec = "";
      iter++;
    }
  }

  for( int i = 0; i <= 10; ++i )
  {
    rijec = polje[i];
    for( int j = rijec.length() - 1; j >= 0; j-- )
      cout << rijec[j];

    cout << endl;
  }
 
  return 0;


}
