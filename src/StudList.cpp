#include "StudList.h"
#include <iostream>

StudList::StudList()
{
    start = NULL;
    size = 0;
}
StudList::~StudList()
{

}

Student* StudList::getStart()
{
    return start;
}

int StudList::getSize()
{
    return size;
}


void StudList::push_back(Student* pStudent)
{
    if(size == 0)
    {
        start = pStudent;
        pStudent->setNextElement(NULL);
    }
    else
    {
        Student* iterator=start;
        for(int i=1;i<size ;i++)
        {
            std::cout << iterator<<std::endl;
            iterator = iterator->getNextElement();
        }
        iterator->setNextElement(pStudent);
        pStudent->setNextElement(NULL);
    }
    size++;
}

Student* StudList::at(int index)
{
    if(size < index)
    {
        std::cout << "at_error"<< std::endl;
        return NULL;
    }
    else
    {
        Student* iterator=start;
        for(int i=0;i<index ;i++)
        {
            iterator = iterator->getNextElement();
        }
        return iterator;
    }
}

Student* StudList::pop_out(int index)
{
    if(size < index)
    {
        std::cout<< "pop_out error"<<std::endl;
        return NULL;
    }
    else
    {
        Student* iterator=start;
        Student* pop_element;
        for(int i=0;i<index-1 ;i++)
        {
            iterator = iterator->getNextElement();
        }
        pop_element = iterator->getNextElement();
        iterator->setNextElement(iterator->getNextElement()->getNextElement());
        size--;
        return pop_element;
    }
}
void StudList::swap(int indexA, int indexB)
{
    if((size <  indexA) || (size < indexB))
    {
        std::cout<< "swap error"<<std::endl;
    }
    else
    {
        Student* swap_elementA;
        Student* swap_elementB;

        Student* iterator=start;
        for(int i=0;i<indexA-1 ;i++)
        {
            iterator = iterator->getNextElement();
        }

        for(int i=0;i<indexB-1 ;i++)
        {
            iterator = iterator->getNextElement();
        }
    }
}
void StudList::insert(Student* pStudent, int index)
{
    if(size < index)
    {
        std::cout<< "insert error"<<std::endl;
    }
    else
    {
        if (index==0)
        {
            pStudent->setNextElement(start);
            start = pStudent;
        }
        else
        {
            Student* iterator=start;
            for(int i=0;i<index-1 ;i++)
            {
                iterator = iterator->getNextElement();
            }
            pStudent->setNextElement(iterator->getNextElement());
            iterator->setNextElement(pStudent);
        
        }
        size++;
    }
   
}
void StudList::move(int intdexA, int indexB)
{

}