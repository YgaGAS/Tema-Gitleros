#include"Parser.h"
#include<string>
void Parser::getArticle(Statya a) {
	string cout_s = to_string(a.count_symvols);//преобразует из цифрового типа вв строчный
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
	//мы дастоем слово из файла
       			     //get line из строчки 
	//f >> out.a;
	//f >> out.b;
	out.count_symvols = stoi(a);
	out.data  = stoi(b);
	return(out);
};
