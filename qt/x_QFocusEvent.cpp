//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qevent.h>

class x_QFocusEvent : public QFocusEvent {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QFocusEvent::Mouse;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QFocusEvent::Tab;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_enum = (long)QFocusEvent::Backtab;
    }
    static void x_3(Smoke::Stack x) {
	x[0].s_enum = (long)QFocusEvent::ActiveWindow;
    }
    static void x_4(Smoke::Stack x) {
	x[0].s_enum = (long)QFocusEvent::Popup;
    }
    static void x_5(Smoke::Stack x) {
	x[0].s_enum = (long)QFocusEvent::Shortcut;
    }
    static void x_6(Smoke::Stack x) {
	x[0].s_enum = (long)QFocusEvent::Other;
    }
    static void x_7(Smoke::Stack x) {
	// QFocusEvent(QEvent::Type)
	x_QFocusEvent* xret = new x_QFocusEvent((QEvent::Type)x[1].s_enum);
	x[0].s_class = (void*)xret;
    }
    x_QFocusEvent(QEvent::Type x1) : QFocusEvent(x1) {
    }
    void x_8(Smoke::Stack x) const {
	// gotFocus()
	bool xret = this->QFocusEvent::gotFocus();
	x[0].s_bool = xret;
    }
    void x_9(Smoke::Stack x) const {
	// lostFocus()
	bool xret = this->QFocusEvent::lostFocus();
	x[0].s_bool = xret;
    }
    static void x_10(Smoke::Stack x) {
	// QFocusEvent(const QFocusEvent&)
	x_QFocusEvent* xret = new x_QFocusEvent(*(const QFocusEvent *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QFocusEvent(const QFocusEvent& x1) : QFocusEvent(x1) {
    }
    static void x_11(Smoke::Stack x) {
	// reason()
	QFocusEvent::Reason xret = QFocusEvent::reason();
	x[0].s_enum = xret;
    }
    static void x_12(Smoke::Stack x) {
	// setReason(QFocusEvent::Reason)
	QFocusEvent::setReason((QFocusEvent::Reason)x[1].s_enum);
	(void)x; // noop (for compiler warning)
    }
    static void x_13(Smoke::Stack x) {
	// resetReason()
	QFocusEvent::resetReason();
	(void)x; // noop (for compiler warning)
    }
    static void xenum_operation(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
	switch(xtype) {
	  case 223: //QFocusEvent::Reason
	    switch(xop) {
	      case Smoke::EnumNew:
		xdata = (void*)new QFocusEvent::Reason;
		break;
	      case Smoke::EnumDelete:
		delete (QFocusEvent::Reason*)xdata;
		break;
	      case Smoke::EnumFromLong:
		*(QFocusEvent::Reason*)xdata = (QFocusEvent::Reason)xvalue;
		break;
	      case Smoke::EnumToLong:
		xvalue = (long)*(QFocusEvent::Reason*)xdata;
		break;
	    }
	    break;
	}
    }
    ~x_QFocusEvent() { qt_Smoke->binding->deleted(114, (void*)this); }
};
void xenum_QFocusEvent(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
    x_QFocusEvent::xenum_operation(xop, xtype, xdata, xvalue);
}
void xcall_QFocusEvent(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QFocusEvent *xself = (x_QFocusEvent*)obj;
    switch(xi) {
	case 0: x_QFocusEvent::x_0(args);	break;
	case 1: x_QFocusEvent::x_1(args);	break;
	case 2: x_QFocusEvent::x_2(args);	break;
	case 3: x_QFocusEvent::x_3(args);	break;
	case 4: x_QFocusEvent::x_4(args);	break;
	case 5: x_QFocusEvent::x_5(args);	break;
	case 6: x_QFocusEvent::x_6(args);	break;
	case 7: x_QFocusEvent::x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: x_QFocusEvent::x_10(args);	break;
	case 11: x_QFocusEvent::x_11(args);	break;
	case 12: x_QFocusEvent::x_12(args);	break;
	case 13: x_QFocusEvent::x_13(args);	break;
	case 14: delete (QFocusEvent*)xself;	break;
    }
}
