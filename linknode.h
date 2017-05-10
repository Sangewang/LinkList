
typedef struct tagListPoint
{
  struct tagListPoint *pstPrev;
  struct tagListPoint *pstNext;
}LIST_POINT_S;

#define unsigned int long  ULONG

#define LW_LIST_INIT(e) ((e)->pstPrev = (e)->pstNext = (e))

#define LW_LIST_ADD_P(e,p) { (e)->pstPrev = (p)->pstPrev; (e)->pstNext = (p); (p)->pstPrev->pstNext = (e); (p)->pstPrev = (e); }

#define LW_LIST_EMPTY(e) ( ((e)->pstPrev == (e) && (e)->pstNext == (e)) ? 0 : 1)

#define LW_LIST_ENTITY(st, m ,e) ((st*)((ULONG)(e)-(ULONG)(&(((st *)0)->m))))
