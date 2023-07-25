

typedef struct CTextStackModule{

    //admnistrative methods
    void (*free)(struct CTextStack *self);
    struct CTextStack *(*clone)(struct CTextStack *self);
    void (*represent)(struct CTextStack *self);
    char *(*self_transform_in_string_and_self_clear)(struct CTextStack *self);
    void (*restart)(struct CTextStack *self);

    //render methods
    void (*text)(struct CTextStack *self, const char *element);

    void (*segment_text)(struct CTextStack *self, const char *element);

    void (*format)(struct CTextStack *self, const char *format, ...);

    void (*segment)(struct CTextStack *self);

    void (*segment_format)(struct CTextStack *self, const char *format, ...);

    void (*$open)(struct CTextStack *self, const char *tag, const char *format,...);

    void (*only$open)(struct CTextStack *self, const char *tag, const char *format,...);

    void (*auto$close)(struct CTextStack *self, const char *tag, const char *format,...);

    void (*open)(struct CTextStack *self, const char *tag);

    void (*close)(struct CTextStack *self, const char *tag);


    //algorithm methods
    struct CTextStack * (*substr)(struct CTextStack *self, long starter, long end);
    void  (*self_substr)(struct CTextStack *self, long starter, long end);


    struct CTextStack *(*pop)(struct CTextStack *self, long starter, long end);
    void(*self_pop)(struct CTextStack *self, long starter, long end);



    struct CTextStack *(*insert_at)(struct CTextStack *self,long point, const char *element);
    void (*self_insert_at)(struct CTextStack *self,long point, const char *element);

    struct CTextStack *(*replace)(struct CTextStack *self,const char *element, const char *element_to_replace);
    void (*self_replace)(struct CTextStack *self,const char *element, const char *element_to_replace);


    struct CTextStack *(*replace_long)(struct CTextStack *self,const char *element, long element_to_replace);
    void(*self_replace_long)(struct CTextStack *self,const char *element, long element_to_replace);


    struct CTextStack *(*replace_double)(struct CTextStack *self,const char *element, double element_to_replace);
    void (*self_replace_double)(struct CTextStack *self,const char *element, double element_to_replace);


    struct CTextStack * (*lower)(struct CTextStack *self);
    void(*self_lower)(struct CTextStack *self);

    struct CTextStack * (*upper)(struct CTextStack *self);
    void(*self_upper)(struct CTextStack *self);


    struct CTextStack * (*reverse)(struct CTextStack *self);
    void(*self_reverse)(struct CTextStack *self);

    struct CTextStack * (*trim)(struct CTextStack *self);
    void(*self_trim)(struct CTextStack *self);

    bool (*starts_with)(struct CTextStack *self, const char *element);
    bool (*ends_with)(struct CTextStack *self, const char *element);

    long (*index_of)(struct CTextStack *self, const char *element);
    long (*index_of_char)(struct CTextStack *self, char element);
}CTextStackModule;

CTextStackModule newCTextStackModule();