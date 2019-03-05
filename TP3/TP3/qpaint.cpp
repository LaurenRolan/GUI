#include "qpaint.h"


//https://doc.qt.io/qt-5/qtwidgets-tutorials-addressbook-part6-example.html

QPaint::QPaint(QWidget *parent) : QWidget(parent)
{
    _canvas = new QPainter(this);
}

void QPaint::setInvoiceModel(InvoiceModel * invoiceModel)
{
    _invoiceModel = invoiceModel;
}

void QPaint::paintEvent(QPaintEvent *)
{
    QRect rect(QPoint(20, 20), QPoint(120, 150));
    _canvas->setRenderHint(QPainter::Antialiasing);
    _canvas->setPen(Qt::black);
    _canvas->drawText(rect, Qt::AlignCenter,
                      "Data");
    _canvas->drawRect(rect);
}
