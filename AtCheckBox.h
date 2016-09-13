#ifndef ATCHECKBOX_H
#define ATCHECKBOX_H

#include <QCheckBox>
#include "AtGlobal.h"
class AT_EXPORT AtCheckBox : public QCheckBox
{
    Q_OBJECT
public:

    explicit AtCheckBox(QWidget *pParent = nullptr);

    explicit AtCheckBox(const QString &text,QWidget *pParent = nullptr);

    virtual ~AtCheckBox();

};

#endif // ATCHECKBOX_H
