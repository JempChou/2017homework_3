#include "ActivityLabel.h"

// place your code here
ActivityLabel::ActivityLabel(QWidget * parent)
    : QLabel(parent)
{
 
}
void ActivityLabel::mouseReleaseEvent(QMouseEvent * ev)   
{//定义鼠标左键点击事件   
    if(ev->button() == Qt::LeftButton)  
    {  
        Q_UNUSED(ev)   
            emit clicked();  
    }  
}  
