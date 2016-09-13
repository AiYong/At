#ifndef AT_GLOBAL_H
#define AT_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(AT_LIBRARY)
#  define AT_EXPORT Q_DECL_EXPORT
#else
#  define AT_EXPORT Q_DECL_IMPORT
#endif

#endif // AT_GLOBAL_H
