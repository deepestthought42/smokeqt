//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qobjectdict.h>

class x_QObjectDictionary : public QObjectDictionary {
public:
    static void x_0(Smoke::Stack x) {
	// QObjectDictionary(int, bool, bool)
	x_QObjectDictionary* xret = new x_QObjectDictionary((int)x[1].s_int,(bool)x[2].s_bool,(bool)x[3].s_bool);
	x[0].s_class = (void*)xret;
    }
    x_QObjectDictionary(int x1, bool x2, bool x3) : QObjectDictionary(x1, x2, x3) {
    }
    static void x_1(Smoke::Stack x) {
	// QObjectDictionary(int, bool)
	x_QObjectDictionary* xret = new x_QObjectDictionary((int)x[1].s_int,(bool)x[2].s_bool);
	x[0].s_class = (void*)xret;
    }
    x_QObjectDictionary(int x1, bool x2) : QObjectDictionary(x1, x2) {
    }
    static void x_2(Smoke::Stack x) {
	// QObjectDictionary(int)
	x_QObjectDictionary* xret = new x_QObjectDictionary((int)x[1].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QObjectDictionary(int x1) : QObjectDictionary(x1) {
    }
    static void x_3(Smoke::Stack x) {
	// QObjectDictionary()
	x_QObjectDictionary* xret = new x_QObjectDictionary();
	x[0].s_class = (void*)xret;
    }
    x_QObjectDictionary() : QObjectDictionary() {
    }
    static void x_4(Smoke::Stack x) {
	// QObjectDictionary(const QObjectDictionary&)
	x_QObjectDictionary* xret = new x_QObjectDictionary(*(const QObjectDictionary *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QObjectDictionary(const QObjectDictionary& x1) : QObjectDictionary(x1) {
    }
    void x_5(Smoke::Stack x) {
	// operator=(const QObjectDictionary&)
	QObjectDictionary& xret = this->QObjectDictionary::operator=(*(const QObjectDictionary *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    ~x_QObjectDictionary() { qt_Smoke->binding->deleted(215, (void*)this); }
};
void xcall_QObjectDictionary(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QObjectDictionary *xself = (x_QObjectDictionary*)obj;
    switch(xi) {
	case 0: x_QObjectDictionary::x_0(args);	break;
	case 1: x_QObjectDictionary::x_1(args);	break;
	case 2: x_QObjectDictionary::x_2(args);	break;
	case 3: x_QObjectDictionary::x_3(args);	break;
	case 4: x_QObjectDictionary::x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: delete (QObjectDictionary*)xself;	break;
    }
}