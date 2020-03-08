#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Qt_IMAGE.h"

class Qt_IMAGE : public QMainWindow
{
	Q_OBJECT

public:
	Qt_IMAGE(QWidget *parent = Q_NULLPTR);

private:
	Ui::Qt_IMAGEClass ui;
	void Load();
	void Load_BGRA();

	bool BGRX2ARGB(unsigned char *src, unsigned char *dest, int width, int height);
};
