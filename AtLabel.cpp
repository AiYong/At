#include "AtLabel.h"

AtLabel::AtLabel(QWidget *pParent, Qt::WindowFlags nFlags)
    :QLabel(pParent,nFlags)
{

}

AtLabel::AtLabel(const QString &strText, QWidget *pParent, Qt::WindowFlags nFlags)
    :QLabel(strText,pParent,nFlags)
{

}

AtLabel::~AtLabel()
{

}
