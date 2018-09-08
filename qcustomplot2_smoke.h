#ifndef QCUSTOMPLOT2_SMOKE_H
#define QCUSTOMPLOT2_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_qsci_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* qcustomplot2_smoke;
extern "C" SMOKE_EXPORT void init_qcustomplot2_Smoke();
extern "C" SMOKE_EXPORT void delete_qcustomplot2_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif /* QCUSTOMPLOT2_SMOKE_H */
