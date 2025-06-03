// TEMA_GIT.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#pragma on
#include <iostream>
#include "viu2.h"
#include"VIU_INPUT.h"
#include"File_meneg.h"
#include"VIU_OUTPUT.h"
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
	File_manage file("TEXT.txt"); //модуль выводит то что в текстовом файле (МОДУЛЬ-РАБОТАЕТ С БАЗОЙ ДАННЫХ)
	string gg;
	gg = file.Read();
	out.Print(gg);
	cin >> gg;
	out.Print(gg);//вывод через output
	//cout  << gg;// без вывода через output
	
	










}
