//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qvariant.h>
#include <qstring.h>
#include <qsqlpropertymap.h>

class x_QSqlPropertyMap : public QSqlPropertyMap {
public:
    static void x_0(Smoke::Stack x) {
	// QSqlPropertyMap()
	x_QSqlPropertyMap* xret = new x_QSqlPropertyMap();
	x[0].s_class = (void*)xret;
    }
    x_QSqlPropertyMap() : QSqlPropertyMap() {
    }
    void x_1(Smoke::Stack x) {
	// property(QWidget*)
	QVariant xret = this->QSqlPropertyMap::property((QWidget*)x[1].s_class);
	x[0].s_class = (void*)new QVariant(xret);
    }
    void x_2(Smoke::Stack x) {
	// setProperty(QWidget*, const QVariant&)
	this->QSqlPropertyMap::setProperty((QWidget*)x[1].s_class,*(const QVariant *)x[2].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_3(Smoke::Stack x) {
	// insert(const QString&, const QString&)
	this->QSqlPropertyMap::insert(*(const QString *)x[1].s_voidp,*(const QString *)x[2].s_voidp);
	(void)x; // noop (for compiler warning)
    }
    void x_4(Smoke::Stack x) {
	// remove(const QString&)
	this->QSqlPropertyMap::remove(*(const QString *)x[1].s_voidp);
	(void)x; // noop (for compiler warning)
    }
    static void x_5(Smoke::Stack x) {
	// defaultMap()
	QSqlPropertyMap* xret = QSqlPropertyMap::defaultMap();
	x[0].s_class = (void*)xret;
    }
    static void x_6(Smoke::Stack x) {
	// installDefaultMap(QSqlPropertyMap*)
	QSqlPropertyMap::installDefaultMap((QSqlPropertyMap*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    virtual void setProperty(QWidget* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->binding->callMethod(9212, (void*)this, x)) return;
	this->QSqlPropertyMap::setProperty(x1, x2);
    }
    ~x_QSqlPropertyMap() { qt_Smoke->binding->deleted(290, (void*)this); }
};
void xcall_QSqlPropertyMap(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QSqlPropertyMap *xself = (x_QSqlPropertyMap*)obj;
    switch(xi) {
	case 0: x_QSqlPropertyMap::x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: x_QSqlPropertyMap::x_5(args);	break;
	case 6: x_QSqlPropertyMap::x_6(args);	break;
	case 7: delete (QSqlPropertyMap*)xself;	break;
    }
}
