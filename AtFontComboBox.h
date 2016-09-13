#ifndef ATFONTCOMBOBOX_H
#define ATFONTCOMBOBOX_H

#include <QFontComboBox>
#include "AtGlobal.h"
class AT_EXPORT AtFontComboBox : public QFontComboBox
{
    Q_OBJECT
public:

    explicit AtFontComboBox(QWidget *pParent = nullptr );

    ~AtFontComboBox();

};

#endif // ATFONTCOMBOBOX_H
