//  Prahan Poreddy
//  1/20
//  Lab 8
//  writes and reads a hello world file

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

	ofstream out_file;
	out_file.open("c:\\hello.txt");
	out_file<<"Hello, World!";

	ifstream in_file;
	in_file.open("c:\\hello.txt");
	String x;
	in_file>>x;
	cout<<x;



}