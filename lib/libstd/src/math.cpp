#include "math.h"

namespace std													{
// ——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// ———————————————————————————————————————————————————————————————————————————————————— math
// ——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// ——————————————————————————————————————————————————————————————
// ————————————— cos
// ——————————————————————————————————————————————————————————————
inline constexpr float cos										(
	float						x
)																{
	return						__builtin_cosf(x)				;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type cos(
		T						x
	)															{
		return					__builtin_cos(x)				;
	}

inline constexpr long double cos								(
	long double					x
)																{
	return						__builtin_cosl(x)				;
}
// ——————————————————————————————————————————————————————————————
// ————————————— cosh
// —————————————	hyperbolic cos
// ——————————————————————————————————————————————————————————————
inline constexpr float cosh										(
	float						x
)																{
	return						__builtin_coshf(x)				;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type cosh(
		T						x
	)															{
		return					__builtin_cosh(x)				;
	}

inline constexpr long double cosh								(
	long double					x
)																{
	return						__builtin_coshl(x)				;
}
// ——————————————————————————————————————————————————————————————
// ————————————— acos
// —————————————	arc cos
// ——————————————————————————————————————————————————————————————
inline constexpr float acos										(
	float						x
)																{
	return						__builtin_acosf(x)				;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type acos(
		T						x
	)															{
		return					__builtin_acos(x)				;
	}

inline constexpr long double acos								(
	long double					x
)																{
	return						__builtin_acosl(x)				;
}
// ——————————————————————————————————————————————————————————————
// ————————————— acosh
// —————————————	arc hyperbolic cos
// ——————————————————————————————————————————————————————————————
inline constexpr float acosh									(
	float						x
)																{
	return						__builtin_acoshf(x)				;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type acosh(
		T						x
	)															{
		return					__builtin_acosh(x)				;
	}

inline constexpr long double acosh								(
	long double					x
)																{
	return						__builtin_acoshl(x)				;
}
// ——————————————————————————————————————————————————————————————
// ————————————— sin
// ——————————————————————————————————————————————————————————————
inline constexpr float sin										(
	float						x
)																{
	return						__builtin_sinf(x)				;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type sin(
		T						x
	)															{
		return					__builtin_sin(x)				;
	}

inline constexpr long double sin								(
	long double					x
)																{
	return						__builtin_sinl(x)				;
}
// ——————————————————————————————————————————————————————————————
// ————————————— sinh
// —————————————	hyperbolic sin
// ——————————————————————————————————————————————————————————————
inline constexpr float sinh										(
	float						x
)																{
	return						__builtin_sinhf(x)				;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type sinh(
		T						x
	)															{
		return					__builtin_sinh(x)				;
	}

inline constexpr long double sinh								(
	long double					x
)																{
	return						__builtin_sinhl(x)				;
}
// ——————————————————————————————————————————————————————————————
// ————————————— asin
// —————————————	arc sin
// ——————————————————————————————————————————————————————————————
inline constexpr float asin										(
	float						x
)																{
	return						__builtin_asinf(x)				;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type asin(
		T						x
	)															{
		return					__builtin_asin(x)				;
	}

inline constexpr long double asin								(
	long double					x
)																{
	return						__builtin_asinl(x)				;
}
// ——————————————————————————————————————————————————————————————
// ————————————— asinh
// —————————————	arc hyperbolic sin
// ——————————————————————————————————————————————————————————————
inline constexpr float asinh									(
	float						x
)																{
	return						__builtin_asinhf(x)				;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type asinh(
		T						x
	)															{
		return					__builtin_asinh(x)				;
	}

inline constexpr long double asinh								(
	long double					x
)																{
	return						__builtin_asinhl(x)				;
}
// ——————————————————————————————————————————————————————————————
// ————————————— tan
// ——————————————————————————————————————————————————————————————
inline constexpr float tan										(
	float						x
)																{
	return						__builtin_tanf(x)				;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type tan(
		T						x
	)															{
		return					__builtin_tan(x)				;
	}

inline constexpr long double tan								(
	long double					x
)																{
	return						__builtin_tanl(x)				;
}
// ——————————————————————————————————————————————————————————————
// ————————————— tanh
// —————————————	hyperbolic tan
// ——————————————————————————————————————————————————————————————
inline constexpr float tanh										(
	float						x
)																{
	return						__builtin_tanhf(x)				;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type tanh(
		T						x
	)															{
		return					__builtin_tanh(x)				;
	}

inline constexpr long double tanh								(
	long double					x
)																{
	return						__builtin_tanhl(x)				;
}
// ——————————————————————————————————————————————————————————————
// ————————————— atan
// —————————————	arc tan
// ——————————————————————————————————————————————————————————————
inline constexpr float atan										(
	float						x
)																{
	return						__builtin_atanf(x)				;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type atan(
		T						x
	)															{
		return					__builtin_atan(x)				;
	}

inline constexpr long double atan								(
	long double					x
)																{
	return						__builtin_atanl(x)				;
}
// ——————————————————————————————————————————————————————————————
// ————————————— atan2
// —————————————	arc tan (y/x)
// ——————————————————————————————————————————————————————————————
inline constexpr float atan2									(
	float						x								,
	float						y
)																{
	return						__builtin_atan2f(y, x)			;
}

template <typename T1, typename T2>
	inline constexpr typename enable_if <is_integer <T1> :: value && is_integer <T2> :: value, double> :: type atan2(
		T1						x								,
		T2						y
	)															{
		return					__builtin_atan2(y, x)			;
	}

inline constexpr long double atan2								(
	long double					x								,
	long double					y
)																{
	return						__builtin_atan2l(y, x)			;
}
// ——————————————————————————————————————————————————————————————
// ————————————— atanh
// —————————————	arc hyperbolic tan
// ——————————————————————————————————————————————————————————————
inline constexpr float atanh									(
	float						x
)																{
	return						__builtin_atanhf(x)				;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type atanh(
		T						x
	)															{
		return					__builtin_atanh(x)				;
	}

inline constexpr long double atanh								(
	long double					x
)																{
	return						__builtin_atanhl(x)				;
}
// ——————————————————————————————————————————————————————————————
// ————————————— log
// —————————————	returns the natural logarithm of x
// ——————————————————————————————————————————————————————————————
inline constexpr float log										(
	float						x
)																{
	return						__builtin_logf(x)				;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type log(
		T						x
	)															{
		return					__builtin_log(x)				;
	}

inline constexpr long double log								(
	long double					x
)																{
	return						__builtin_logl(x)				;
}
// ——————————————————————————————————————————————————————————————
// ————————————— log2
// —————————————	returns the binary (base-2) logarithm of x
// ——————————————————————————————————————————————————————————————
inline constexpr float log2										(
	float						x
)																{
	return						__builtin_log2f(x)				;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type log2(
		T						x
	)															{
		return					__builtin_log2(x)				;
	}

inline constexpr long double log2								(
	long double					x
)																{
	return						__builtin_log2l(x)				;
}
// ——————————————————————————————————————————————————————————————
// ————————————— log10
// —————————————	returns the common (base-10) logarithm of x
// ——————————————————————————————————————————————————————————————
inline constexpr float log10									(
	float						x
)																{
	return						__builtin_log10f(x)				;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type log10(
		T						x
	)															{
		return					__builtin_log10(x)				;
	}

inline constexpr long double log10								(
	long double					x
)																{
	return						__builtin_log10l(x)				;
}
// ——————————————————————————————————————————————————————————————
// ————————————— log1p
// —————————————	returns the natural logarithm of one plus x; log(1+x)
// ——————————————————————————————————————————————————————————————
inline constexpr float log1p									(
	float						x
)																{
	return						__builtin_log1pf(x)				;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type log1p(
		T						x
	)															{
		return					__builtin_log1p(x)				;
	}

inline constexpr long double log1p								(
	long double					x
)																{
	return						__builtin_log1pl(x)				;
}
// ——————————————————————————————————————————————————————————————
// ————————————— logb
// —————————————	returns the logarithm of |x|, using FLT_RADIX as base for the logarithm
// ——————————————————————————————————————————————————————————————
inline constexpr float logb										(
	float						x
)																{
	return						__builtin_logbf(x)				;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type logb(
		T						x
	)															{
		return					__builtin_logb(x)				;
	}

inline constexpr long double logb								(
	long double					x
)																{
	return						__builtin_logbl(x)				;
}
// ——————————————————————————————————————————————————————————————
// ————————————— ilogb
// —————————————	returns the integral part of the logarithm of |x|, using FLT_RADIX as base for the logarithm
// ——————————————————————————————————————————————————————————————
inline constexpr int ilogb										(
	float						x
)																{
	return						__builtin_ilogbf(x)				;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, int> :: type ilogb(
		T						x
	)															{
		return					__builtin_ilogb(x)				;
	}

inline constexpr int ilogb										(
	long double					x
)																{
	return						__builtin_ilogbl(x)				;
}
// ——————————————————————————————————————————————————————————————
// ————————————— exp
// —————————————	returns the base-e exponential function of x, which is e raised to the power x: e ^ x
// ——————————————————————————————————————————————————————————————
inline constexpr float exp										(
	float						x
)																{
	return						__builtin_expf(x)				;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type exp(
		T						x
	)															{
		return					__builtin_exp(x)				;
	}

inline constexpr long double exp								(
	long double					x
)																{
	return						__builtin_expl(x)				;
}
// ——————————————————————————————————————————————————————————————
// ————————————— exp2
// —————————————	returns the base-2 exponential function of x, which is 2 raised to the power x: 2 ^ x
// ——————————————————————————————————————————————————————————————
inline constexpr float exp2										(
	float						x
)																{
	return						__builtin_exp2f(x)				;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type exp2(
		T						x
	)															{
		return					__builtin_exp2(x)				;
	}

inline constexpr long double exp2								(
	long double					x
)																{
	return						__builtin_exp2l(x)				;
}
// ——————————————————————————————————————————————————————————————
// ————————————— expm1
// —————————————	Returns e raised to the power x minus one: e ^ x - 1
// ——————————————————————————————————————————————————————————————
inline constexpr float expm1									(
	float						x
)																{
	return						__builtin_expm1f(x)				;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type expm1(
		T						x
	)															{
		return					__builtin_expm1(x)				;
	}

inline constexpr long double expm1								(
	long double					x
)																{
	return						__builtin_expm1l(x)				;
}
// ——————————————————————————————————————————————————————————————
// ————————————— frexp
// —————————————	returns the binary significand of x (a floating point with an absolute value
// —————————————	between 0.5(included) and 1.0(excluded)). x = significand * (2 ^ exp)
// ——————————————————————————————————————————————————————————————
inline constexpr float frexp									(
	float						x								,
	int *						exp
)																{
	return						__builtin_frexpf(x, exp)		;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type frexp(
		T						x								,
		int *					exp
	)															{
		return					__builtin_frexp(x, exp)			;
	}

inline constexpr long double frexp								(
	long double					x								,
	int *						exp
)																{
	return						__builtin_frexpl(x, exp)		;
}
// ——————————————————————————————————————————————————————————————
// ————————————— ldexp
// —————————————	returns the result of multiplying x (the significand) by 2 raised to the power
// —————————————	of exp (the exponent). x * (2 ^ exp)
// ——————————————————————————————————————————————————————————————
inline constexpr float ldexp									(
	float						x								,
	int							exp
)																{
	return						__builtin_ldexpf(x, exp)		;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type ldexp(
		T						x								,
		int						exp
	)															{
		return					__builtin_ldexp(x, exp)			;
	}

inline constexpr long double ldexp								(
	long double					x								,
	int							exp
)																{
	return						__builtin_ldexpl(x, exp)		;
}
// ——————————————————————————————————————————————————————————————
// ————————————— ceil
// —————————————	rounds x upward, returning the smallest integral value that is not less than x
// ——————————————————————————————————————————————————————————————
inline constexpr float ceil										(
	float						x
)																{
	return						__builtin_ceilf(x)				;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type ceil(
		T						x
	)															{
		return					__builtin_ceil(x)				;
	}

inline constexpr long double ceil								(
	long double					x
)																{
	return						__builtin_ceill(x)				;
}
// ——————————————————————————————————————————————————————————————
// ————————————— round
// —————————————	returns the integral value that is nearest to x, with halfway cases rounded away from zero (double)
// ——————————————————————————————————————————————————————————————
inline constexpr float round									(
	float						x
)																{
	return						__builtin_roundf(x)				;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type round(
		T						x
	)															{
		return					__builtin_round(x)				;
	}

inline constexpr long double round								(
	long double					x
)																{
	return						__builtin_roundl(x)				;
}
// ——————————————————————————————————————————————————————————————
// ————————————— lround
// —————————————	returns the integral value that is nearest to x, with halfway cases rounded away from zero (long)
// ——————————————————————————————————————————————————————————————
inline constexpr long lround									(
	float						x
)																{
	return						__builtin_lroundf(x)			;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, long> :: type lround(
		T						x
	)															{
		return					__builtin_lround(x)				;
	}

inline constexpr long lround									(
	long double					x
)																{
	return						__builtin_lroundl(x)			;
}
// ——————————————————————————————————————————————————————————————
// ————————————— llround
// —————————————	returns the integral value that is nearest to x, with halfway cases rounded away from zero (long long)
// ——————————————————————————————————————————————————————————————
inline constexpr long long llround								(
	float						x
)																{
	return						__builtin_llroundf(x)			;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, long long> :: type llround(
		T						x
	)															{
		return					__builtin_llround(x)			;
	}

inline constexpr long long llround								(
	long double					x
)																{
	return						__builtin_llroundl(x)			;
}
// ——————————————————————————————————————————————————————————————
// ————————————— trunc
// —————————————	returns the integral value that is nearest to x, with halfway cases rounded toward zero
// ——————————————————————————————————————————————————————————————
inline constexpr float trunc									(
	float						x
)																{
	return						__builtin_truncf(x)				;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type trunc(
		T						x
	)															{
		return					__builtin_trunc(x)				;
	}

inline constexpr long double trunc								(
	long double					x
)																{
	return						__builtin_truncl(x)				;
}
// ——————————————————————————————————————————————————————————————
// ————————————— floor
// —————————————	rounds x downward, returning the largest integral value that is not greater than x
// ——————————————————————————————————————————————————————————————
inline constexpr float floor									(
	float						x
)																{
	return						__builtin_floorf(x)				;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type floor(
		T						x
	)															{
		return					__builtin_floor(x)				;
	}

inline constexpr long double floor								(
	long double					x
)																{
	return						__builtin_floorl(x)				;
}
// ——————————————————————————————————————————————————————————————
// ————————————— fmin
// —————————————	returns the smaller of its arguments: either x or y. If one of the arguments
// —————————————	in a NaN, the other is returned.
// ——————————————————————————————————————————————————————————————
inline constexpr float fmin										(
	float						x								,
	float						y
)																{
	return						__builtin_fminf(x, y)			;
}

template <typename T1, typename T2>
	inline constexpr typename enable_if <is_integer <T1> :: value && is_integer <T2> :: value, double> :: type fmin(
		T1						x								,
		T2						y
	)															{
		return					__builtin_fmin(x, y)			;
	}

inline constexpr long double fmin								(
	long double					x								,
	long double					y
)																{
	return						__builtin_fminl(x, y)			;
}
// ——————————————————————————————————————————————————————————————
// ————————————— fmax
// —————————————	returns the larger of its arguments: either x or y. If one of the arguments
// —————————————	in a NaN, the other is returned.
// ——————————————————————————————————————————————————————————————
inline constexpr float fmax										(
	float						x								,
	float						y
)																{
	return						__builtin_fmaxf(x, y)			;
}

template <typename T1, typename T2>
	inline constexpr typename enable_if <is_integer <T1> :: value && is_integer <T2> :: value, double> :: type fmax(
		T1						x								,
		T2						y
	)															{
		return					__builtin_fmax(x, y)			;
	}

inline constexpr long double fmax								(
	long double					x								,
	long double					y
)																{
	return						__builtin_fmaxl(x, y)			;
}
// ——————————————————————————————————————————————————————————————
// ————————————— fabs
// —————————————	returns the absolute value of x: |x|
// ——————————————————————————————————————————————————————————————
inline constexpr float fabs										(
	float						x
)																{
	return						__builtin_fabsf(x)				;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type fabs(
		T						x
	)															{
		return					__builtin_fabs(x)				;
	}

inline constexpr long double fabs								(
	long double					x
)																{
	return						__builtin_fabsl(x)				;
}
// ——————————————————————————————————————————————————————————————
// ————————————— fdim
// —————————————	the function returns x - y if x > y, and zero otherwise
// ——————————————————————————————————————————————————————————————
inline constexpr float fdim										(
	float						x								,
	float						y
)																{
	return						__builtin_fdimf(x, y)			;
}

template <typename T1, typename T2>
	inline constexpr typename enable_if <is_integer <T1> :: value && is_integer <T2> :: value, double> :: type fdim(
		T1						x								,
		T2						y
	)															{
		return					__builtin_fdim(x, y)			;
	}

inline constexpr long double fdim								(
	long double					x								,
	long double					y
)																{
	return						__builtin_fdiml(x, y)			;
}
// ——————————————————————————————————————————————————————————————
// ————————————— fma
// —————————————	returns multiply-add x * y + z
// ——————————————————————————————————————————————————————————————
inline constexpr float fma										(
	float						x								,
	float						y								,
	float						z
)																{
	return						__builtin_fmaf(x, y, z)			;
}

template <typename T1, typename T2, typename T3>
	inline constexpr typename enable_if <is_integer <T1> :: value && is_integer <T2> :: value && is_integer <T3> :: value, double> :: type fma(
		T1						x								,
		T2						y								,
		T3						z
	)															{
		return					__builtin_fma(x, y, z)			;
	}

inline constexpr long double fma								(
	long double					x								,
	long double					y								,
	long double					z
)																{
	return						__builtin_fmal(x, y, z)			;
}
// ——————————————————————————————————————————————————————————————
// ————————————— scalbn
// —————————————	returns x * (FLT_RADIX ^ n), n - int
// ——————————————————————————————————————————————————————————————
inline constexpr float scalbn									(
	float						x								,
	int							n
)																{
	return						__builtin_scalbnf(x, n)			;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type scalbn(
		T						x								,
		int						n
	)															{
		return					__builtin_scalbn(x, n)			;
	}

inline constexpr long double scalbn								(
	long double					x								,
	int							n
)																{
	return						__builtin_scalbnl(x, n)			;
}
// ——————————————————————————————————————————————————————————————
// ————————————— scalbln
// —————————————	returns x * (FLT_RADIX ^ n), n - long
// ——————————————————————————————————————————————————————————————
inline constexpr float scalbln									(
	float						x								,
	long						n
)																{
	return						__builtin_scalblnf(x, n)		;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type scalbn(
		T						x								,
		long					n
	)															{
		return					__builtin_scalbln(x, n)			;
	}

inline constexpr long double scalbln							(
	long double					x								,
	long						n
)																{
	return						__builtin_scalblnl(x, n)		;
}
// ——————————————————————————————————————————————————————————————
// ————————————— fmod
// —————————————	returns the remainder of numer/denom (rounded towards zero): fmod = numer - tquot * denom
// —————————————	where tquot is the truncated (i.e., rounded towards zero) result of: numer/denom.
// ——————————————————————————————————————————————————————————————
inline constexpr float fmod										(
	float						x								,
	float						y
)																{
	return						__builtin_fmodf(x, y)			;
}

template <typename T1, typename T2>
	inline constexpr typename enable_if <is_integer <T1> :: value && is_integer <T2> :: value, double> :: type fmod(
		T1						x								,
		T2						y
	)															{
		return					__builtin_fmod(x, y)			;
	}

inline constexpr long double fmod								(
	long double					x								,
	long double					y
)																{
	return						__builtin_fmodl(x, y)			;
}
// ——————————————————————————————————————————————————————————————
// ————————————— modf
// —————————————	returns the fractional part of x, with the same sign: x = intpart + fract
// ——————————————————————————————————————————————————————————————
inline constexpr float modf										(
	float						x								,
	float *						intpart
)																{
	return						__builtin_modff(x, intpart)		;
}

template <typename T1, typename T2>
	inline constexpr typename enable_if <is_integer <T1> :: value && is_integer <T2> :: value, double> :: type modf(
		T1						x								,
		T2 *					intpart
	)															{
		return					__builtin_modf(x, intpart)		;
	}

inline constexpr long double modf								(
	long double					x								,
	long double	*				intpart
)																{
	return						__builtin_modfl(x, intpart)		;
}
// ——————————————————————————————————————————————————————————————
// ————————————— remainder
// —————————————	returns the floating-point remainder of numer/denom (rounded to nearest),
// —————————————	numer - rquot * denom, where rquot is the result of: numer/denom, rounded toward the nearest
// —————————————	integral value (with halfway cases rounded toward the even number)
// ——————————————————————————————————————————————————————————————
inline constexpr float remainder								(
	float						x								,
	float						y
)																{
	return						__builtin_remainderf(x, y)		;
}

template <typename T1, typename T2>
	inline constexpr typename enable_if <is_integer <T1> :: value && is_integer <T2> :: value, double> :: type remainder(
		T1						x								,
		T2						y
	)															{
		return					__builtin_remainder(x, y)		;
	}

inline constexpr long double remainder							(
	long double					x								,
	long double					y
)																{
	return						__builtin_remainderl(x, y)		;
}
// ——————————————————————————————————————————————————————————————
// ————————————— remquo
// —————————————	returns the same as remainder, but it additionally stores the quotient internally used to determine 
// —————————————	its result in the object pointed by quot
// ——————————————————————————————————————————————————————————————
inline constexpr float remquo									(
	float						x								,
	float						y								,
	int *						quot
)																{
	return						__builtin_remquof(x, y, quot)	;
}

template <typename T1, typename T2>
	inline constexpr typename enable_if <is_integer <T1> :: value && is_integer <T2> :: value, double> :: type remquo(
		T1						x								,
		T2						y								,
		int *					quot
	)															{
		return					__builtin_remquo(x, y, quot)	;
	}

inline constexpr long double remquo								(
	long double					x								,
	long double					y								,
	int *						quot
)																{
	return						__builtin_remquol(x, y, quot)	;
}
// ——————————————————————————————————————————————————————————————
// ————————————— sqrt
// —————————————	returns the square root of x
// ——————————————————————————————————————————————————————————————
inline constexpr float sqrt										(
	float						x
)																{
	return						__builtin_sqrtf(x)				;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type sqrt(
		T						x
	)															{
		return					__builtin_sqrt(x)				;
	}

inline constexpr long double sqrt								(
	long double					x
)																{
	return						__builtin_sqrtl(x)				;
}
// ——————————————————————————————————————————————————————————————
// ————————————— cbrt
// —————————————	returns the cubic root of x
// ——————————————————————————————————————————————————————————————
inline constexpr float cbrt										(
	float						x
)																{
	return						__builtin_cbrtf(x)				;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type cbrt(
		T						x
	)															{
		return					__builtin_cbrt(x)				;
	}

inline constexpr long double cbrt								(
	long double					x
)																{
	return						__builtin_cbrtl(x)				;
}
// ——————————————————————————————————————————————————————————————
// ————————————— pow
// —————————————	returns base raised to the power exponent: x ^ n
// ——————————————————————————————————————————————————————————————
inline constexpr float pow										(
	float						x								,
	float						n
)																{
	return						__builtin_powf(x, n)			;
}

template <typename T1, typename T2>
	inline constexpr typename enable_if <is_integer <T1> :: value && is_integer <T2> :: value, double> :: type pow(
		T1						x								,
		T2						n
	)															{
		return					__builtin_pow(x, n)				;
	}

inline constexpr long double pow								(
	long double					x								,
	long double					n
)																{
	return						__builtin_powl(x, n)			;
}

inline constexpr float pow										(
	float						x								,
	int							n
)																{
	return						__builtin_powif(x, n)			;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type pow(
		T						x								,
		int						n
	)															{
		return					__builtin_powi(x, n)			;
	}

inline constexpr long double pow								(
	long double					x								,
	int							n
)																{
	return						__builtin_powil(x, n)			;
}
// ——————————————————————————————————————————————————————————————
// ————————————— hypot
// —————————————	returns the square root of (x ^ 2 + y ^ 2)
// ——————————————————————————————————————————————————————————————
inline constexpr float hypot									(
	float						x								,
	float						y
)																{
	return						__builtin_hypotf(x, y)			;
}

template <typename T1, typename T2>
	inline constexpr typename enable_if <is_integer <T1> :: value && is_integer <T2> :: value, double> :: type hypot(
		T1						x								,
		T2						y
	)															{
		return					__builtin_hypot(x, y)			;
	}

inline constexpr long double hypot								(
	long double					x								,
	long double					y
)																{
	return						__builtin_hypotl(x, y)			;
}
// ——————————————————————————————————————————————————————————————
// ————————————— erf
// —————————————	returns the error function value for x
// ——————————————————————————————————————————————————————————————
inline constexpr float erf										(
	float						x
)																{
	return						__builtin_erff(x)				;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type erf(
		T						x
	)															{
		return					__builtin_erf(x)				;
	}

inline constexpr long double erf								(
	long double					x
)																{
	return						__builtin_erfl(x)				;
}
// ——————————————————————————————————————————————————————————————
// ————————————— erfc
// —————————————	returns the complementary error function value for x
// ——————————————————————————————————————————————————————————————
inline constexpr float erfc										(
	float						x
)																{
	return						__builtin_erfcf(x)				;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type erfc(
		T						x
	)															{
		return					__builtin_erfc(x)				;
	}

inline constexpr long double erfc								(
	long double					x
)																{
	return						__builtin_erfcl(x)				;
}
// ——————————————————————————————————————————————————————————————
// ————————————— lgamma
// —————————————	returns the natural logarithm of the absolute value of the gamma function of x
// ——————————————————————————————————————————————————————————————
inline constexpr float lgamma									(
	float						x
)																{
	return						__builtin_lgammaf(x)			;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type lgamma(
		T						x
	)															{
		return					__builtin_lgamma(x)				;
	}

inline constexpr long double lgamma								(
	long double					x
)																{
	return						__builtin_lgammal(x)			;
}
// ——————————————————————————————————————————————————————————————
// ————————————— tgamma
// —————————————	returns the gamma function of x
// ——————————————————————————————————————————————————————————————
inline constexpr float tgamma									(
	float						x
)																{
	return						__builtin_tgammaf(x)			;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type tgamma(
		T						x
	)															{
		return					__builtin_tgamma(x)				;
	}

inline constexpr long double tgamma								(
	long double					x
)																{
	return						__builtin_tgammal(x)			;
}
// ——————————————————————————————————————————————————————————————
// ————————————— rint
// —————————————	rounds x to an integral value, using the rounding direction specified by fegetround
// ——————————————————————————————————————————————————————————————
inline constexpr float rint										(
	float						x
)																{
	return						__builtin_rintf(x)				;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type rint(
		T						x
	)															{
		return					__builtin_rint(x)				;
	}

inline constexpr long double rint								(
	long double					x
)																{
	return						__builtin_rintl(x)				;
}
// ——————————————————————————————————————————————————————————————
// ————————————— lrint
// —————————————	rounds x to an integral value, using the rounding direction specified by fegetround,
// —————————————	and returns it as a value of type long
// ——————————————————————————————————————————————————————————————
inline constexpr long lrint										(
	float						x
)																{
	return						__builtin_lrintf(x)				;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, long> :: type lrint(
		T						x
	)															{
		return					__builtin_lrint(x)				;
	}

inline constexpr long lrint										(
	long double					x
)																{
	return						__builtin_lrintl(x)				;
}
// ——————————————————————————————————————————————————————————————
// ————————————— llrint
// —————————————	rounds x to an integral value, using the rounding direction specified by fegetround,
// —————————————	and returns it as a value of type long long
// ——————————————————————————————————————————————————————————————
inline constexpr long long llrint								(
	float						x
)																{
	return						__builtin_llrintf(x)			;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, long long> :: type llrint(
		T						x
	)															{
		return					__builtin_llrint(x)				;
	}

inline constexpr long long llrint								(
	long double					x
)																{
	return						__builtin_llrintl(x)			;
}
// ——————————————————————————————————————————————————————————————
// ————————————— nearbyint
// —————————————	rounds x to an integral value, using the rounding direction specified by fegetround,
// —————————————	this function does not raise FE_INEXACT exceptions
// ——————————————————————————————————————————————————————————————
inline constexpr float nearbyint								(
	float						x
)																{
	return						__builtin_nearbyintf(x)			;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type nearbyint(
		T						x
	)															{
		return					__builtin_nearbyint(x)			;
	}

inline constexpr long double nearbyint							(
	long double					x
)																{
	return						__builtin_nearbyintl(x)			;
}
// ——————————————————————————————————————————————————————————————
// ————————————— nextafter
// —————————————	returns the next representable value after x in the direction of y
// ——————————————————————————————————————————————————————————————
inline constexpr float nextafter								(
	float						x								,
	float						y
)																{
	return						__builtin_nextafterf(x, y)		;
}

template <typename T1, typename T2>
	inline constexpr typename enable_if <is_integer <T1> :: value && is_integer <T2> :: value, double> :: type nextafter(
		T1						x								,
		T2						y
	)															{
		return					__builtin_nextafter(x, y)		;
	}

inline constexpr long double nextafter							(
	long double					x								,
	long double					y
)																{
	return						__builtin_nextafterl(x, y)		;
}
// ——————————————————————————————————————————————————————————————
// ————————————— nexttoward
// —————————————	returns the next representable value after x in the direction of y, y - long double
// ——————————————————————————————————————————————————————————————
inline constexpr float nexttoward								(
	float						x								,
	long double					y
)																{
	return						__builtin_nexttowardf(x, y)		;
}

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type nexttoward(
		T						x								,
		long double				y
	)															{
		return					__builtin_nexttoward(x, y)		;
	}

inline constexpr long double nexttoward							(
	long double					x								,
	long double					y
)																{
	return						__builtin_nexttowardl(x, y)		;
}
// ——————————————————————————————————————————————————————————————
// ————————————— isfinite
// —————————————	used to determine whether a given value if finite or not
// ——————————————————————————————————————————————————————————————
template <typename T>
	inline constexpr bool isfinite								(
		T						x
	)															{
		return					__builtin_isfinite(x)			;
	}
// ——————————————————————————————————————————————————————————————
// ————————————— isinf
// —————————————	used to determine whether a given value if finite or not
// ——————————————————————————————————————————————————————————————
template <typename T>
	inline constexpr bool isinf									(
		T						x
	)															{
		return					__builtin_isinf(x)				;
	}
// ——————————————————————————————————————————————————————————————
// ————————————— isnan
// —————————————	returns whether x is a NaN (Not-A-Number) value
// ——————————————————————————————————————————————————————————————
template <typename T>
	inline constexpr bool isnan									(
		T						x
	)															{
		return					__builtin_isnan(x)				;
	}
// ——————————————————————————————————————————————————————————————
// ————————————— isnormal
// —————————————	determines if the given floating point number arg is normal, i.e. is neither zero, subnormal,
// —————————————	infinite, nor NaN
// ——————————————————————————————————————————————————————————————
template <typename T>
	inline constexpr bool isnormal								(
		T						x
	)															{
		return					__builtin_isnormal(x)			;
	}
// ——————————————————————————————————————————————————————————————
// ————————————— signbit
// —————————————	returns whether the sign of x is negative
// ——————————————————————————————————————————————————————————————
template <typename T>
	inline constexpr bool signbit								(
		T						x
	)															{
		return					__builtin_signbit(x)			;
	}
// ——————————————————————————————————————————————————————————————
// ————————————— copysign
// —————————————	returns a value with the magnitude of x and the sign of y
// ——————————————————————————————————————————————————————————————
inline constexpr float copysign									(
	float						x								,
	float						y
)																{
	return						__builtin_copysignf(x, y)		;
}

template <typename T1, typename T2>
	inline constexpr typename enable_if <is_integer <T1> :: value && is_integer <T2> :: value, double> :: type copysign(
		T1						x								,
		T2						y
	)															{
		return					__builtin_copysign(x, y)		;
	}

inline constexpr long double copysign							(
	long double					x								,
	long double					y
)																{
	return						__builtin_copysignl(x, y)		;
}
// ——————————————————————————————————————————————————————————————
// ————————————— isless
// —————————————	returns whether x is less than y
// ——————————————————————————————————————————————————————————————
template <typename T1, typename T2>
	inline constexpr typename enable_if <is_arithmetic <T1> :: value && is_arithmetic <T2> :: value, bool> :: type isless(
		T1						x								,
		T2						y
	)															{
		return					__builtin_isless(x, y)			;
	}
// ——————————————————————————————————————————————————————————————
// ————————————— islessequal
// —————————————	returns whether x is less or equal than y
// ——————————————————————————————————————————————————————————————
template <typename T1, typename T2>
	inline constexpr typename enable_if <is_arithmetic <T1> :: value && is_arithmetic <T2> :: value, bool> :: type islessequal(
		T1						x								,
		T2						y
	)															{
		return					__builtin_islessequal(x, y)		;
	}
// ——————————————————————————————————————————————————————————————
// ————————————— islessgreater
// —————————————	returns whether x is less or greater than y
// ——————————————————————————————————————————————————————————————
template <typename T1, typename T2>
	inline constexpr typename enable_if <is_arithmetic <T1> :: value && is_arithmetic <T2> :: value, bool> :: type islessgreater(
		T1						x								,
		T2						y
	)															{
		return					__builtin_islessgreater(x, y)	;
	}
// ——————————————————————————————————————————————————————————————
// ————————————— isgreaterequal
// —————————————	returns whether x is equal or greater than y
// ——————————————————————————————————————————————————————————————
template <typename T1, typename T2>
	inline constexpr typename enable_if <is_arithmetic <T1> :: value && is_arithmetic <T2> :: value, bool> :: type isgreaterequal(
		T1						x								,
		T2						y
	)															{
		return					__builtin_isgreaterequal(x, y)	;
	}
// ——————————————————————————————————————————————————————————————
// ————————————— isgreater
// —————————————	returns whether x is greater than y
// ——————————————————————————————————————————————————————————————
template <typename T1, typename T2>
	inline constexpr typename enable_if <is_arithmetic <T1> :: value && is_arithmetic <T2> :: value, bool> :: type isgreater(
		T1						x								,
		T2						y
	)															{
		return					__builtin_isgreater(x, y)		;
	}
// ——————————————————————————————————————————————————————————————
// ————————————— fpclassify
// —————————————	returns a value of type int that matches one of the classification macro constants, depending on the value of x
// ——————————————————————————————————————————————————————————————
template <typename T>
	inline constexpr int fpclassify								(
		T						x
	)															{
		return					__builtin_fpclassify(FP_NAN, FP_INFINITE, FP_NORMAL, FP_SUBNORMAL, FP_ZERO, x);
	}
// ——————————————————————————————————————————————————————————————
// ————————————— isunordered
// —————————————	returns true if either x or y is NaN, false otherwise
// ——————————————————————————————————————————————————————————————
template <typename T1, typename T2>
	inline constexpr bool isunordered							(
		T1						x								,
		T2						y
	)															{
		return					__builtin_isunordered(x, y)		;
	}
// ——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
} // namespace std