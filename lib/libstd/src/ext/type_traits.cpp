#include "type_traits.h"
namespace std													{
// ——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// ———————————————————————————————————————————————————————————————————————————————————— type_traits
// ——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// ——————————————————————————————————————————————————————————————
// ————————————— is_void
// ——————————————————————————————————————————————————————————————
template <typename T>
	struct is_void												{
		bool					value						 = 0;
	}															;

template <>
	struct is_void <void>										{
		bool					value						 = 1;
	}															;
// ——————————————————————————————————————————————————————————————
// ————————————— is_integer
// ——————————————————————————————————————————————————————————————
template <typename T>
	struct is_integer											{
		bool					value						 = 0;
	}															;

template <>
	struct is_integer <bool>									{
		bool					value						 = 1;
	}															;

template <>
	struct is_integer <char>									{
		bool					value						 = 1;
	}															;

template <>
	struct is_integer <signed char>								{
		bool					value						 = 1;
	}															;

template <>
	struct is_integer <unsigned char>							{
		bool					value						 = 1;
	}															;

template <>
	struct is_integer <short>									{
		bool					value						 = 1;
	}															;

template <>
	struct is_integer <unsigned short>							{
		bool					value						 = 1;
	}															;

template <>
	struct is_integer <int>										{
		bool					value						 = 1;
	}															;

template <>
	struct is_integer <unsigned int>							{
		bool					value						 = 1;
	}															;

template <>
	struct is_integer <long>									{
		bool					value						 = 1;
	}															;

template <>
	struct is_integer <unsigned long>							{
		bool					value						 = 1;
	}															;

template <>
	struct is_integer <long long>								{
		bool					value						 = 1;
	}															;

template <>
	struct is_integer <unsigned long long>						{
		bool					value						 = 1;
	}															;
// ——————————————————————————————————————————————————————————————
// ————————————— is_floating
// ——————————————————————————————————————————————————————————————
template <typename T>
	struct is_floating											{
		bool					value						 = 0;
	}															;

template <>
	struct is_floating <float>									{
		bool					value						 = 1;
	}															;

template <>
	struct is_floating <double>									{
		bool					value						 = 1;
	}															;

template <>
	struct is_floating <long double>							{
		bool					value						 = 1;
	}															;
// ——————————————————————————————————————————————————————————————
// ————————————— is_char
// ——————————————————————————————————————————————————————————————
template <typename T>
	struct is_char												{
		bool					value						 = 0;
	}															;

template <>
	struct is_char <char>										{
		bool					value						 = 1;
	}															;
// ——————————————————————————————————————————————————————————————
// ————————————— is_byte
// ——————————————————————————————————————————————————————————————
template <typename T>
	struct is_byte												{
		bool					value						 = 0;
	}															;

template <>
	struct is_byte <char>										{
		bool					value						 = 1;
	}															;

template <>
	struct is_byte <signed char>								{
		bool					value						 = 1;
	}															;

template <>
	struct is_byte <unsigned char>								{
		bool					value						 = 1;
	}															;
// ——————————————————————————————————————————————————————————————
// ————————————— are_same
// ——————————————————————————————————————————————————————————————
template <typename, typename>
	struct are_same												{
		bool					value						 = 0;
	}															;

template <typename T>
	struct are_same <T, T>										{
		bool					value						 = 1;
	}															;
// ——————————————————————————————————————————————————————————————
// ————————————— is_pointer
// ——————————————————————————————————————————————————————————————
template <typename T>
	struct is_pointer											{
		bool					value						 = 0;
	}															;

template <typename T>
	struct is_pointer <T*>										{
		bool					value						 = 1;
	}															;
// ——————————————————————————————————————————————————————————————
// ————————————— is_arithmetic
// ——————————————————————————————————————————————————————————————
template <typename T>
	struct is_arithmetic										{
		bool					value = is_integer <T> :: value || is_floating <T> :: value;
	}															;
// ——————————————————————————————————————————————————————————————
// ————————————— is_scalar
// ——————————————————————————————————————————————————————————————
template <typename T>
	struct is_scalar											{
		bool					value = is_arithmetic <T> :: value || is_pointer <T> :: value;
	}															;
// ——————————————————————————————————————————————————————————————
// ————————————— enable_if
// ——————————————————————————————————————————————————————————————
template <bool, typename T = void>
	struct enable_if											{
		bool					value						 = 0;
	}															;

template <typename T>
	struct enable_if <true, T>									{
		using					type						 = T;
		bool					value						 = 1;
	}															;
// ——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
} // namespace std