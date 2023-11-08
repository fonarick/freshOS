#include "ext/type_traits.h"
/*
	enable_if
	is_integer
	is_arithmetic
*/

namespace std													{
// ——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// ———————————————————————————————————————————————————————————————————————————————————— math
// ——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// ——————————————————————————————————————————————————————————————
// ————————————— math_constants
// ——————————————————————————————————————————————————————————————
template <typename T>
	struct math_constants										{
		static_assert											(
			is_floating <T> :: value,
			"template argument not a floating type"
		)														;
		static constexpr T		pi							  =	3.1415926535897932384626433832795029L					;
		static constexpr T		pi_half						  =	1.5707963267948966192313216916397514L					;
		static constexpr T		pi_third					  =	1.0471975511965977461542144610931676L					;
		static constexpr T		pi_quarter					  =	0.7853981633974483096156608458198757L					;
		static constexpr T		root_pi_div_2				  =	1.2533141373155002512078826424055226L					;
		static constexpr T		one_div_pi					  =	0.3183098861837906715377675267450287L					;
		static constexpr T		two_div_pi					  =	0.6366197723675813430755350534900574L					;
		static constexpr T		two_div_root_pi				  =	1.1283791670955125738961589031215452L					;
		static constexpr T		e							  =	2.7182818284590452353602874713526625L					;
		static constexpr T		one_div_e					  =	0.36787944117144232159552377016146087L					;
		static constexpr T		log2_e						  =	1.4426950408889634073599246810018921L					;
		static constexpr T		log10_e						  =	0.4342944819032518276511289189166051L					;
		static constexpr T		ln_2						  =	0.6931471805599453094172321214581766L					;
		static constexpr T		ln_3						  =	1.0986122886681096913952452369225257L					;
		static constexpr T		ln_10						  =	2.3025850929940456840179914546843642L					;
		static constexpr T		gamma_e						  =	0.5772156649015328606065120900824024L					;
		static constexpr T		phi							  =	1.6180339887498948482045868343656381L					;
		static constexpr T		root_2						  =	1.4142135623730950488016887242096981L					;
		static constexpr T		root_3						  =	1.7320508075688772935274463415058724L					;
		static constexpr T		root_5						  =	2.2360679774997896964091736687312762L					;
		static constexpr T		root_7						  =	2.6457513110645905905016157536392604L					;
		static constexpr T		one_div_root_2				  =	0.7071067811865475244008443621048490L					;
	}															;
// ——————————————————————————————————————————————————————————————
// ————————————— numerical_limits
// ——————————————————————————————————————————————————————————————
template <typename T>
	struct numerical_limits										{
		static_assert											(
			is_arithmetic <T> :: value,
			"template argument not a arithmetic type"
		)														;
		static constexpr T		BOOL_MIN					  =	false						;
		static constexpr T		BOOL_MAX					  =	true						;
		static constexpr T		CHAR_MIN					  =	-128						;
		static constexpr T		CHAR_MAX					  =	127							;
		static constexpr T		UCHAR_MIN					  =	0							;
		static constexpr T		UCHAR_MAX					  =	255							;
		static constexpr T		SHRT_MIN					  =	-32768						;
		static constexpr T		SHRT_MAX					  =	32767						;
		static constexpr T		USHRT_MIN					  =	0							;
		static constexpr T		USHRT_MAX					  =	65535						;
		static constexpr T		INT_MIN						  =	-2147483648					;
		static constexpr T		INT_MAX						  =	2147483647					;
		static constexpr T		UINT_MIN					  = 0UL							;
		static constexpr T		UINT_MAX					  =	4294967295UL				;
		static constexpr T		LONG_MIN					  =	-9223372036854775807L - 1	;
		static constexpr T		LONG_MAX					  =	9223372036854775807L		;
		static constexpr T		ULONG_MIN					  =	0UL							;
		static constexpr T		ULONG_MAX					  =	18446744073709551615UL		;
		static constexpr T		LLONG_MIN					  =	-9223372036854775807LL - 1	;
		static constexpr T		LLONG_MAX					  =	9223372036854775807LL		;
		static constexpr T		ULLONG_MIN					  =	0ULL						;
		static constexpr T		ULLONG_MAX					  =	18446744073709551615ULL		;

