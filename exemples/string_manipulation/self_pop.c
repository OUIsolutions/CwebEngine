
#include "CTextEngine.h"

int main(){

    CTextNamespace ctext = newCTextNamespace();
    CTextStackModule stack = ctext.stack;
    
    CTextStack *s = newCTextStack_string("my string");

    //remove the second char and third times
   stack.self_pop(s,1,2);
    printf("midle:%s\n",s->rendered_text);

   stack.free(s);


}