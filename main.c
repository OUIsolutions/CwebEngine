

#include "CTextEngine/CTextEngineMain.h"

int main(){

    CTextStack *s = newCTextStack_string("mateus");
    s->self_substr(s,0,2);
    printf("%s\n",s->rendered_text);
    s->free(s);
}