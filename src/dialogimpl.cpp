#include "dialogimpl.h"
#include <QDebug>
#include <stdio.h>
//#include <sys/stat.h>
#include <QTime>

#include <QGridLayout>  
//
DialogImpl::DialogImpl( QWidget * parent, Qt::WFlags f) 
	: QDialog(parent, f)
{
	setupUi(this);
	this->label_number = new ActivityLabel();
	this->label_number->setText("");
	this->gridLayout->addWidget(label_number,1,1);
	QObject::connect(this->pushButton,SIGNAL(clicked()),this,SLOT(on_pushButton_clicked()));
	QObject::connect(label_number,SIGNAL(clicked()),this,SLOT(on_label_number_clicked()));
	label_number->setEnabled(false);
	
}
/*
void DialogImpl::search()
{
	qDebug("click the button");
	printf("hello");
}
*/
void DialogImpl::on_pushButton_clicked()
{  
	
	QString str = this->textEdit->toPlainText();
	int flag = QString::compare(str,"zhoujunxing");
	if(flag == 0)
	{
		this->label_name->setText("zhoujunxing");
		this->label_number->setText("201416070103");
		this->label_class->setText("1401");
		
		this->label_number->setEnabled(true);
		
		
	}
	else
	{
		this->textEdit->setText("input error, Try again!");
		this->label_number->setEnabled(false);
	}
    
} 
void sleep(unsigned int msec) 
{ 
QTime dieTime = QTime::currentTime().addMSecs(msec); 
while( QTime::currentTime() < dieTime ) 
QCoreApplication::processEvents(QEventLoop::AllEvents, 100); 
}
void DialogImpl::on_label_number_clicked()
{
	QString str = "201416070103";
	int index = 0;
	while(1)
	{
		QString leftStr = str.left(index);
		QString rightStr = str.right(str.length()-index-1);
		QString midStr = str.mid(index,1);
		
		QString midFont = "<font color=#990000 size=11>" + midStr + "</font>"; 
		label_number->setText(leftStr + midFont + rightStr);
		index = (index+1) % str.length();
		sleep(500);
	}
	
}
//
