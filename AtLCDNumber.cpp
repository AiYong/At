#include "AtLCDNumber.h"

AtLCDNumber::AtLCDNumber(QWidget* pParent)
    :QLCDNumber(pParent)
{

}

AtLCDNumber::AtLCDNumber(uint nNumDigits, QWidget* pParent)
    :QLCDNumber(nNumDigits,pParent)
{

}

AtLCDNumber::~AtLCDNumber()
{

}
