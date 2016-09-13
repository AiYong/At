#include "AtTimeEdit.h"

AtTimeEdit::AtTimeEdit(QWidget *pParent)
    :QTimeEdit(pParent)
{

}

AtTimeEdit::AtTimeEdit(const QTime &rTime, QWidget *pParent)
    :QTimeEdit(rTime,pParent)
{

}

AtTimeEdit::~AtTimeEdit()
{

}
