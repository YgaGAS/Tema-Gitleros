#include"VIU_OUTPUT.h"
void output::PrintImage(vector<vector<int>> olen) {
	for (int i = 0; i < olen.size(); i++) {
		for (int j = 0; j < olen[i].size(); j++){

			cout << olen[i][j] << "|";




		}
		cout << endl;

	}

}