//Anish Laddha
//1/20/21
//Problem 14
//counts the number of words, chars, lines in a file

#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <vector>
using namespace std;

int main() 
{
    while(true)
    {
        cout << "Enter the name of the file: ";
        string usr_file;
        cin >> usr_file;
        ifstream in_file(usr_file.c_str());
        if(!in_file)
        {
            exit(1);
        }

    int chars=0;
    int words=0;
    int lines = 0;
    string line;
    while(getline(in_file, line))
    {
        lines++;
        string word;
        istringstream iss(line);
        while(iss >> word)
        {
            words++;
            chars += word.size();
        }
    }
    cout << "Characters in file: " << chars << endl;
    cout << "Words in file: " << words << endl;
    cout << "Lines in file: " << lines << endl;
    return 0;
    }
}
