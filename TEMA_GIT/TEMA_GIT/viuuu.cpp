#include <iostream>
#include "viu2.h"
#include<vector>
using namespace std;
void Uicontrol::Print(string out) {
    cout << out << endl;
}
void Uicontrol::PrintMas(vector<string>def) {
	for (int i = 0; i < def.size(); i++)
	{
		cout << def[i] << endl;
	}
}









