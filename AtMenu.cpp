#include "AtMenu.h"

AtMenu::AtMenu(QWidget *pParent)
    :QMenu(pParent)
{

}

AtMenu::AtMenu(const QString &strTitle, QWidget *pParent)
    :QMenu(strTitle,pParent)
{

}

AtMenu::~AtMenu()
{

}
