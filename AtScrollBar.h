#ifndef ATSCROLLBAR_H
#define ATSCROLLBAR_H

#include <QScrollBar>
#include "AtGlobal.h"
class AT_EXPORT AtScrollBar : public QScrollBar
{
    Q_OBJECT
public:

    AtScrollBar(QWidget *pParent = nullptr);

    AtScrollBar(Qt::Orientation eOrientation, QWidget *pParent = nullptr);

    ~AtScrollBar();

};

#endif // ATSCROLLBAR_H
