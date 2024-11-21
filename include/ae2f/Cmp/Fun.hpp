#ifndef ae2f_Cmp_Fun_hpp
#define ae2f_Cmp_Fun_hpp

#include "Fun.h"
#include "../Cast.h"

namespace ae2f {
    using fpCmp_t = ae2f_fpCmp_t;

    namespace Cmp {
        namespace Fun {
            using Ret_t = ae2f_CmpFunRet_t;

            constexpr Ret_t  
            EQUAL = ae2f_CmpFunRet_EQUAL,
            LISLESSER = ae2f_CmpFunRet_LISLESSER,
            RISLESSER =  ae2f_CmpFunRet_RISLESSER;
        }
    }

    /// @brief 
    /// Sugary type for C++ from @ref fpCmp_t.
    /// @tparam T Type for 
    template<typename T>
    using xfpCmp_t = Cmp::Fun::Ret_t(*)(const T*, const T*);

    /// @brief 
    /// Returns itself as @ref fpCmp_t.
    template<typename T>
    constexpr fpCmp_t xfpCmp(xfpCmp_t<T> a) {
        return ae2f_union_cast(xfpCmp_t<T>, fpCmp_t, a);
    }
}

#endif