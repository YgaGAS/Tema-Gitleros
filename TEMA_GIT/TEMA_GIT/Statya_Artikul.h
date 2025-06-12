#pragma once
#include<iostream>
#include<vector>
using namespace std;
struct Statya
{	int count_symvols;
	int data;
	string Autor;
	string title;
};


struct HardArticl
{	
	int data;
	string Autor;
	string title;
	vector<Statya>LinkArticle;
};







