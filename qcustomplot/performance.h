#ifndef PERFORMANCE_H
#define PERFORMANCE_H


#include <qcustomplot.h>

extern "C" {
    void set_qcp_data(QCPGraph* graph, int count, double* key, double* value);
}

#endif /* QTPERFORMANCE_H */
