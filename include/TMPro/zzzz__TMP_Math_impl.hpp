#pragma once
#include "TMPro/zzzz__TMP_Math_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: TMPro::TMP_Math.Approximately
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float_t, float_t)>(&TMPro::TMP_Math::Approximately)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2a69310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_Math>::get(),
                            "Approximately",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_Math.Mod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t)>(&TMPro::TMP_Math::Mod)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2a69340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_Math>::get(),
                            "Mod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 void TMPro::TMP_Math::__set_MAX_16BIT(UnityEngine::Vector2 value)  {
::cordl_internals::setStaticField<UnityEngine::Vector2, "MAX_16BIT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_Math>::get>(std::forward<UnityEngine::Vector2>(value));
}
 UnityEngine::Vector2 TMPro::TMP_Math::__get_MAX_16BIT()  {
return ::cordl_internals::getStaticField<UnityEngine::Vector2, "MAX_16BIT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_Math>::get>();
}
 void TMPro::TMP_Math::__set_MIN_16BIT(UnityEngine::Vector2 value)  {
::cordl_internals::setStaticField<UnityEngine::Vector2, "MIN_16BIT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_Math>::get>(std::forward<UnityEngine::Vector2>(value));
}
 UnityEngine::Vector2 TMPro::TMP_Math::__get_MIN_16BIT()  {
return ::cordl_internals::getStaticField<UnityEngine::Vector2, "MIN_16BIT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_Math>::get>();
}
 bool TMPro::TMP_Math::Approximately(float_t a, float_t b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_Math>::get(),
                            "Approximately",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
 int32_t TMPro::TMP_Math::Mod(int32_t a, int32_t b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_Math>::get(),
                            "Mod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, a, b);
}
