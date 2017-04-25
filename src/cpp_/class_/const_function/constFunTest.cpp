/**
 * Descriptions：常对象、常函数、常对象
 * <p>
 * Author：ChenME
 * Date：2017/4/25
 * Email：ibelieve1210@163.com
 */

#include "Line.h"

void constFunInvoke(){
   const Line line(1,2,3,4);

    line.printInfo();
}