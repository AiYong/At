#ifndef ATSLIDER_H
#define ATSLIDER_H

#include <QSlider>
#include "AtGlobal.h"
class AT_EXPORT AtSlider : public QSlider
{
    Q_OBJECT
public:

    explicit AtSlider(QWidget *pParent = nullptr);

    explicit AtSlider(Qt::Orientation eOrientation, QWidget *pParent = nullptr);

    ~AtSlider();
};

#endif // ATSLIDER_H
