#ifndef ATFRAME_H
#define ATFRAME_H

#include <QFrame>
#include "AtGlobal.h"
class AT_EXPORT AtFrame : public QFrame
{
    Q_OBJECT
public:

    AtFrame(QWidget* pParent = 0);

    virtual ~AtFrame();

};

#endif // ATFRAME_H
