#include"File_meneg.h"

File_manage::File_manage(string path) {
	this->path = path;
	f.open(path, ios::in);
	
}
string File_manage::Read() {
	//fstream f;
	//f.open(path,ios::in);//�������� �� ������ ������
	string data;
	getline(f,data);
	
	//f >> data;
	return data;
}
void File_manage::Write(string s) {
	f.close();
	f.open(path, ios::app);//app �� ��������� ����
	f << s;                //out �� ������� ����� ���������� ����
	f.close();
	f.open(path, ios::in);
}