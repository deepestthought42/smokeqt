//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qvariant.h>
#include <qdir.h>
#include <qcstring.h>
#include <qstring.h>
#include <qstringlist.h>
#include <qprocess.h>

class x_QProcess : public QProcess {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QProcess::Stdin;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QProcess::Stdout;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_enum = (long)QProcess::Stderr;
    }
    static void x_3(Smoke::Stack x) {
	x[0].s_enum = (long)QProcess::DupStderr;
    }
    void x_4(Smoke::Stack x) const {
	// metaObject()
	QMetaObject* xret = this->QProcess::metaObject();
	x[0].s_class = (void*)xret;
    }
    void x_5(Smoke::Stack x) const {
	// className()
	const char* xret = this->QProcess::className();
	x[0].s_voidp = (void*)xret;
    }
    void x_6(Smoke::Stack x) {
	// qt_cast(const char*)
	void* xret = this->QProcess::qt_cast((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_7(Smoke::Stack x) {
	// qt_invoke(int, QUObject*)
	bool xret = this->QProcess::qt_invoke((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_8(Smoke::Stack x) {
	// qt_emit(int, QUObject*)
	bool xret = this->QProcess::qt_emit((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_9(Smoke::Stack x) {
	// qt_property(int, int, QVariant*)
	bool xret = this->QProcess::qt_property((int)x[1].s_int,(int)x[2].s_int,(QVariant*)x[3].s_class);
	x[0].s_bool = xret;
    }
    void x_10(Smoke::Stack x) {
	// qObject()
	QObject* xret = this->QProcess::qObject();
	x[0].s_class = (void*)xret;
    }
    static void x_11(Smoke::Stack x) {
	// QProcess(QObject*, const char*)
	x_QProcess* xret = new x_QProcess((QObject*)x[1].s_class,(const char*)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QProcess(QObject* x1, const char* x2) : QProcess(x1, x2) {
    }
    static void x_12(Smoke::Stack x) {
	// QProcess(QObject*)
	x_QProcess* xret = new x_QProcess((QObject*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QProcess(QObject* x1) : QProcess(x1) {
    }
    static void x_13(Smoke::Stack x) {
	// QProcess()
	x_QProcess* xret = new x_QProcess();
	x[0].s_class = (void*)xret;
    }
    x_QProcess() : QProcess() {
    }
    static void x_14(Smoke::Stack x) {
	// QProcess(const QString&, QObject*, const char*)
	x_QProcess* xret = new x_QProcess(*(const QString *)x[1].s_voidp,(QObject*)x[2].s_class,(const char*)x[3].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QProcess(const QString& x1, QObject* x2, const char* x3) : QProcess(x1, x2, x3) {
    }
    static void x_15(Smoke::Stack x) {
	// QProcess(const QString&, QObject*)
	x_QProcess* xret = new x_QProcess(*(const QString *)x[1].s_voidp,(QObject*)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QProcess(const QString& x1, QObject* x2) : QProcess(x1, x2) {
    }
    static void x_16(Smoke::Stack x) {
	// QProcess(const QString&)
	x_QProcess* xret = new x_QProcess(*(const QString *)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QProcess(const QString& x1) : QProcess(x1) {
    }
    static void x_17(Smoke::Stack x) {
	// QProcess(const QStringList&, QObject*, const char*)
	x_QProcess* xret = new x_QProcess(*(const QStringList *)x[1].s_class,(QObject*)x[2].s_class,(const char*)x[3].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QProcess(const QStringList& x1, QObject* x2, const char* x3) : QProcess(x1, x2, x3) {
    }
    static void x_18(Smoke::Stack x) {
	// QProcess(const QStringList&, QObject*)
	x_QProcess* xret = new x_QProcess(*(const QStringList *)x[1].s_class,(QObject*)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QProcess(const QStringList& x1, QObject* x2) : QProcess(x1, x2) {
    }
    static void x_19(Smoke::Stack x) {
	// QProcess(const QStringList&)
	x_QProcess* xret = new x_QProcess(*(const QStringList *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QProcess(const QStringList& x1) : QProcess(x1) {
    }
    void x_20(Smoke::Stack x) const {
	// arguments()
	QStringList xret = this->QProcess::arguments();
	x[0].s_class = (void*)new QStringList(xret);
    }
    void x_21(Smoke::Stack x) {
	// clearArguments()
	this->QProcess::clearArguments();
	(void)x; // noop (for compiler warning)
    }
    void x_22(Smoke::Stack x) {
	// setArguments(const QStringList&)
	this->QProcess::setArguments(*(const QStringList *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_23(Smoke::Stack x) {
	// addArgument(const QString&)
	this->QProcess::addArgument(*(const QString *)x[1].s_voidp);
	(void)x; // noop (for compiler warning)
    }
    void x_24(Smoke::Stack x) const {
	// workingDirectory()
	QDir xret = this->QProcess::workingDirectory();
	x[0].s_class = (void*)new QDir(xret);
    }
    void x_25(Smoke::Stack x) {
	// setWorkingDirectory(const QDir&)
	this->QProcess::setWorkingDirectory(*(const QDir *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_26(Smoke::Stack x) {
	// setCommunication(int)
	this->QProcess::setCommunication((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_27(Smoke::Stack x) const {
	// communication()
	int xret = this->QProcess::communication();
	x[0].s_int = xret;
    }
    void x_28(Smoke::Stack x) {
	// start(QStringList*)
	bool xret = this->QProcess::start((QStringList*)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_29(Smoke::Stack x) {
	// start()
	bool xret = this->QProcess::start();
	x[0].s_bool = xret;
    }
    void x_30(Smoke::Stack x) {
	// launch(const QString&, QStringList*)
	bool xret = this->QProcess::launch(*(const QString *)x[1].s_voidp,(QStringList*)x[2].s_class);
	x[0].s_bool = xret;
    }
    void x_31(Smoke::Stack x) {
	// launch(const QString&)
	bool xret = this->QProcess::launch(*(const QString *)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    void x_32(Smoke::Stack x) {
	// launch(const QByteArray&, QStringList*)
	bool xret = this->QProcess::launch(*(const QByteArray *)x[1].s_voidp,(QStringList*)x[2].s_class);
	x[0].s_bool = xret;
    }
    void x_33(Smoke::Stack x) {
	// launch(const QByteArray&)
	bool xret = this->QProcess::launch(*(const QByteArray *)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    void x_34(Smoke::Stack x) const {
	// isRunning()
	bool xret = this->QProcess::isRunning();
	x[0].s_bool = xret;
    }
    void x_35(Smoke::Stack x) const {
	// normalExit()
	bool xret = this->QProcess::normalExit();
	x[0].s_bool = xret;
    }
    void x_36(Smoke::Stack x) const {
	// exitStatus()
	int xret = this->QProcess::exitStatus();
	x[0].s_int = xret;
    }
    void x_37(Smoke::Stack x) {
	// readStdout()
	QByteArray xret = this->QProcess::readStdout();
	x[0].s_voidp = (void*)new QByteArray(xret);
    }
    void x_38(Smoke::Stack x) {
	// readStderr()
	QByteArray xret = this->QProcess::readStderr();
	x[0].s_voidp = (void*)new QByteArray(xret);
    }
    void x_39(Smoke::Stack x) const {
	// canReadLineStdout()
	bool xret = this->QProcess::canReadLineStdout();
	x[0].s_bool = xret;
    }
    void x_40(Smoke::Stack x) const {
	// canReadLineStderr()
	bool xret = this->QProcess::canReadLineStderr();
	x[0].s_bool = xret;
    }
    void x_41(Smoke::Stack x) {
	// readLineStdout()
	QString xret = this->QProcess::readLineStdout();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_42(Smoke::Stack x) {
	// readLineStderr()
	QString xret = this->QProcess::readLineStderr();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_43(Smoke::Stack x) {
	// processIdentifier()
	QProcess::PID xret = this->QProcess::processIdentifier();
	x[0].s_long = xret;
    }
    void x_44(Smoke::Stack x) {
	// flushStdin()
	this->QProcess::flushStdin();
	(void)x; // noop (for compiler warning)
    }
    void x_45(Smoke::Stack x) const {
	// tryTerminate()
	this->QProcess::tryTerminate();
	(void)x; // noop (for compiler warning)
    }
    void x_46(Smoke::Stack x) const {
	// kill()
	this->QProcess::kill();
	(void)x; // noop (for compiler warning)
    }
    void x_47(Smoke::Stack x) {
	// writeToStdin(const QByteArray&)
	this->QProcess::writeToStdin(*(const QByteArray *)x[1].s_voidp);
	(void)x; // noop (for compiler warning)
    }
    void x_48(Smoke::Stack x) {
	// writeToStdin(const QString&)
	this->QProcess::writeToStdin(*(const QString *)x[1].s_voidp);
	(void)x; // noop (for compiler warning)
    }
    void x_49(Smoke::Stack x) {
	// closeStdin()
	this->QProcess::closeStdin();
	(void)x; // noop (for compiler warning)
    }
    void x_50(Smoke::Stack x) {
	// readyReadStdout()
	this->QProcess::readyReadStdout();
	(void)x; // noop (for compiler warning)
    }
    void x_51(Smoke::Stack x) {
	// readyReadStderr()
	this->QProcess::readyReadStderr();
	(void)x; // noop (for compiler warning)
    }
    void x_52(Smoke::Stack x) {
	// processExited()
	this->QProcess::processExited();
	(void)x; // noop (for compiler warning)
    }
    void x_53(Smoke::Stack x) {
	// wroteToStdin()
	this->QProcess::wroteToStdin();
	(void)x; // noop (for compiler warning)
    }
    void x_54(Smoke::Stack x) {
	// launchFinished()
	this->QProcess::launchFinished();
	(void)x; // noop (for compiler warning)
    }
    static void x_55(Smoke::Stack x) {
	// staticMetaObject()
	QMetaObject* xret = QProcess::staticMetaObject();
	x[0].s_class = (void*)xret;
    }
    static void x_56(Smoke::Stack x) {
	// tr(const char*, const char*)
	QString xret = QProcess::tr((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_57(Smoke::Stack x) {
	// tr(const char*)
	QString xret = QProcess::tr((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_58(Smoke::Stack x) {
	// trUtf8(const char*, const char*)
	QString xret = QProcess::trUtf8((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_59(Smoke::Stack x) {
	// trUtf8(const char*)
	QString xret = QProcess::trUtf8((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_60(Smoke::Stack x) {
	// connectNotify(const char*)
	this->QProcess::connectNotify((const char*)x[1].s_voidp);
	(void)x; // noop (for compiler warning)
    }
    void x_61(Smoke::Stack x) {
	// disconnectNotify(const char*)
	this->QProcess::disconnectNotify((const char*)x[1].s_voidp);
	(void)x; // noop (for compiler warning)
    }
    virtual void addArgument(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(7339, (void*)this, x)) return;
	this->QProcess::addArgument(x1);
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
	if(qt_Smoke->binding->callMethod(7320, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QProcess::className();
    }
    virtual void closeStdin() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(7365, (void*)this, x)) return;
	this->QProcess::closeStdin();
    }
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(7376, (void*)this, x)) return;
	this->QProcess::connectNotify(x1);
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
	if(qt_Smoke->binding->callMethod(7377, (void*)this, x)) return;
	this->QProcess::disconnectNotify(x1);
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
    virtual bool launch(const QByteArray& x1, QStringList* x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_class = (void*)x2;
	if(qt_Smoke->binding->callMethod(7348, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QProcess::launch(x1, x2);
    }
    virtual bool launch(const QString& x1, QStringList* x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_class = (void*)x2;
	if(qt_Smoke->binding->callMethod(7346, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QProcess::launch(x1, x2);
    }
    virtual QMetaObject* metaObject() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(7319, (void*)this, x)) return (QMetaObject*)x[0].s_class;
	return this->QProcess::metaObject();
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
	if(qt_Smoke->binding->callMethod(7321, (void*)this, x)) return (void*)x[0].s_voidp;
	return this->QProcess::qt_cast(x1);
    }
    virtual bool qt_emit(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(7323, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QProcess::qt_emit(x1, x2);
    }
    virtual bool qt_invoke(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(7322, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QProcess::qt_invoke(x1, x2);
    }
    virtual bool qt_property(int x1, int x2, QVariant* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_class = (void*)x3;
	if(qt_Smoke->binding->callMethod(7324, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QProcess::qt_property(x1, x2, x3);
    }
    virtual QString readLineStderr() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(7358, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QProcess::readLineStderr();
    }
    virtual QString readLineStdout() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(7357, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QProcess::readLineStdout();
    }
    virtual QByteArray readStderr() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(7354, (void*)this, x)) {
	    QByteArray *xptr = (QByteArray *)x[0].s_class;
	    QByteArray xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QProcess::readStderr();
    }
    virtual QByteArray readStdout() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(7353, (void*)this, x)) {
	    QByteArray *xptr = (QByteArray *)x[0].s_class;
	    QByteArray xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QProcess::readStdout();
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6477, (void*)this, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void setArguments(const QStringList& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(7338, (void*)this, x)) return;
	this->QProcess::setArguments(x1);
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
    virtual void setWorkingDirectory(const QDir& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(7341, (void*)this, x)) return;
	this->QProcess::setWorkingDirectory(x1);
    }
    virtual bool start(QStringList* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(7344, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QProcess::start(x1);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6514, (void*)this, x)) return;
	this->QObject::timerEvent(x1);
    }
    virtual void writeToStdin(const QByteArray& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(7363, (void*)this, x)) return;
	this->QProcess::writeToStdin(x1);
    }
    virtual void writeToStdin(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(7364, (void*)this, x)) return;
	this->QProcess::writeToStdin(x1);
    }
    static void xenum_operation(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
	switch(xtype) {
	  case 451: //QProcess::Communication
	    switch(xop) {
	      case Smoke::EnumNew:
		xdata = (void*)new QProcess::Communication;
		break;
	      case Smoke::EnumDelete:
		delete (QProcess::Communication*)xdata;
		break;
	      case Smoke::EnumFromLong:
		*(QProcess::Communication*)xdata = (QProcess::Communication)xvalue;
		break;
	      case Smoke::EnumToLong:
		xvalue = (long)*(QProcess::Communication*)xdata;
		break;
	    }
	    break;
	}
    }
    ~x_QProcess() { qt_Smoke->binding->deleted(236, (void*)this); }
};
void xenum_QProcess(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
    x_QProcess::xenum_operation(xop, xtype, xdata, xvalue);
}
void xcall_QProcess(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QProcess *xself = (x_QProcess*)obj;
    switch(xi) {
	case 0: x_QProcess::x_0(args);	break;
	case 1: x_QProcess::x_1(args);	break;
	case 2: x_QProcess::x_2(args);	break;
	case 3: x_QProcess::x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: xself->x_10(args);	break;
	case 11: x_QProcess::x_11(args);	break;
	case 12: x_QProcess::x_12(args);	break;
	case 13: x_QProcess::x_13(args);	break;
	case 14: x_QProcess::x_14(args);	break;
	case 15: x_QProcess::x_15(args);	break;
	case 16: x_QProcess::x_16(args);	break;
	case 17: x_QProcess::x_17(args);	break;
	case 18: x_QProcess::x_18(args);	break;
	case 19: x_QProcess::x_19(args);	break;
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
	case 33: xself->x_33(args);	break;
	case 34: xself->x_34(args);	break;
	case 35: xself->x_35(args);	break;
	case 36: xself->x_36(args);	break;
	case 37: xself->x_37(args);	break;
	case 38: xself->x_38(args);	break;
	case 39: xself->x_39(args);	break;
	case 40: xself->x_40(args);	break;
	case 41: xself->x_41(args);	break;
	case 42: xself->x_42(args);	break;
	case 43: xself->x_43(args);	break;
	case 44: xself->x_44(args);	break;
	case 45: xself->x_45(args);	break;
	case 46: xself->x_46(args);	break;
	case 47: xself->x_47(args);	break;
	case 48: xself->x_48(args);	break;
	case 49: xself->x_49(args);	break;
	case 50: xself->x_50(args);	break;
	case 51: xself->x_51(args);	break;
	case 52: xself->x_52(args);	break;
	case 53: xself->x_53(args);	break;
	case 54: xself->x_54(args);	break;
	case 55: x_QProcess::x_55(args);	break;
	case 56: x_QProcess::x_56(args);	break;
	case 57: x_QProcess::x_57(args);	break;
	case 58: x_QProcess::x_58(args);	break;
	case 59: x_QProcess::x_59(args);	break;
	case 60: xself->x_60(args);	break;
	case 61: xself->x_61(args);	break;
	case 62: delete (QProcess*)xself;	break;
    }
}
