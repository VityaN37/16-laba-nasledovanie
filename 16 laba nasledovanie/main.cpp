#include <iostream>
#include "nasledovanie.h"
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

int main()
{

    setlocale(LC_ALL, "RU");
    system("251");
    int select; int value;
    bool f = true;
  
    CFile a;


    while (f)
    {

        std::cout << std::endl;
        std::cout << "1..." << "������� ����" << std::endl;
        std::cout << "2..." << "������� ����" << std::endl;
        std::cout << "3..." << "������ �����" << std::endl;
        std::cout << "4..." << "������ � ����" << std::endl;
        std::cout << "5..." << "����� �������� �� ������� " << std::endl; 
        std::cout << "6..." << "������� ���������� �������� � �����" << std::endl;
        std::cout << "7..." << "���������� ������� ��� �������� ������� �������� �������" << std::endl;
        std::cout << "8..." << "����� �� ���������" << std::endl;

        std::cin >> select;
        switch (select)
        {

        case 1:
            a.openFile();
            break;
        case 2:a.Closefile();
            break;
        case 3: a.Readfile();
            break;
        case 4:a.Writefile();
            break;
        case 5:a.Seek();
            break;
        case 6: a.GetLength();
            break;
        case 7:a.GetPosition();
            break;
        case 8: f = false;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
        }
        system("pause");
        system("cls");
    }
}
