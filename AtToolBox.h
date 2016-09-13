#ifndef ATTOOLBOX_H
#define ATTOOLBOX_H

#include <QToolBox>
#include "AtGlobal.h"
class AT_EXPORT AtToolBox : public QToolBox
{
    Q_OBJECT
public:

    explicit AtToolBox(QWidget *pParent = nullptr, Qt::WindowFlags eFlags = Qt::WindowFlags());

    ~AtToolBox();

};

#endif // ATTOOLBOX_H
