#include "student.h"
#include <QTextStream>
QTextStream cin(stdin, QIODevice::ReadOnly);
QTextStream cout(stdout, QIODevice::WriteOnly);
QTextStream cerr(stderr, QIODevice::WriteOnly);

// place your code here
Student::Student(QString name="", QString number="", QString class_="")
{
	this->set_info(name,number,class_);
}
Student::Student()
{
	
}
Student::Student(const Student &other)
{
	this->name = other.name;
	this->number = other.number;
	this->class_ = other.class_;
	
}
void Student::set_info(QString name,QString number,QString class_)
{
	this->name = name;
	this->number = number;
	this->class_ = class_;
}
void Student::print_info()
{
	cout<<"name:"<<name<<endl;
	cout<<"number:"<<number<<endl;
	cout<<"class:"<<class_<<endl;
}