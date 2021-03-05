#pragma once

#include <QObject>

class TestWidget : public QObject
{
	Q_OBJECT

public:
	TestWidget(QObject *parent);
	~TestWidget();
};
