#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

int main() 
{
  int n;
  string rijec;

  cin >> n;
  //string polje[ n ];
  vector< string > polje;
  //int iter = 0;

  for( int i = 0; i < n; ++i )
  {
    cin >> rijec;
    //polje[ iter ] = rijec;
    //iter++;
    polje.push_back( rijec );
  }

  // sort
  /*for( int i = 0; i < n - 1; ++i )
  {
    for( int j = i + 1; j < n; ++j )
    {
      if( polje[i].length() < polje[j].length() )
      {
	string tmp = polje[ i ];
	polje[ i ] = polje[ j ];
	polje[ j ] = tmp;
      }
    }
    }*/


  sort( polje.begin(), polje.begin() + n);
  reverse( polje.begin(), polje.end() );
  
  //for( int i = 0; i < n; ++i )
  //  cout << polje[ i ] << endl;

  fstream f;
  f.open( "ispit_file.txt", ios::in | ios::app | ios::binary );
  //if( f.is_open() )
  //{
    for( int i = 0; i < n; ++i )
    {
      f << polje[i] << "\t\t" << polje[i].length() << "\n";
      cout << polje[ i ] << "\t\t" << polje[i].length() << endl;
    }
    //}
  f.close();


  return 0;
}
