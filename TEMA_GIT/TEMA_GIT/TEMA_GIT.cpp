// TEMA_GIT.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#pragma once
#include <iostream>
#include "viu2.h"
#include"VIU_INPUT.h"
#include"File_meneg.h"
#include"VIU_OUTPUT.h"
#include"Parser.h"
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
    
	output out;//подключение output									   
	Parser FILE("TEXT.txt");
	Statya limbo{12,2020,"df","fd"};//добавляет в структуру (limbo)
	FILE.getArticle(limbo);
	Statya s =FILE.outArticle();
	out.Print(s.Autor);
	out.Print(s.title);
	out.Print(s.data);
	out.Print(s.count_symvols);
			   //File_manage file("TEXT.txt"); //модуль выводит то что в текстовом файле (МОДУЛЬ-РАБОТАЕТ С БАЗОЙ ДАННЫХ)
	//string gg;														   
	//gg = file.Read();												   
	//out.Print(gg);
	//cin >> gg;
	//out.Print(gg);//вывод через output
	//cout  << gg;// без вывода через output
	
	
	










}
