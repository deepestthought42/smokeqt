//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qvariant.h>
#include <qstring.h>
#include <qsignalmapper.h>

class x_QSignalMapper : public QSignalMapper {
public:
    void x_0(Smoke::Stack x) const {
	// metaObject()
	QMetaObject* xret = this->QSignalMapper::metaObject();
	x[0].s_class = (void*)xret;
    }
    void x_1(Smoke::Stack x) const {
	// className()
	const char* xret = this->QSignalMapper::className();
	x[0].s_voidp = (void*)xret;
    }
    void x_2(Smoke::Stack x) {
	// qt_cast(const char*)
	void* xret = this->QSignalMapper::qt_cast((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_3(Smoke::Stack x) {
	// qt_invoke(int, QUObject*)
	bool xret = this->QSignalMapper::qt_invoke((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_4(Smoke::Stack x) {
	// qt_emit(int, QUObject*)
	bool xret = this->QSignalMapper::qt_emit((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_5(Smoke::Stack x) {
	// qt_property(int, int, QVariant*)
	bool xret = this->QSignalMapper::qt_property((int)x[1].s_int,(int)x[2].s_int,(QVariant*)x[3].s_class);
	x[0].s_bool = xret;
    }
    void x_6(Smoke::Stack x) {
	// qObject()
	QObject* xret = this->QSignalMapper::qObject();
	x[0].s_class = (void*)xret;
    }
    static void x_7(Smoke::Stack x) {
	// QSignalMapper(QObject*, const char*)
	x_QSignalMapper* xret = new x_QSignalMapper((QObject*)x[1].s_class,(const char*)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QSignalMapper(QObject* x1, const char* x2) : QSignalMapper(x1, x2) {
    }
    static void x_8(Smoke::Stack x) {
	// QSignalMapper(QObject*)
	x_QSignalMapper* xret = new x_QSignalMapper((QObject*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QSignalMapper(QObject* x1) : QSignalMapper(x1) {
    }
    void x_9(Smoke::Stack x) {
	// setMapping(const QObject*, int)
	this->QSignalMapper::setMapping((const QObject*)x[1].s_class,(int)x[2].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_10(Smoke::Stack x) {
	// setMapping(const QObject*, const QString&)
	this->QSignalMapper::setMapping((const QObject*)x[1].s_class,*(const QString *)x[2].s_voidp);
	(void)x; // noop (for compiler warning)
    }
    void x_11(Smoke::Stack x) {
	// removeMappings(const QObject*)
	this->QSignalMapper::removeMappings((const QObject*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_12(Smoke::Stack x) {
	// map()
	this->QSignalMapper::map();
	(void)x; // noop (for compiler warning)
    }
    void x_13(Smoke::Stack x) {
	// mapped(int)
	this->QSignalMapper::mapped((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_14(Smoke::Stack x) {
	// mapped(const QString&)
	this->QSignalMapper::mapped(*(const QString *)x[1].s_voidp);
	(void)x; // noop (for compiler warning)
    }
    static void x_15(Smoke::Stack x) {
	// staticMetaObject()
	QMetaObject* xret = QSignalMapper::staticMetaObject();
	x[0].s_class = (void*)xret;
    }
    static void x_16(Smoke::Stack x) {
	// tr(const char*, const char*)
	QString xret = QSignalMapper::tr((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_17(Smoke::Stack x) {
	// tr(const char*)
	QString xret = QSignalMapper::tr((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_18(Smoke::Stack x) {
	// trUtf8(const char*, const char*)
	QString xret = QSignalMapper::trUtf8((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_19(Smoke::Stack x) {
	// trUtf8(const char*)
	QString xret = QSignalMapper::trUtf8((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    virtual bool checkConnectArgs(const char* x1, const QObject* x2, const char* x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)x1;
	x[2].s_class = (void*)x2;
	x[3].s_voidp = (void*)x3;
	if(qt_Smoke->binding->callMethod(6519, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::checkConnectArgs(x1, x2, x3);
    }
    virtual void childEvent(QChildEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6515, (void*)this, x)) return;
	this->QObject::childEvent(x1);
    }
    virtual const char* className() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(8110, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QSignalMapper::className();
    }
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6517, (void*)this, x)) return;
	this->QObject::connectNotify(x1);
    }
    virtual void customEvent(QCustomEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6516, (void*)this, x)) return;
	this->QObject::customEvent(x1);
    }
    virtual void disconnectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6518, (void*)this, x)) return;
	this->QObject::disconnectNotify(x1);
    }
    virtual bool event(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6453, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::event(x1);
    }
    virtual bool eventFilter(QObject* x1, QEvent* x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)x2;
	if(qt_Smoke->binding->callMethod(6454, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::eventFilter(x1, x2);
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6476, (void*)this, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual QMetaObject* metaObject() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(8109, (void*)this, x)) return (QMetaObject*)x[0].s_class;
	return this->QSignalMapper::metaObject();
    }
    virtual QVariant property(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6490, (void*)this, x)) {
	    QVariant *xptr = (QVariant *)x[0].s_class;
	    QVariant xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QObject::property(x1);
    }
    virtual void* qt_cast(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(8111, (void*)this, x)) return (void*)x[0].s_voidp;
	return this->QSignalMapper::qt_cast(x1);
    }
    virtual bool qt_emit(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(8113, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QSignalMapper::qt_emit(x1, x2);
    }
    virtual bool qt_invoke(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(8112, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QSignalMapper::qt_invoke(x1, x2);
    }
    virtual bool qt_property(int x1, int x2, QVariant* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_class = (void*)x3;
	if(qt_Smoke->binding->callMethod(8114, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QSignalMapper::qt_property(x1, x2, x3);
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6477, (void*)this, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void setMapping(const QObject* x1, const QString& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_voidp = (void*)&x2;
	if(qt_Smoke->binding->callMethod(8120, (void*)this, x)) return;
	this->QSignalMapper::setMapping(x1, x2);
    }
    virtual void setMapping(const QObject* x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(8119, (void*)this, x)) return;
	this->QSignalMapper::setMapping(x1, x2);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6459, (void*)this, x)) return;
	this->QObject::setName(x1);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->binding->callMethod(6489, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6514, (void*)this, x)) return;
	this->QObject::timerEvent(x1);
    }
    ~x_QSignalMapper() { qt_Smoke->binding->deleted(260, (void*)this); }
};
void xcall_QSignalMapper(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QSignalMapper *xself = (x_QSignalMapper*)obj;
    switch(xi) {
	case 0: xself->x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: x_QSignalMapper::x_7(args);	break;
	case 8: x_QSignalMapper::x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: xself->x_10(args);	break;
	case 11: xself->x_11(args);	break;
	case 12: xself->x_12(args);	break;
	case 13: xself->x_13(args);	break;
	case 14: xself->x_14(args);	break;
	case 15: x_QSignalMapper::x_15(args);	break;
	case 16: x_QSignalMapper::x_16(args);	break;
	case 17: x_QSignalMapper::x_17(args);	break;
	case 18: x_QSignalMapper::x_18(args);	break;
	case 19: x_QSignalMapper::x_19(args);	break;
	case 20: delete (QSignalMapper*)xself;	break;
    }
}
