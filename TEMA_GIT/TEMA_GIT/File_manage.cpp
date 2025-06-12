#include"File_meneg.h"

File_manage::File_manage(string path) {
	this->path = path;
	f.open(path, ios::in);
	
}
string File_manage::Read() {
	//fstream f;
	//f.open(path,ios::in);//открытие до запись запись
	string data;
	getline(f,data);
	
	//f >> data;
	return data;
}
void File_manage::Write(string s) {
	f.close();
	f.open(path, ios::app);//app он дополняет фаил
	f << s;                //out он стирает потом записывает фаил
	f.close();
	f.open(path, ios::in);
}