#ifndef ONECODE_H
#define ONECODE_H

#include <QtWidgets/QMainWindow>
#include "ui_onecode.h"

class oneCode : public QMainWindow
{
	Q_OBJECT

public:
	oneCode(QWidget *parent = 0);
	~oneCode();

private:
	Ui::oneCodeClass ui;
};

#endif // ONECODE_H
