//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qcolor.h>
#include <qpalette.h>
#include <qbrush.h>

class x_QColorGroup : public QColorGroup {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QColorGroup::Foreground;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QColorGroup::Button;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_enum = (long)QColorGroup::Light;
    }
    static void x_3(Smoke::Stack x) {
	x[0].s_enum = (long)QColorGroup::Midlight;
    }
    static void x_4(Smoke::Stack x) {
	x[0].s_enum = (long)QColorGroup::Dark;
    }
    static void x_5(Smoke::Stack x) {
	x[0].s_enum = (long)QColorGroup::Mid;
    }
    static void x_6(Smoke::Stack x) {
	x[0].s_enum = (long)QColorGroup::Text;
    }
    static void x_7(Smoke::Stack x) {
	x[0].s_enum = (long)QColorGroup::BrightText;
    }
    static void x_8(Smoke::Stack x) {
	x[0].s_enum = (long)QColorGroup::ButtonText;
    }
    static void x_9(Smoke::Stack x) {
	x[0].s_enum = (long)QColorGroup::Base;
    }
    static void x_10(Smoke::Stack x) {
	x[0].s_enum = (long)QColorGroup::Background;
    }
    static void x_11(Smoke::Stack x) {
	x[0].s_enum = (long)QColorGroup::Shadow;
    }
    static void x_12(Smoke::Stack x) {
	x[0].s_enum = (long)QColorGroup::Highlight;
    }
    static void x_13(Smoke::Stack x) {
	x[0].s_enum = (long)QColorGroup::HighlightedText;
    }
    static void x_14(Smoke::Stack x) {
	x[0].s_enum = (long)QColorGroup::Link;
    }
    static void x_15(Smoke::Stack x) {
	x[0].s_enum = (long)QColorGroup::LinkVisited;
    }
    static void x_16(Smoke::Stack x) {
	x[0].s_enum = (long)QColorGroup::NColorRoles;
    }
    static void x_17(Smoke::Stack x) {
	// QColorGroup()
	x_QColorGroup* xret = new x_QColorGroup();
	x[0].s_class = (void*)xret;
    }
    x_QColorGroup() : QColorGroup() {
    }
    static void x_18(Smoke::Stack x) {
	// QColorGroup(const QColor&, const QColor&, const QColor&, const QColor&, const QColor&, const QColor&, const QColor&)
	x_QColorGroup* xret = new x_QColorGroup(*(const QColor *)x[1].s_class,*(const QColor *)x[2].s_class,*(const QColor *)x[3].s_class,*(const QColor *)x[4].s_class,*(const QColor *)x[5].s_class,*(const QColor *)x[6].s_class,*(const QColor *)x[7].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QColorGroup(const QColor& x1, const QColor& x2, const QColor& x3, const QColor& x4, const QColor& x5, const QColor& x6, const QColor& x7) : QColorGroup(x1, x2, x3, x4, x5, x6, x7) {
    }
    static void x_19(Smoke::Stack x) {
	// QColorGroup(const QBrush&, const QBrush&, const QBrush&, const QBrush&, const QBrush&, const QBrush&, const QBrush&, const QBrush&, const QBrush&)
	x_QColorGroup* xret = new x_QColorGroup(*(const QBrush *)x[1].s_class,*(const QBrush *)x[2].s_class,*(const QBrush *)x[3].s_class,*(const QBrush *)x[4].s_class,*(const QBrush *)x[5].s_class,*(const QBrush *)x[6].s_class,*(const QBrush *)x[7].s_class,*(const QBrush *)x[8].s_class,*(const QBrush *)x[9].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QColorGroup(const QBrush& x1, const QBrush& x2, const QBrush& x3, const QBrush& x4, const QBrush& x5, const QBrush& x6, const QBrush& x7, const QBrush& x8, const QBrush& x9) : QColorGroup(x1, x2, x3, x4, x5, x6, x7, x8, x9) {
    }
    static void x_20(Smoke::Stack x) {
	// QColorGroup(const QColorGroup&)
	x_QColorGroup* xret = new x_QColorGroup(*(const QColorGroup *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QColorGroup(const QColorGroup& x1) : QColorGroup(x1) {
    }
    void x_21(Smoke::Stack x) {
	// operator =(const QColorGroup&)
	QColorGroup& xret = this->QColorGroup::operator =(*(const QColorGroup *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_22(Smoke::Stack x) const {
	// color(QColorGroup::ColorRole)
	const QColor& xret = this->QColorGroup::color((QColorGroup::ColorRole)x[1].s_enum);
	x[0].s_class = (void*)&xret;
    }
    void x_23(Smoke::Stack x) const {
	// brush(QColorGroup::ColorRole)
	const QBrush& xret = this->QColorGroup::brush((QColorGroup::ColorRole)x[1].s_enum);
	x[0].s_class = (void*)&xret;
    }
    void x_24(Smoke::Stack x) {
	// setColor(QColorGroup::ColorRole, const QColor&)
	this->QColorGroup::setColor((QColorGroup::ColorRole)x[1].s_enum,*(const QColor *)x[2].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_25(Smoke::Stack x) {
	// setBrush(QColorGroup::ColorRole, const QBrush&)
	this->QColorGroup::setBrush((QColorGroup::ColorRole)x[1].s_enum,*(const QBrush *)x[2].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_26(Smoke::Stack x) const {
	// foreground()
	const QColor& xret = this->QColorGroup::foreground();
	x[0].s_class = (void*)&xret;
    }
    void x_27(Smoke::Stack x) const {
	// button()
	const QColor& xret = this->QColorGroup::button();
	x[0].s_class = (void*)&xret;
    }
    void x_28(Smoke::Stack x) const {
	// light()
	const QColor& xret = this->QColorGroup::light();
	x[0].s_class = (void*)&xret;
    }
    void x_29(Smoke::Stack x) const {
	// dark()
	const QColor& xret = this->QColorGroup::dark();
	x[0].s_class = (void*)&xret;
    }
    void x_30(Smoke::Stack x) const {
	// mid()
	const QColor& xret = this->QColorGroup::mid();
	x[0].s_class = (void*)&xret;
    }
    void x_31(Smoke::Stack x) const {
	// text()
	const QColor& xret = this->QColorGroup::text();
	x[0].s_class = (void*)&xret;
    }
    void x_32(Smoke::Stack x) const {
	// base()
	const QColor& xret = this->QColorGroup::base();
	x[0].s_class = (void*)&xret;
    }
    void x_33(Smoke::Stack x) const {
	// background()
	const QColor& xret = this->QColorGroup::background();
	x[0].s_class = (void*)&xret;
    }
    void x_34(Smoke::Stack x) const {
	// midlight()
	const QColor& xret = this->QColorGroup::midlight();
	x[0].s_class = (void*)&xret;
    }
    void x_35(Smoke::Stack x) const {
	// brightText()
	const QColor& xret = this->QColorGroup::brightText();
	x[0].s_class = (void*)&xret;
    }
    void x_36(Smoke::Stack x) const {
	// buttonText()
	const QColor& xret = this->QColorGroup::buttonText();
	x[0].s_class = (void*)&xret;
    }
    void x_37(Smoke::Stack x) const {
	// shadow()
	const QColor& xret = this->QColorGroup::shadow();
	x[0].s_class = (void*)&xret;
    }
    void x_38(Smoke::Stack x) const {
	// highlight()
	const QColor& xret = this->QColorGroup::highlight();
	x[0].s_class = (void*)&xret;
    }
    void x_39(Smoke::Stack x) const {
	// highlightedText()
	const QColor& xret = this->QColorGroup::highlightedText();
	x[0].s_class = (void*)&xret;
    }
    void x_40(Smoke::Stack x) const {
	// link()
	const QColor& xret = this->QColorGroup::link();
	x[0].s_class = (void*)&xret;
    }
    void x_41(Smoke::Stack x) const {
	// linkVisited()
	const QColor& xret = this->QColorGroup::linkVisited();
	x[0].s_class = (void*)&xret;
    }
    void x_42(Smoke::Stack x) const {
	// operator==(const QColorGroup&)
	bool xret = this->QColorGroup::operator==(*(const QColorGroup *)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_43(Smoke::Stack x) const {
	// operator!=(const QColorGroup&)
	bool xret = this->QColorGroup::operator!=(*(const QColorGroup *)x[1].s_class);
	x[0].s_bool = xret;
    }
    static void xenum_operation(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
	switch(xtype) {
	  case 83: //QColorGroup::ColorRole
	    switch(xop) {
	      case Smoke::EnumNew:
		xdata = (void*)new QColorGroup::ColorRole;
		break;
	      case Smoke::EnumDelete:
		delete (QColorGroup::ColorRole*)xdata;
		break;
	      case Smoke::EnumFromLong:
		*(QColorGroup::ColorRole*)xdata = (QColorGroup::ColorRole)xvalue;
		break;
	      case Smoke::EnumToLong:
		xvalue = (long)*(QColorGroup::ColorRole*)xdata;
		break;
	    }
	    break;
	}
    }
    ~x_QColorGroup() { qt_Smoke->binding->deleted(45, (void*)this); }
};
void xenum_QColorGroup(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
    x_QColorGroup::xenum_operation(xop, xtype, xdata, xvalue);
}
void xcall_QColorGroup(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QColorGroup *xself = (x_QColorGroup*)obj;
    switch(xi) {
	case 0: x_QColorGroup::x_0(args);	break;
	case 1: x_QColorGroup::x_1(args);	break;
	case 2: x_QColorGroup::x_2(args);	break;
	case 3: x_QColorGroup::x_3(args);	break;
	case 4: x_QColorGroup::x_4(args);	break;
	case 5: x_QColorGroup::x_5(args);	break;
	case 6: x_QColorGroup::x_6(args);	break;
	case 7: x_QColorGroup::x_7(args);	break;
	case 8: x_QColorGroup::x_8(args);	break;
	case 9: x_QColorGroup::x_9(args);	break;
	case 10: x_QColorGroup::x_10(args);	break;
	case 11: x_QColorGroup::x_11(args);	break;
	case 12: x_QColorGroup::x_12(args);	break;
	case 13: x_QColorGroup::x_13(args);	break;
	case 14: x_QColorGroup::x_14(args);	break;
	case 15: x_QColorGroup::x_15(args);	break;
	case 16: x_QColorGroup::x_16(args);	break;
	case 17: x_QColorGroup::x_17(args);	break;
	case 18: x_QColorGroup::x_18(args);	break;
	case 19: x_QColorGroup::x_19(args);	break;
	case 20: x_QColorGroup::x_20(args);	break;
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
	case 44: delete (QColorGroup*)xself;	break;
    }
}
