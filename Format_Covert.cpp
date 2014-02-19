#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc,char **argv)
{
	ifstream infile;
	infile.open(argv[1]);
	if(!infile.is_open())
	{
		cout << "open file failed" << endl;
		return EXIT_FAILURE;
	}

}