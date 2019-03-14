#include "qpaint.h"
#include <iostream>

//https://doc.qt.io/qt-5/qtwidgets-tutorials-addressbook-part6-example.html

QPaint::QPaint(QWidget *parent) : QWidget(parent)
{ }

void QPaint::setInvoiceModel(InvoiceModel * invoiceModel)
{
    _invoiceModel = invoiceModel;
}

void QPaint::paintEvent(QPaintEvent *)
{
    _canvas = new QPainter(this);
    _canvas->setRenderHint(QPainter::Antialiasing);
    _canvas->setPen(Qt::black);

    QRect info(QPoint(10, 10), QPoint(310, 90));

    //Cette partie, quand décomenté, retourne un SEGFAULT

/*
    _canvas->drawText(info, Qt::AlignLeft, _invoiceModel->firstname());
    _canvas->drawText(info, Qt::AlignLeft, _invoiceModel->lastname());

    _canvas->drawText(info, Qt::AlignLeft, _invoiceModel->addressLine1() + "\n");
    _canvas->drawText(info, Qt::AlignLeft, _invoiceModel->addressLine2() + "\n");
    _canvas->drawText(info, Qt::AlignLeft, _invoiceModel->city());
    _canvas->drawText(info, Qt::AlignLeft, _invoiceModel->zipcode());
*/

    _canvas->drawRect(info);

    QRect items(QPoint(10, 100), QPoint(110, 550));
    _canvas->drawText(items, Qt::AlignHCenter, tr("Item"));
    _canvas->drawRect(items);

    QRect quantity(QPoint(110, 100), QPoint(210, 550));
    _canvas->drawText(quantity, Qt::AlignHCenter, tr("Quantity"));
    _canvas->drawRect(quantity);

    QRect unitPrice(QPoint(210, 100), QPoint(310, 550));
    _canvas->drawText(unitPrice, Qt::AlignHCenter, tr("Unit price"));
    _canvas->drawRect(unitPrice);

    QRect price(QPoint(310, 100), QPoint(410, 550));
    _canvas->drawText(price, Qt::AlignHCenter, tr("Price"));
    _canvas->drawRect(price);

    _canvas->drawText(QPoint(200, 570), tr("Taxes"));
    QRect taxes(QPoint(310, 555), QPoint(410, 575));
    _canvas->drawRect(taxes);

    _canvas->drawLine(QPoint(10, 120), QPoint(410, 120));

    _canvas->drawText(QPoint(200, 595), tr("Total (w. taxes)"));
    QRect total(QPoint(310, 580), QPoint(410, 600));
    _canvas->drawRect(total);

}
