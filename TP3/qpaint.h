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

signals:

public slots:

private:
    InvoiceModel * _invoiceModel;
};

#endif // QPAINT_H
