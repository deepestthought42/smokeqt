//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qwindowdefs.h>
#include <qsize.h>

class x_QSize : public QSize {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QSize::ScaleFree;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QSize::ScaleMin;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_enum = (long)QSize::ScaleMax;
    }
    static void x_3(Smoke::Stack x) {
	// QSize()
	x_QSize* xret = new x_QSize();
	x[0].s_class = (void*)xret;
    }
    x_QSize() : QSize() {
    }
    static void x_4(Smoke::Stack x) {
	// QSize(int, int)
	x_QSize* xret = new x_QSize((int)x[1].s_int,(int)x[2].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QSize(int x1, int x2) : QSize(x1, x2) {
    }
    void x_5(Smoke::Stack x) const {
	// isNull()
	bool xret = this->QSize::isNull();
	x[0].s_bool = xret;
    }
    void x_6(Smoke::Stack x) const {
	// isEmpty()
	bool xret = this->QSize::isEmpty();
	x[0].s_bool = xret;
    }
    void x_7(Smoke::Stack x) const {
	// isValid()
	bool xret = this->QSize::isValid();
	x[0].s_bool = xret;
    }
    void x_8(Smoke::Stack x) const {
	// width()
	int xret = this->QSize::width();
	x[0].s_int = xret;
    }
    void x_9(Smoke::Stack x) const {
	// height()
	int xret = this->QSize::height();
	x[0].s_int = xret;
    }
    void x_10(Smoke::Stack x) {
	// setWidth(int)
	this->QSize::setWidth((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_11(Smoke::Stack x) {
	// setHeight(int)
	this->QSize::setHeight((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_12(Smoke::Stack x) {
	// transpose()
	this->QSize::transpose();
	(void)x; // noop (for compiler warning)
    }
    void x_13(Smoke::Stack x) {
	// scale(int, int, QSize::ScaleMode)
	this->QSize::scale((int)x[1].s_int,(int)x[2].s_int,(QSize::ScaleMode)x[3].s_enum);
	(void)x; // noop (for compiler warning)
    }
    void x_14(Smoke::Stack x) {
	// scale(const QSize&, QSize::ScaleMode)
	this->QSize::scale(*(const QSize *)x[1].s_class,(QSize::ScaleMode)x[2].s_enum);
	(void)x; // noop (for compiler warning)
    }
    void x_15(Smoke::Stack x) const {
	// expandedTo(const QSize&)
	QSize xret = this->QSize::expandedTo(*(const QSize *)x[1].s_class);
	x[0].s_class = (void*)new QSize(xret);
    }
    void x_16(Smoke::Stack x) const {
	// boundedTo(const QSize&)
	QSize xret = this->QSize::boundedTo(*(const QSize *)x[1].s_class);
	x[0].s_class = (void*)new QSize(xret);
    }
    void x_17(Smoke::Stack x) {
	// rwidth()
	QCOORD& xret = this->QSize::rwidth();
	x[0].s_voidp = (void*)&xret;
    }
    void x_18(Smoke::Stack x) {
	// rheight()
	QCOORD& xret = this->QSize::rheight();
	x[0].s_voidp = (void*)&xret;
    }
    void x_19(Smoke::Stack x) {
	// operator+=(const QSize&)
	QSize& xret = this->QSize::operator+=(*(const QSize *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_20(Smoke::Stack x) {
	// operator-=(const QSize&)
	QSize& xret = this->QSize::operator-=(*(const QSize *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_21(Smoke::Stack x) {
	// operator*=(int)
	QSize& xret = this->QSize::operator*=((int)x[1].s_int);
	x[0].s_class = (void*)&xret;
    }
    void x_22(Smoke::Stack x) {
	// operator*=(double)
	QSize& xret = this->QSize::operator*=((double)x[1].s_double);
	x[0].s_class = (void*)&xret;
    }
    void x_23(Smoke::Stack x) {
	// operator/=(int)
	QSize& xret = this->QSize::operator/=((int)x[1].s_int);
	x[0].s_class = (void*)&xret;
    }
    void x_24(Smoke::Stack x) {
	// operator/=(double)
	QSize& xret = this->QSize::operator/=((double)x[1].s_double);
	x[0].s_class = (void*)&xret;
    }
    static void x_25(Smoke::Stack x) {
	// QSize(const QSize&)
	x_QSize* xret = new x_QSize(*(const QSize *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QSize(const QSize& x1) : QSize(x1) {
    }
    static void xenum_operation(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
	switch(xtype) {
	  case 518: //QSize::ScaleMode
	    switch(xop) {
	      case Smoke::EnumNew:
		xdata = (void*)new QSize::ScaleMode;
		break;
	      case Smoke::EnumDelete:
		delete (QSize::ScaleMode*)xdata;
		break;
	      case Smoke::EnumFromLong:
		*(QSize::ScaleMode*)xdata = (QSize::ScaleMode)xvalue;
		break;
	      case Smoke::EnumToLong:
		xvalue = (long)*(QSize::ScaleMode*)xdata;
		break;
	    }
	    break;
	}
    }
    ~x_QSize() { qt_Smoke->binding->deleted(264, (void*)this); }
};
void xenum_QSize(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
    x_QSize::xenum_operation(xop, xtype, xdata, xvalue);
}
void xcall_QSize(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QSize *xself = (x_QSize*)obj;
    switch(xi) {
	case 0: x_QSize::x_0(args);	break;
	case 1: x_QSize::x_1(args);	break;
	case 2: x_QSize::x_2(args);	break;
	case 3: x_QSize::x_3(args);	break;
	case 4: x_QSize::x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: xself->x_10(args);	break;
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
	case 25: x_QSize::x_25(args);	break;
	case 26: delete (QSize*)xself;	break;
    }
}
