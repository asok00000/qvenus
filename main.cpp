#include "qvenus.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QVenus w;
	w.show();
	return a.exec();
}
