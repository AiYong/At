#ifndef ATMENU_H
#define ATMENU_H

#include <QMenu>
#include "AtGlobal.h"
class AT_EXPORT AtMenu : public QMenu
{
    Q_OBJECT
public:

    explicit AtMenu(QWidget *parent = nullptr);

    explicit AtMenu(const QString &strTitle, QWidget *parent = nullptr);

    ~AtMenu();
};

#endif // ATMENU_H
