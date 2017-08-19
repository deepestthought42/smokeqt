#include "performance.h"
#include "qcustomplot.h"

#include <vector>
#include <QVector>

void set_qcp_data(QCPGraph* graph, int count, double* key, double* value)
{
    std::vector<double> auxkey, auxvalue;
    auxkey.assign(key, key+count);
    auxvalue.assign(value, value+count);
    
    graph->setData(QVector<double>::fromStdVector(auxkey), 
		   QVector<double>::fromStdVector(auxvalue));
}
