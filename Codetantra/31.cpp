
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string file1, file2, mergedFile;
	cout << "Enter the data to be inserted in file 1: ";
	getline(cin, file1);
	cout << "Enter the data to be inserted in file 2: ";
	getline(cin, file2);
	
	// Writing to file1
	ofstream f1("file1.txt");
	if (f1.is_open()) {
		f1 << file1;
		f1.close();
	}
	else {
		return 1;
	}
	
	// Writing to file2
	ofstream f2("file2.txt");
	if (f2.is_open()) {
		f2 << file2;
		f2.close();
	}
	else {
		return 1;
	}
	// Merging files
	cout << "Merging files..." << endl;
	mergedFile = "mergedFile.txt";
	ifstream f1Read("file1.txt");
	ifstream f2Read("file2.txt");
	ofstream mergedFileWrite(mergedFile);
	
	if (f1Read.is_open() && f2Read.is_open() && mergedFileWrite.is_open()) {
		mergedFileWrite << f1Read.rdbuf() << f2Read.rdbuf();
		f1Read.close();
		f2Read.close();
		mergedFileWrite.close();
		cout << "The contents of merged file are: ";
		// Reading merged file and displaying content
		ifstream mergedFileRead(mergedFile);
		if (mergedFileRead.is_open()) {
			cout << mergedFileRead.rdbuf()<<endl;
			mergedFileRead.close();
			remove("file1.txt");
			remove("file2.txt");
			remove(mergedFile.c_str());
		}
		else {
			cout << "Unable to open merged file" << endl;
			return 1;
		}
	}
	else {
		cout << "Unable to merge files" << endl;
		return 1;
	}
	return 0;
}

