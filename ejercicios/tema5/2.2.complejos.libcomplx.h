#ifndef __LIBCOMPLX_H__
#define __LIBCOMPLX_H__

struct cmplx {
	double real;
	double img;
};

struct cmplx cmplx_sum(const struct cmplx *a, const struct cmplx *b);
struct cmplx cmplx_sub(const struct cmplx *a, const struct cmplx *b);
double cmplx_abs(const struct cmplx *c);
void cmplx_norm(struct cmplx *c);
void cmplx_print(const struct cmplx *c);

#endif /* __LUBCOMPLX_H__ */
