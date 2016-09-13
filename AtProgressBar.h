#ifndef ATPROGRESSBAR_H
#define ATPROGRESSBAR_H

#include <QProgressBar>
#include "AtGlobal.h"
class AT_EXPORT AtProgressBar : public QProgressBar
{
    Q_OBJECT
public:

    explicit AtProgressBar(QWidget *pParent = nullptr);

    ~AtProgressBar();

};

#endif // ATPROGRESSBAR_H
