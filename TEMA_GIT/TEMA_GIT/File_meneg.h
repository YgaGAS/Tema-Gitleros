#pragma once
#include <iostream>
#include<fstream>
#include<string>
using namespace std;
class File_manage {
protected:
	string path;
	fstream f;

public:
	File_manage(string);

	virtual string Read();

	void Write(string);//



};