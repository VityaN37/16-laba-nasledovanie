#pragma once
#include <iostream>
#include <cstring>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using std::string;


class CFile    
{
public:
	void openFile();
	void Closefile();
	void Readfile();
	void Writefile();
	void Seek();


	int GetLength();
	int GetPosition();

private:
};

class CMyDataFile : public CFile
{
public:
	
	
private:
	int MyDataFile;
};