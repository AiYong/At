#include "AtScrollBar.h"

AtScrollBar::AtScrollBar(QWidget *pParent)
    :QScrollBar(pParent)
{

}

AtScrollBar::AtScrollBar(Qt::Orientation eOrientation, QWidget *pParent)
    :QScrollBar(eOrientation,pParent)
{

}

AtScrollBar::~AtScrollBar()
{

}
