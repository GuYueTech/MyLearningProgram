#pragma once
#include<iostream>
using namespace std;
#include"worker.h"
#include<fstream>
#define FILENAME "empFile.txt"

class workerManager
{
public:
	workerManager();

	void Show_Menu();

	void exitSystem();
	
	int m_EmpNum;

	Worker ** m_EmpArray;

	void Add_Emp();
	void save();

	bool m_FileIsEmpty;

	int get_EmpNum();


	void init_Emp();

	void Show_Emp();

	void Del_Emp();

	int IsExist(int id);

	void Mod_Emp();


	void Find_Emp();

	void Sort_Emp();

	void Clean_File();



	~workerManager();

private:

};


