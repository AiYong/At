#ifndef ATFOCUSFRAME_H
#define ATFOCUSFRAME_H

#include <QFocusFrame>
#include "AtGlobal.h"
class AT_EXPORT AtFocusFrame : public QFocusFrame
{
    Q_OBJECT
public:

    explicit AtFocusFrame(QWidget *pParent = nullptr );

    ~AtFocusFrame();

};

#endif // ATFOCUSFRAME_H
