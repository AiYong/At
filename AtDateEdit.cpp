#include "AtDateEdit.h"

AtDateEdit::AtDateEdit(QWidget *pParent)
    :QDateEdit(pParent)
{

}

AtDateEdit::AtDateEdit(const QDate &rDate, QWidget *pParent)
    :QDateEdit(rDate,pParent)
{

}

AtDateEdit::~AtDateEdit()
{

}
