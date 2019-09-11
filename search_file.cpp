// This code searches file for a string, and prints 81 lines after the string
// Created 2019 09 11

#include <iostream>
#include <string>
#include <fstream>
#include <sstream> 
#include <algorithm>
#include <limits>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
     string line;
     //search for this string
     string labas = "The run is";
     ifstream inputfile;
     ofstream outputfile;
	cout << " Enter input file name : \n";
	string inpname; 
	cin >> inpname;

	inputfile.open(inpname);

	if(!inputfile) {
        std::cout<<"Couldn't open the file"<<std::endl; //checks for input
        exit(1); }

	cout << " Enter output file name: \n";
	string outnam;
	outnam = "out.txt";

	outputfile.open(outnam);
	

while (getline(inputfile, line)) {
    if (line.find(labas) != string::npos) {
	cout<<" The line was found "<<endl;
        cout<<line<<endl;
        outputfile<<line<<endl;
        getline(inputfile,line);
        for (int i=81; i; --i) {        
	    outputfile << line << '\n';
            getline(inputfile, line);
        }                             
    }
}


     outputfile.close();
     cout <<" Output to file is done" << endl;
     return 0;
}

