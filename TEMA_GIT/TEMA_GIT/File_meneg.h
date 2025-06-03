#pragma once
#include <iostream>
#include<fstream>
#include<string>
using namespace std;
class File_manage {
	string path;
	fstream f;

public:
	File_manage(string);

	string Read();

	void Write(string);



};