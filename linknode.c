#include <stdio.h>
#include <malloc.h>
#include "linknode.h"

#define MAX_NODE_NUM   1000
LIST_POINT_S  g_List_Node[MAX_NODE_NUM];

typedef struct lw_Link_List_Node
{
  int ListNodeNum;
  LIST_POINT_S pstSelf_Link_Node;
  LIST_POINT_S pstFirst_Link_Node;
  LIST_POINT_S pstSecond_Link_Node;
  int SourceIp;
  int DstIp;
}LW_LINK_LIST_NODE;

int main(int argc , char ** argv[])
{
  LW_LINK_LIST_NODE * pstNewNode = (LW_LINK_LIST_NODE *)malloc(sizeof(LW_LINK_LIST_NODE));

  printf("pstNewNode = %x\n",pstNewNode);
  printf("pstNewNode->ListNodeNum = %x\n",&(pstNewNode->ListNodeNum));
  printf("pstNewNode->g_Self_Link_Node = %x\n",&(pstNewNode->pstSelf_Link_Node));
  printf("pstNewNode->p_First_Link_Node = %x\n",&(pstNewNode->pstFirst_Link_Node));
  printf("pstNewNode->p_Second_Link_Node = %x\n",&(pstNewNode->pstSecond_Link_Node));
  printf("pstNewNode->SourceIp = %d\n",&(pstNewNode->SourceIp));
  printf("pstNewNode->DstIp = %d\n",&(pstNewNode->DstIp));
  
  free(pstNewNode);

}


