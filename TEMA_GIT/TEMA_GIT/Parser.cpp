#include"Parser.h"
#include<string>
void Parser::getArticle(Statya a) {
	string cout_s = to_string(a.count_symvols);//����������� �� ��������� ���� �� ��������
	string cout_d = to_string(a.data);
	string result = a.Autor + " " + a.title + " " + cout_s + " " + cout_d + "\n";
	Write(result);

};



Statya Parser::outArticle() {
	Statya out;
	string a ;
	string b;
	f >> out.Autor;
	f >> out.title;
	f >> a;
	f >> b;
	//�� ������� ����� �� �����
       			     //get line �� ������� 
	//f >> out.a;
	//f >> out.b;
	out.count_symvols = stoi(a);
	out.data  = stoi(b);
	return(out);
};
