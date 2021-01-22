//  Prahan Poreddy
//  1/20
//  Lab 8
//  chars, words, lines

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
	int chars, words, lines;


	string line;
	string word;
	bool flag = true;
	string usr_file;

	while(flag){
		chars=0;
		words=0;
		lines=0;

		cout<< "Please enter the name of the file: ";
		cin>>usr_file;


		ifstream read_file;
		usr_file.open(usr_file);
		if (read_file.fail())
		{
			flag = false;
		}
		else
		{
			while (getline(read_file, line))
			{
				lines++;
				isstringstream iss (line);

				while (iss >> word)
				{
					words++;
					chars+= word.size()+1;
					chars--;
				}
				cout<< chars << words << lines;
			}
		}
	}


}