		static constexpr T		FLT_MIN						  =	1.175494351e-38F			;
		static constexpr T		FLT_MAX						  =	3.402823466e+38F			;
		static constexpr T		FLT_RADIX					  =	2							; // основание системы счисления
		static constexpr T		FLT_MANT_DIG				  =	24							; // число битов в мантиссе
		static constexpr T		FLT_DIG						  =	6							; // число десятичных разрядов точности
		static constexpr T		FLT_DECIMAL_DIG				  =	9							; // число десятичных разрядов точности округления
		static constexpr T		FLT_MIN_EXP					  =	-125						; // минимальный показатель двоичной степени
		static constexpr T		FLT_MIN_10_EXP				  =	-37							; // минимальный показатель десятичной степени
		static constexpr T		FLT_MAX_EXP					  =	128							; // максимальный показатель двоичной степени
		static constexpr T		FLT_MAX_10_EXP				  =	38							; // максимальный показатель десятичной степени
		static constexpr T		FLT_HAS_SUBNORM				  =	1							; // тип поддерживает денормализованные числа
		static constexpr T		FLT_EPSILON					  =	1.192092896e-07F			; // наименьшее, что 1.0 + FLT_EPSILON != 1.0
		static constexpr T		FLT_TRUE_MIN				  =	1.401298464e-45F			; // минимальное денормализованное положительное значение

		static constexpr T		DBL_MIN						  =	2.2250738585072014e-308		;
		static constexpr T		DBL_MAX						  =	1.7976931348623158e+308		;
		static constexpr T		DBL_RADIX					  =	2							; // основание системы счисления
		static constexpr T		DBL_MANT_DIG				  =	53							; // число битов в мантиссе
		static constexpr T		DBL_DIG						  =	15							; // число десятичных разрядов точности
		static constexpr T		DBL_DECIMAL_DIG				  =	17							; // число десятичных разрядов точности округления
		static constexpr T		DBL_MIN_EXP					  =	-1021						; // минимальный показатель двоичной степени
		static constexpr T		DBL_MIN_10_EXP				  =	-307						; // минимальный показатель десятичной степени
		static constexpr T		DBL_MAX_EXP					  =	1024						; // максимальный показатель двоичной степени
		static constexpr T		DBL_MAX_10_EXP				  =	308							; // максимальный показатель десятичной степени
		static constexpr T		DBL_HAS_SUBNORM				  =	1							; // тип поддерживает денормализованные числа
		static constexpr T		DBL_EPSILON					  =	2.2204460492503131e-016		; // наименьшее, что 1.0 + DBL_EPSILON != 1.0
		static constexpr T		DBL_TRUE_MIN				  =	4.9406564584124654e-324		; // минимальное денормализованное положительное значение

