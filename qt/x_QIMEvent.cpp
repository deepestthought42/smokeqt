//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qevent.h>
#include <qstring.h>

class x_QIMEvent : public QIMEvent {
public:
    static void x_0(Smoke::Stack x) {
	// QIMEvent(QEvent::Type, const QString&, int)
	x_QIMEvent* xret = new x_QIMEvent((QEvent::Type)x[1].s_enum,*(const QString *)x[2].s_voidp,(int)x[3].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QIMEvent(QEvent::Type x1, const QString& x2, int x3) : QIMEvent(x1, x2, x3) {
    }
    void x_1(Smoke::Stack x) const {
	// text()
	const QString& xret = this->QIMEvent::text();
	x[0].s_voidp = (void*)&xret;
    }
    void x_2(Smoke::Stack x) const {
	// cursorPos()
	int xret = this->QIMEvent::cursorPos();
	x[0].s_int = xret;
    }
    void x_3(Smoke::Stack x) const {
	// isAccepted()
	bool xret = this->QIMEvent::isAccepted();
	x[0].s_bool = xret;
    }
    void x_4(Smoke::Stack x) {
	// accept()
	this->QIMEvent::accept();
	(void)x; // noop (for compiler warning)
    }
    void x_5(Smoke::Stack x) {
	// ignore()
	this->QIMEvent::ignore();
	(void)x; // noop (for compiler warning)
    }
    void x_6(Smoke::Stack x) const {
	// selectionLength()
	int xret = this->QIMEvent::selectionLength();
	x[0].s_int = xret;
    }
    static void x_7(Smoke::Stack x) {
	// QIMEvent(const QIMEvent&)
	x_QIMEvent* xret = new x_QIMEvent(*(const QIMEvent *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QIMEvent(const QIMEvent& x1) : QIMEvent(x1) {
    }
    ~x_QIMEvent() { qt_Smoke->binding->deleted(152, (void*)this); }
};
void xcall_QIMEvent(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QIMEvent *xself = (x_QIMEvent*)obj;
    switch(xi) {
	case 0: x_QIMEvent::x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: x_QIMEvent::x_7(args);	break;
	case 8: delete (QIMEvent*)xself;	break;
    }
}
