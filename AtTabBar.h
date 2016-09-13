#ifndef ATTABBAR_H
#define ATTABBAR_H

#include <QTabBar>
#include "AtGlobal.h"
class AT_EXPORT AtTabBar : public QTabBar
{
    Q_OBJECT
public:

    explicit AtTabBar(QWidget *pParent = nullptr);

    ~AtTabBar();
};

#endif // ATTABBAR_H
