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
        std::cout << "1..." << "открыть файл" << std::endl;
        std::cout << "2..." << "закрыть файл" << std::endl;
        std::cout << "3..." << "чтение файла" << std::endl;
        std::cout << "4..." << "запись в файлё" << std::endl;
        std::cout << "5..." << "поиск элемента по индексу " << std::endl; 
        std::cout << "6..." << "находим количество символов в файле" << std::endl;
        std::cout << "7..." << "нахождение индесов под которыми написан заданный элемент" << std::endl;
        std::cout << "8..." << "выход из программы" << std::endl;

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
