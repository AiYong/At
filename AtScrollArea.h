#ifndef ATSCROLLAREA_H
#define ATSCROLLAREA_H

#include <QScrollArea>
#include "AtGlobal.h"
class AT_EXPORT AtScrollArea : public QScrollArea
{
    Q_OBJECT
public:

    AtScrollArea(QWidget *pParent = nullptr);

    ~AtScrollArea();

};

#endif // ATSCROLLAREA_H
