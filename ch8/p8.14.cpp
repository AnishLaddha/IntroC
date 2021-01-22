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


	String line;
	String word;
	bool exists = true;
	String filename;

	while(exists){
		chars=0;
		words=0;
		lines=0;

		cout<< "File name?";
		cin <<filename;


		ifstream in_file;
		in_file.open(filename);
		if (in_file.fail())
		{
			exists = false;
		}
		else
		{
			while (getline(in_file, line))
			{
				lines ++;
				isstringstream iss (line);

				while (iss >> word)
				{
					words ++;
					chars += word.size()+1;
					chars --;
				}
				cout<< chars << words << lines;

			}

		}





	}


}