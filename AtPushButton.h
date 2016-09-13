#ifndef ATPUSHBUTTON_H
#define ATPUSHBUTTON_H

#include <QPushButton>
#include "AtGlobal.h"
class AT_EXPORT AtPushButton : public QPushButton
{
    Q_OBJECT
public:

    explicit AtPushButton(QWidget *pParent = nullptr);

    explicit AtPushButton(const QString &rText, QWidget *pParent = nullptr);

    AtPushButton(const QIcon& rIcon, const QString &rText, QWidget *pParent = nullptr);

    ~AtPushButton();
};

#endif // ATPUSHBUTTON_H
