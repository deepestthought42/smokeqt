//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qnamespace.h>
#include <qstring.h>
#include <qdatetime.h>

class x_QDateTime : public QDateTime {
public:
    static void x_0(Smoke::Stack x) {
	// QDateTime()
	x_QDateTime* xret = new x_QDateTime();
	x[0].s_class = (void*)xret;
    }
    x_QDateTime() : QDateTime() {
    }
    static void x_1(Smoke::Stack x) {
	// QDateTime(const QDate&)
	x_QDateTime* xret = new x_QDateTime(*(const QDate *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QDateTime(const QDate& x1) : QDateTime(x1) {
    }
    static void x_2(Smoke::Stack x) {
	// QDateTime(const QDate&, const QTime&)
	x_QDateTime* xret = new x_QDateTime(*(const QDate *)x[1].s_class,*(const QTime *)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QDateTime(const QDate& x1, const QTime& x2) : QDateTime(x1, x2) {
    }
    void x_3(Smoke::Stack x) const {
	// isNull()
	bool xret = this->QDateTime::isNull();
	x[0].s_bool = xret;
    }
    void x_4(Smoke::Stack x) const {
	// isValid()
	bool xret = this->QDateTime::isValid();
	x[0].s_bool = xret;
    }
    void x_5(Smoke::Stack x) const {
	// date()
	QDate xret = this->QDateTime::date();
	x[0].s_class = (void*)new QDate(xret);
    }
    void x_6(Smoke::Stack x) const {
	// time()
	QTime xret = this->QDateTime::time();
	x[0].s_class = (void*)new QTime(xret);
    }
    void x_7(Smoke::Stack x) {
	// setDate(const QDate&)
	this->QDateTime::setDate(*(const QDate *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_8(Smoke::Stack x) {
	// setTime(const QTime&)
	this->QDateTime::setTime(*(const QTime *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_9(Smoke::Stack x) {
	// setTime_t(uint)
	this->QDateTime::setTime_t((uint)x[1].s_uint);
	(void)x; // noop (for compiler warning)
    }
    void x_10(Smoke::Stack x) const {
	// toString(Qt::DateFormat)
	QString xret = this->QDateTime::toString((Qt::DateFormat)x[1].s_enum);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_11(Smoke::Stack x) const {
	// toString()
	QString xret = this->QDateTime::toString();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_12(Smoke::Stack x) const {
	// toString(const QString&)
	QString xret = this->QDateTime::toString(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_13(Smoke::Stack x) const {
	// addDays(int)
	QDateTime xret = this->QDateTime::addDays((int)x[1].s_int);
	x[0].s_class = (void*)new QDateTime(xret);
    }
    void x_14(Smoke::Stack x) const {
	// addMonths(int)
	QDateTime xret = this->QDateTime::addMonths((int)x[1].s_int);
	x[0].s_class = (void*)new QDateTime(xret);
    }
    void x_15(Smoke::Stack x) const {
	// addYears(int)
	QDateTime xret = this->QDateTime::addYears((int)x[1].s_int);
	x[0].s_class = (void*)new QDateTime(xret);
    }
    void x_16(Smoke::Stack x) const {
	// addSecs(int)
	QDateTime xret = this->QDateTime::addSecs((int)x[1].s_int);
	x[0].s_class = (void*)new QDateTime(xret);
    }
    void x_17(Smoke::Stack x) const {
	// daysTo(const QDateTime&)
	int xret = this->QDateTime::daysTo(*(const QDateTime *)x[1].s_class);
	x[0].s_int = xret;
    }
    void x_18(Smoke::Stack x) const {
	// secsTo(const QDateTime&)
	int xret = this->QDateTime::secsTo(*(const QDateTime *)x[1].s_class);
	x[0].s_int = xret;
    }
    void x_19(Smoke::Stack x) const {
	// operator==(const QDateTime&)
	bool xret = this->QDateTime::operator==(*(const QDateTime *)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_20(Smoke::Stack x) const {
	// operator!=(const QDateTime&)
	bool xret = this->QDateTime::operator!=(*(const QDateTime *)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_21(Smoke::Stack x) const {
	// operator<(const QDateTime&)
	bool xret = this->QDateTime::operator<(*(const QDateTime *)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_22(Smoke::Stack x) const {
	// operator<=(const QDateTime&)
	bool xret = this->QDateTime::operator<=(*(const QDateTime *)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_23(Smoke::Stack x) const {
	// operator>(const QDateTime&)
	bool xret = this->QDateTime::operator>(*(const QDateTime *)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_24(Smoke::Stack x) const {
	// operator>=(const QDateTime&)
	bool xret = this->QDateTime::operator>=(*(const QDateTime *)x[1].s_class);
	x[0].s_bool = xret;
    }
    static void x_25(Smoke::Stack x) {
	// QDateTime(const QDateTime&)
	x_QDateTime* xret = new x_QDateTime(*(const QDateTime *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QDateTime(const QDateTime& x1) : QDateTime(x1) {
    }
    static void x_26(Smoke::Stack x) {
	// currentDateTime()
	QDateTime xret = QDateTime::currentDateTime();
	x[0].s_class = (void*)new QDateTime(xret);
    }
    static void x_27(Smoke::Stack x) {
	// fromString(const QString&, Qt::DateFormat)
	QDateTime xret = QDateTime::fromString(*(const QString *)x[1].s_voidp,(Qt::DateFormat)x[2].s_enum);
	x[0].s_class = (void*)new QDateTime(xret);
    }
    static void x_28(Smoke::Stack x) {
	// fromString(const QString&)
	QDateTime xret = QDateTime::fromString(*(const QString *)x[1].s_voidp);
	x[0].s_class = (void*)new QDateTime(xret);
    }
    ~x_QDateTime() { qt_Smoke->binding->deleted(65, (void*)this); }
};
void xcall_QDateTime(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QDateTime *xself = (x_QDateTime*)obj;
    switch(xi) {
	case 0: x_QDateTime::x_0(args);	break;
	case 1: x_QDateTime::x_1(args);	break;
	case 2: x_QDateTime::x_2(args);	break;
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
	case 25: x_QDateTime::x_25(args);	break;
	case 26: x_QDateTime::x_26(args);	break;
	case 27: x_QDateTime::x_27(args);	break;
	case 28: x_QDateTime::x_28(args);	break;
	case 29: delete (QDateTime*)xself;	break;
    }
}
