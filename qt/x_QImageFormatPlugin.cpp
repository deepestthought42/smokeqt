//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qvariant.h>
#include <qimage.h>
#include <qimageformatplugin.h>
#include <qstring.h>
#include <qstringlist.h>

class x_QImageFormatPlugin : public QImageFormatPlugin {
public:
    void x_0(Smoke::Stack x) const {
	// metaObject()
	QMetaObject* xret = this->QImageFormatPlugin::metaObject();
	x[0].s_class = (void*)xret;
    }
    void x_1(Smoke::Stack x) const {
	// className()
	const char* xret = this->QImageFormatPlugin::className();
	x[0].s_voidp = (void*)xret;
    }
    void x_2(Smoke::Stack x) {
	// qt_cast(const char*)
	void* xret = this->QImageFormatPlugin::qt_cast((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_3(Smoke::Stack x) {
	// qt_invoke(int, QUObject*)
	bool xret = this->QImageFormatPlugin::qt_invoke((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_4(Smoke::Stack x) {
	// qt_emit(int, QUObject*)
	bool xret = this->QImageFormatPlugin::qt_emit((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_5(Smoke::Stack x) {
	// qt_property(int, int, QVariant*)
	bool xret = this->QImageFormatPlugin::qt_property((int)x[1].s_int,(int)x[2].s_int,(QVariant*)x[3].s_class);
	x[0].s_bool = xret;
    }
    void x_6(Smoke::Stack x) {
	// qObject()
	QObject* xret = this->QImageFormatPlugin::qObject();
	x[0].s_class = (void*)xret;
    }
    static void x_7(Smoke::Stack x) {
	// QImageFormatPlugin()
	x_QImageFormatPlugin* xret = new x_QImageFormatPlugin();
	x[0].s_class = (void*)xret;
    }
    x_QImageFormatPlugin() : QImageFormatPlugin() {
    }
    void x_8(Smoke::Stack x) {
	// loadImage(const QString&, const QString&, QImage*)
	bool xret = this->QImageFormatPlugin::loadImage(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,(QImage*)x[3].s_class);
	x[0].s_bool = xret;
    }
    void x_9(Smoke::Stack x) {
	// saveImage(const QString&, const QString&, const QImage&)
	bool xret = this->QImageFormatPlugin::saveImage(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp,*(const QImage *)x[3].s_class);
	x[0].s_bool = xret;
    }
    static void x_10(Smoke::Stack x) {
	// staticMetaObject()
	QMetaObject* xret = QImageFormatPlugin::staticMetaObject();
	x[0].s_class = (void*)xret;
    }
    static void x_11(Smoke::Stack x) {
	// tr(const char*, const char*)
	QString xret = QImageFormatPlugin::tr((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_12(Smoke::Stack x) {
	// tr(const char*)
	QString xret = QImageFormatPlugin::tr((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_13(Smoke::Stack x) {
	// trUtf8(const char*, const char*)
	QString xret = QImageFormatPlugin::trUtf8((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_14(Smoke::Stack x) {
	// trUtf8(const char*)
	QString xret = QImageFormatPlugin::trUtf8((const char*)x[1].s_voidp);
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
	if(qt_Smoke->binding->callMethod(4838, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QImageFormatPlugin::className();
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
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6667, (void*)this, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual bool installIOHandler(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	qt_Smoke->binding->callMethod(4849, (void*)this, x, true /*pure virtual*/);
	return (bool)x[0].s_bool;
	// ABSTRACT
    }
    virtual QStringList keys() const {
	Smoke::StackItem x[1];
	qt_Smoke->binding->callMethod(4846, (void*)this, x, true /*pure virtual*/);
	QStringList *xptr = (QStringList *)x[0].s_class;
	QStringList xret(*xptr);
	delete xptr;
	return xret;
	// ABSTRACT
    }
    virtual bool loadImage(const QString& x1, const QString& x2, QImage* x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	x[3].s_class = (void*)x3;
	if(qt_Smoke->binding->callMethod(4847, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QImageFormatPlugin::loadImage(x1, x2, x3);
    }
    virtual QMetaObject* metaObject() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(4837, (void*)this, x)) return (QMetaObject*)x[0].s_class;
	return this->QImageFormatPlugin::metaObject();
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
	if(qt_Smoke->binding->callMethod(4839, (void*)this, x)) return (void*)x[0].s_voidp;
	return this->QImageFormatPlugin::qt_cast(x1);
    }
    virtual bool qt_emit(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(4841, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QImageFormatPlugin::qt_emit(x1, x2);
    }
    virtual bool qt_invoke(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(4840, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QImageFormatPlugin::qt_invoke(x1, x2);
    }
    virtual bool qt_property(int x1, int x2, QVariant* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_class = (void*)x3;
	if(qt_Smoke->binding->callMethod(4842, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QImageFormatPlugin::qt_property(x1, x2, x3);
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6668, (void*)this, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual bool saveImage(const QString& x1, const QString& x2, const QImage& x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	x[3].s_class = (void*)&x3;
	if(qt_Smoke->binding->callMethod(4848, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QImageFormatPlugin::saveImage(x1, x2, x3);
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
    ~x_QImageFormatPlugin() { qt_Smoke->binding->deleted(166, (void*)this); }
};
void xcall_QImageFormatPlugin(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QImageFormatPlugin *xself = (x_QImageFormatPlugin*)obj;
    switch(xi) {
	case 0: xself->x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: x_QImageFormatPlugin::x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: x_QImageFormatPlugin::x_10(args);	break;
	case 11: x_QImageFormatPlugin::x_11(args);	break;
	case 12: x_QImageFormatPlugin::x_12(args);	break;
	case 13: x_QImageFormatPlugin::x_13(args);	break;
	case 14: x_QImageFormatPlugin::x_14(args);	break;
	case 15: delete (QImageFormatPlugin*)xself;	break;
    }
}
