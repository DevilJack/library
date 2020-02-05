#pragma once
#include <iostream>

using std::ostream;
using std::istream;

class String
{
	char* data_;
	unsigned length_;
		
public:
	String ();
	String(char cr);
	String(const char* cPtr);
	String(const String& str);

	int to_int();
	bool empty();
	unsigned len() const;//�����
	int index(char c) const;//������ ��������
	char& operator[] (unsigned j);
	String substr(const unsigned first);
	char  operator[] (unsigned j) const;
	String& operator= (const String& str);//������������
	String& operator+= (const String& str);//+=
	void upcase(unsigned first, unsigned last);//� ��������
	void downcase(unsigned first, unsigned last);//� �������
	void togglecase(unsigned first, unsigned last);//���� ����
	String substr(const unsigned first, const unsigned last);

	friend ostream& operator<< (ostream& so, const String& str);//�����
	friend istream& operator>> (istream& so, const String& str);//����

	friend String operator+ (const String& left, const String& right);//��������
	friend String operator+ (const String& left, char          right);
	friend String operator+ (const String& left, const char*   right);
	friend String operator+ (char          left, const String& right);
	friend String operator+ (const char*   left, const String& right);

	friend bool operator==  (const String& left, const String& right);//�����
	friend bool operator==  (const String& left, char          right);
	friend bool operator==  (const String& left, const char*   right);
	friend bool operator==  (char          left, const String& right);
	friend bool operator==  (const char*   left, const String& right);

	friend bool operator>   (const String& left, const String& right);//������
	friend bool operator>   (const String& left, char          right);
	friend bool operator>   (const String& left, const char*   right);
	friend bool operator>   (char          left, const String& right);
	friend bool operator>   (const char*   left, const String& right);

	friend bool operator!=  (const String& left, const String& right);//�� �����
	friend bool operator!=  (const String& left, char          right);
	friend bool operator!=  (const String& left, const char*   right);
	friend bool operator!=  (char          left, const String& right);
	friend bool operator!=  (const char*   left, const String& right);

	friend bool operator<   (const String& left, const String& right);//������
	friend bool operator<   (const String& left, char          right);
	friend bool operator<   (const String& left, const char*   right);
	friend bool operator<   (char          left, const String& right);
	friend bool operator<   (const char*   left, const String& right);

	friend bool operator<=  (const String& left, const String& right);//������ ���� �����
	friend bool operator<=  (const String& left, char          right);
	friend bool operator<=  (const String& left, const char*   right);
	friend bool operator<=  (char          left, const String& right);
	friend bool operator<=  (const char*   left, const String& right);

	friend bool operator>=  (const String& left, const String& right);//������ ���� �����
	friend bool operator>=  (const String& left, char          right);
	friend bool operator>=  (const String& left, const char*   right);
	friend bool operator>=  (char          left, const String& right);
	friend bool operator>=  (const char*   left, const String& right);

	friend class Book;

	~String();

};

