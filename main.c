

#include "CTextEngine/CTextEngineMain.h"


int main(){
    CTextStackModule m = newCTextStackModule();
    char *r = strdup("my string");
    struct CTextStack *s = newCTextStack_string("my string");
    printf("%s",s->rendered_text);
    m.free(s);
}