#pragma once
#include <iostream>
#include "viu2.h"
#include<vector>
using namespace std;
class output {
public:
	template<class T> //функция со всеми типами данными
	void Print(T out) {
		cout << out << endl;


	}

	void PrintImage(vector<vector<int>>);

};