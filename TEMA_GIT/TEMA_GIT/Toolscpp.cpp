#include"Tools.h"
void Tools::Sorted(vector<Statya>&mas) {
	bool flag = true;
	while (flag)
	{
		flag = false;
		for (int i = 0; i < mas.size()-1; i++) {
			if (mas[i].data < mas[i + 1].data) {
				flag = true;
				Statya a = mas[i];
				mas[i] = mas[i + 1];
				mas[i + 1] = a;
			}

		}




	}



};
