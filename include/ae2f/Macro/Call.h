#define ON 1
#define OFF 0

#if OFF && (OFF != OFF)

#if OFF
/// @brief
/// # For Windows
/// 
/// shared function imp
#define ae2f_SHAREDEXPORT __declspec(dllexport)

/// @brief
/// # For Windows
/// 
/// Function api call
#define ae2f_SHAREDCALL
#else
/// @brief
/// # For Linux, gcc based.
/// 
/// shared function imp
#define ae2f_SHAREDEXPORT __attribute__((visibility("default")))

/// @brief
/// # For Linux, gcc based.
///
/// Function api call
#define ae2f_SHAREDCALL
#endif
#else

/// @brief
/// # It is no shared library.
/// 
/// shared function imp
#define ae2f_SHAREDEXPORT
/// @brief 
/// # It is no shared library.
///
/// Function api call
#define ae2f_SHAREDCALL
#endif
