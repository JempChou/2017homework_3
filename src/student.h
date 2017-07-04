#ifndef __STUDENT_H__
#define __STUDENT_H__
//
#include <qstring.h>
//
// place your code here
class Student
{
public:
	Student(QString name, QString number, QString class_);
	Student();
	Student(const Student &other);
	//~Student();
	void print_info();
	void set_info(QString name,QString number,QString class_);
private:
	QString name;
	QString number;
	QString class_;	
	
};

#endif // __STUDENT_H__
