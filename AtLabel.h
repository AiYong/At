#ifndef ATLABEL_H
#define ATLABEL_H

#include <QLabel>
#include "AtGlobal.h"
class AT_EXPORT AtLabel : public QLabel
{
    Q_OBJECT
public:

    explicit AtLabel(QWidget *pParent=nullptr, Qt::WindowFlags nFlags=Qt::WindowFlags());

    explicit AtLabel(const QString &strText, QWidget *pParent=nullptr, Qt::WindowFlags nFlags=Qt::WindowFlags());

    ~AtLabel();
};

#endif // ATLABEL_H
