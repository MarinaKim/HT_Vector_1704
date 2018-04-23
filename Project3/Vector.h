/*Разработать класс «Вектор», реализующий работу с одномерным динамическим массивом целых чисел. 
Возможности класса – 
добавление нового значения в конец дин. массива,+
добавление в указанную позицию,+
удаление из указанной позиции,
изменение значения в указанной позиции,+
возврат значения из указанной позиции.
Необходим ли для класса «Вектор» конструктор копирования?+ 
Деструктор?+ Если да – реализуйте.*/

#pragma once
#include <string>
#include<iostream>
#include<iomanip>
using namespace std;

class Vector {
private:
	int cur_size;
	int buf_size;
	int *els;

public:
	//default constructor
	Vector() {
		cur_size = 0;
		buf_size = 0;
		els = nullptr;}

	Vector(int size);

	//copy constructor
	Vector(const Vector &src);

	//plus back
	void push_back(const int &e);

	void push_pl(int pos_size, const int &e);

	void pop_back();

	int& at(int pos) {
		return els[pos];
	}
	//destructor
	~Vector() {
		delete[]els;
		els = nullptr;
	}

	void print();
	void showPos(int num);
	void delPos(const int &pos);
};