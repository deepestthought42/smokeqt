//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qstring.h>
#include <qcstring.h>
#include <qtextcodec.h>

class x_QTextEncoder : public QTextEncoder {
public:
    static void x_0(Smoke::Stack x) {
	// QTextEncoder()
	x_QTextEncoder* xret = new x_QTextEncoder();
	x[0].s_class = (void*)xret;
    }
    x_QTextEncoder() : QTextEncoder() {
    }
    static void x_1(Smoke::Stack x) {
	// QTextEncoder(const QTextEncoder&)
	x_QTextEncoder* xret = new x_QTextEncoder(*(const QTextEncoder *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QTextEncoder(const QTextEncoder& x1) : QTextEncoder(x1) {
    }
    virtual QCString fromUnicode(const QString& x1, int& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	qt_Smoke->binding->callMethod(10700, (void*)this, x, true /*pure virtual*/);
	QCString *xptr = (QCString *)x[0].s_class;
	QCString xret(*xptr);
	delete xptr;
	return xret;
	// ABSTRACT
    }
    ~x_QTextEncoder() { qt_Smoke->binding->deleted(325, (void*)this); }
};
void xcall_QTextEncoder(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QTextEncoder *xself = (x_QTextEncoder*)obj;
    switch(xi) {
	case 0: x_QTextEncoder::x_0(args);	break;
	case 1: x_QTextEncoder::x_1(args);	break;
	case 2: delete (QTextEncoder*)xself;	break;
    }
}
