#pragma once
#include <iostream>
#include<vector>
using namespace std;
class Uicontrol {
	vector<string>def;
public:
	static void Print(string out);//static void Print(string out);  статический
	void PrintMas(vector<string>def);
};