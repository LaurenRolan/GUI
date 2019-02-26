#include "qpaint.h"

QPaint::QPaint(QWidget *parent) : QWidget(parent)
{
    canvas = new QPainter(parent);

}

