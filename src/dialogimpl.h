#ifndef DIALOGIMPL_H
#define DIALOGIMPL_H
//
#include <QDialog>
#include "ui_dialog.h"
#include "ActivityLabel.h"
//
class DialogImpl : public QDialog, public Ui::Dialog
{
Q_OBJECT
public:
	DialogImpl( QWidget * parent = 0, Qt::WFlags f = 0 );
private:
	ActivityLabel *label_number;
	
private slots:
	//void search();
	void on_pushButton_clicked();
	void on_label_number_clicked();
};
#endif





