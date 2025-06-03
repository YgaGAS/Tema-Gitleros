#include"VIU_INPUT.h"
int inputcont::chooseInput(vector<string> variants) {
	for (int i = 0; i < variants.size(); i++)
	{
		cout << i + 1 << ")" << variants[i] << endl;
	}
	cout << "chus";
	int ch;
	cin >> ch;
	return ch;
}