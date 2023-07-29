

typedef struct CTextArray{

    CTextStack **stacks;
    long size;


}CTextArray;

CTextArray * newCTextArray();

void CTextArray_append(CTextArray *self,CTextStack *element);


void CTextArray_append_string(CTextArray *self,char *element);

CTextStack * CTextArray_join(CTextArray *self,char *separator);


void  CTextArray_free(CTextArray *self);
