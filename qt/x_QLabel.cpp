//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qlabel.h>
#include <qcursor.h>
#include <qcolor.h>
#include <qstring.h>
#include <qsize.h>
#include <qvariant.h>
#include <qregion.h>
#include <qpoint.h>
#include <qfont.h>
#include <qpicture.h>
#include <qbitmap.h>
#include <qsizepolicy.h>
#include <qpalette.h>
#include <qmovie.h>
#include <qnamespace.h>
#include <qwidget.h>
#include <qpixmap.h>
#include <qrect.h>
#include <qstyle.h>

class x_QLabel : public QLabel {
public:
    void x_0(Smoke::Stack x) const {
	// metaObject()
	QMetaObject* xret = this->QLabel::metaObject();
	x[0].s_class = (void*)xret;
    }
    void x_1(Smoke::Stack x) const {
	// className()
	const char* xret = this->QLabel::className();
	x[0].s_voidp = (void*)xret;
    }
    void x_2(Smoke::Stack x) {
	// qt_cast(const char*)
	void* xret = this->QLabel::qt_cast((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_3(Smoke::Stack x) {
	// qt_invoke(int, QUObject*)
	bool xret = this->QLabel::qt_invoke((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_4(Smoke::Stack x) {
	// qt_emit(int, QUObject*)
	bool xret = this->QLabel::qt_emit((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_5(Smoke::Stack x) {
	// qt_property(int, int, QVariant*)
	bool xret = this->QLabel::qt_property((int)x[1].s_int,(int)x[2].s_int,(QVariant*)x[3].s_class);
	x[0].s_bool = xret;
    }
    void x_6(Smoke::Stack x) {
	// qObject()
	QObject* xret = this->QLabel::qObject();
	x[0].s_class = (void*)xret;
    }
    static void x_7(Smoke::Stack x) {
	// QLabel(QWidget*, const char*, Qt::WFlags)
	x_QLabel* xret = new x_QLabel((QWidget*)x[1].s_class,(const char*)x[2].s_voidp,(Qt::WFlags)x[3].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QLabel(QWidget* x1, const char* x2, Qt::WFlags x3) : QLabel(x1, x2, x3) {
    }
    static void x_8(Smoke::Stack x) {
	// QLabel(QWidget*, const char*)
	x_QLabel* xret = new x_QLabel((QWidget*)x[1].s_class,(const char*)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QLabel(QWidget* x1, const char* x2) : QLabel(x1, x2) {
    }
    static void x_9(Smoke::Stack x) {
	// QLabel(QWidget*)
	x_QLabel* xret = new x_QLabel((QWidget*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QLabel(QWidget* x1) : QLabel(x1) {
    }
    static void x_10(Smoke::Stack x) {
	// QLabel(const QString&, QWidget*, const char*, Qt::WFlags)
	x_QLabel* xret = new x_QLabel(*(const QString *)x[1].s_voidp,(QWidget*)x[2].s_class,(const char*)x[3].s_voidp,(Qt::WFlags)x[4].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QLabel(const QString& x1, QWidget* x2, const char* x3, Qt::WFlags x4) : QLabel(x1, x2, x3, x4) {
    }
    static void x_11(Smoke::Stack x) {
	// QLabel(const QString&, QWidget*, const char*)
	x_QLabel* xret = new x_QLabel(*(const QString *)x[1].s_voidp,(QWidget*)x[2].s_class,(const char*)x[3].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QLabel(const QString& x1, QWidget* x2, const char* x3) : QLabel(x1, x2, x3) {
    }
    static void x_12(Smoke::Stack x) {
	// QLabel(const QString&, QWidget*)
	x_QLabel* xret = new x_QLabel(*(const QString *)x[1].s_voidp,(QWidget*)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QLabel(const QString& x1, QWidget* x2) : QLabel(x1, x2) {
    }
    static void x_13(Smoke::Stack x) {
	// QLabel(QWidget*, const QString&, QWidget*, const char*, Qt::WFlags)
	x_QLabel* xret = new x_QLabel((QWidget*)x[1].s_class,*(const QString *)x[2].s_voidp,(QWidget*)x[3].s_class,(const char*)x[4].s_voidp,(Qt::WFlags)x[5].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QLabel(QWidget* x1, const QString& x2, QWidget* x3, const char* x4, Qt::WFlags x5) : QLabel(x1, x2, x3, x4, x5) {
    }
    static void x_14(Smoke::Stack x) {
	// QLabel(QWidget*, const QString&, QWidget*, const char*)
	x_QLabel* xret = new x_QLabel((QWidget*)x[1].s_class,*(const QString *)x[2].s_voidp,(QWidget*)x[3].s_class,(const char*)x[4].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QLabel(QWidget* x1, const QString& x2, QWidget* x3, const char* x4) : QLabel(x1, x2, x3, x4) {
    }
    static void x_15(Smoke::Stack x) {
	// QLabel(QWidget*, const QString&, QWidget*)
	x_QLabel* xret = new x_QLabel((QWidget*)x[1].s_class,*(const QString *)x[2].s_voidp,(QWidget*)x[3].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QLabel(QWidget* x1, const QString& x2, QWidget* x3) : QLabel(x1, x2, x3) {
    }
    void x_16(Smoke::Stack x) const {
	// text()
	QString xret = this->QLabel::text();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_17(Smoke::Stack x) const {
	// pixmap()
	QPixmap* xret = this->QLabel::pixmap();
	x[0].s_class = (void*)xret;
    }
    void x_18(Smoke::Stack x) const {
	// picture()
	QPicture* xret = this->QLabel::picture();
	x[0].s_class = (void*)xret;
    }
    void x_19(Smoke::Stack x) const {
	// movie()
	QMovie* xret = this->QLabel::movie();
	x[0].s_class = (void*)xret;
    }
    void x_20(Smoke::Stack x) const {
	// textFormat()
	Qt::TextFormat xret = this->QLabel::textFormat();
	x[0].s_enum = xret;
    }
    void x_21(Smoke::Stack x) {
	// setTextFormat(Qt::TextFormat)
	this->QLabel::setTextFormat((Qt::TextFormat)x[1].s_enum);
	(void)x; // noop (for compiler warning)
    }
    void x_22(Smoke::Stack x) const {
	// alignment()
	int xret = this->QLabel::alignment();
	x[0].s_int = xret;
    }
    void x_23(Smoke::Stack x) {
	// setAlignment(int)
	this->QLabel::setAlignment((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_24(Smoke::Stack x) const {
	// indent()
	int xret = this->QLabel::indent();
	x[0].s_int = xret;
    }
    void x_25(Smoke::Stack x) {
	// setIndent(int)
	this->QLabel::setIndent((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_26(Smoke::Stack x) const {
	// autoResize()
	bool xret = this->QLabel::autoResize();
	x[0].s_bool = xret;
    }
    void x_27(Smoke::Stack x) {
	// setAutoResize(bool)
	this->QLabel::setAutoResize((bool)x[1].s_bool);
	(void)x; // noop (for compiler warning)
    }
    void x_28(Smoke::Stack x) const {
	// hasScaledContents()
	bool xret = this->QLabel::hasScaledContents();
	x[0].s_bool = xret;
    }
    void x_29(Smoke::Stack x) {
	// setScaledContents(bool)
	this->QLabel::setScaledContents((bool)x[1].s_bool);
	(void)x; // noop (for compiler warning)
    }
    void x_30(Smoke::Stack x) const {
	// sizeHint()
	QSize xret = this->QLabel::sizeHint();
	x[0].s_class = (void*)new QSize(xret);
    }
    void x_31(Smoke::Stack x) const {
	// minimumSizeHint()
	QSize xret = this->QLabel::minimumSizeHint();
	x[0].s_class = (void*)new QSize(xret);
    }
    void x_32(Smoke::Stack x) {
	// setBuddy(QWidget*)
	this->QLabel::setBuddy((QWidget*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_33(Smoke::Stack x) const {
	// buddy()
	QWidget* xret = this->QLabel::buddy();
	x[0].s_class = (void*)xret;
    }
    void x_34(Smoke::Stack x) const {
	// heightForWidth(int)
	int xret = this->QLabel::heightForWidth((int)x[1].s_int);
	x[0].s_int = xret;
    }
    void x_35(Smoke::Stack x) {
	// setFont(const QFont&)
	this->QLabel::setFont(*(const QFont *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_36(Smoke::Stack x) {
	// setText(const QString&)
	this->QLabel::setText(*(const QString *)x[1].s_voidp);
	(void)x; // noop (for compiler warning)
    }
    void x_37(Smoke::Stack x) {
	// setPixmap(const QPixmap&)
	this->QLabel::setPixmap(*(const QPixmap *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_38(Smoke::Stack x) {
	// setPicture(const QPicture&)
	this->QLabel::setPicture(*(const QPicture *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_39(Smoke::Stack x) {
	// setMovie(const QMovie&)
	this->QLabel::setMovie(*(const QMovie *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_40(Smoke::Stack x) {
	// setNum(int)
	this->QLabel::setNum((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_41(Smoke::Stack x) {
	// setNum(double)
	this->QLabel::setNum((double)x[1].s_double);
	(void)x; // noop (for compiler warning)
    }
    void x_42(Smoke::Stack x) {
	// clear()
	this->QLabel::clear();
	(void)x; // noop (for compiler warning)
    }
    static void x_43(Smoke::Stack x) {
	// staticMetaObject()
	QMetaObject* xret = QLabel::staticMetaObject();
	x[0].s_class = (void*)xret;
    }
    static void x_44(Smoke::Stack x) {
	// tr(const char*, const char*)
	QString xret = QLabel::tr((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_45(Smoke::Stack x) {
	// tr(const char*)
	QString xret = QLabel::tr((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_46(Smoke::Stack x) {
	// trUtf8(const char*, const char*)
	QString xret = QLabel::trUtf8((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_47(Smoke::Stack x) {
	// trUtf8(const char*)
	QString xret = QLabel::trUtf8((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_48(Smoke::Stack x) {
	// drawContents(QPainter*)
	this->QLabel::drawContents((QPainter*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_49(Smoke::Stack x) {
	// fontChange(const QFont&)
	this->QLabel::fontChange(*(const QFont *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_50(Smoke::Stack x) {
	// resizeEvent(QResizeEvent*)
	this->QLabel::resizeEvent((QResizeEvent*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    virtual void adjustSize() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11546, (void*)this, x)) return;
	this->QWidget::adjustSize();
    }
    virtual bool checkConnectArgs(const char* x1, const QObject* x2, const char* x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)x1;
	x[2].s_class = (void*)x2;
	x[3].s_voidp = (void*)x3;
	if(qt_Smoke->binding->callMethod(6519, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::checkConnectArgs(x1, x2, x3);
    }
    virtual void childEvent(QChildEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6515, (void*)this, x)) return;
	this->QObject::childEvent(x1);
    }
    virtual const char* className() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(4856, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QLabel::className();
    }
    virtual bool close(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(11533, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QWidget::close(x1);
    }
    virtual void closeEvent(QCloseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11646, (void*)this, x)) return;
	this->QWidget::closeEvent(x1);
    }
    virtual bool cmd(int x1, QPainter* x2, QPDevCmdParam* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = x1;
	x[2].s_class = (void*)x2;
	x[3].s_voidp = (void*)x3;
	if(qt_Smoke->binding->callMethod(6631, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QPaintDevice::cmd(x1, x2, x3);
    }
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6517, (void*)this, x)) return;
	this->QObject::connectNotify(x1);
    }
    virtual void contextMenuEvent(QContextMenuEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11647, (void*)this, x)) return;
	this->QWidget::contextMenuEvent(x1);
    }
    virtual void create(WId x1, bool x2, bool x3) {
	Smoke::StackItem x[4];
	x[1].s_ulong = x1;
	x[2].s_bool = x2;
	x[3].s_bool = x3;
	if(qt_Smoke->binding->callMethod(11666, (void*)this, x)) return;
	this->QWidget::create(x1, x2, x3);
    }
    virtual void customEvent(QCustomEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6516, (void*)this, x)) return;
	this->QObject::customEvent(x1);
    }
    virtual bool customWhatsThis() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11571, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QWidget::customWhatsThis();
    }
    virtual void destroy(bool x1, bool x2) {
	Smoke::StackItem x[3];
	x[1].s_bool = x1;
	x[2].s_bool = x2;
	if(qt_Smoke->binding->callMethod(11670, (void*)this, x)) return;
	this->QWidget::destroy(x1, x2);
    }
    virtual void disconnectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6518, (void*)this, x)) return;
	this->QObject::disconnectNotify(x1);
    }
    virtual void dragEnterEvent(QDragEnterEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11652, (void*)this, x)) return;
	this->QWidget::dragEnterEvent(x1);
    }
    virtual void dragLeaveEvent(QDragLeaveEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11654, (void*)this, x)) return;
	this->QWidget::dragLeaveEvent(x1);
    }
    virtual void dragMoveEvent(QDragMoveEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11653, (void*)this, x)) return;
	this->QWidget::dragMoveEvent(x1);
    }
    virtual void drawContents(QPainter* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(4904, (void*)this, x)) return;
	this->QLabel::drawContents(x1);
    }
    virtual void drawFrame(QPainter* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(3511, (void*)this, x)) return;
	this->QFrame::drawFrame(x1);
    }
    virtual void dropEvent(QDropEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11655, (void*)this, x)) return;
	this->QWidget::dropEvent(x1);
    }
    virtual void enabledChange(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(11660, (void*)this, x)) return;
	this->QWidget::enabledChange(x1);
    }
    virtual void enterEvent(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11641, (void*)this, x)) return;
	this->QWidget::enterEvent(x1);
    }
    virtual bool event(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11631, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QWidget::event(x1);
    }
    virtual bool eventFilter(QObject* x1, QEvent* x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)x2;
	if(qt_Smoke->binding->callMethod(6454, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::eventFilter(x1, x2);
    }
    virtual void focusInEvent(QFocusEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11639, (void*)this, x)) return;
	this->QWidget::focusInEvent(x1);
    }
    virtual bool focusNextPrevChild(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(11679, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QWidget::focusNextPrevChild(x1);
    }
    virtual void focusOutEvent(QFocusEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11640, (void*)this, x)) return;
	this->QWidget::focusOutEvent(x1);
    }
    virtual void fontChange(const QFont& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(4905, (void*)this, x)) return;
	this->QLabel::fontChange(x1);
    }
    virtual int fontInf(QFont* x1, int x2) const {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(6636, (void*)this, x)) return (int)x[0].s_int;
	return this->QPaintDevice::fontInf(x1, x2);
    }
    virtual int fontMet(QFont* x1, int x2, const char* x3, int x4) const {
	Smoke::StackItem x[5];
	x[1].s_class = (void*)x1;
	x[2].s_int = x2;
	x[3].s_voidp = (void*)x3;
	x[4].s_int = x4;
	if(qt_Smoke->binding->callMethod(6633, (void*)this, x)) return (int)x[0].s_int;
	return this->QPaintDevice::fontMet(x1, x2, x3, x4);
    }
    virtual void frameChanged() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(3513, (void*)this, x)) return;
	this->QFrame::frameChanged();
    }
    virtual int heightForWidth(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(4890, (void*)this, x)) return (int)x[0].s_int;
	return this->QLabel::heightForWidth(x1);
    }
    virtual void hide() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11603, (void*)this, x)) return;
	this->QWidget::hide();
    }
    virtual void hideEvent(QHideEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11657, (void*)this, x)) return;
	this->QWidget::hideEvent(x1);
    }
    virtual void imComposeEvent(QIMEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11649, (void*)this, x)) return;
	this->QWidget::imComposeEvent(x1);
    }
    virtual void imEndEvent(QIMEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11650, (void*)this, x)) return;
	this->QWidget::imEndEvent(x1);
    }
    virtual void imStartEvent(QIMEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11648, (void*)this, x)) return;
	this->QWidget::imStartEvent(x1);
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6476, (void*)this, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual void keyPressEvent(QKeyEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11637, (void*)this, x)) return;
	this->QWidget::keyPressEvent(x1);
    }
    virtual void keyReleaseEvent(QKeyEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11638, (void*)this, x)) return;
	this->QWidget::keyReleaseEvent(x1);
    }
    virtual void leaveEvent(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11642, (void*)this, x)) return;
	this->QWidget::leaveEvent(x1);
    }
    virtual QMetaObject* metaObject() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(4855, (void*)this, x)) return (QMetaObject*)x[0].s_class;
	return this->QLabel::metaObject();
    }
    virtual int metric(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(11664, (void*)this, x)) return (int)x[0].s_int;
	return this->QWidget::metric(x1);
    }
    virtual QSize minimumSizeHint() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(4887, (void*)this, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QLabel::minimumSizeHint();
    }
    virtual void mouseDoubleClickEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11634, (void*)this, x)) return;
	this->QWidget::mouseDoubleClickEvent(x1);
    }
    virtual void mouseMoveEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11635, (void*)this, x)) return;
	this->QWidget::mouseMoveEvent(x1);
    }
    virtual void mousePressEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11632, (void*)this, x)) return;
	this->QWidget::mousePressEvent(x1);
    }
    virtual void mouseReleaseEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11633, (void*)this, x)) return;
	this->QWidget::mouseReleaseEvent(x1);
    }
    virtual void move(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(11615, (void*)this, x)) return;
	this->QWidget::move(x1, x2);
    }
    virtual void moveEvent(QMoveEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11644, (void*)this, x)) return;
	this->QWidget::moveEvent(x1);
    }
    virtual void paintEvent(QPaintEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(3509, (void*)this, x)) return;
	this->QFrame::paintEvent(x1);
    }
    virtual void paletteChange(const QPalette& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11661, (void*)this, x)) return;
	this->QWidget::paletteChange(x1);
    }
    virtual void polish() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11609, (void*)this, x)) return;
	this->QWidget::polish();
    }
    virtual QVariant property(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6490, (void*)this, x)) {
	    QVariant *xptr = (QVariant *)x[0].s_class;
	    QVariant xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QObject::property(x1);
    }
    virtual void* qt_cast(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(4857, (void*)this, x)) return (void*)x[0].s_voidp;
	return this->QLabel::qt_cast(x1);
    }
    virtual bool qt_emit(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(4859, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QLabel::qt_emit(x1, x2);
    }
    virtual bool qt_invoke(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(4858, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QLabel::qt_invoke(x1, x2);
    }
    virtual bool qt_property(int x1, int x2, QVariant* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_class = (void*)x3;
	if(qt_Smoke->binding->callMethod(4860, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QLabel::qt_property(x1, x2, x3);
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6477, (void*)this, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void reparent(QWidget* x1, Qt::WFlags x2, const QPoint& x3, bool x4) {
	Smoke::StackItem x[5];
	x[1].s_class = (void*)x1;
	x[2].s_int = x2;
	x[3].s_class = (void*)&x3;
	x[4].s_bool = x4;
	if(qt_Smoke->binding->callMethod(11549, (void*)this, x)) return;
	this->QWidget::reparent(x1, x2, x3, x4);
    }
    virtual void resize(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(11617, (void*)this, x)) return;
	this->QWidget::resize(x1, x2);
    }
    virtual void resizeEvent(QResizeEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(4906, (void*)this, x)) return;
	this->QLabel::resizeEvent(x1);
    }
    virtual int resolution() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(6629, (void*)this, x)) return (int)x[0].s_int;
	return this->QPaintDevice::resolution();
    }
    virtual void setAcceptDrops(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(11566, (void*)this, x)) return;
	this->QWidget::setAcceptDrops(x1);
    }
    virtual void setActiveWindow() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11520, (void*)this, x)) return;
	this->QWidget::setActiveWindow();
    }
    virtual void setAlignment(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(4879, (void*)this, x)) return;
	this->QLabel::setAlignment(x1);
    }
    virtual void setAutoMask(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(11567, (void*)this, x)) return;
	this->QWidget::setAutoMask(x1);
    }
    virtual void setAutoResize(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(4883, (void*)this, x)) return;
	this->QLabel::setAutoResize(x1);
    }
    virtual void setBackgroundColor(const QColor& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11516, (void*)this, x)) return;
	this->QWidget::setBackgroundColor(x1);
    }
    virtual void setBackgroundMode(Qt::BackgroundMode x1) {
	Smoke::StackItem x[2];
	x[1].s_enum = x1;
	if(qt_Smoke->binding->callMethod(11478, (void*)this, x)) return;
	this->QWidget::setBackgroundMode(x1);
    }
    virtual void setBackgroundOrigin(QWidget::BackgroundOrigin x1) {
	Smoke::StackItem x[2];
	x[1].s_enum = x1;
	if(qt_Smoke->binding->callMethod(11569, (void*)this, x)) return;
	this->QWidget::setBackgroundOrigin(x1);
    }
    virtual void setBackgroundPixmap(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11518, (void*)this, x)) return;
	this->QWidget::setBackgroundPixmap(x1);
    }
    virtual void setBuddy(QWidget* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(4888, (void*)this, x)) return;
	this->QLabel::setBuddy(x1);
    }
    virtual void setCaption(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11584, (void*)this, x)) return;
	this->QWidget::setCaption(x1);
    }
    virtual void setCursor(const QCursor& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11505, (void*)this, x)) return;
	this->QWidget::setCursor(x1);
    }
    virtual void setEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(11582, (void*)this, x)) return;
	this->QWidget::setEnabled(x1);
    }
    virtual void setEraseColor(const QColor& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11482, (void*)this, x)) return;
	this->QWidget::setEraseColor(x1);
    }
    virtual void setErasePixmap(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11484, (void*)this, x)) return;
	this->QWidget::setErasePixmap(x1);
    }
    virtual void setFocus() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11588, (void*)this, x)) return;
	this->QWidget::setFocus();
    }
    virtual void setFocusPolicy(QWidget::FocusPolicy x1) {
	Smoke::StackItem x[2];
	x[1].s_enum = x1;
	if(qt_Smoke->binding->callMethod(11523, (void*)this, x)) return;
	this->QWidget::setFocusPolicy(x1);
    }
    virtual void setFocusProxy(QWidget* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11525, (void*)this, x)) return;
	this->QWidget::setFocusProxy(x1);
    }
    virtual void setFont(const QFont& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(4891, (void*)this, x)) return;
	this->QLabel::setFont(x1);
    }
    virtual void setFrameRect(const QRect& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(3502, (void*)this, x)) return;
	this->QFrame::setFrameRect(x1);
    }
    virtual void setFrameStyle(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(3486, (void*)this, x)) return;
	this->QFrame::setFrameStyle(x1);
    }
    virtual void setGeometry(const QRect& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11620, (void*)this, x)) return;
	this->QWidget::setGeometry(x1);
    }
    virtual void setGeometry(int x1, int x2, int x3, int x4) {
	Smoke::StackItem x[5];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_int = x3;
	x[4].s_int = x4;
	if(qt_Smoke->binding->callMethod(11619, (void*)this, x)) return;
	this->QWidget::setGeometry(x1, x2, x3, x4);
    }
    virtual void setIcon(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11585, (void*)this, x)) return;
	this->QWidget::setIcon(x1);
    }
    virtual void setIconText(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11586, (void*)this, x)) return;
	this->QWidget::setIconText(x1);
    }
    virtual void setKeyCompression(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(11683, (void*)this, x)) return;
	this->QWidget::setKeyCompression(x1);
    }
    virtual void setLineWidth(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(3496, (void*)this, x)) return;
	this->QFrame::setLineWidth(x1);
    }
    virtual void setMargin(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(3498, (void*)this, x)) return;
	this->QFrame::setMargin(x1);
    }
    virtual void setMask(const QBitmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11512, (void*)this, x)) return;
	this->QWidget::setMask(x1);
    }
    virtual void setMask(const QRegion& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11513, (void*)this, x)) return;
	this->QWidget::setMask(x1);
    }
    virtual void setMaximumSize(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(11455, (void*)this, x)) return;
	this->QWidget::setMaximumSize(x1, x2);
    }
    virtual void setMicroFocusHint(int x1, int x2, int x3, int x4, bool x5, QFont* x6) {
	Smoke::StackItem x[7];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_int = x3;
	x[4].s_int = x4;
	x[5].s_bool = x5;
	x[6].s_class = (void*)x6;
	if(qt_Smoke->binding->callMethod(11684, (void*)this, x)) return;
	this->QWidget::setMicroFocusHint(x1, x2, x3, x4, x5, x6);
    }
    virtual void setMidLineWidth(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(3500, (void*)this, x)) return;
	this->QFrame::setMidLineWidth(x1);
    }
    virtual void setMinimumSize(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(11453, (void*)this, x)) return;
	this->QWidget::setMinimumSize(x1, x2);
    }
    virtual void setMouseTracking(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(11587, (void*)this, x)) return;
	this->QWidget::setMouseTracking(x1);
    }
    virtual void setMovie(const QMovie& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(4895, (void*)this, x)) return;
	this->QLabel::setMovie(x1);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(11422, (void*)this, x)) return;
	this->QWidget::setName(x1);
    }
    virtual void setNum(double x1) {
	Smoke::StackItem x[2];
	x[1].s_double = x1;
	if(qt_Smoke->binding->callMethod(4897, (void*)this, x)) return;
	this->QLabel::setNum(x1);
    }
    virtual void setNum(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(4896, (void*)this, x)) return;
	this->QLabel::setNum(x1);
    }
    virtual void setPalette(const QPalette& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11488, (void*)this, x)) return;
	this->QWidget::setPalette(x1);
    }
    virtual void setPaletteBackgroundColor(const QColor& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11493, (void*)this, x)) return;
	this->QWidget::setPaletteBackgroundColor(x1);
    }
    virtual void setPaletteBackgroundPixmap(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11495, (void*)this, x)) return;
	this->QWidget::setPaletteBackgroundPixmap(x1);
    }
    virtual void setPicture(const QPicture& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(4894, (void*)this, x)) return;
	this->QLabel::setPicture(x1);
    }
    virtual void setPixmap(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(4893, (void*)this, x)) return;
	this->QLabel::setPixmap(x1);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->binding->callMethod(6489, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void setResolution(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(6628, (void*)this, x)) return;
	this->QPaintDevice::setResolution(x1);
    }
    virtual void setSizeIncrement(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(11462, (void*)this, x)) return;
	this->QWidget::setSizeIncrement(x1, x2);
    }
    virtual void setSizePolicy(QSizePolicy x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11544, (void*)this, x)) return;
	this->QWidget::setSizePolicy(x1);
    }
    virtual void setText(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(4892, (void*)this, x)) return;
	this->QLabel::setText(x1);
    }
    virtual void setUpdatesEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(11590, (void*)this, x)) return;
	this->QWidget::setUpdatesEnabled(x1);
    }
    virtual void setWFlags(Qt::WFlags x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(11677, (void*)this, x)) return;
	this->QWidget::setWFlags(x1);
    }
    virtual void setWState(uint x1) {
	Smoke::StackItem x[2];
	x[1].s_uint = x1;
	if(qt_Smoke->binding->callMethod(11674, (void*)this, x)) return;
	this->QWidget::setWState(x1);
    }
    virtual void show() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11602, (void*)this, x)) return;
	this->QWidget::show();
    }
    virtual void showEvent(QShowEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11656, (void*)this, x)) return;
	this->QWidget::showEvent(x1);
    }
    virtual void showMaximized() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11606, (void*)this, x)) return;
	this->QWidget::showMaximized();
    }
    virtual void showMinimized() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11605, (void*)this, x)) return;
	this->QWidget::showMinimized();
    }
    virtual void showNormal() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11608, (void*)this, x)) return;
	this->QWidget::showNormal();
    }
    virtual QSize sizeHint() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(4886, (void*)this, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QLabel::sizeHint();
    }
    virtual QSizePolicy sizePolicy() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11543, (void*)this, x)) {
	    QSizePolicy *xptr = (QSizePolicy *)x[0].s_class;
	    QSizePolicy xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QWidget::sizePolicy();
    }
    virtual void styleChange(QStyle& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11659, (void*)this, x)) return;
	this->QWidget::styleChange(x1);
    }
    virtual void tabletEvent(QTabletEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11651, (void*)this, x)) return;
	this->QWidget::tabletEvent(x1);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6514, (void*)this, x)) return;
	this->QObject::timerEvent(x1);
    }
    virtual void unsetCursor() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11506, (void*)this, x)) return;
	this->QWidget::unsetCursor();
    }
    virtual void updateMask() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11658, (void*)this, x)) return;
	this->QWidget::updateMask();
    }
    virtual void wheelEvent(QWheelEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11636, (void*)this, x)) return;
	this->QWidget::wheelEvent(x1);
    }
    virtual void windowActivationChange(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(11663, (void*)this, x)) return;
	this->QWidget::windowActivationChange(x1);
    }
    ~x_QLabel() { qt_Smoke->binding->deleted(175, (void*)this); }
};
void xcall_QLabel(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QLabel *xself = (x_QLabel*)obj;
    switch(xi) {
	case 0: xself->x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: x_QLabel::x_7(args);	break;
	case 8: x_QLabel::x_8(args);	break;
	case 9: x_QLabel::x_9(args);	break;
	case 10: x_QLabel::x_10(args);	break;
	case 11: x_QLabel::x_11(args);	break;
	case 12: x_QLabel::x_12(args);	break;
	case 13: x_QLabel::x_13(args);	break;
	case 14: x_QLabel::x_14(args);	break;
	case 15: x_QLabel::x_15(args);	break;
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
	case 43: x_QLabel::x_43(args);	break;
	case 44: x_QLabel::x_44(args);	break;
	case 45: x_QLabel::x_45(args);	break;
	case 46: x_QLabel::x_46(args);	break;
	case 47: x_QLabel::x_47(args);	break;
	case 48: xself->x_48(args);	break;
	case 49: xself->x_49(args);	break;
	case 50: xself->x_50(args);	break;
	case 51: delete (QLabel*)xself;	break;
    }
}
