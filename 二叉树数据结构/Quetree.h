#include"biotree.h"
#ifndef _Quetree_h
#define _Quetree_h
struct que;
typedef struct que Que;
typedef Que* Pq;
struct qt;
typedef struct qt QT;
typedef QT* Qt;
Qt creatque(void);
void quepush(Qt t,BT tr);
BT quepop(Qt t);
void inodertravel(BT tr);
#endif
