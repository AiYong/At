#ifndef ATTIMEEDIT_H
#define ATTIMEEDIT_H

#include <QTimeEdit>
#include "AtGlobal.h"
class AT_EXPORT AtTimeEdit : public QTimeEdit
{
    Q_OBJECT
public:

    explicit AtTimeEdit(QWidget *pParent = nullptr);

    explicit AtTimeEdit(const QTime &rTime, QWidget *pParent = nullptr);

    ~AtTimeEdit();
};

#endif // ATTIMEEDIT_H
