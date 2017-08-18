#ifndef QCUSTOMPLOT_SMOKE_H
#define QCUSTOMPLOT_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_qsci_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* qcustomplot_smoke;
extern "C" SMOKE_EXPORT void init_qcustomplot_Smoke();
extern "C" SMOKE_EXPORT void delete_qcustomplot_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif /* QCUSTOMPLOT_SMOKE_H */
