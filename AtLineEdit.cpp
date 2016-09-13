#include "AtLineEdit.h"

AtLineEdit::AtLineEdit(QWidget *pParent)
    :QLineEdit(pParent)
{

}

AtLineEdit::AtLineEdit(const QString &strText, QWidget *pParent)
    :QLineEdit(strText,pParent)
{

}

AtLineEdit::~AtLineEdit()
{

}
