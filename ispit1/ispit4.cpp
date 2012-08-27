#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  fstream input_file;
  fstream output_file;
  string filename = "", line;
  vector< string > arr;
  vector< string >::iterator iter; 
  cin >> filename;
  
  input_file.open( ( filename + ".txt" ).c_str() );
  if( input_file.is_open() )
    {
      while( input_file.good() )
	{
	  getline( input_file, line);
	  cout << line << endl;
	  arr.push_back( line );
	}
    }
  
  input_file.close();

  output_file.open( "changed.txt", ios::in | ios::out | ios::app );

  for( iter = arr.begin(); iter != arr.end(); ++iter )
    {
      line = *iter;
      for( int i = 0; i < line.length(); ++i )
	{
	  if( line[ i ] >= 65 && line[ i ] <= 90 || line[ i ] >=97 && line[ i ] <= 122)
	    line[ i ] = ' ';
	}
      cout << line << endl;
      output_file << line << "\n";
    }

  output_file.close();
  


  return 0;
}
