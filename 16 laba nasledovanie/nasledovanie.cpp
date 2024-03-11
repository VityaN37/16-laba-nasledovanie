#include "nasledovanie.h"

void CFile::openFile()
{
    std::string filename = "example.txt";
    std::cin >> filename;
    std::ifstream file;

    file.open(filename);

    if (!file.is_open())
    {
       std::cout << "ошибка открытия файла " << filename << std::endl;
    }
    else
    {
      std::cout << "File " << filename << " открыт успешно" << std::endl;

    }

    file.close();

}

void CFile::Closefile()
{
    std::string filename = "example.txt";
    std::cin >> filename;
    std::ifstream file;

    file.close();
    if (!file.is_open()) 
    {
        std::cout << "File открыт успешно" << std::endl;
    }
    else 
    {
        std::cout << "ошибка закрытия  " << std::endl;
    }
}

void CFile::Readfile()
{
    std::string filename = "example.txt";
   
    std::ifstream file;

    file.open(filename);

    if (!file.is_open())
    {
        std::cout << "ошибка открытия файла " << filename << std::endl;
    }
    else
    {
        std::cout << "File " << filename << " открыт успешно" << std::endl;
        std::string str;

       /* while (!file.eof())
        {
            str = " ";
            std::getline(file, str);
            std::cout << str << std::endl;
        }*/
    }

    file.close();
}

void CFile::Writefile()
{
  
    std::string filename = "example.txt";
    std::ofstream file;

    file.open(filename);

    if (!file.is_open())
    {
        std::cout << "ошибка открытия файла " << std::endl;
    }
    else
    {
        std::cout << " File открыт успешно" << std::endl;
        std::cout << "введите предложение"<< std::endl;
        std::string word;
        std::cin>>word;
        file << word;
    }
    
    file.close();

}

void CFile::Seek() /// 1
{
}

int CFile::GetPosition() /// i
{
    return;
}

 int CFile::GetLength()
{
     int summ = 0;
     std::string filename = "example.txt";

     std::ifstream file;

     file.open(filename);

     if (!file.is_open())
     {
         std::cout << "ошибка открытия файла " << filename << std::endl;
     }
     else
     {
         std::cout << "File " << filename << " открыт успешно" << std::endl;
         char ch;
      
         while (file.get(ch))
         {
          
             std::cout << ch;
             if (ch != " ")
             {
                 summ++;
             }
         }
         std::cout << summ;
         std::cout << std::endl;
     }

     file.close();
     return summ;
}

