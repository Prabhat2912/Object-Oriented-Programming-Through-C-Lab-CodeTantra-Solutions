
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
	string filename;
	cout << "File name: ";
	cin >> filename;
	
	ifstream file(filename);
	if (!file.is_open()) {
		cout << "Error: Unable to open file.\n";
		return 0;
		}
		int word_count = 0, char_count = -1;
		string word;
		while (file >> word) {
			word_count++;
			char_count += word.size();
			char_count++;
			}
			file.close();
			
			cout << "Word count: " << word_count << endl;
			cout << "Character count: " << char_count << endl;
			return 0;
			}