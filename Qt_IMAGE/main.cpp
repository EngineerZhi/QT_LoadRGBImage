#include "Qt_IMAGE.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Qt_IMAGE w;
	w.show();
	return a.exec();
}
