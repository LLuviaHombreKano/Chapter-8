/******************************************************************************

Programmed by Isaiah Romero

*******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ifstream inFile;
	ofstream outFile;
	long offset, last;

	//Open the file
	inFile.open("prices.txt");

	if (inFile.fail())
	{
		cout << "The File was not opened " << endl;
		exit(1);
	}
	inFile.seekg(0L, ios::end);
	last = inFile.tellg();
	cout << last << endl;
	inFile.close();

		//Return the number of characters in a file
	return 0;
}