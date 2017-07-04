#include <QApplication>
#include "dialogimpl.h"
//
int main(int argc, char ** argv)
{
	QApplication app( argc, argv );
	DialogImpl win;
	win.show(); 
	app.connect( &app, SIGNAL( lastWindowClosed() ), &app, SLOT( quit() ) );
	return app.exec();
}
