
#include "CTextEngine.h"



int main(){
    const char *lang = "en";
    const char *text = "text exemple";
    struct CTextStack *s = newCTextStack(CTEXT_LINE_BREAKER, CTEXT_SEPARATOR);

    char test[1];
    strcpy(test,"aaaaaaaaaaaaaaaa");

    s->$open(s,CTEXT_HTML,"lang=\"%s\"",lang);
        s->open(s,CTEXT_HEAD);
        
        s->close(s,CTEXT_HEAD);
        s->open(s,CTEXT_BODY);
            s->open(s,CTEXT_H1);
                s->segment_text(s,"This is a text");
            s->close(s,CTEXT_H1);
            s->open(s,CTEXT_P);
                s->segment_format(s,"This is a formated  text  %s",text);
            s->close(s,CTEXT_P);

        s->close(s,CTEXT_BODY);
    s->close(s,CTEXT_HTML);

   printf("%s\n",s->rendered_text);
   int ident_level = s->ident_level;
   if(ident_level == 0){
        printf("all identation is ok\n");
    }else{
        printf("identation error\n");
        printf("unclosed tags: %d\n",ident_level);
        s->free(s);
        return 1;
    }
   s->free(s);

}