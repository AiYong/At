#ifndef ATSPINBOX_H
#define ATSPINBOX_H

#include <QSpinBox>
#include "AtGlobal.h"
class AT_EXPORT AtSpinBox : public QSpinBox
{
    Q_OBJECT
public:

    explicit AtSpinBox(QWidget *pParent = nullptr);

    ~AtSpinBox();
};

#endif // ATSPINBOX_H
