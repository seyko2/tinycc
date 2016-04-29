#define Y(x) Z(x)
#define X Y
X(X(1))

#define A B
#define B A
return A + B;

#if 0
#undef A
#undef B

#define A 1 + B
#define B A
return A + B;
// currently output of the gcc and tcc differs
#endif
