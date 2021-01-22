//  Anish Laddha
//  1/20/21
//  Chapter 8, Problem 1
//  Writes to a hello world file, then reads it
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

	ofstream write_file;
	write_file.open("hello_world.txt");
	write_file<<"Hello, World!";
	write_file.close();

	ifstream read_file;
	read_file.open("hello_world.txt");
	string hw;
	getline(read_file,hw);
	cout<<hw<<endl;
	
	return 0;
}
