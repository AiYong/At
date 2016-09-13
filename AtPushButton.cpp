#include "AtPushButton.h"

AtPushButton::AtPushButton(QWidget *pParent)
    :QPushButton(pParent)
{

}

AtPushButton::AtPushButton(const QString &rText, QWidget *pParent)
    :QPushButton(rText,pParent)
{

}

AtPushButton::AtPushButton(const QIcon& rIcon, const QString &rText, QWidget *pParent)
    :QPushButton(rIcon,rText,pParent)
{

}

AtPushButton::~AtPushButton()
{

}
