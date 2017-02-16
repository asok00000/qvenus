#ifndef QVENUS_H
#define QVENUS_H

#include <QtWidgets/QMainWindow>
#include "ui_qvenus.h"

class QVenus : public QMainWindow
{
	Q_OBJECT

public:
	QVenus(QWidget *parent = 0);
	~QVenus();
private:
	Ui::QVenusClass ui;
};

#endif // QVENUS_H
