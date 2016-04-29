#define Y(x) Z(x)
#define X Y
X(X(1))
X(X(X(X(X(1)))))

#define A B
#define B A
return A + B;

#undef A
#undef B

#define A B+1
#define B A
return A + B;
