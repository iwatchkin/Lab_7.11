// Лабораторная работа № 7. Задание 11. Ивлиев М.Е.

// Сделал, что успел.

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

 

int CountWord(char* str)
{
    char* next;

    char* piece;

    int count = 0;
     
    piece = strtok_s(str, ". ! ? , " " ; \n / ", &next);

    while (piece != NULL)
    {
        if (piece[0] == piece[strlen(piece) - 1])
        {

            count++;
           
        }

        piece = strtok_s(NULL, ". !? , " "; \n /", &next);
        
    }
    
    
    return count;
}




int main()
{
    setlocale(LC_ALL, "Rus");

    

   
    while (1)
    {
        system("pause");

        system("cls"); // Очищает поле консоли после каждой выполненной итерации цикла while. //

        int z = 0;

        cout << " Выберите действие : \n \n \t 1. Выполнить программу. \n \n \t 2. Выйти из программы. \n \n Действие : ";

        cin >> z;

        if (z != 1)
        {
            break;
        }

         ifstream fin("C:\\Users\\Макс\\source\\repos\\Lab_7.11\\Lab_7.11\\Текст.txt");

        int count = 0;

        char str[1000];

        if (!fin.is_open())
        {
            cout << "Файл не может быть открыт!\n";
        }

        else
        {
            while (!fin.eof())
            {

                fin.getline(str, 1000);

                count += CountWord(str);


            }


            cout << "\n" << "Количество слов, у которых первая и последняя буквы совпадают : " << count << "." << endl << endl;
        }



        fin.close();

        


    }
       
    
            
        
}



