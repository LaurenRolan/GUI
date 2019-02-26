#ifndef QPAINT_H
#define QPAINT_H

#include <QWidget>
#include <QPainter>

class QPaint : public QWidget
{
    Q_OBJECT
public:
    explicit QPaint(QWidget *parent = 0);

signals:

public slots:


private:
    QPainter * canvas;

};

#endif // QPAINT_H
