#include "ArrayList.h"
#include<iostream>
#include<string>
#include<fstream>

#define FILENAMESIZE 1024

class Application {
public:
	void Run();
	int GetCommand();
	int AddItem();
	void DisplayAllItem();
	int OpenInFile(char *fileName);
	int OpenOutFile(char *fileName);
	int ReadDataFromFile();
	int WriteDataToFile();
	void RetriveStudent();
	int DeleteStudent();
	int Replace();



private:
	ifstream m_InFile;///< input file descriptor.
	ofstream m_OutFile;///< output file descriptor.
	ArrayList m_List;///< item list.
	int m_Command;///< current command number
};
