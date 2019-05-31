#include "onecode.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	oneCode w;
	w.show();
	return a.exec();
}
