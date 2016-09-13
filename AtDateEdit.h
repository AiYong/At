#ifndef ATDATEEDIT_H
#define ATDATEEDIT_H

#include <QDateEdit>
#include "AtGlobal.h"
class AT_EXPORT AtDateEdit : public QDateEdit
{
    Q_OBJECT
public:

    explicit AtDateEdit(QWidget *pParent = nullptr);

    explicit AtDateEdit(const QDate &rDate, QWidget *pParent = nullptr);

    ~AtDateEdit();

};

#endif // ATDATEEDIT_H
