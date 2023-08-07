#include "../../../CTextEngine.h"

int main(){

    CTextNamespace ctext = newCTextNamespace();
    CTextStackModule stack = ctext.stack;

    CTextStack *s = newCTextStack_string(
            "my string"
    );

    CTextStack *s2 =stack.insert_at(s,2,"aaaaaa");
    printf("%s\n",s2->rendered_text);
   stack.free(s2);
   stack.free(s);

}