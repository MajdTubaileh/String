#pragma once

class String
{
private:
	char *Array;
	int size;

public:
	String();
	String(char *name);
	String(String &obj);
	String(int size);
	~String();
	
	
	void String_Cpy(String obj,String obj2);
	void String_Cat(String obj , String obj2);
	int String_Length(String obj);
	bool String_Cmp(String obj, String obj2);
	char String_Char(String obj, char item);
	char String_String(String obj, String obj2);

};