#ifndef STUDLIST_H
#define STUDLIST_H

#include "student.h"

class StudList
{
private:
	Student* start;
	int size;
public:
	StudList();
	~StudList();

	Student* getStart();
	int getSize();

	void push_back(Student* pStudent);
	Student* pop_out(int index);
	void swap(int indexA, int indexB);
	void insert(Student* pStudent, int index);
	void move(int intdexA, int indexB);

	Student* at(int index);
};

#endif