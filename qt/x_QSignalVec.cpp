//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qsignalslotimp.h>

class x_QSignalVec : public QSignalVec {
public:
    static void x_0(Smoke::Stack x) {
	// QSignalVec(int)
	x_QSignalVec* xret = new x_QSignalVec((int)x[1].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QSignalVec(int x1) : QSignalVec(x1) {
    }
    static void x_1(Smoke::Stack x) {
	// QSignalVec()
	x_QSignalVec* xret = new x_QSignalVec();
	x[0].s_class = (void*)xret;
    }
    x_QSignalVec() : QSignalVec() {
    }
    static void x_2(Smoke::Stack x) {
	// QSignalVec(const QSignalVec&)
	x_QSignalVec* xret = new x_QSignalVec(*(const QSignalVec *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QSignalVec(const QSignalVec& x1) : QSignalVec(x1) {
    }
    void x_3(Smoke::Stack x) {
	// operator=(const QSignalVec&)
	QSignalVec& xret = this->QSignalVec::operator=(*(const QSignalVec *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_4(Smoke::Stack x) const {
	// at(uint)
	QConnectionList* xret = this->QSignalVec::at((uint)x[1].s_uint);
	x[0].s_class = (void*)xret;
    }
    void x_5(Smoke::Stack x) {
	// insert(uint, const QConnectionList*)
	bool xret = this->QSignalVec::insert((uint)x[1].s_uint,(const QConnectionList*)x[2].s_class);
	x[0].s_bool = xret;
    }
    ~x_QSignalVec() { qt_Smoke->binding->deleted(262, (void*)this); }
};
void xcall_QSignalVec(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QSignalVec *xself = (x_QSignalVec*)obj;
    switch(xi) {
	case 0: x_QSignalVec::x_0(args);	break;
	case 1: x_QSignalVec::x_1(args);	break;
	case 2: x_QSignalVec::x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: delete (QSignalVec*)xself;	break;
    }
}
