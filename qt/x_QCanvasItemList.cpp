//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qpainter.h>
#include <qcanvas.h>

class x_QCanvasItemList : public QCanvasItemList {
public:
    void x_0(Smoke::Stack x) {
	// sort()
	this->QCanvasItemList::sort();
	(void)x; // noop (for compiler warning)
    }
    void x_1(Smoke::Stack x) {
	// drawUnique(QPainter&)
	this->QCanvasItemList::drawUnique(*(QPainter *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    static void x_2(Smoke::Stack x) {
	// QCanvasItemList()
	x_QCanvasItemList* xret = new x_QCanvasItemList();
	x[0].s_class = (void*)xret;
    }
    x_QCanvasItemList() : QCanvasItemList() {
    }
    ~x_QCanvasItemList() { qt_Smoke->binding->deleted(22, (void*)this); }
};
void xcall_QCanvasItemList(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QCanvasItemList *xself = (x_QCanvasItemList*)obj;
    switch(xi) {
	case 0: xself->x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: x_QCanvasItemList::x_2(args);	break;
	case 3: delete (QCanvasItemList*)xself;	break;
    }
}
