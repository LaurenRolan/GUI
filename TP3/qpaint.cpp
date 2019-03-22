#include "qpaint.h"
#include <iostream>

//https://doc.qt.io/qt-5/qtwidgets-tutorials-addressbook-part6-example.html

QPaint::QPaint(QWidget *parent) : QWidget(parent)
{ }

void QPaint::setInvoiceModel(InvoiceModel * invoiceModel)
{
    _invoiceModel = invoiceModel;
    _invoiceModel->setFirstname("");
    _invoiceModel->setLastname("");
    _invoiceModel->setAddressLine1("");
    _invoiceModel->setAddressLine2("");
    _invoiceModel->setCity("");
    _invoiceModel->setZipcode("");
}

void QPaint::paintEvent(QPaintEvent *)
{
    _canvas = new QPainter(this);
    _canvas->setRenderHint(QPainter::Antialiasing);
    _canvas->setPen(Qt::black);

    QRect info(QPoint(10, 10), QPoint(310, 90));

    if(_invoiceModel != nullptr) {
        QString text = " " + _invoiceModel->firstname() + " " +
                _invoiceModel->lastname() + "\n " + _invoiceModel->addressLine1() + "\n " +
                _invoiceModel->addressLine2() + "\n " + _invoiceModel->city() + "\t" +
                _invoiceModel->zipcode();
        _canvas->drawText(info, Qt::AlignLeft, text);
    }

    _canvas->drawRect(info);

    QRect items(QPoint(10, 100), QPoint(110, 550));
    _canvas->drawText(items, Qt::AlignHCenter, tr("Item"));
    _canvas->drawRect(items);
    for(int i = 0; i < 15; i++) {
        _canvas->drawText(QPoint(15, 135 + i * 25) ,_invoiceModel->cell(i, 0));
    }

    QRect quantity(QPoint(110, 100), QPoint(210, 550));
    _canvas->drawText(quantity, Qt::AlignHCenter, tr("Quantity"));
    _canvas->drawRect(quantity);
    for(int i = 0; i < 15; i++) {
        _canvas->drawText(QPoint(115, 135 + i * 25) ,_invoiceModel->cell(i, 1));
    }

    QRect unitPrice(QPoint(210, 100), QPoint(310, 550));
    _canvas->drawText(unitPrice, Qt::AlignHCenter, tr("Unit price"));
    _canvas->drawRect(unitPrice);
    for(int i = 0; i < 15; i++) {
        _canvas->drawText(QPoint(215, 135 + i * 25) ,_invoiceModel->cell(i, 2));
    }

    QRect price(QPoint(310, 100), QPoint(410, 550));
    _canvas->drawText(price, Qt::AlignHCenter, tr("Price"));
    _canvas->drawRect(price);
    for(int i = 0; i < 15; i++) {
        _canvas->drawText(QPoint(315, 135 + i * 25) ,_invoiceModel->cell(i, 3));
    }

    //QString taxesTotal = _invoiceModel->total();
    QString taxesTotal("0");
    _canvas->drawText(QPoint(200, 570), tr("Taxes"));
    QRect taxes(QPoint(310, 555), QPoint(410, 575));
    _canvas->drawText(taxes,  Qt::AlignHCenter, taxesTotal);
    _canvas->drawRect(taxes);

    _canvas->drawLine(QPoint(10, 120), QPoint(410, 120));

    //QString totalValue = _invoiceModel->taxes();
    QString totalValue("0");
    _canvas->drawText(QPoint(200, 595), tr("Total (w. taxes)"));
    QRect total(QPoint(310, 580), QPoint(410, 600));
    _canvas->drawText(total,  Qt::AlignHCenter, totalValue);
    _canvas->drawRect(total);
}
