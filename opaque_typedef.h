#ifndef OPAQUE_TYPEDEF_HH
#define OPAQUE_TYPEDEF_HH

#define STRONG_TYPEDEF(t1, t2)                                                 \
  struct t1 {                                                                  \
    explicit t1(t2 v) : value(v) {}                                            \
    t2 value;                                                                  \
  };

#define DEFINE_ORD_OPS(t)                                                      \
  inline bool operator<(t a, t b) { return a.value < b.value; }                \
  inline bool operator<=(t a, t b) { return a.value <= b.value; }              \
  inline bool operator>(t a, t b) { return a.value > b.value; }                \
  inline bool operator>=(t a, t b) { return a.value >= b.value; }              \
  inline bool operator==(t a, t b) { return a.value == b.value; }

#define DEFINE_ARITH_OPS(t)                                                    \
  inline t operator*(t a, t b) { return t{a.value * b.value}; }                \
  inline t operator/(t a, t b) { return t{a.value / b.value}; }                \
  inline t operator+(t a, t b) { return t{a.value + b.value}; }                \
  inline t operator-(t a, t b) { return t{a.value - b.value}; }

#endif // OPAQUE_TYPEDEF_HH
