//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qmap.h>

class x_QMapPrivateBase : public QMapPrivateBase {
public:
    static void x_0(Smoke::Stack x) {
	// QMapPrivateBase()
	x_QMapPrivateBase* xret = new x_QMapPrivateBase();
	x[0].s_class = (void*)xret;
    }
    x_QMapPrivateBase() : QMapPrivateBase() {
    }
    static void x_1(Smoke::Stack x) {
	// QMapPrivateBase(const QMapPrivateBase*)
	x_QMapPrivateBase* xret = new x_QMapPrivateBase((const QMapPrivateBase*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QMapPrivateBase(const QMapPrivateBase* x1) : QMapPrivateBase(x1) {
    }
    void x_2(Smoke::Stack x) {
	// rotateLeft(QMapNodeBase*, QMapNodeBase*&)
	this->QMapPrivateBase::rotateLeft((QMapNodeBase*)x[1].s_class,*(QMapNodeBase* *)x[2].s_voidp);
	(void)x; // noop (for compiler warning)
    }
    void x_3(Smoke::Stack x) {
	// rotateRight(QMapNodeBase*, QMapNodeBase*&)
	this->QMapPrivateBase::rotateRight((QMapNodeBase*)x[1].s_class,*(QMapNodeBase* *)x[2].s_voidp);
	(void)x; // noop (for compiler warning)
    }
    void x_4(Smoke::Stack x) {
	// rebalance(QMapNodeBase*, QMapNodeBase*&)
	this->QMapPrivateBase::rebalance((QMapNodeBase*)x[1].s_class,*(QMapNodeBase* *)x[2].s_voidp);
	(void)x; // noop (for compiler warning)
    }
    void x_5(Smoke::Stack x) {
	// removeAndRebalance(QMapNodeBase*, QMapNodeBase*&, QMapNodeBase*&, QMapNodeBase*&)
	QMapNodeBase* xret = this->QMapPrivateBase::removeAndRebalance((QMapNodeBase*)x[1].s_class,*(QMapNodeBase* *)x[2].s_voidp,*(QMapNodeBase* *)x[3].s_voidp,*(QMapNodeBase* *)x[4].s_voidp);
	x[0].s_class = (void*)xret;
    }
    static void x_6(Smoke::Stack x) {
	// QMapPrivateBase(const QMapPrivateBase&)
	x_QMapPrivateBase* xret = new x_QMapPrivateBase(*(const QMapPrivateBase *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QMapPrivateBase(const QMapPrivateBase& x1) : QMapPrivateBase(x1) {
    }
    ~x_QMapPrivateBase() { qt_Smoke->binding->deleted(196, (void*)this); }
};
void xcall_QMapPrivateBase(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QMapPrivateBase *xself = (x_QMapPrivateBase*)obj;
    switch(xi) {
	case 0: x_QMapPrivateBase::x_0(args);	break;
	case 1: x_QMapPrivateBase::x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: x_QMapPrivateBase::x_6(args);	break;
	case 7: delete (QMapPrivateBase*)xself;	break;
    }
}
