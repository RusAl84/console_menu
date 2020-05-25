// console_menu.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<string>
#include <windows.h>
#include <conio.h>
#include "my_console_menu.h"
#include "c_fio.h"
using namespace std;



int main()
{
    setlocale(LC_ALL, "Russian");
    my_console_menu* main_menu = new my_console_menu();
    main_menu->set_title("Основное меню:");
    main_menu->add_item("krippppa");
    main_menu->add_item("dolbit");
    main_menu->add_item("c++");
    main_menu->add_item("u");
    main_menu->add_item("Mihalicha");
    main_menu->add_item("na");
    main_menu->add_item("dache");
   // main_menu->show_menu();
    cout << endl <<  endl;
   // main_menu->run();
    c_fio* datafio = new c_fio();
    datafio->get_c_fio_console();
    datafio->print();


}

