/******************************************************************************

Programmed by Isaiah Romero

*******************************************************************************/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main() {
	//Create C String
	string filename = "C:\\Users\isaia\source\repos\Chapter 8\Programming Functions\grades.dat";
	//Create variable for Outfile
	ofstream outFile;
	ifstream inFile;

	//Open file grades.dat
	outFile.open(filename.c_str());

	//Check for Errors
	if (outFile.fail()) {
		outFile << " refused to open!!!" << endl;
		exit(1);
	}

	//Write grades for report
	outFile << "Student ID Number\tStudent Name\tCourse Code\tCourse Credit\tCourse Grade" << endl;
	outFile << "2333021\tBOKOW, R.\tNS201\t3\tA" << endl;
	outFile << "2333021\tBOKOW, R.\tMG342\t3\tA" << endl;
	outFile << "2333021\tBOKOW, R.\tFA302\t1\tA" << endl;
	outFile << "2574063\tFALLIN, D.\tMK106\t3\tC" << endl;
	outFile << "2574063\tFALLIN, D.\tMA208\t3\tB" << endl;
	outFile << "2574063\tFALLIN, D.\tCM201\t3\tC" << endl;
	outFile << "2574063\tFALLIN, D.\tCP201\t2\tB" << endl;
	outFile << "2663628\tKINGSLEY, M.\tQA140\t3\tA" << endl;
	outFile << "2663628\tKINGSLEY, M.\tCM245\t3\tB" << endl;
	outFile << "2663628\tKINGSLEY, M.\tEQ521\t3\tA" << endl;
	outFile << "2663628\tKINGSLEY, M.\tMK341\t3\tA" << endl;
	outFile << "2663628\tKINGSLEY, M.\tQA140\t3\tA" << endl;
	outFile << "2663628\tKINGSLEY, M.\tCP101\t2\tB" << endl;
	return 0;
}