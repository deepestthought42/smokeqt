//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qmetaobject.h>

class x_QClassInfo : public QClassInfo {
public:
    static void x_0(Smoke::Stack x) {
	// QClassInfo()
	x_QClassInfo* xret = new x_QClassInfo();
	x[0].s_class = (void*)xret;
    }
    x_QClassInfo() : QClassInfo() {
    }
    static void x_1(Smoke::Stack x) {
	// QClassInfo(const QClassInfo&)
	x_QClassInfo* xret = new x_QClassInfo(*(const QClassInfo *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QClassInfo(const QClassInfo& x1) : QClassInfo(x1) {
    }
    ~x_QClassInfo() { qt_Smoke->binding->deleted(39, (void*)this); }
};
void xcall_QClassInfo(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QClassInfo *xself = (x_QClassInfo*)obj;
    switch(xi) {
	case 0: x_QClassInfo::x_0(args);	break;
	case 1: x_QClassInfo::x_1(args);	break;
	case 2: delete (QClassInfo*)xself;	break;
    }
}
