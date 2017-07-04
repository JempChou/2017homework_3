#ifndef __ACTIVITYLABEL_H__
#define __ACTIVITYLABEL_H__

#include <QLabel>
#include <QMouseEvent>
// place your code here
class ActivityLabel : public QLabel  
{
Q_OBJECT
public:  
    ActivityLabel(QWidget * parent = 0);  
//    ~ActivityLabel(void);  
  
protected:  
    void mouseReleaseEvent(QMouseEvent * ev);  
  
signals:   
    void clicked();   
};  
#endif // __ACTIVITYLABEL_H__
