#include <iostream>
#include "Source1.h"
using namespace std;
String::String() 
{
	size = 0;
	Array = new char[size];

}
String::String(String &obj)
{
	size = 0;
	while (obj.Array[size] != NULL)
	{
		size++;
	}

	size = obj.size;

	for (int i = 0; i < obj.size; i++ )
	{
		Array[i] = obj.Array[i];
	}
}

String::String(char *obj)
{

	size = 0;
	while (obj[size] != NULL)
	{
		size++;
	}
	for (int i = 0; i < size; i++)
	{
		Array[i] = obj[i];
	}

}
String::String(int size)
{
	this->size = size;
	this->Array = new char[size];
}
String::~String()
{
	cout << "Destructor" << endl;

}


void String::String_Cat(String obj1 , String obj2)
{
	int w = 0;
	int newsize = obj1.size;
	obj1.size += obj2.size;
	for (int i = newsize; i = obj1.size; i++)
	{
		obj1.Array[i] = obj2.Array[w];
			w++;
	}

}
void String::String_Cpy(String obj1, String obj2)
{
	obj1.size = obj2.size;
	for (int i = 0; i < obj1.size; i++)
	{
		obj1.Array[i] = obj2.Array[i];
	}
}
int String::String_Length(String obj)
{
	return obj.size;
}
