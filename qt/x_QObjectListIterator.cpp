//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qobjectlist.h>

class x_QObjectListIterator : public QObjectListIterator {
public:
    static void x_0(Smoke::Stack x) {
	// QObjectListIterator(const QObjectList&)
	x_QObjectListIterator* xret = new x_QObjectListIterator(*(const QObjectList *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QObjectListIterator(const QObjectList& x1) : QObjectListIterator(x1) {
    }
    void x_1(Smoke::Stack x) {
	// operator=(const QObjectListIterator&)
	QObjectListIterator& xret = this->QObjectListIterator::operator=(*(const QObjectListIterator *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    ~x_QObjectListIterator() { qt_Smoke->binding->deleted(220, (void*)this); }
};
void xcall_QObjectListIterator(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QObjectListIterator *xself = (x_QObjectListIterator*)obj;
    switch(xi) {
	case 0: x_QObjectListIterator::x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: delete (QObjectListIterator*)xself;	break;
    }
}
