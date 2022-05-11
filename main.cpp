#include "student.h"
#include "StudList.h"
#include <iostream>

int main(){
	Student stud1;
	stud1.setName("Slava1");
	stud1.setAverage(1);
	stud1.setGroupe("111");
	stud1.setCourse(1);

	Student stud2;
	stud2.setName("Slava2");
	stud2.setAverage(2);
	stud2.setGroupe("222");
	stud2.setCourse(2);

	Student stud3;
	stud3.setName("Slava3");
	stud3.setAverage(3);
	stud3.setGroupe("333");
	stud3.setCourse(2);
	

	StudList list;
	list.push_back(&stud1);
	list.push_back(&stud2);
	list.push_back(&stud3);

	for (int i = 0; i < list.getSize(); i++)
	{
		std::cout << "Position " << i<< std::endl; 
		std::cout << "Name: "	<< list.at(i)->getName() << std::endl;
		std::cout << "Average: "<< list.at(i)->getAverage() << std::endl;
		std::cout << "Groupe: "	<< list.at(i)->getGroupe() << std::endl;
		std::cout << "Course: "	<< list.at(i)->getCourse() << std::endl <<std::endl;
	}
	list.insert(list.pop_out(0),0);

	for (int i = 0; i < list.getSize(); i++)
	{
		std::cout << "Position " << i<< std::endl; 
		std::cout << "Name: "	<< list.at(i)->getName() << std::endl;
		std::cout << "Average: "<< list.at(i)->getAverage() << std::endl;
		std::cout << "Groupe: "	<< list.at(i)->getGroupe() << std::endl;
		std::cout << "Course: "	<< list.at(i)->getCourse() << std::endl <<std::endl;
	}


	
	return 0;
}