//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qpoint.h>
#include <qwindowdefs.h>
#include <qrect.h>
#include <qsize.h>

class x_QRect : public QRect {
public:
    static void x_0(Smoke::Stack x) {
	// QRect()
	x_QRect* xret = new x_QRect();
	x[0].s_class = (void*)xret;
    }
    x_QRect() : QRect() {
    }
    static void x_1(Smoke::Stack x) {
	// QRect(const QPoint&, const QPoint&)
	x_QRect* xret = new x_QRect(*(const QPoint *)x[1].s_class,*(const QPoint *)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QRect(const QPoint& x1, const QPoint& x2) : QRect(x1, x2) {
    }
    static void x_2(Smoke::Stack x) {
	// QRect(const QPoint&, const QSize&)
	x_QRect* xret = new x_QRect(*(const QPoint *)x[1].s_class,*(const QSize *)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QRect(const QPoint& x1, const QSize& x2) : QRect(x1, x2) {
    }
    static void x_3(Smoke::Stack x) {
	// QRect(int, int, int, int)
	x_QRect* xret = new x_QRect((int)x[1].s_int,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QRect(int x1, int x2, int x3, int x4) : QRect(x1, x2, x3, x4) {
    }
    void x_4(Smoke::Stack x) const {
	// isNull()
	bool xret = this->QRect::isNull();
	x[0].s_bool = xret;
    }
    void x_5(Smoke::Stack x) const {
	// isEmpty()
	bool xret = this->QRect::isEmpty();
	x[0].s_bool = xret;
    }
    void x_6(Smoke::Stack x) const {
	// isValid()
	bool xret = this->QRect::isValid();
	x[0].s_bool = xret;
    }
    void x_7(Smoke::Stack x) const {
	// normalize()
	QRect xret = this->QRect::normalize();
	x[0].s_class = (void*)new QRect(xret);
    }
    void x_8(Smoke::Stack x) const {
	// left()
	int xret = this->QRect::left();
	x[0].s_int = xret;
    }
    void x_9(Smoke::Stack x) const {
	// top()
	int xret = this->QRect::top();
	x[0].s_int = xret;
    }
    void x_10(Smoke::Stack x) const {
	// right()
	int xret = this->QRect::right();
	x[0].s_int = xret;
    }
    void x_11(Smoke::Stack x) const {
	// bottom()
	int xret = this->QRect::bottom();
	x[0].s_int = xret;
    }
    void x_12(Smoke::Stack x) {
	// rLeft()
	QCOORD& xret = this->QRect::rLeft();
	x[0].s_voidp = (void*)&xret;
    }
    void x_13(Smoke::Stack x) {
	// rTop()
	QCOORD& xret = this->QRect::rTop();
	x[0].s_voidp = (void*)&xret;
    }
    void x_14(Smoke::Stack x) {
	// rRight()
	QCOORD& xret = this->QRect::rRight();
	x[0].s_voidp = (void*)&xret;
    }
    void x_15(Smoke::Stack x) {
	// rBottom()
	QCOORD& xret = this->QRect::rBottom();
	x[0].s_voidp = (void*)&xret;
    }
    void x_16(Smoke::Stack x) const {
	// x()
	int xret = this->QRect::x();
	x[0].s_int = xret;
    }
    void x_17(Smoke::Stack x) const {
	// y()
	int xret = this->QRect::y();
	x[0].s_int = xret;
    }
    void x_18(Smoke::Stack x) {
	// setLeft(int)
	this->QRect::setLeft((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_19(Smoke::Stack x) {
	// setTop(int)
	this->QRect::setTop((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_20(Smoke::Stack x) {
	// setRight(int)
	this->QRect::setRight((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_21(Smoke::Stack x) {
	// setBottom(int)
	this->QRect::setBottom((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_22(Smoke::Stack x) {
	// setX(int)
	this->QRect::setX((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_23(Smoke::Stack x) {
	// setY(int)
	this->QRect::setY((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_24(Smoke::Stack x) {
	// setTopLeft(const QPoint&)
	this->QRect::setTopLeft(*(const QPoint *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_25(Smoke::Stack x) {
	// setBottomRight(const QPoint&)
	this->QRect::setBottomRight(*(const QPoint *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_26(Smoke::Stack x) {
	// setTopRight(const QPoint&)
	this->QRect::setTopRight(*(const QPoint *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_27(Smoke::Stack x) {
	// setBottomLeft(const QPoint&)
	this->QRect::setBottomLeft(*(const QPoint *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_28(Smoke::Stack x) const {
	// topLeft()
	QPoint xret = this->QRect::topLeft();
	x[0].s_class = (void*)new QPoint(xret);
    }
    void x_29(Smoke::Stack x) const {
	// bottomRight()
	QPoint xret = this->QRect::bottomRight();
	x[0].s_class = (void*)new QPoint(xret);
    }
    void x_30(Smoke::Stack x) const {
	// topRight()
	QPoint xret = this->QRect::topRight();
	x[0].s_class = (void*)new QPoint(xret);
    }
    void x_31(Smoke::Stack x) const {
	// bottomLeft()
	QPoint xret = this->QRect::bottomLeft();
	x[0].s_class = (void*)new QPoint(xret);
    }
    void x_32(Smoke::Stack x) const {
	// center()
	QPoint xret = this->QRect::center();
	x[0].s_class = (void*)new QPoint(xret);
    }
    void x_33(Smoke::Stack x) const {
	// rect(int*, int*, int*, int*)
	this->QRect::rect((int*)x[1].s_voidp,(int*)x[2].s_voidp,(int*)x[3].s_voidp,(int*)x[4].s_voidp);
	(void)x; // noop (for compiler warning)
    }
    void x_34(Smoke::Stack x) const {
	// coords(int*, int*, int*, int*)
	this->QRect::coords((int*)x[1].s_voidp,(int*)x[2].s_voidp,(int*)x[3].s_voidp,(int*)x[4].s_voidp);
	(void)x; // noop (for compiler warning)
    }
    void x_35(Smoke::Stack x) {
	// moveLeft(int)
	this->QRect::moveLeft((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_36(Smoke::Stack x) {
	// moveTop(int)
	this->QRect::moveTop((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_37(Smoke::Stack x) {
	// moveRight(int)
	this->QRect::moveRight((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_38(Smoke::Stack x) {
	// moveBottom(int)
	this->QRect::moveBottom((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_39(Smoke::Stack x) {
	// moveTopLeft(const QPoint&)
	this->QRect::moveTopLeft(*(const QPoint *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_40(Smoke::Stack x) {
	// moveBottomRight(const QPoint&)
	this->QRect::moveBottomRight(*(const QPoint *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_41(Smoke::Stack x) {
	// moveTopRight(const QPoint&)
	this->QRect::moveTopRight(*(const QPoint *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_42(Smoke::Stack x) {
	// moveBottomLeft(const QPoint&)
	this->QRect::moveBottomLeft(*(const QPoint *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_43(Smoke::Stack x) {
	// moveCenter(const QPoint&)
	this->QRect::moveCenter(*(const QPoint *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_44(Smoke::Stack x) {
	// moveBy(int, int)
	this->QRect::moveBy((int)x[1].s_int,(int)x[2].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_45(Smoke::Stack x) {
	// setRect(int, int, int, int)
	this->QRect::setRect((int)x[1].s_int,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_46(Smoke::Stack x) {
	// setCoords(int, int, int, int)
	this->QRect::setCoords((int)x[1].s_int,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_47(Smoke::Stack x) {
	// addCoords(int, int, int, int)
	this->QRect::addCoords((int)x[1].s_int,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_48(Smoke::Stack x) const {
	// size()
	QSize xret = this->QRect::size();
	x[0].s_class = (void*)new QSize(xret);
    }
    void x_49(Smoke::Stack x) const {
	// width()
	int xret = this->QRect::width();
	x[0].s_int = xret;
    }
    void x_50(Smoke::Stack x) const {
	// height()
	int xret = this->QRect::height();
	x[0].s_int = xret;
    }
    void x_51(Smoke::Stack x) {
	// setWidth(int)
	this->QRect::setWidth((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_52(Smoke::Stack x) {
	// setHeight(int)
	this->QRect::setHeight((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_53(Smoke::Stack x) {
	// setSize(const QSize&)
	this->QRect::setSize(*(const QSize *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_54(Smoke::Stack x) const {
	// operator|(const QRect&)
	QRect xret = this->QRect::operator|(*(const QRect *)x[1].s_class);
	x[0].s_class = (void*)new QRect(xret);
    }
    void x_55(Smoke::Stack x) const {
	// operator&(const QRect&)
	QRect xret = this->QRect::operator&(*(const QRect *)x[1].s_class);
	x[0].s_class = (void*)new QRect(xret);
    }
    void x_56(Smoke::Stack x) {
	// operator|=(const QRect&)
	QRect& xret = this->QRect::operator|=(*(const QRect *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_57(Smoke::Stack x) {
	// operator&=(const QRect&)
	QRect& xret = this->QRect::operator&=(*(const QRect *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_58(Smoke::Stack x) const {
	// contains(const QPoint&, bool)
	bool xret = this->QRect::contains(*(const QPoint *)x[1].s_class,(bool)x[2].s_bool);
	x[0].s_bool = xret;
    }
    void x_59(Smoke::Stack x) const {
	// contains(const QPoint&)
	bool xret = this->QRect::contains(*(const QPoint *)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_60(Smoke::Stack x) const {
	// contains(int, int)
	bool xret = this->QRect::contains((int)x[1].s_int,(int)x[2].s_int);
	x[0].s_bool = xret;
    }
    void x_61(Smoke::Stack x) const {
	// contains(int, int, bool)
	bool xret = this->QRect::contains((int)x[1].s_int,(int)x[2].s_int,(bool)x[3].s_bool);
	x[0].s_bool = xret;
    }
    void x_62(Smoke::Stack x) const {
	// contains(const QRect&, bool)
	bool xret = this->QRect::contains(*(const QRect *)x[1].s_class,(bool)x[2].s_bool);
	x[0].s_bool = xret;
    }
    void x_63(Smoke::Stack x) const {
	// contains(const QRect&)
	bool xret = this->QRect::contains(*(const QRect *)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_64(Smoke::Stack x) const {
	// unite(const QRect&)
	QRect xret = this->QRect::unite(*(const QRect *)x[1].s_class);
	x[0].s_class = (void*)new QRect(xret);
    }
    void x_65(Smoke::Stack x) const {
	// intersect(const QRect&)
	QRect xret = this->QRect::intersect(*(const QRect *)x[1].s_class);
	x[0].s_class = (void*)new QRect(xret);
    }
    void x_66(Smoke::Stack x) const {
	// intersects(const QRect&)
	bool xret = this->QRect::intersects(*(const QRect *)x[1].s_class);
	x[0].s_bool = xret;
    }
    static void x_67(Smoke::Stack x) {
	// QRect(const QRect&)
	x_QRect* xret = new x_QRect(*(const QRect *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QRect(const QRect& x1) : QRect(x1) {
    }
    ~x_QRect() { qt_Smoke->binding->deleted(247, (void*)this); }
};
void xcall_QRect(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QRect *xself = (x_QRect*)obj;
    switch(xi) {
	case 0: x_QRect::x_0(args);	break;
	case 1: x_QRect::x_1(args);	break;
	case 2: x_QRect::x_2(args);	break;
	case 3: x_QRect::x_3(args);	break;
	case 4: xself->x_4(args);	break;
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
	case 55: xself->x_55(args);	break;
	case 56: xself->x_56(args);	break;
	case 57: xself->x_57(args);	break;
	case 58: xself->x_58(args);	break;
	case 59: xself->x_59(args);	break;
	case 60: xself->x_60(args);	break;
	case 61: xself->x_61(args);	break;
	case 62: xself->x_62(args);	break;
	case 63: xself->x_63(args);	break;
	case 64: xself->x_64(args);	break;
	case 65: xself->x_65(args);	break;
	case 66: xself->x_66(args);	break;
	case 67: x_QRect::x_67(args);	break;
	case 68: delete (QRect*)xself;	break;
    }
}
