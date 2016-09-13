#ifndef ATTABWIDGET_H
#define ATTABWIDGET_H

#include <QTabWidget>
#include "AtGlobal.h"
class AT_EXPORT AtTabWidget : public QTabWidget
{
    Q_OBJECT
public:

    explicit AtTabWidget(QWidget *pParent = nullptr);

    ~AtTabWidget();
};

#endif // ATTABWIDGET_H
