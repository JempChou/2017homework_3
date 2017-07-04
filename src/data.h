#ifndef __DATA_H__
#define __DATA_H__
//
#include "student.h"
#include <QVector>
//
// place your code here
class Data
{
public:
	Data();
	//~Data();
	QVector<Student> init_data();	
private:
	QVector<Student> data;

};

#endif // __DATA_H__
