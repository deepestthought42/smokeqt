//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qcolor.h>
#include <qstring.h>
#include <qwindowdefs.h>
#include <qcolordialog.h>

class x_QColorDialog {
private:
    QColorDialog *xthis;
public:
    x_QColorDialog(void *x) : xthis((QColorDialog*)x) {}
    void x_0(Smoke::Stack x) const {
	// metaObject()
	QMetaObject* xret = xthis->QColorDialog::metaObject();
	x[0].s_class = (void*)xret;
    }
    void x_1(Smoke::Stack x) const {
	// className()
	const char* xret = xthis->QColorDialog::className();
	x[0].s_voidp = (void*)xret;
    }
    void x_2(Smoke::Stack x) {
	// qt_cast(const char*)
	void* xret = xthis->QColorDialog::qt_cast((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_3(Smoke::Stack x) {
	// qt_invoke(int, QUObject*)
	bool xret = xthis->QColorDialog::qt_invoke((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_4(Smoke::Stack x) {
	// qt_emit(int, QUObject*)
	bool xret = xthis->QColorDialog::qt_emit((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_5(Smoke::Stack x) {
	// qt_property(int, int, QVariant*)
	bool xret = xthis->QColorDialog::qt_property((int)x[1].s_int,(int)x[2].s_int,(QVariant*)x[3].s_class);
	x[0].s_bool = xret;
    }
    void x_6(Smoke::Stack x) {
	// qObject()
	QObject* xret = xthis->QColorDialog::qObject();
	x[0].s_class = (void*)xret;
    }
    static void x_7(Smoke::Stack x) {
	// staticMetaObject()
	QMetaObject* xret = QColorDialog::staticMetaObject();
	x[0].s_class = (void*)xret;
    }
    static void x_8(Smoke::Stack x) {
	// tr(const char*, const char*)
	QString xret = QColorDialog::tr((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_9(Smoke::Stack x) {
	// tr(const char*)
	QString xret = QColorDialog::tr((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_10(Smoke::Stack x) {
	// trUtf8(const char*, const char*)
	QString xret = QColorDialog::trUtf8((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_11(Smoke::Stack x) {
	// trUtf8(const char*)
	QString xret = QColorDialog::trUtf8((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_12(Smoke::Stack x) {
	// getColor(const QColor&, QWidget*, const char*)
	QColor xret = QColorDialog::getColor(*(const QColor *)x[1].s_class,(QWidget*)x[2].s_class,(const char*)x[3].s_voidp);
	x[0].s_class = (void*)new QColor(xret);
    }
    static void x_13(Smoke::Stack x) {
	// getColor(const QColor&, QWidget*)
	QColor xret = QColorDialog::getColor(*(const QColor *)x[1].s_class,(QWidget*)x[2].s_class);
	x[0].s_class = (void*)new QColor(xret);
    }
    static void x_14(Smoke::Stack x) {
	// getColor(const QColor&)
	QColor xret = QColorDialog::getColor(*(const QColor *)x[1].s_class);
	x[0].s_class = (void*)new QColor(xret);
    }
    static void x_15(Smoke::Stack x) {
	// getColor()
	QColor xret = QColorDialog::getColor();
	x[0].s_class = (void*)new QColor(xret);
    }
    static void x_16(Smoke::Stack x) {
	// getRgba(QRgb, bool*, QWidget*, const char*)
	QRgb xret = QColorDialog::getRgba((QRgb)x[1].s_uint,(bool*)x[2].s_voidp,(QWidget*)x[3].s_class,(const char*)x[4].s_voidp);
	x[0].s_uint = xret;
    }
    static void x_17(Smoke::Stack x) {
	// getRgba(QRgb, bool*, QWidget*)
	QRgb xret = QColorDialog::getRgba((QRgb)x[1].s_uint,(bool*)x[2].s_voidp,(QWidget*)x[3].s_class);
	x[0].s_uint = xret;
    }
    static void x_18(Smoke::Stack x) {
	// getRgba(QRgb, bool*)
	QRgb xret = QColorDialog::getRgba((QRgb)x[1].s_uint,(bool*)x[2].s_voidp);
	x[0].s_uint = xret;
    }
    static void x_19(Smoke::Stack x) {
	// getRgba(QRgb)
	QRgb xret = QColorDialog::getRgba((QRgb)x[1].s_uint);
	x[0].s_uint = xret;
    }
    static void x_20(Smoke::Stack x) {
	// customCount()
	int xret = QColorDialog::customCount();
	x[0].s_int = xret;
    }
    static void x_21(Smoke::Stack x) {
	// customColor(int)
	QRgb xret = QColorDialog::customColor((int)x[1].s_int);
	x[0].s_uint = xret;
    }
    static void x_22(Smoke::Stack x) {
	// setCustomColor(int, QRgb)
	QColorDialog::setCustomColor((int)x[1].s_int,(QRgb)x[2].s_uint);
	(void)x; // noop (for compiler warning)
    }
    ~x_QColorDialog() { qt_Smoke->binding->deleted(43, (void*)this); }
};
void xcall_QColorDialog(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QColorDialog xtmp(obj), *xself = &xtmp;
    switch(xi) {
	case 0: xself->x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: x_QColorDialog::x_7(args);	break;
	case 8: x_QColorDialog::x_8(args);	break;
	case 9: x_QColorDialog::x_9(args);	break;
	case 10: x_QColorDialog::x_10(args);	break;
	case 11: x_QColorDialog::x_11(args);	break;
	case 12: x_QColorDialog::x_12(args);	break;
	case 13: x_QColorDialog::x_13(args);	break;
	case 14: x_QColorDialog::x_14(args);	break;
	case 15: x_QColorDialog::x_15(args);	break;
	case 16: x_QColorDialog::x_16(args);	break;
	case 17: x_QColorDialog::x_17(args);	break;
	case 18: x_QColorDialog::x_18(args);	break;
	case 19: x_QColorDialog::x_19(args);	break;
	case 20: x_QColorDialog::x_20(args);	break;
	case 21: x_QColorDialog::x_21(args);	break;
	case 22: x_QColorDialog::x_22(args);	break;
    }
}
