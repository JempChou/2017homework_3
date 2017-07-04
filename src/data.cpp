#include "data.h"

// place your code here
Data::Data()
{
	
}
QVector<Student> Data::init_data()
{
	Student *student1 = new Student("baidi","123456","1");
	this->data.append(*student1);
	return data;
}