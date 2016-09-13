#ifndef ATWIDGET_H
#define ATWIDGET_H

#include <QWidget>

#include "AtGlobal.h"

class AT_EXPORT AtWidget : public QWidget
{
    Q_OBJECT
public:

    explicit AtWidget(QWidget *pParent = 0);

    virtual ~AtWidget();

};

#endif // ATWIDGET_H
