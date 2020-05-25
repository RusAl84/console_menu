#pragma once
#include <iostream>
#include<string>
#include <windows.h>
#include <conio.h>

using namespace std;

struct s_date {
	int day;
	int month;
	int year;
};
class c_date{
	private:
		s_date mdate;
	public:
		c_date(int _day, int _month, int _year) {
			mdate.day = _day;
			mdate.month = _month;
			mdate.year = _year;
		}
		c_date() {
			mdate.day = 27;
			mdate.month = 12;
			mdate.year = 1984;
		}
		void set_day(int x) {
			mdate.day = x;
		}
		void set_month(int x) {
			mdate.month = x;
		}
		void set_year(int x) {
			mdate.year = x;
		}
		s_date get() {
			return mdate;
		}
		//s_date& operator=(const s_date& right) {
		//	//�������� �� ����������������
		//	if (this == &right) {
		//		return *this;
		//	}
		//	value = right;
		//	return *this;
		//}
};

struct s_fio{
	char fio[40];
	s_date mdate;
	char facult[12];
	char gruppa[12];
	char zach[12];
};

class c_fio
{
	private:
		s_fio mdata;
	public:
		c_fio(char _fio[40], s_date _mdate, char _facult[12], char _gruppa[12], char _zach[12])
		{
			strcpy(mdata.fio, _fio);
			strcpy(mdata.facult, _facult);
			strcpy(mdata.gruppa, _gruppa);
			strcpy(mdata.zach, _zach);
			mdata.mdate = _mdate;
		}
		void set_fio() {
			strcpy(mdata.fio, "Student");
		}
		void set_c_fio(char _fio[40], s_date _mdate, char _facult[12], char _gruppa[12], char _zach[12])
		{
			strcpy(mdata.fio, _fio);
			strcpy(mdata.facult, _facult);
			strcpy(mdata.gruppa, _gruppa);
			strcpy(mdata.zach, _zach);
			mdata.mdate = _mdate;
		}
		void print()
		{

			setlocale(LC_ALL, "Russian");
			cout << "�.�.�.:    " << mdata.fio << endl;
			cout << "���������: " << mdata.facult << endl;
			cout << "������� ������: " << mdata.gruppa << endl;
			cout << "����� �������: " << mdata.zach  << endl;
			cout << "���� ��������:    " << mdata.mdate.day <<"/" << mdata.mdate.month << "/" << mdata.mdate.year <<endl;
		}
		c_fio()
		{
			strcpy(mdata.fio, "������ ���� ��������");
			strcpy(mdata.facult, "10.03.01 �������������� ������������");
			strcpy(mdata.gruppa, "����-09-19");
			strcpy(mdata.zach, "777SOS777");
			mdata.mdate.day = 27;
			mdata.mdate.month = 12;
			mdata.mdate.year = 1984;
		}
		void get_c_fio_console()
		{
			cout << "������� �.�.�.:    " << endl;
			cin >> mdata.fio;
			cout << "������� ���������:    " << endl;
			cin >> mdata.facult;
			cout << "������� ������:    " << endl;
			cin >> mdata.gruppa;
			cout << "������� ����� �������:    " << endl;
			cin >> mdata.zach;
			cout << "������� ���� �������� :    " << endl;
			cout << "  ���� �������� :    " << endl;
			cin >> mdata.mdate.day ;
			cout << "  ����� �������� :    " << endl;
			cin >> mdata.mdate.month;
			cout << "  ��� �������� :    " << endl;
			cin >> mdata.mdate.year;
		}
};

