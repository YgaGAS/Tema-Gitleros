// TEMA_GIT.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#pragma once
#include <iostream>
#include "viu2.h"
#include"VIU_INPUT.h"
#include"File_meneg.h"
#include"VIU_OUTPUT.h"
#include"Parser.h"
#include"Tools.h"
using namespace std;

int main(){  
//	Uicontrol con;
	//con.Print("sus");//Uicontrol::Print("sus") тоже самое 
	//vector<string>s{ "1" ,"1" ,"1" ,"1" ,"1" ,"1" };
	//con.PrintMas(s);
	// 
	// 
	// 
	// 
	//inputcont vvod;
	//string k;
	//string d = vvod.SaveInput(k,"Name");
	//cout << d;
	//vector<string>list{ "Andrey","Oleg", "Max", };
	//int f = vvod.chooseInput(list);
	//cout << d;
    


	output out;
		Parser FILE("TEXT.txt");

		Statya a1 = FILE.outArticle();
		Statya a2 = FILE.outArticle();
		Statya a3 = FILE.outArticle();
		Statya a4 = FILE.outArticle();
		Statya a5 = FILE.outArticle();
		vector<Statya>list;
		list.push_back(a1);
		list.push_back(a2);
		list.push_back(a3);
		list.push_back(a4);
		list.push_back(a5); //добавление в масив
		for (int i = 0; i < list.size(); i++) {
			out.Print(list[i].data);
		}
		Tools t;
		t.Sorted(list);
		for (Statya i : list) {
			out.Print(i.data);
		}
		
//	output out;//подключение output									   
	//Parser FILE("TEXT.txt");
	//Statya limbo{12,2020,"df","fd"};//добавляет в структуру (limbo)
	//FILE.getArticle(limbo);
	//Statya s =FILE.outArticle();
	//out.Print(s.Autor);
	//out.Print(s.title);
	//out.Print(s.data);
	//out.Print(s.count_symvols);
			   //File_manage file("TEXT.txt"); //модуль выводит то что в текстовом файле (МОДУЛЬ-РАБОТАЕТ С БАЗОЙ ДАННЫХ)
	//string gg;														   
	//gg = file.Read();												   
	//out.Print(gg);
	//cin >> gg;
	//out.Print(gg);//вывод через output
	//cout  << gg;// без вывода через output
	
	
	










}
