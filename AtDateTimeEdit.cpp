#include "AtDateTimeEdit.h"


AtDateTimeEdit::AtDateTimeEdit(QWidget *parent)
    :QDateTimeEdit(parent)
{

}

AtDateTimeEdit::AtDateTimeEdit(const QDateTime &dt, QWidget *parent)
    :QDateTimeEdit(dt,parent)
{

}

AtDateTimeEdit::AtDateTimeEdit(const QDate &d, QWidget *parent)
    :QDateTimeEdit(d,parent)
{

}

AtDateTimeEdit::AtDateTimeEdit(const QTime &t, QWidget *parent)
    :QDateTimeEdit(t,parent)
{

}

AtDateTimeEdit::~AtDateTimeEdit()
{

}
