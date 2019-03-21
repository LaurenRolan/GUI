#ifndef QPAINT_H
#define QPAINT_H

#include "InvoiceModel.h"
#include <QWidget>
#include <QPainter>

class QPaint : public QWidget
{
    Q_OBJECT
public:
    explicit QPaint(QWidget *parent = 0);
    void setInvoiceModel(InvoiceModel * invoiceModel);
    void paintEvent(QPaintEvent *);
    QString getTaxes();
    QString getTotal();

signals:

public slots:

private:
    InvoiceModel * _invoiceModel;
    QPainter * _canvas;
};

#endif // QPAINT_H
