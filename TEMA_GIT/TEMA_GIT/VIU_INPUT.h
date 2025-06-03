#pragma once
#include <iostream>
#include "viu2.h"
#include<vector>
using namespace std;
class inputcont{
public:
	template<class T>
	T SaveInput(T key, string a){


		cout << "Input" << a ;
		T read;
		cin >> read;
		return read;
	}

    int chooseInput(vector<string>);


};