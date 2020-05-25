#pragma once
#include <iostream>
#include<string>
#include <windows.h>
#include <conio.h>
using namespace std;

class my_console_menu {
private:
    string str;
    int count;
    int ind;
    string title;
public:
    void add_item(string s1);
    void set_title(string s1);
    void show_menu(void);
    void run(void);
    my_console_menu(void) {
        str = "";
        count = 0;
        ind = 0;
        title = "";
    }
};

void my_console_menu::add_item(string s1) {
    if (str == "") {
        str = s1 + ";";
    }
    else
    {
        str = str + s1 + ";";
    }
    count++;
}

void my_console_menu::set_title(string s1)
{
    title = s1;
}
void my_console_menu::show_menu(void)
{
    cout << endl << str << endl;
}


void my_console_menu::run(void)
{
    string s1 = "";
    int ch;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    while ((ch = _getch()) != 27)
    {
        system("cls");
        SetConsoleTextAttribute(hConsole, 7);
        cout << " " << title << endl;

        int id = 1;
        for (int i = 0; i <= (int)str.length(); i++) {
            if (str[i] == ';') {
                //cout << "   ; " << id << endl;
                if (id == ind) {

                    SetConsoleTextAttribute(hConsole, 5);
                    cout << "  * " << s1 << endl;
                }
                else
                {
                    SetConsoleTextAttribute(hConsole, 7);
                    cout << "    " << s1 << endl;

                }
                s1 = "";
                id++;
            }
            else
            {
                s1 = s1 + str[i];
            }
        }
        Sleep(100);
        if (ch == 72) {
            ind--;
        }
        if (ch == 80) {
            ind++;
        }
        if (ind > count) {
            ind = 1;
        }
        if (ind < 0) {
            ind = count - 1;
        }
        SetConsoleTextAttribute(hConsole, 7);
        //cout << "(Стрелочки - переключать меню, ESC - Выход)" << ind << endl;
        cout << "(Стрелочки - переключать меню, ESC - Выход)" << ind << endl;
    }
}

