//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qglobal.h>
#include <qdatastream.h>
#include <qcstring.h>

class x_QDataStream : public QDataStream {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QDataStream::BigEndian;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QDataStream::LittleEndian;
    }
    static void x_2(Smoke::Stack x) {
	// QDataStream()
	x_QDataStream* xret = new x_QDataStream();
	x[0].s_class = (void*)xret;
    }
    x_QDataStream() : QDataStream() {
    }
    static void x_3(Smoke::Stack x) {
	// QDataStream(QIODevice*)
	x_QDataStream* xret = new x_QDataStream((QIODevice*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QDataStream(QIODevice* x1) : QDataStream(x1) {
    }
    static void x_4(Smoke::Stack x) {
	// QDataStream(QByteArray, int)
	x_QDataStream* xret = new x_QDataStream(*(QByteArray *)x[1].s_voidp,(int)x[2].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QDataStream(QByteArray x1, int x2) : QDataStream(x1, x2) {
    }
    void x_5(Smoke::Stack x) const {
	// device()
	QIODevice* xret = this->QDataStream::device();
	x[0].s_class = (void*)xret;
    }
    void x_6(Smoke::Stack x) {
	// setDevice(QIODevice*)
	this->QDataStream::setDevice((QIODevice*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_7(Smoke::Stack x) {
	// unsetDevice()
	this->QDataStream::unsetDevice();
	(void)x; // noop (for compiler warning)
    }
    void x_8(Smoke::Stack x) const {
	// atEnd()
	bool xret = this->QDataStream::atEnd();
	x[0].s_bool = xret;
    }
    void x_9(Smoke::Stack x) const {
	// eof()
	bool xret = this->QDataStream::eof();
	x[0].s_bool = xret;
    }
    void x_10(Smoke::Stack x) const {
	// byteOrder()
	int xret = this->QDataStream::byteOrder();
	x[0].s_int = xret;
    }
    void x_11(Smoke::Stack x) {
	// setByteOrder(int)
	this->QDataStream::setByteOrder((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_12(Smoke::Stack x) const {
	// isPrintableData()
	bool xret = this->QDataStream::isPrintableData();
	x[0].s_bool = xret;
    }
    void x_13(Smoke::Stack x) {
	// setPrintableData(bool)
	this->QDataStream::setPrintableData((bool)x[1].s_bool);
	(void)x; // noop (for compiler warning)
    }
    void x_14(Smoke::Stack x) const {
	// version()
	int xret = this->QDataStream::version();
	x[0].s_int = xret;
    }
    void x_15(Smoke::Stack x) {
	// setVersion(int)
	this->QDataStream::setVersion((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_16(Smoke::Stack x) {
	// operator>>(Q_INT8&)
	QDataStream& xret = this->QDataStream::operator>>(*(Q_INT8 *)x[1].s_voidp);
	x[0].s_class = (void*)&xret;
    }
    void x_17(Smoke::Stack x) {
	// operator>>(Q_UINT8&)
	QDataStream& xret = this->QDataStream::operator>>(*(Q_UINT8 *)x[1].s_voidp);
	x[0].s_class = (void*)&xret;
    }
    void x_18(Smoke::Stack x) {
	// operator>>(Q_INT16&)
	QDataStream& xret = this->QDataStream::operator>>(*(Q_INT16 *)x[1].s_voidp);
	x[0].s_class = (void*)&xret;
    }
    void x_19(Smoke::Stack x) {
	// operator>>(Q_UINT16&)
	QDataStream& xret = this->QDataStream::operator>>(*(Q_UINT16 *)x[1].s_voidp);
	x[0].s_class = (void*)&xret;
    }
    void x_20(Smoke::Stack x) {
	// operator>>(Q_INT32&)
	QDataStream& xret = this->QDataStream::operator>>(*(Q_INT32 *)x[1].s_voidp);
	x[0].s_class = (void*)&xret;
    }
    void x_21(Smoke::Stack x) {
	// operator>>(Q_UINT32&)
	QDataStream& xret = this->QDataStream::operator>>(*(Q_UINT32 *)x[1].s_voidp);
	x[0].s_class = (void*)&xret;
    }
    void x_22(Smoke::Stack x) {
	// operator>>(Q_LONG&)
	QDataStream& xret = this->QDataStream::operator>>(*(Q_LONG *)x[1].s_voidp);
	x[0].s_class = (void*)&xret;
    }
    void x_23(Smoke::Stack x) {
	// operator>>(Q_ULONG&)
	QDataStream& xret = this->QDataStream::operator>>(*(Q_ULONG *)x[1].s_voidp);
	x[0].s_class = (void*)&xret;
    }
    void x_24(Smoke::Stack x) {
	// operator>>(float&)
	QDataStream& xret = this->QDataStream::operator>>(*(float *)x[1].s_voidp);
	x[0].s_class = (void*)&xret;
    }
    void x_25(Smoke::Stack x) {
	// operator>>(double&)
	QDataStream& xret = this->QDataStream::operator>>(*(double *)x[1].s_voidp);
	x[0].s_class = (void*)&xret;
    }
    void x_26(Smoke::Stack x) {
	// operator>>(char*&)
	QDataStream& xret = this->QDataStream::operator>>(*(char* *)x[1].s_voidp);
	x[0].s_class = (void*)&xret;
    }
    void x_27(Smoke::Stack x) {
	// operator<<(Q_INT8)
	QDataStream& xret = this->QDataStream::operator<<((Q_INT8)x[1].s_char);
	x[0].s_class = (void*)&xret;
    }
    void x_28(Smoke::Stack x) {
	// operator<<(Q_UINT8)
	QDataStream& xret = this->QDataStream::operator<<((Q_UINT8)x[1].s_uchar);
	x[0].s_class = (void*)&xret;
    }
    void x_29(Smoke::Stack x) {
	// operator<<(Q_INT16)
	QDataStream& xret = this->QDataStream::operator<<((Q_INT16)x[1].s_short);
	x[0].s_class = (void*)&xret;
    }
    void x_30(Smoke::Stack x) {
	// operator<<(Q_UINT16)
	QDataStream& xret = this->QDataStream::operator<<((Q_UINT16)x[1].s_ushort);
	x[0].s_class = (void*)&xret;
    }
    void x_31(Smoke::Stack x) {
	// operator<<(Q_INT32)
	QDataStream& xret = this->QDataStream::operator<<((Q_INT32)x[1].s_int);
	x[0].s_class = (void*)&xret;
    }
    void x_32(Smoke::Stack x) {
	// operator<<(Q_UINT32)
	QDataStream& xret = this->QDataStream::operator<<((Q_UINT32)x[1].s_uint);
	x[0].s_class = (void*)&xret;
    }
    void x_33(Smoke::Stack x) {
	// operator<<(Q_LONG)
	QDataStream& xret = this->QDataStream::operator<<((Q_LONG)x[1].s_long);
	x[0].s_class = (void*)&xret;
    }
    void x_34(Smoke::Stack x) {
	// operator<<(Q_ULONG)
	QDataStream& xret = this->QDataStream::operator<<((Q_ULONG)x[1].s_long);
	x[0].s_class = (void*)&xret;
    }
    void x_35(Smoke::Stack x) {
	// operator<<(float)
	QDataStream& xret = this->QDataStream::operator<<((float)x[1].s_float);
	x[0].s_class = (void*)&xret;
    }
    void x_36(Smoke::Stack x) {
	// operator<<(double)
	QDataStream& xret = this->QDataStream::operator<<((double)x[1].s_double);
	x[0].s_class = (void*)&xret;
    }
    void x_37(Smoke::Stack x) {
	// operator<<(const char*)
	QDataStream& xret = this->QDataStream::operator<<((const char*)x[1].s_voidp);
	x[0].s_class = (void*)&xret;
    }
    void x_38(Smoke::Stack x) {
	// readBytes(char*&, uint&)
	QDataStream& xret = this->QDataStream::readBytes(*(char* *)x[1].s_voidp,*(uint *)x[2].s_voidp);
	x[0].s_class = (void*)&xret;
    }
    void x_39(Smoke::Stack x) {
	// readRawBytes(char*, uint)
	QDataStream& xret = this->QDataStream::readRawBytes((char*)x[1].s_voidp,(uint)x[2].s_uint);
	x[0].s_class = (void*)&xret;
    }
    void x_40(Smoke::Stack x) {
	// writeBytes(const char*, uint)
	QDataStream& xret = this->QDataStream::writeBytes((const char*)x[1].s_voidp,(uint)x[2].s_uint);
	x[0].s_class = (void*)&xret;
    }
    void x_41(Smoke::Stack x) {
	// writeRawBytes(const char*, uint)
	QDataStream& xret = this->QDataStream::writeRawBytes((const char*)x[1].s_voidp,(uint)x[2].s_uint);
	x[0].s_class = (void*)&xret;
    }
    static void xenum_operation(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
	switch(xtype) {
	  case 106: //QDataStream::ByteOrder
	    switch(xop) {
	      case Smoke::EnumNew:
		xdata = (void*)new QDataStream::ByteOrder;
		break;
	      case Smoke::EnumDelete:
		delete (QDataStream::ByteOrder*)xdata;
		break;
	      case Smoke::EnumFromLong:
		*(QDataStream::ByteOrder*)xdata = (QDataStream::ByteOrder)xvalue;
		break;
	      case Smoke::EnumToLong:
		xvalue = (long)*(QDataStream::ByteOrder*)xdata;
		break;
	    }
	    break;
	}
    }
    ~x_QDataStream() { qt_Smoke->binding->deleted(60, (void*)this); }
};
void xenum_QDataStream(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
    x_QDataStream::xenum_operation(xop, xtype, xdata, xvalue);
}
void xcall_QDataStream(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QDataStream *xself = (x_QDataStream*)obj;
    switch(xi) {
	case 0: x_QDataStream::x_0(args);	break;
	case 1: x_QDataStream::x_1(args);	break;
	case 2: x_QDataStream::x_2(args);	break;
	case 3: x_QDataStream::x_3(args);	break;
	case 4: x_QDataStream::x_4(args);	break;
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
	case 42: delete (QDataStream*)xself;	break;
    }
}
