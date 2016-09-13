#ifndef ATDIALOG_H
#define ATDIALOG_H

#include <QDialog>
#include "AtGlobal.h"
class AT_EXPORT AtDialog : public QDialog
{
    Q_OBJECT
public:

    explicit AtDialog(QWidget *pParent = 0);

    virtual ~AtDialog();

};

#endif // ATDIALOG_H
