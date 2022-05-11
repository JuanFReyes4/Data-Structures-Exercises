#if !defined(__TDA_Diagram_Process_h)
#define __TDA_Diagram_Process_h

#include "Operation.h"

class Process{
public:
   float getNum(void);
   void setNum(float newNum);
   float getDen(void);
   void setDen(float newDen);
   Process();
   void calculate(Operation x);

protected:
private:
   float num;
   float den;
};
#endif