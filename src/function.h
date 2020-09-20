template<class C>
void function(void (C::*fun)(char), C& c, char input) {
    (c.*fun)(input);
}