#ifndef ATDATETIMEEDIT_H
#define ATDATETIMEEDIT_H

#include <QDateTimeEdit>
#include "AtGlobal.h"
class AT_EXPORT AtDateTimeEdit : public QDateTimeEdit
{
    Q_OBJECT
public:

    explicit AtDateTimeEdit(QWidget *parent = nullptr);

    explicit AtDateTimeEdit(const QDateTime &dt, QWidget *parent = nullptr);

    explicit AtDateTimeEdit(const QDate &d, QWidget *parent = nullptr);

    explicit AtDateTimeEdit(const QTime &t, QWidget *parent = nullptr);

    ~AtDateTimeEdit();

};

#endif // ATDATETIMEEDIT_H
