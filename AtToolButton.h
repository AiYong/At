#ifndef ATTOOLBUTTON_H
#define ATTOOLBUTTON_H

#include <QToolButton>
#include "AtGlobal.h"
class AT_EXPORT AtToolButton : public QToolButton
{
    Q_OBJECT
public:

    explicit AtToolButton(QWidget *pParent = nullptr);

    ~AtToolButton();
};

#endif // ATTOOLBUTTON_H
