#ifndef ATCOMBOBOX_H
#define ATCOMBOBOX_H

#include <QComboBox>
#include "AtGlobal.h"
class AT_EXPORT AtComboBox : public QComboBox
{
    Q_OBJECT
public:

    explicit AtComboBox(QWidget *pParent = nullptr);

    virtual ~AtComboBox();

};

#endif // ATCOMBOBOX_H
