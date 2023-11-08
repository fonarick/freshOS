namespace std													{
// ——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// ———————————————————————————————————————————————————————————————————————————————————— type_traits
// ——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// ——————————————————————————————————————————————————————————————
// ————————————— is_void
// ——————————————————————————————————————————————————————————————
template <typename T>
	struct is_void												;

template <>
	struct is_void <void>										;
// ——————————————————————————————————————————————————————————————
// ————————————— is_integer
// ——————————————————————————————————————————————————————————————
template <typename T>
	struct is_integer											;

template <>
	struct is_integer <bool>									;

template <>
	struct is_integer <char>									;

template <>
	struct is_integer <signed char>								;

template <>
	struct is_integer <unsigned char>							;

template <>
	struct is_integer <short>									;

template <>
	struct is_integer <unsigned short>							;

template <>
	struct is_integer <int>										;

template <>
	struct is_integer <unsigned int>							;

template <>
	struct is_integer <long>									;

template <>
	struct is_integer <unsigned long>							;

template <>
	struct is_integer <long long>								;

template <>
	struct is_integer <unsigned long long>						;
// ——————————————————————————————————————————————————————————————
// ————————————— is_floating
// ——————————————————————————————————————————————————————————————
template <typename T>
	struct is_floating											;

template <>
	struct is_floating <float>									;

template <>
	struct is_floating <double>									;

template <>
	struct is_floating <long double>							;
// ——————————————————————————————————————————————————————————————
// ————————————— is_char
// ——————————————————————————————————————————————————————————————
template <typename T>
	struct is_char												;

template <>
	struct is_char <char>										;
// ——————————————————————————————————————————————————————————————
// ————————————— is_byte
// ——————————————————————————————————————————————————————————————
template <typename T>
	struct is_byte												;

template <>
	struct is_byte <char>										;

template <>
	struct is_byte <signed char>								;

template <>
	struct is_byte <unsigned char>								;
// ——————————————————————————————————————————————————————————————
// ————————————— are_same
// ——————————————————————————————————————————————————————————————
template <typename, typename>
	struct are_same												;

template <typename T>
	struct are_same <T, T>										;
// ——————————————————————————————————————————————————————————————
// ————————————— is_pointer
// ——————————————————————————————————————————————————————————————
template <typename T>
	struct is_pointer											;

template <typename T>
	struct is_pointer <T*>										;
// ——————————————————————————————————————————————————————————————
// ————————————— is_arithmetic
// ——————————————————————————————————————————————————————————————
template <typename T>
	struct is_arithmetic										;
// ——————————————————————————————————————————————————————————————
// ————————————— is_scalar
// ——————————————————————————————————————————————————————————————
template <typename T>
	struct is_scalar											;
// ——————————————————————————————————————————————————————————————
// ————————————— enable_if
// ——————————————————————————————————————————————————————————————
template <bool, typename T>
	struct enable_if											;

template <typename T>
	struct enable_if <true, T>									;
// ——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
} // namespace std
