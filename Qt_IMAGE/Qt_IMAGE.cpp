#include "Qt_IMAGE.h"
#include <QImage>
//
Qt_IMAGE::Qt_IMAGE(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	Load();
	//Load_BGRA();
}

void Qt_IMAGE::Load()
{
	std::string name = "E:\\Git\\LZStudy\\VSBuild2.0\\rundir\\Debug\\bin\\32bit\\ConvertYUY2toRGB24";
	//std::string name = "E:\\QTVS\\Qt_IMAGE\\Win32\\Debug\\RGB";

	
	FILE *m_WaveFile = fopen(name.c_str(), "r");
	unsigned char *pData = new unsigned char[1280 * 720 * 3];
	fread(pData, 1, 1280*720*3, m_WaveFile);
	fclose(m_WaveFile);

	QImage *tempImage = new QImage(pData, 1280, 720, QImage::Format_RGB888);


	QPixmap pixmap2 = QPixmap::fromImage(*tempImage);
	ui.label->setAutoFillBackground(true);


	pixmap2 = pixmap2.scaled(ui.label->size(), Qt::KeepAspectRatio);//自适应/等比例

	ui.label->setStyleSheet("background: black;");  // 标签背景
	ui.label->setAlignment(Qt::AlignCenter);  // 图片居中
	ui.label->setPixmap(pixmap2);

}

bool Qt_IMAGE::BGRX2ARGB(unsigned char *src, unsigned char *dest, int width, int height)
{
	int r, g, b, a;
	for (int i = 0; i < width*height; ++i)
	{
		b = *src++; // load blue
		g = *src++; // load green
		r = *src++; // load red
		a = *src++; // load alpha
		*dest++ = r;
		*dest++ = g;
		*dest++ = b;
		*dest++ = a;
	}
	return true;
}
void Qt_IMAGE::Load_BGRA()
{
	//std::string name = "E:\\QTVS\\Qt_IMAGE\\Win32\\Debug\\BGRX";
	//std::string name = "E:\\QTVS\\Qt_IMAGE\\Win32\\Debug\\libyuv_YUY2ToARGB";
	std::string name = "E:\\Git\\LZStudy\\VSBuild2.0\\rundir\\Debug\\bin\\32bit\\libyuv_YUY2ToARGB";

	


	FILE *m_WaveFile = fopen(name.c_str(), "r");
	unsigned char *pData = new unsigned char[1280 * 720 * 4];
	unsigned char *pDat_ARGB = new unsigned char[1280 * 720 * 4];
	fread(pData, 1, 1280 * 720 * 4, m_WaveFile);
	fclose(m_WaveFile);

	//转成ARGB
	BGRX2ARGB(pData,pDat_ARGB, 1280, 720);

	QImage *tempImage = new QImage(pDat_ARGB, 1280, 720, QImage::Format_RGBX8888);

	//显示
	QPixmap pixmap2 = QPixmap::fromImage(*tempImage);
	ui.label->setAutoFillBackground(true);
	pixmap2 = pixmap2.scaled(ui.label->size(), Qt::KeepAspectRatio);//自适应/等比例
	ui.label->setStyleSheet("background: black;");  // 标签背景
	ui.label->setAlignment(Qt::AlignCenter);  // 图片居中
	ui.label->setPixmap(pixmap2);

}