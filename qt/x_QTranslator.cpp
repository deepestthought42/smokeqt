//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qvariant.h>
#include <qtranslator.h>
#include <qstring.h>

class x_QTranslator : public QTranslator {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QTranslator::Everything;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QTranslator::Stripped;
    }
    void x_2(Smoke::Stack x) const {
	// metaObject()
	QMetaObject* xret = this->QTranslator::metaObject();
	x[0].s_class = (void*)xret;
    }
    void x_3(Smoke::Stack x) const {
	// className()
	const char* xret = this->QTranslator::className();
	x[0].s_voidp = (void*)xret;
    }
    void x_4(Smoke::Stack x) {
	// qt_cast(const char*)
	void* xret = this->QTranslator::qt_cast((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_5(Smoke::Stack x) {
	// qt_invoke(int, QUObject*)
	bool xret = this->QTranslator::qt_invoke((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_6(Smoke::Stack x) {
	// qt_emit(int, QUObject*)
	bool xret = this->QTranslator::qt_emit((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_7(Smoke::Stack x) {
	// qt_property(int, int, QVariant*)
	bool xret = this->QTranslator::qt_property((int)x[1].s_int,(int)x[2].s_int,(QVariant*)x[3].s_class);
	x[0].s_bool = xret;
    }
    void x_8(Smoke::Stack x) {
	// qObject()
	QObject* xret = this->QTranslator::qObject();
	x[0].s_class = (void*)xret;
    }
    static void x_9(Smoke::Stack x) {
	// QTranslator(QObject*, const char*)
	x_QTranslator* xret = new x_QTranslator((QObject*)x[1].s_class,(const char*)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QTranslator(QObject* x1, const char* x2) : QTranslator(x1, x2) {
    }
    static void x_10(Smoke::Stack x) {
	// QTranslator(QObject*)
	x_QTranslator* xret = new x_QTranslator((QObject*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QTranslator(QObject* x1) : QTranslator(x1) {
    }
    void x_11(Smoke::Stack x) const {
	// find(const char*, const char*, const char*)
	QString xret = this->QTranslator::find((const char*)x[1].s_voidp,(const char*)x[2].s_voidp,(const char*)x[3].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_12(Smoke::Stack x) const {
	// find(const char*, const char*)
	QString xret = this->QTranslator::find((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_13(Smoke::Stack x) const {
	// findMessage(const char*, const char*, const char*)
	QTranslatorMessage xret = this->QTranslator::findMessage((const char*)x[1].s_voidp,(const char*)x[2].s_voidp,(const char*)x[3].s_voidp);
	x[0].s_class = (void*)new QTranslatorMessage(xret);
    }
    void x_14(Smoke::Stack x) {
	// load(const QString&, const QString&, const QString&, const QString&)
	bool xret = this->QTranslator::load(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,*(const QString *)x[3].s_voidp,*(const QString *)x[4].s_voidp);
	x[0].s_bool = xret;
    }
    void x_15(Smoke::Stack x) {
	// load(const QString&, const QString&, const QString&)
	bool xret = this->QTranslator::load(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,*(const QString *)x[3].s_voidp);
	x[0].s_bool = xret;
    }
    void x_16(Smoke::Stack x) {
	// load(const QString&, const QString&)
	bool xret = this->QTranslator::load(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_17(Smoke::Stack x) {
	// load(const QString&)
	bool xret = this->QTranslator::load(*(const QString *)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    void x_18(Smoke::Stack x) {
	// load(const uchar*, int)
	bool xret = this->QTranslator::load((const uchar*)x[1].s_voidp,(int)x[2].s_int);
	x[0].s_bool = xret;
    }
    void x_19(Smoke::Stack x) {
	// clear()
	this->QTranslator::clear();
	(void)x; // noop (for compiler warning)
    }
    void x_20(Smoke::Stack x) {
	// save(const QString&, QTranslator::SaveMode)
	bool xret = this->QTranslator::save(*(const QString *)x[1].s_voidp,(QTranslator::SaveMode)x[2].s_enum);
	x[0].s_bool = xret;
    }
    void x_21(Smoke::Stack x) {
	// save(const QString&)
	bool xret = this->QTranslator::save(*(const QString *)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    void x_22(Smoke::Stack x) {
	// insert(const QTranslatorMessage&)
	this->QTranslator::insert(*(const QTranslatorMessage *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_23(Smoke::Stack x) {
	// insert(const char*, const char*, const QString&)
	this->QTranslator::insert((const char*)x[1].s_voidp,(const char*)x[2].s_voidp,*(const QString *)x[3].s_voidp);
	(void)x; // noop (for compiler warning)
    }
    void x_24(Smoke::Stack x) {
	// remove(const QTranslatorMessage&)
	this->QTranslator::remove(*(const QTranslatorMessage *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_25(Smoke::Stack x) {
	// remove(const char*, const char*)
	this->QTranslator::remove((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	(void)x; // noop (for compiler warning)
    }
    void x_26(Smoke::Stack x) const {
	// contains(const char*, const char*, const char*)
	bool xret = this->QTranslator::contains((const char*)x[1].s_voidp,(const char*)x[2].s_voidp,(const char*)x[3].s_voidp);
	x[0].s_bool = xret;
    }
    void x_27(Smoke::Stack x) const {
	// contains(const char*, const char*)
	bool xret = this->QTranslator::contains((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_28(Smoke::Stack x) {
	// squeeze(QTranslator::SaveMode)
	this->QTranslator::squeeze((QTranslator::SaveMode)x[1].s_enum);
	(void)x; // noop (for compiler warning)
    }
    void x_29(Smoke::Stack x) {
	// squeeze()
	this->QTranslator::squeeze();
	(void)x; // noop (for compiler warning)
    }
    void x_30(Smoke::Stack x) {
	// unsqueeze()
	this->QTranslator::unsqueeze();
	(void)x; // noop (for compiler warning)
    }
    void x_31(Smoke::Stack x) const {
	// messages()
	QValueList<QTranslatorMessage> xret = this->QTranslator::messages();
	x[0].s_voidp = (void*)new QValueList<QTranslatorMessage>(xret);
    }
    void x_32(Smoke::Stack x) const {
	// isEmpty()
	bool xret = this->QTranslator::isEmpty();
	x[0].s_bool = xret;
    }
    static void x_33(Smoke::Stack x) {
	// staticMetaObject()
	QMetaObject* xret = QTranslator::staticMetaObject();
	x[0].s_class = (void*)xret;
    }
    static void x_34(Smoke::Stack x) {
	// tr(const char*, const char*)
	QString xret = QTranslator::tr((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_35(Smoke::Stack x) {
	// tr(const char*)
	QString xret = QTranslator::tr((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_36(Smoke::Stack x) {
	// trUtf8(const char*, const char*)
	QString xret = QTranslator::trUtf8((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_37(Smoke::Stack x) {
	// trUtf8(const char*)
	QString xret = QTranslator::trUtf8((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    virtual bool checkConnectArgs(const char* x1, const QObject* x2, const char* x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)x1;
	x[2].s_class = (void*)x2;
	x[3].s_voidp = (void*)x3;
	if(qt_Smoke->binding->callMethod(6714, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::checkConnectArgs(x1, x2, x3);
    }
    virtual void childEvent(QChildEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6710, (void*)this, x)) return;
	this->QObject::childEvent(x1);
    }
    virtual const char* className() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11081, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QTranslator::className();
    }
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6712, (void*)this, x)) return;
	this->QObject::connectNotify(x1);
    }
    virtual void customEvent(QCustomEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6711, (void*)this, x)) return;
	this->QObject::customEvent(x1);
    }
    virtual void disconnectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6713, (void*)this, x)) return;
	this->QObject::disconnectNotify(x1);
    }
    virtual bool event(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6644, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::event(x1);
    }
    virtual bool eventFilter(QObject* x1, QEvent* x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)x2;
	if(qt_Smoke->binding->callMethod(6645, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::eventFilter(x1, x2);
    }
    virtual QTranslatorMessage findMessage(const char* x1, const char* x2, const char* x3) const {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)x1;
	x[2].s_voidp = (void*)x2;
	x[3].s_voidp = (void*)x3;
	if(qt_Smoke->binding->callMethod(11092, (void*)this, x)) {
	    QTranslatorMessage *xptr = (QTranslatorMessage *)x[0].s_class;
	    QTranslatorMessage xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QTranslator::findMessage(x1, x2, x3);
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6667, (void*)this, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual QMetaObject* metaObject() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11080, (void*)this, x)) return (QMetaObject*)x[0].s_class;
	return this->QTranslator::metaObject();
    }
    virtual QVariant property(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6681, (void*)this, x)) {
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
	if(qt_Smoke->binding->callMethod(11082, (void*)this, x)) return (void*)x[0].s_voidp;
	return this->QTranslator::qt_cast(x1);
    }
    virtual bool qt_emit(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(11084, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QTranslator::qt_emit(x1, x2);
    }
    virtual bool qt_invoke(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(11083, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QTranslator::qt_invoke(x1, x2);
    }
    virtual bool qt_property(int x1, int x2, QVariant* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_class = (void*)x3;
	if(qt_Smoke->binding->callMethod(11085, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QTranslator::qt_property(x1, x2, x3);
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6668, (void*)this, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6650, (void*)this, x)) return;
	this->QObject::setName(x1);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->binding->callMethod(6680, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6709, (void*)this, x)) return;
	this->QObject::timerEvent(x1);
    }
    static void xenum_operation(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
	switch(xtype) {
	  case 693: //QTranslator::SaveMode
	    switch(xop) {
	      case Smoke::EnumNew:
		xdata = (void*)new QTranslator::SaveMode;
		break;
	      case Smoke::EnumDelete:
		delete (QTranslator::SaveMode*)xdata;
		break;
	      case Smoke::EnumFromLong:
		*(QTranslator::SaveMode*)xdata = (QTranslator::SaveMode)xvalue;
		break;
	      case Smoke::EnumToLong:
		xvalue = (long)*(QTranslator::SaveMode*)xdata;
		break;
	    }
	    break;
	}
    }
    ~x_QTranslator() { qt_Smoke->binding->deleted(338, (void*)this); }
};
void xenum_QTranslator(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
    x_QTranslator::xenum_operation(xop, xtype, xdata, xvalue);
}
void xcall_QTranslator(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QTranslator *xself = (x_QTranslator*)obj;
    switch(xi) {
	case 0: x_QTranslator::x_0(args);	break;
	case 1: x_QTranslator::x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: x_QTranslator::x_9(args);	break;
	case 10: x_QTranslator::x_10(args);	break;
	case 11: xself->x_11(args);	break;
	case 12: xself->x_12(args);	break;
	case 13: xself->x_13(args);	break;
	case 14: xself->x_14(args);	break;
	case 15: xself->x_15(args);	break;
	case 16: xself->x_16(args);	break;
	case 17: xself->x_17(args);	break;
	case 18: xself->x_18(args);	break;
	case 19: xself->x_19(args);	break;
	case 20: xself->x_20(args);	break;
	case 21: xself->x_21(args);	break;
	case 22: xself->x_22(args);	break;
	case 23: xself->x_23(args);	break;
	case 24: xself->x_24(args);	break;
	case 25: xself->x_25(args);	break;
	case 26: xself->x_26(args);	break;
	case 27: xself->x_27(args);	break;
	case 28: xself->x_28(args);	break;
	case 29: xself->x_29(args);	break;
	case 30: xself->x_30(args);	break;
	case 31: xself->x_31(args);	break;
	case 32: xself->x_32(args);	break;
	case 33: x_QTranslator::x_33(args);	break;
	case 34: x_QTranslator::x_34(args);	break;
	case 35: x_QTranslator::x_35(args);	break;
	case 36: x_QTranslator::x_36(args);	break;
	case 37: x_QTranslator::x_37(args);	break;
	case 38: delete (QTranslator*)xself;	break;
    }
}
