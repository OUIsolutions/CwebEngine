
struct CTextStack * CTextStack_substr(struct CTextStack *self, long starter, long end){

    CTextStack *new_element = newCTextStack(self->line_breaker,self->separator);



    for(int i =starter; i < end; i++){
        new_element->segment_format(new_element,"%c",self->rendered_text[i]);
    }

    return new_element;

}