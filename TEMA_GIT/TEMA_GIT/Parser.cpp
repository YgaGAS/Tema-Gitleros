#include"Parser.h"
#include<string>
void Parser::getArticle(Statya a) {
	string cout_s = to_string(a.count_symvols);//����������� �� ��������� ���� �� ��������
	string cout_d = to_string(a.data);
	string result = a.Autor + " " + a.title + " " + cout_s + " " + cout_d;
	Write(result);




};
