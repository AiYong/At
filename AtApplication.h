#ifndef ATAPPLICATION_H
#define ATAPPLICATION_H

#include <QApplication>

#include "AtGlobal.h"

class AT_EXPORT AtApplication : public QApplication
{
    Q_OBJECT
public:

    explicit AtApplication(int &argc, char **argv, int = ApplicationFlags);

    virtual ~AtApplication();

};

#endif // ATAPPLICATION_H
