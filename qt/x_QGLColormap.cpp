//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qglcolormap.h>
#include <qcolor.h>
#include <qwindowdefs.h>

class x_QGLColormap : public QGLColormap {
public:
    static void x_0(Smoke::Stack x) {
	// QGLColormap()
	x_QGLColormap* xret = new x_QGLColormap();
	x[0].s_class = (void*)xret;
    }
    x_QGLColormap() : QGLColormap() {
    }
    static void x_1(Smoke::Stack x) {
	// QGLColormap(const QGLColormap&)
	x_QGLColormap* xret = new x_QGLColormap(*(const QGLColormap *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QGLColormap(const QGLColormap& x1) : QGLColormap(x1) {
    }
    void x_2(Smoke::Stack x) {
	// operator=(const QGLColormap&)
	QGLColormap& xret = this->QGLColormap::operator=(*(const QGLColormap *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_3(Smoke::Stack x) const {
	// isEmpty()
	bool xret = this->QGLColormap::isEmpty();
	x[0].s_bool = xret;
    }
    void x_4(Smoke::Stack x) const {
	// size()
	int xret = this->QGLColormap::size();
	x[0].s_int = xret;
    }
    void x_5(Smoke::Stack x) {
	// detach()
	this->QGLColormap::detach();
	(void)x; // noop (for compiler warning)
    }
    void x_6(Smoke::Stack x) {
	// setEntries(int, const QRgb*, int)
	this->QGLColormap::setEntries((int)x[1].s_int,(const QRgb*)x[2].s_voidp,(int)x[3].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_7(Smoke::Stack x) {
	// setEntries(int, const QRgb*)
	this->QGLColormap::setEntries((int)x[1].s_int,(const QRgb*)x[2].s_voidp);
	(void)x; // noop (for compiler warning)
    }
    void x_8(Smoke::Stack x) {
	// setEntry(int, QRgb)
	this->QGLColormap::setEntry((int)x[1].s_int,(QRgb)x[2].s_uint);
	(void)x; // noop (for compiler warning)
    }
    void x_9(Smoke::Stack x) {
	// setEntry(int, const QColor&)
	this->QGLColormap::setEntry((int)x[1].s_int,*(const QColor *)x[2].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_10(Smoke::Stack x) const {
	// entryRgb(int)
	QRgb xret = this->QGLColormap::entryRgb((int)x[1].s_int);
	x[0].s_uint = xret;
    }
    void x_11(Smoke::Stack x) const {
	// entryColor(int)
	QColor xret = this->QGLColormap::entryColor((int)x[1].s_int);
	x[0].s_class = (void*)new QColor(xret);
    }
    void x_12(Smoke::Stack x) const {
	// find(QRgb)
	int xret = this->QGLColormap::find((QRgb)x[1].s_uint);
	x[0].s_int = xret;
    }
    void x_13(Smoke::Stack x) const {
	// findNearest(QRgb)
	int xret = this->QGLColormap::findNearest((QRgb)x[1].s_uint);
	x[0].s_int = xret;
    }
    ~x_QGLColormap() { qt_Smoke->binding->deleted(130, (void*)this); }
};
void xcall_QGLColormap(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QGLColormap *xself = (x_QGLColormap*)obj;
    switch(xi) {
	case 0: x_QGLColormap::x_0(args);	break;
	case 1: x_QGLColormap::x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
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
	case 14: delete (QGLColormap*)xself;	break;
    }
}
