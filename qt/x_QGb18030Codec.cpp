//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qstring.h>
#include <qcstring.h>
#include <qgb18030codec.h>

class x_QGb18030Codec : public QGb18030Codec {
public:
    static void x_0(Smoke::Stack x) {
	// QGb18030Codec()
	x_QGb18030Codec* xret = new x_QGb18030Codec();
	x[0].s_class = (void*)xret;
    }
    x_QGb18030Codec() : QGb18030Codec() {
    }
    void x_1(Smoke::Stack x) const {
	// mibEnum()
	int xret = this->QGb18030Codec::mibEnum();
	x[0].s_int = xret;
    }
    void x_2(Smoke::Stack x) const {
	// name()
	const char* xret = this->QGb18030Codec::name();
	x[0].s_voidp = (void*)xret;
    }
    void x_3(Smoke::Stack x) const {
	// makeDecoder()
	QTextDecoder* xret = this->QGb18030Codec::makeDecoder();
	x[0].s_class = (void*)xret;
    }
    void x_4(Smoke::Stack x) const {
	// fromUnicode(const QString&, int&)
	QCString xret = this->QGb18030Codec::fromUnicode(*(const QString *)x[1].s_voidp,*(int *)x[2].s_voidp);
	x[0].s_voidp = (void*)new QCString(xret);
    }
    void x_5(Smoke::Stack x) const {
	// toUnicode(const char*, int)
	QString xret = this->QGb18030Codec::toUnicode((const char*)x[1].s_voidp,(int)x[2].s_int);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_6(Smoke::Stack x) const {
	// heuristicContentMatch(const char*, int)
	int xret = this->QGb18030Codec::heuristicContentMatch((const char*)x[1].s_voidp,(int)x[2].s_int);
	x[0].s_int = xret;
    }
    void x_7(Smoke::Stack x) const {
	// heuristicNameMatch(const char*)
	int xret = this->QGb18030Codec::heuristicNameMatch((const char*)x[1].s_voidp);
	x[0].s_int = xret;
    }
    static void x_8(Smoke::Stack x) {
	// QGb18030Codec(const QGb18030Codec&)
	x_QGb18030Codec* xret = new x_QGb18030Codec(*(const QGb18030Codec *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QGb18030Codec(const QGb18030Codec& x1) : QGb18030Codec(x1) {
    }
    virtual bool canEncode(QChar x1) const {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(10389, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QTextCodec::canEncode(x1);
    }
    virtual bool canEncode(const QString& x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(10390, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QTextCodec::canEncode(x1);
    }
    virtual unsigned short characterFromUnicode(const QString& x1, int x2) const {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(10394, (void*)this, x)) {
	    unsigned short *xptr = (unsigned short *)x[0].s_class;
	    unsigned short xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QTextCodec::characterFromUnicode(x1, x2);
    }
    virtual QCString fromUnicode(const QString& x1, int& x2) const {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	if(qt_Smoke->binding->callMethod(3780, (void*)this, x)) {
	    QCString *xptr = (QCString *)x[0].s_class;
	    QCString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QGb18030Codec::fromUnicode(x1, x2);
    }
    virtual QByteArray fromUnicode(const QString& x1, int x2, int x3) const {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)&x1;
	x[2].s_int = x2;
	x[3].s_int = x3;
	if(qt_Smoke->binding->callMethod(10393, (void*)this, x)) {
	    QByteArray *xptr = (QByteArray *)x[0].s_class;
	    QByteArray xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QTextCodec::fromUnicode(x1, x2, x3);
    }
    virtual int heuristicContentMatch(const char* x1, int x2) const {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(3782, (void*)this, x)) return (int)x[0].s_int;
	return this->QGb18030Codec::heuristicContentMatch(x1, x2);
    }
    virtual int heuristicNameMatch(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(3783, (void*)this, x)) return (int)x[0].s_int;
	return this->QGb18030Codec::heuristicNameMatch(x1);
    }
    virtual QTextDecoder* makeDecoder() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(3779, (void*)this, x)) return (QTextDecoder*)x[0].s_class;
	return this->QGb18030Codec::makeDecoder();
    }
    virtual QTextEncoder* makeEncoder() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(10380, (void*)this, x)) return (QTextEncoder*)x[0].s_class;
	return this->QTextCodec::makeEncoder();
    }
    virtual int mibEnum() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(3777, (void*)this, x)) return (int)x[0].s_int;
	return this->QGb18030Codec::mibEnum();
    }
    virtual const char* mimeName() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(10377, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QTextCodec::mimeName();
    }
    virtual const char* name() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(3778, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QGb18030Codec::name();
    }
    virtual QString toUnicode(const char* x1, int x2) const {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(3781, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QGb18030Codec::toUnicode(x1, x2);
    }
    ~x_QGb18030Codec() { qt_Smoke->binding->deleted(131, (void*)this); }
};
void xcall_QGb18030Codec(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QGb18030Codec *xself = (x_QGb18030Codec*)obj;
    switch(xi) {
	case 0: x_QGb18030Codec::x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: x_QGb18030Codec::x_8(args);	break;
	case 9: delete (QGb18030Codec*)xself;	break;
    }
}
