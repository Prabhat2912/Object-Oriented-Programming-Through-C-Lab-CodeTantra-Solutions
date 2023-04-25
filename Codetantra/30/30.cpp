#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string filename;
    string text;
    int lineno;
    cout << "File name: ";
    getline(cin, filename);
    cout << "line No: ";
    cin >> lineno;
    cin.ignore(); // Add this to ignore the newline character
    cout << "line text: ";
    getline(cin, text);
    fstream read_file;
    read_file.open(filename);
    if(read_file.fail()){
        cout << "Error opening file" << endl;
        return 1;
    }
    vector<string> lines;
    string line;
    while(getline(read_file, line)){
        lines.push_back(line);
    }
    read_file.close();
    if(lineno > lines.size()){
        cout << "line: " << lineno;
        cout << " not in the file" << endl;
        cout << "File has " << lines.size() << " lines" << endl;
        return 1;
    }

    ofstream write_file;
    write_file.open(filename, ios::trunc); // Fix here
    if(write_file.fail()){
        cout << "Error opening file " << endl;
        return 1;
    }
    lineno--;
    for(int i = 0; i < lines.size(); i++){
        if(i != lineno){
            write_file << lines[i] << endl;
        }
        else{
            write_file << text << endl;
        }
    }
    write_file.close();


    cout << endl;
    ifstream out(filename);
    cout << "newly modified file:" << endl;
    string txt;
    while(getline(out, txt)){
        cout << txt << endl;
    }

    return 0;
}
