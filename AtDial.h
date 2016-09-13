#ifndef ATDIAL_H
#define ATDIAL_H

#include <QDial>
#include "AtGlobal.h"
class AT_EXPORT AtDial : public QDial
{
    Q_OBJECT
public:

    explicit AtDial(QWidget *pParent);

    ~AtDial();
};

#endif // ATDIAL_H