		static constexpr T		LDBL_MIN					  =	2.2250738585072014e-308L								;
		static constexpr T		LDBL_MAX					  =	1.7976931348623158e+308L								;
		static constexpr T		LDBL_RADIX					  =	2							; // основание системы счисления
		static constexpr T		LDBL_MANT_DIG				  =	53							; // число битов в мантиссе
		static constexpr T		LDBL_DIG					  =	15							; // число десятичных разрядов точности
		static constexpr T		LDBL_DECIMAL_DIG			  =	17							; // число десятичных разрядов точности округления
		static constexpr T		LDBL_MIN_EXP				  =	-1021						; // минимальный показатель двоичной степени
		static constexpr T		LDBL_MIN_10_EXP				  =	-307						; // минимальный показатель десятичной степени
		static constexpr T		LDBL_MAX_EXP				  =	1024						; // максимальный показатель двоичной степени
		static constexpr T		LDBL_MAX_10_EXP				  =	308							; // максимальный показатель десятичной степени
		static constexpr T		LDBL_HAS_SUBNORM			  =	1							; // тип поддерживает денормализованные числа
		static constexpr T		LDBL_EPSILON				  =	2.2204460492503131e-016L	; // наименьшее, что 1.0 + LDBL_EPSILON != 1.0
		static constexpr T		LDBL_TRUE_MIN				  =	4.9406564584124654e-324L	; // минимальное денормализованное положительное значение
	}															;
// ——————————————————————————————————————————————————————————————
// ————————————— FP_NORMAL, FP_SUBNORMAL, FP_ZERO, FP_INFINITE, FP_NAN
// ——————————————————————————————————————————————————————————————
enum : int														{
	FP_NORMAL				  =	0								, // indicates that the value is normal, i.e. not an infinity, subnormal, not-a-number or zero
	FP_ZERO					  =	1								, // indicates that the value is positive or negative zero
	FP_INFINITE				  =	2								, // indicates that the value is not representable by the underlying type (positive or negative infinity)
	FP_SUBNORMAL			  =	3								, // indicates that the value is subnormal
	FP_NAN					  =	4								  // indicates that the value is not-a-number (NaN)
}																;
// ——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// ——————————————————————————————————————————————————————————————
// ————————————— cos
// ——————————————————————————————————————————————————————————————
inline constexpr float cos										(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type cos(
		T						x
	)															;

inline constexpr long double cos								(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— cosh
// —————————————	hyperbolic cos
// ——————————————————————————————————————————————————————————————
inline constexpr float cosh										(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type cosh(
		T						x
	)															;

inline constexpr long double cosh								(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— acos
// —————————————	arc cos
// ——————————————————————————————————————————————————————————————
inline constexpr float acos										(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type acos(
		T						x
	)															;

inline constexpr long double acos								(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— acosh
// —————————————	arc hyperbolic cos
// ——————————————————————————————————————————————————————————————
inline constexpr float acosh									(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type acosh(
		T						x
	)															;

inline constexpr long double acosh								(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— sin
// ——————————————————————————————————————————————————————————————
inline constexpr float sin										(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type sin(
		T						x
	)															;

inline constexpr long double sin								(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— sinh
// —————————————	hyperbolic sin
// ——————————————————————————————————————————————————————————————
inline constexpr float sinh										(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type sinh(
		T						x
	)															;

inline constexpr long double sinh								(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— asin
// —————————————	arc sin
// ——————————————————————————————————————————————————————————————
inline constexpr float asin										(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type asin(
		T						x
	)															;

inline constexpr long double asin								(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— asinh
// —————————————	arc hyperbolic sin
// ——————————————————————————————————————————————————————————————
inline constexpr float asinh									(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type asinh(
		T						x
	)															;

inline constexpr long double asinh								(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— tan
// ——————————————————————————————————————————————————————————————
inline constexpr float tan										(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type tan(
		T						x
	)															;

inline constexpr long double tan								(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— tanh
// —————————————	hyperbolic tan
// ——————————————————————————————————————————————————————————————
inline constexpr float tanh										(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type tanh(
		T						x
	)															;

inline constexpr long double tanh								(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— atan
// —————————————	arc tan
// ——————————————————————————————————————————————————————————————
inline constexpr float atan										(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type atan(
		T						x
	)															;

inline constexpr long double atan								(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— atan2
// —————————————	arc tan (y/x)
// ——————————————————————————————————————————————————————————————
inline constexpr float atan2									(
	float						x								,
	float						y
)																;

template <typename T1, typename T2>
	inline constexpr typename enable_if <is_integer <T1> :: value && is_integer <T2> :: value, double> :: type atan2(
		T1						x								,
		T2						y
	)															;

inline constexpr long double atan2								(
	long double					x								,
	long double					y
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— atanh
// —————————————	arc hyperbolic tan
// ——————————————————————————————————————————————————————————————
inline constexpr float atanh									(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type atanh(
		T						x
	)															;

inline constexpr long double atanh								(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— log
// —————————————	returns the natural logarithm of x
// ——————————————————————————————————————————————————————————————
inline constexpr float log										(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type log(
		T						x
	)															;

inline constexpr long double log								(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— log2
// —————————————	returns the binary (base-2) logarithm of x
// ——————————————————————————————————————————————————————————————
inline constexpr float log2										(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type log2(
		T						x
	)															;

inline constexpr long double log2								(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— log10
// —————————————	returns the common (base-10) logarithm of x
// ——————————————————————————————————————————————————————————————
inline constexpr float log10									(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type log10(
		T						x
	)															;

inline constexpr long double log10								(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— log1p
// —————————————	returns the natural logarithm of one plus x; log(1+x)
// ——————————————————————————————————————————————————————————————
inline constexpr float log1p									(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type log1p(
		T						x
	)															;

inline constexpr long double log1p								(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— logb
// —————————————	returns the logarithm of |x|, using FLT_RADIX as base for the logarithm
// ——————————————————————————————————————————————————————————————
inline constexpr float logb										(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type logb(
		T						x
	)															;

inline constexpr long double logb								(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— ilogb
// —————————————	returns the integral part of the logarithm of |x|, using FLT_RADIX as base for the logarithm
// ——————————————————————————————————————————————————————————————
inline constexpr int ilogb										(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, int> :: type ilogb(
		T						x
	)															;

inline constexpr int ilogb										(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— exp
// —————————————	returns the base-e exponential function of x, which is e raised to the power x: e ^ x
// ——————————————————————————————————————————————————————————————
inline constexpr float exp										(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type exp(
		T						x
	)															;

inline constexpr long double exp								(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— exp2
// —————————————	returns the base-2 exponential function of x, which is 2 raised to the power x: 2 ^ x
// ——————————————————————————————————————————————————————————————
inline constexpr float exp2										(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type exp2(
		T						x
	)															;

inline constexpr long double exp2								(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— expm1
// —————————————	Returns e raised to the power x minus one: e ^ x - 1
// ——————————————————————————————————————————————————————————————
inline constexpr float expm1									(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type expm1(
		T						x
	)															;

inline constexpr long double expm1								(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— frexp
// —————————————	returns the binary significand of x (a floating point with an absolute value
// —————————————	between 0.5(included) and 1.0(excluded)). x = significand * (2 ^ exp)
// ——————————————————————————————————————————————————————————————
inline constexpr float frexp									(
	float						x								,
	int *						exp
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type frexp(
		T						x								,
		int *					exp
	)															;

inline constexpr long double frexp								(
	long double					x								,
	int *						exp
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— ldexp
// —————————————	returns the result of multiplying x (the significand) by 2 raised to the power
// —————————————	of exp (the exponent). x * (2 ^ exp)
// ——————————————————————————————————————————————————————————————
inline constexpr float ldexp									(
	float						x								,
	int							exp
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type ldexp(
		T						x								,
		int						exp
	)															;

inline constexpr long double ldexp								(
	long double					x								,
	int							exp
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— ceil
// —————————————	rounds x upward, returning the smallest integral value that is not less than x
// ——————————————————————————————————————————————————————————————
inline constexpr float ceil										(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type ceil(
		T						x
	)															;

inline constexpr long double ceil								(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— round
// —————————————	returns the integral value that is nearest to x, with halfway cases rounded away from zero (double)
// ——————————————————————————————————————————————————————————————
inline constexpr float round									(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type round(
		T						x
	)															;

inline constexpr long double round								(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— lround
// —————————————	returns the integral value that is nearest to x, with halfway cases rounded away from zero (long)
// ——————————————————————————————————————————————————————————————
inline constexpr long lround									(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, long> :: type lround(
		T						x
	)															;

inline constexpr long lround									(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— llround
// —————————————	returns the integral value that is nearest to x, with halfway cases rounded away from zero (long long)
// ——————————————————————————————————————————————————————————————
inline constexpr long long llround								(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, long long> :: type llround(
		T						x
	)															;

inline constexpr long long llround								(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— trunc
// —————————————	returns the integral value that is nearest to x, with halfway cases rounded toward zero
// ——————————————————————————————————————————————————————————————
inline constexpr float trunc									(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type trunc(
		T						x
	)															;

inline constexpr long double trunc								(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— floor
// —————————————	rounds x downward, returning the largest integral value that is not greater than x
// ——————————————————————————————————————————————————————————————
inline constexpr float floor									(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type floor(
		T						x
	)															;

inline constexpr long double floor								(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— fmin
// —————————————	returns the smaller of its arguments: either x or y. If one of the arguments
// —————————————	in a NaN, the other is returned.
// ——————————————————————————————————————————————————————————————
inline constexpr float fmin										(
	float						x								,
	float						y
)																;

template <typename T1, typename T2>
	inline constexpr typename enable_if <is_integer <T1> :: value && is_integer <T2> :: value, double> :: type fmin(
		T1						x								,
		T2						y
	)															;

inline constexpr long double fmin								(
	long double					x								,
	long double					y
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— fmax
// —————————————	returns the larger of its arguments: either x or y. If one of the arguments
// —————————————	in a NaN, the other is returned.
// ——————————————————————————————————————————————————————————————
inline constexpr float fmax										(
	float						x								,
	float						y
)																;

template <typename T1, typename T2>
	inline constexpr typename enable_if <is_integer <T1> :: value && is_integer <T2> :: value, double> :: type fmax(
		T1						x								,
		T2						y
	)															;

inline constexpr long double fmax								(
	long double					x								,
	long double					y
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— fabs
// —————————————	returns the absolute value of x: |x|
// ——————————————————————————————————————————————————————————————
inline constexpr float fabs										(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type fabs(
		T						x
	)															;

inline constexpr long double fabs								(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— fdim
// —————————————	the function returns x - y if x > y, and zero otherwise
// ——————————————————————————————————————————————————————————————
inline constexpr float fdim										(
	float						x								,
	float						y
)																;

template <typename T1, typename T2>
	inline constexpr typename enable_if <is_integer <T1> :: value && is_integer <T2> :: value, double> :: type fdim(
		T1						x								,
		T2						y
	)															;

inline constexpr long double fdim								(
	long double					x								,
	long double					y
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— fma
// —————————————	returns multiply-add x * y + z
// ——————————————————————————————————————————————————————————————
inline constexpr float fma										(
	float						x								,
	float						y								,
	float						z
)																;

template <typename T1, typename T2, typename T3>
	inline constexpr typename enable_if <is_integer <T1> :: value && is_integer <T2> :: value && is_integer <T3> :: value, double> :: type fma(
		T1						x								,
		T2						y								,
		T3						z
	)															;

inline constexpr long double fma								(
	long double					x								,
	long double					y								,
	long double					z
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— scalbn
// —————————————	returns x * (FLT_RADIX ^ n), n - int
// ——————————————————————————————————————————————————————————————
inline constexpr float scalbn									(
	float						x								,
	int							n
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type scalbn(
		T						x								,
		int						n
	)															;

inline constexpr long double scalbn								(
	long double					x								,
	int							n
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— scalbln
// —————————————	returns x * (FLT_RADIX ^ n), n - long
// ——————————————————————————————————————————————————————————————
inline constexpr float scalbln									(
	float						x								,
	long						n
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type scalbn(
		T						x								,
		long					n
	)															;

inline constexpr long double scalbln							(
	long double					x								,
	long						n
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— fmod
// —————————————	returns the remainder of numer/denom (rounded towards zero): fmod = numer - tquot * denom
// —————————————	where tquot is the truncated (i.e., rounded towards zero) result of: numer/denom.
// ——————————————————————————————————————————————————————————————
inline constexpr float fmod										(
	float						x								,
	float						y
)																;

template <typename T1, typename T2>
	inline constexpr typename enable_if <is_integer <T1> :: value && is_integer <T2> :: value, double> :: type fmod(
		T1						x								,
		T2						y
	)															;

inline constexpr long double fmod								(
	long double					x								,
	long double					y
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— modf
// —————————————	returns the fractional part of x, with the same sign: x = intpart + fract
// ——————————————————————————————————————————————————————————————
inline constexpr float modf										(
	float						x								,
	float *						intpart
)																;

template <typename T1, typename T2>
	inline constexpr typename enable_if <is_integer <T1> :: value && is_integer <T2> :: value, double> :: type modf(
		T1						x								,
		T2 *					intpart
	)															;

inline constexpr long double modf								(
	long double					x								,
	long double	*				intpart
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— remainder
// —————————————	returns the floating-point remainder of numer/denom (rounded to nearest),
// —————————————	numer - rquot * denom, where rquot is the result of: numer/denom, rounded toward the nearest
// —————————————	integral value (with halfway cases rounded toward the even number)
// ——————————————————————————————————————————————————————————————
inline constexpr float remainder								(
	float						x								,
	float						y
)																;

template <typename T1, typename T2>
	inline constexpr typename enable_if <is_integer <T1> :: value && is_integer <T2> :: value, double> :: type remainder(
		T1						x								,
		T2						y
	)															;

inline constexpr long double remainder							(
	long double					x								,
	long double					y
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— remquo
// —————————————	returns the same as remainder, but it additionally stores the quotient internally used to determine 
// —————————————	its result in the object pointed by quot
// ——————————————————————————————————————————————————————————————
inline constexpr float remquo									(
	float						x								,
	float						y								,
	int *						quot
)																;

template <typename T1, typename T2>
	inline constexpr typename enable_if <is_integer <T1> :: value && is_integer <T2> :: value, double> :: type remquo(
		T1						x								,
		T2						y								,
		int *					quot
	)															;

inline constexpr long double remquo								(
	long double					x								,
	long double					y								,
	int *						quot
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— sqrt
// —————————————	returns the square root of x
// ——————————————————————————————————————————————————————————————
inline constexpr float sqrt										(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type sqrt(
		T						x
	)															;

inline constexpr long double sqrt								(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— cbrt
// —————————————	returns the cubic root of x
// ——————————————————————————————————————————————————————————————
inline constexpr float cbrt										(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type cbrt(
		T						x
	)															;

inline constexpr long double cbrt								(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— pow
// —————————————	returns base raised to the power exponent: x ^ n
// ——————————————————————————————————————————————————————————————
inline constexpr float pow										(
	float						x								,
	float						n
)																;

template <typename T1, typename T2>
	inline constexpr typename enable_if <is_integer <T1> :: value && is_integer <T2> :: value, double> :: type pow(
		T1						x								,
		T2						n
	)															;

inline constexpr long double pow								(
	long double					x								,
	long double					n
)																;

inline constexpr float pow										(
	float						x								,
	int							n
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type pow(
		T						x								,
		int						n
	)															;

inline constexpr long double pow								(
	long double					x								,
	int							n
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— hypot
// —————————————	returns the square root of (x ^ 2 + y ^ 2)
// ——————————————————————————————————————————————————————————————
inline constexpr float hypot									(
	float						x								,
	float						y
)																;

template <typename T1, typename T2>
	inline constexpr typename enable_if <is_integer <T1> :: value && is_integer <T2> :: value, double> :: type hypot(
		T1						x								,
		T2						y
	)															;

inline constexpr long double hypot								(
	long double					x								,
	long double					y
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— erf
// —————————————	returns the error function value for x
// ——————————————————————————————————————————————————————————————
inline constexpr float erf										(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type erf(
		T						x
	)															;

inline constexpr long double erf								(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— erfc
// —————————————	returns the complementary error function value for x
// ——————————————————————————————————————————————————————————————
inline constexpr float erfc										(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type erfc(
		T						x
	)															;

inline constexpr long double erfc								(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— lgamma
// —————————————	returns the natural logarithm of the absolute value of the gamma function of x
// ——————————————————————————————————————————————————————————————
inline constexpr float lgamma									(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type lgamma(
		T						x
	)															;

inline constexpr long double lgamma								(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— tgamma
// —————————————	returns the gamma function of x
// ——————————————————————————————————————————————————————————————
inline constexpr float tgamma									(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type tgamma(
		T						x
	)															;

inline constexpr long double tgamma								(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— rint
// —————————————	rounds x to an integral value, using the rounding direction specified by fegetround
// ——————————————————————————————————————————————————————————————
inline constexpr float rint										(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type rint(
		T						x
	)															;

inline constexpr long double rint								(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— lrint
// —————————————	rounds x to an integral value, using the rounding direction specified by fegetround,
// —————————————	and returns it as a value of type long
// ——————————————————————————————————————————————————————————————
inline constexpr long lrint										(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, long> :: type lrint(
		T						x
	)															;

inline constexpr long lrint										(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— llrint
// —————————————	rounds x to an integral value, using the rounding direction specified by fegetround,
// —————————————	and returns it as a value of type long long
// ——————————————————————————————————————————————————————————————
inline constexpr long long llrint								(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, long long> :: type llrint(
		T						x
	)															;

inline constexpr long long llrint								(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— nearbyint
// —————————————	rounds x to an integral value, using the rounding direction specified by fegetround,
// —————————————	this function does not raise FE_INEXACT exceptions
// ——————————————————————————————————————————————————————————————
inline constexpr float nearbyint								(
	float						x
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type nearbyint(
		T						x
	)															;

inline constexpr long double nearbyint							(
	long double					x
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— nextafter
// —————————————	returns the next representable value after x in the direction of y
// ——————————————————————————————————————————————————————————————
inline constexpr float nextafter								(
	float						x								,
	float						y
)																;

template <typename T1, typename T2>
	inline constexpr typename enable_if <is_integer <T1> :: value && is_integer <T2> :: value, double> :: type nextafter(
		T1						x								,
		T2						y
	)															;

inline constexpr long double nextafter							(
	long double					x								,
	long double					y
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— nexttoward
// —————————————	returns the next representable value after x in the direction of y, y - long double
// ——————————————————————————————————————————————————————————————
inline constexpr float nexttoward								(
	float						x								,
	long double					y
)																;

template <typename T>
	inline constexpr typename enable_if <is_integer <T> :: value, double> :: type nexttoward(
		T						x								,
		long double				y
	)															;

inline constexpr long double nexttoward							(
	long double					x								,
	long double					y
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— isfinite
// —————————————	used to determine whether a given value if finite or not
// ——————————————————————————————————————————————————————————————
template <typename T>
	inline constexpr bool isfinite								(
		T						x
	)															;
// ——————————————————————————————————————————————————————————————
// ————————————— isinf
// —————————————	used to determine whether a given value if finite or not
// ——————————————————————————————————————————————————————————————
template <typename T>
	inline constexpr bool isinf									(
		T						x
	)															;
// ——————————————————————————————————————————————————————————————
// ————————————— isnan
// —————————————	returns whether x is a NaN (Not-A-Number) value
// ——————————————————————————————————————————————————————————————
template <typename T>
	inline constexpr bool isnan									(
		T						x
	)															;
// ——————————————————————————————————————————————————————————————
// ————————————— isnormal
// —————————————	determines if the given floating point number arg is normal, i.e. is neither zero, subnormal,
// —————————————	infinite, nor NaN
// ——————————————————————————————————————————————————————————————
template <typename T>
	inline constexpr bool isnormal								(
		T						x
	)															;
// ——————————————————————————————————————————————————————————————
// ————————————— signbit
// —————————————	returns whether the sign of x is negative
// ——————————————————————————————————————————————————————————————
template <typename T>
	inline constexpr bool signbit								(
		T						x
	)															;
// ——————————————————————————————————————————————————————————————
// ————————————— copysign
// —————————————	returns a value with the magnitude of x and the sign of y
// ——————————————————————————————————————————————————————————————
inline constexpr float copysign									(
	float						x								,
	float						y
)																;

template <typename T1, typename T2>
	inline constexpr typename enable_if <is_integer <T1> :: value && is_integer <T2> :: value, double> :: type copysign(
		T1						x								,
		T2						y
	)															;

inline constexpr long double copysign							(
	long double					x								,
	long double					y
)																;
// ——————————————————————————————————————————————————————————————
// ————————————— isless
// —————————————	returns whether x is less than y
// ——————————————————————————————————————————————————————————————
template <typename T1, typename T2>
	inline constexpr typename enable_if <is_arithmetic <T1> :: value && is_arithmetic <T2> :: value, bool> :: type isless(
		T1						x								,
		T2						y
	)															;
// ——————————————————————————————————————————————————————————————
// ————————————— islessequal
// —————————————	returns whether x is less or equal than y
// ——————————————————————————————————————————————————————————————
template <typename T1, typename T2>
	inline constexpr typename enable_if <is_arithmetic <T1> :: value && is_arithmetic <T2> :: value, bool> :: type islessequal(
		T1						x								,
		T2						y
	)															;
// ——————————————————————————————————————————————————————————————
// ————————————— islessgreater
// —————————————	returns whether x is less or greater than y
// ——————————————————————————————————————————————————————————————
template <typename T1, typename T2>
	inline constexpr typename enable_if <is_arithmetic <T1> :: value && is_arithmetic <T2> :: value, bool> :: type islessgreater(
		T1						x								,
		T2						y
	)															;
// ——————————————————————————————————————————————————————————————
// ————————————— isgreaterequal
// —————————————	returns whether x is equal or greater than y
// ——————————————————————————————————————————————————————————————
template <typename T1, typename T2>
	inline constexpr typename enable_if <is_arithmetic <T1> :: value && is_arithmetic <T2> :: value, bool> :: type isgreaterequal(
		T1						x								,
		T2						y
	)															;
// ——————————————————————————————————————————————————————————————
// ————————————— isgreater
// —————————————	returns whether x is greater than y
// ——————————————————————————————————————————————————————————————
template <typename T1, typename T2>
	inline constexpr typename enable_if <is_arithmetic <T1> :: value && is_arithmetic <T2> :: value, bool> :: type isgreater(
		T1						x								,
		T2						y
	)															;
// ——————————————————————————————————————————————————————————————
// ————————————— fpclassify
// —————————————	returns a value of type int that matches one of the classification macro constants, depending on the value of x
// ——————————————————————————————————————————————————————————————
template <typename T>
	inline constexpr int fpclassify								(
		T						x
	)															;
// ——————————————————————————————————————————————————————————————
// ————————————— isunordered
// —————————————	returns true if either x or y is NaN, false otherwise
// ——————————————————————————————————————————————————————————————
template <typename T1, typename T2>
	inline constexpr bool isunordered							(
		T1						x								,
		T2						y
	)															;
// ——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
} // namespace std