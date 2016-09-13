#ifndef ATLCDNUMBER_H
#define ATLCDNUMBER_H

#include <QLCDNumber>
#include "AtGlobal.h"
class AT_EXPORT AtLCDNumber : public QLCDNumber
{
    Q_OBJECT
public:

    explicit AtLCDNumber(QWidget* pParent = nullptr);

    explicit AtLCDNumber(uint nNumDigits, QWidget* pParent = nullptr);

    ~AtLCDNumber();

};

#endif // ATLCDNUMBER_H
