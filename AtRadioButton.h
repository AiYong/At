#ifndef ATRADIOBUTTON_H
#define ATRADIOBUTTON_H

#include <QRadioButton>
#include "AtGlobal.h"
class AT_EXPORT AtRadioButton : public QRadioButton
{
    Q_OBJECT
public:

    explicit AtRadioButton(QWidget *pParent = nullptr);

    explicit AtRadioButton(const QString &rText, QWidget *pParent = nullptr);

    ~AtRadioButton();
};

#endif // ATRADIOBUTTON_H
