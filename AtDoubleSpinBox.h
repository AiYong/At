#ifndef ATDOUBLESPINBOX_H
#define ATDOUBLESPINBOX_H

#include <QDoubleSpinBox>
#include "AtGlobal.h"
class AT_EXPORT AtDoubleSpinBox : public QDoubleSpinBox
{
    Q_OBJECT
public:

    explicit AtDoubleSpinBox(QWidget *pParent = nullptr);

    ~AtDoubleSpinBox();
};

#endif // ATDOUBLESPINBOX_H
