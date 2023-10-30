#ifndef CAT_SYNTAX_H
#define CAT_SYNTAX_H

#define begin_main int main() {
#define end_main }

#define purr return
#define meow std::cout
#define hiss std::cerr

#define scratch(cause) throw CatError(cause)

#define if_cat if
#define else_cat else

#endif // CAT_SYNTAX_H
