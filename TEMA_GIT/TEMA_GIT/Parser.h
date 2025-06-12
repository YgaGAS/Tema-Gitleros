#pragma once
#include<iostream>
#include"File_meneg.h"
#include"Statya_Artikul.h"
using namespace std;
class Parser : public File_manage {
public:
	Parser(string s) :File_manage(s) {};
	
	void getArticle(Statya);

	//string Read() override;
	Statya outArticle();
	 

};





