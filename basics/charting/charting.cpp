#include <iostream>
#include <fstream>
#include "LowPassFilter.hpp"
using namespace std;

void addTerminalSpacing(int start) {
	if(start == 0) {
		cout << " " << endl;
		cout << " " << endl;
		cout << "-------------- ITS GO TIME --------------" << endl;	
	}
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	if(start == 1) {
		cout << "-------------- SYSTEM TERMINATED --------------" << endl;	
		cout << " " << endl;
		cout << " " << endl;
	}
}

int main(){
	string fileReadLine;
	ifstream fileToRead ("data0.txt");
	int cutOffFreq = 1900;
	double deltaTime = 0.1;

	addTerminalSpacing(0);
	cout << "Systems Online" << endl;
	if (fileToRead.is_open()) {
		LowPassFilter lpf(cutOffFreq, deltaTime);
		cout << "File is open" << endl;
		while ( getline(fileToRead,fileReadLine, ',') ) {
			// float val = stof(fileReadLine);
			// cout << lpf.update(val) << '\n';
		}
		fileToRead.close();
	} else {
		cout << "File does not exist or cannot be found." << endl;
	}
	addTerminalSpacing(1);

	return 1;
}