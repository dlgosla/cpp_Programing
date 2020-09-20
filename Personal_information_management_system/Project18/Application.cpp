#include "Application.h"

void Application::RetriveStudent()
{
	ItemType data;
	data.SetIdFromKB();
	m_List.Get(data);
}
int Application::DeleteStudent()
{
	ItemType data;
	data.SetIdFromKB();
	return m_List.Delete(data);
}
int Application::Replace()
{
	ItemType data;
	data.SetRecordFromKB();
	return m_List.Replace(data);
}

void Application::Run()
{
	while (1) {
		m_Command = GetCommand();
		switch (m_Command)
		{
		case 1:// read a record and add to list.
			AddItem(); break;
		case 2:// display all the records on screen.
			DisplayAllItem(); break;
		case 3:// make empty list.
			m_List.MakeEmpty(); break;
		case 4:// load list data from a file.
			ReadDataFromFile(); break;
		case 5:// save list data into a file.
			WriteDataToFile(); break;

		case 0:
			return;
		default:
			cout << "\tIllegalselection...\n"; break;
		}
	}
}
int Application::GetCommand()
{
	int command;
	cout << endl << endl;
	cout << "\t---ID --Command -----" << endl;
	cout << "\t 1 : Add item" << endl;
	cout << "\t 2 : Print all on screen" << endl;
	cout << "\t 3 : Make empty list" << endl;
	cout << "\t 4 : Get from file" << endl;
	cout << "\t 5 : Put to file " << endl;
	cout << "\t 0 : Quit" << endl;
	cout << endl << "\t Choose a Command--> ";
	cin >> command;
	cout << endl;
	return command;
}
int Application::AddItem()
{
	if (m_List.isFull())
	{
		cout << "꽉 찼습니다" << endl;
		return 0;
	}
	
	ItemType item;
	item.SetRecordFromKB();
	m_List.Add(item);

	DisplayAllItem();

	return 1;
}
void Application::DisplayAllItem()
{
	ItemType data;
	int len = m_List.GetLength();
	m_List.ResetList();
	for (int i = 0; i < len; i++)
	{
		m_List.GetNextItem(data);
		data.DisplayRecordOnScreen();
	}
}
int Application::OpenInFile(char *fileName)
{
	m_InFile.open(fileName);
	if (!m_InFile) return 0; //파일열기 실패 0리턴
	return 1; //성공 1리턴
}
int Application::OpenOutFile(char *fileName)
{
	m_OutFile.open(fileName);
	if (!m_OutFile) return 0;
	return 1;
}
int Application::ReadDataFromFile()
{
	int index = 0;
	ItemType data;

	char filename[FILENAMESIZE];
	cout << "\n\tEnter Input file Name : ";
	cin >> filename;

	
	if (!OpenInFile(filename))
		return 0;


	while (!m_InFile.eof()) {
		data.ReadDataFromFile(m_InFile);
		if (m_InFile.eof()) break;
		m_List.Add(data);
	}

	m_InFile.close();

	DisplayAllItem();

	return 1;
}
int Application::WriteDataToFile()
{
	ItemType data;	

	char filename[FILENAMESIZE];
	cout << "\n\tEnter Output file Name : ";
	cin >> filename;

	if (!OpenOutFile(filename))
		return 0;

	
	m_List.ResetList();
	
	int length = m_List.GetLength();
	int curIndex = m_List.GetNextItem(data);
	while (curIndex < length && curIndex != -1)
	{
		data.WriteDataToFile(m_OutFile);
		curIndex = m_List.GetNextItem(data);
	}

	m_OutFile.close();	

	return 1;
}