//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qstring.h>
#include <qdom.h>

class x_QDomDocumentType : public QDomDocumentType {
public:
    static void x_0(Smoke::Stack x) {
	// QDomDocumentType()
	x_QDomDocumentType* xret = new x_QDomDocumentType();
	x[0].s_class = (void*)xret;
    }
    x_QDomDocumentType() : QDomDocumentType() {
    }
    static void x_1(Smoke::Stack x) {
	// QDomDocumentType(const QDomDocumentType&)
	x_QDomDocumentType* xret = new x_QDomDocumentType(*(const QDomDocumentType *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QDomDocumentType(const QDomDocumentType& x1) : QDomDocumentType(x1) {
    }
    void x_2(Smoke::Stack x) {
	// operator=(const QDomDocumentType&)
	QDomDocumentType& xret = this->QDomDocumentType::operator=(*(const QDomDocumentType *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_3(Smoke::Stack x) const {
	// name()
	QString xret = this->QDomDocumentType::name();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_4(Smoke::Stack x) const {
	// entities()
	QDomNamedNodeMap xret = this->QDomDocumentType::entities();
	x[0].s_class = (void*)new QDomNamedNodeMap(xret);
    }
    void x_5(Smoke::Stack x) const {
	// notations()
	QDomNamedNodeMap xret = this->QDomDocumentType::notations();
	x[0].s_class = (void*)new QDomNamedNodeMap(xret);
    }
    void x_6(Smoke::Stack x) const {
	// publicId()
	QString xret = this->QDomDocumentType::publicId();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_7(Smoke::Stack x) const {
	// systemId()
	QString xret = this->QDomDocumentType::systemId();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_8(Smoke::Stack x) const {
	// internalSubset()
	QString xret = this->QDomDocumentType::internalSubset();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_9(Smoke::Stack x) const {
	// nodeType()
	QDomNode::NodeType xret = this->QDomDocumentType::nodeType();
	x[0].s_enum = xret;
    }
    void x_10(Smoke::Stack x) const {
	// isDocumentType()
	bool xret = this->QDomDocumentType::isDocumentType();
	x[0].s_bool = xret;
    }
    virtual QDomNode appendChild(const QDomNode& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(2627, (void*)this, x)) {
	    QDomNode *xptr = (QDomNode *)x[0].s_class;
	    QDomNode xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::appendChild(x1);
    }
    virtual QDomNamedNodeMap attributes() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2641, (void*)this, x)) {
	    QDomNamedNodeMap *xptr = (QDomNamedNodeMap *)x[0].s_class;
	    QDomNamedNodeMap xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::attributes();
    }
    virtual QDomNodeList childNodes() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2636, (void*)this, x)) {
	    QDomNodeList *xptr = (QDomNodeList *)x[0].s_class;
	    QDomNodeList xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::childNodes();
    }
    virtual QDomNode cloneNode(bool x1) const {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(2629, (void*)this, x)) {
	    QDomNode *xptr = (QDomNode *)x[0].s_class;
	    QDomNode xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::cloneNode(x1);
    }
    virtual QDomNamedNodeMap entities() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2521, (void*)this, x)) {
	    QDomNamedNodeMap *xptr = (QDomNamedNodeMap *)x[0].s_class;
	    QDomNamedNodeMap xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomDocumentType::entities();
    }
    virtual QDomNode firstChild() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2637, (void*)this, x)) {
	    QDomNode *xptr = (QDomNode *)x[0].s_class;
	    QDomNode xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::firstChild();
    }
    virtual bool hasAttributes() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2645, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::hasAttributes();
    }
    virtual bool hasChildNodes() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2628, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::hasChildNodes();
    }
    virtual QDomNode insertAfter(const QDomNode& x1, const QDomNode& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->binding->callMethod(2624, (void*)this, x)) {
	    QDomNode *xptr = (QDomNode *)x[0].s_class;
	    QDomNode xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::insertAfter(x1, x2);
    }
    virtual QDomNode insertBefore(const QDomNode& x1, const QDomNode& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->binding->callMethod(2623, (void*)this, x)) {
	    QDomNode *xptr = (QDomNode *)x[0].s_class;
	    QDomNode xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::insertBefore(x1, x2);
    }
    virtual QString internalSubset() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2525, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomDocumentType::internalSubset();
    }
    virtual bool isAttr() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2650, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isAttr();
    }
    virtual bool isCDATASection() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2651, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isCDATASection();
    }
    virtual bool isCharacterData() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2661, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isCharacterData();
    }
    virtual bool isComment() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2662, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isComment();
    }
    virtual bool isDocument() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2653, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isDocument();
    }
    virtual bool isDocumentFragment() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2652, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isDocumentFragment();
    }
    virtual bool isDocumentType() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2527, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomDocumentType::isDocumentType();
    }
    virtual bool isElement() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2655, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isElement();
    }
    virtual bool isEntity() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2658, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isEntity();
    }
    virtual bool isEntityReference() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2656, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isEntityReference();
    }
    virtual bool isNotation() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2659, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isNotation();
    }
    virtual bool isProcessingInstruction() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2660, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isProcessingInstruction();
    }
    virtual bool isSupported(const QString& x1, const QString& x2) const {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	if(qt_Smoke->binding->callMethod(2632, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isSupported(x1, x2);
    }
    virtual bool isText() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2657, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isText();
    }
    virtual QDomNode lastChild() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2638, (void*)this, x)) {
	    QDomNode *xptr = (QDomNode *)x[0].s_class;
	    QDomNode xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::lastChild();
    }
    virtual QString localName() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2644, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::localName();
    }
    virtual QString name() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2520, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomDocumentType::name();
    }
    virtual QString namespaceURI() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2643, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::namespaceURI();
    }
    virtual QDomNode nextSibling() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2640, (void*)this, x)) {
	    QDomNode *xptr = (QDomNode *)x[0].s_class;
	    QDomNode xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::nextSibling();
    }
    virtual QString nodeName() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2633, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::nodeName();
    }
    virtual QDomNode::NodeType nodeType() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2526, (void*)this, x)) {
	    QDomNode::NodeType *xptr = (QDomNode::NodeType *)x[0].s_class;
	    QDomNode::NodeType xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomDocumentType::nodeType();
    }
    virtual QString nodeValue() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2646, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::nodeValue();
    }
    virtual void normalize() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2631, (void*)this, x)) return;
	this->QDomNode::normalize();
    }
    virtual QDomNamedNodeMap notations() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2522, (void*)this, x)) {
	    QDomNamedNodeMap *xptr = (QDomNamedNodeMap *)x[0].s_class;
	    QDomNamedNodeMap xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomDocumentType::notations();
    }
    virtual QDomDocument ownerDocument() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2642, (void*)this, x)) {
	    QDomDocument *xptr = (QDomDocument *)x[0].s_class;
	    QDomDocument xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::ownerDocument();
    }
    virtual QDomNode parentNode() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2635, (void*)this, x)) {
	    QDomNode *xptr = (QDomNode *)x[0].s_class;
	    QDomNode xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::parentNode();
    }
    virtual QString prefix() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2648, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::prefix();
    }
    virtual QDomNode previousSibling() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2639, (void*)this, x)) {
	    QDomNode *xptr = (QDomNode *)x[0].s_class;
	    QDomNode xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::previousSibling();
    }
    virtual QString publicId() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2523, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomDocumentType::publicId();
    }
    virtual QDomNode removeChild(const QDomNode& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(2626, (void*)this, x)) {
	    QDomNode *xptr = (QDomNode *)x[0].s_class;
	    QDomNode xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::removeChild(x1);
    }
    virtual QDomNode replaceChild(const QDomNode& x1, const QDomNode& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->binding->callMethod(2625, (void*)this, x)) {
	    QDomNode *xptr = (QDomNode *)x[0].s_class;
	    QDomNode xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::replaceChild(x1, x2);
    }
    virtual void setNodeValue(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(2647, (void*)this, x)) return;
	this->QDomNode::setNodeValue(x1);
    }
    virtual void setPrefix(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(2649, (void*)this, x)) return;
	this->QDomNode::setPrefix(x1);
    }
    virtual QString systemId() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2524, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomDocumentType::systemId();
    }
    ~x_QDomDocumentType() { qt_Smoke->binding->deleted(82, (void*)this); }
};
void xcall_QDomDocumentType(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QDomDocumentType *xself = (x_QDomDocumentType*)obj;
    switch(xi) {
	case 0: x_QDomDocumentType::x_0(args);	break;
	case 1: x_QDomDocumentType::x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: xself->x_10(args);	break;
	case 11: delete (QDomDocumentType*)xself;	break;
    }
}
