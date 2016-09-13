#ifndef ATLINEEDIT_H
#define ATLINEEDIT_H

#include <QLineEdit>
#include "AtGlobal.h"
class AT_EXPORT AtLineEdit : public QLineEdit
{
    Q_OBJECT
public:

    explicit AtLineEdit(QWidget *pParent = nullptr);

    explicit AtLineEdit(const QString &strText, QWidget *pParent = nullptr);

    ~AtLineEdit();

};

#endif // ATLINEEDIT_H
