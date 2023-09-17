#pragma once
namespace {
#include "GlobalNamespace/zzzz__LightTranslationBaseData_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightTranslationBaseData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightTranslationBaseData::*)(float_t, bool, ::GlobalNamespace::EaseType, float_t)>(&::GlobalNamespace::LightTranslationBaseData::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x21d8cbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationBaseData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::LightTranslationBaseData::__set_beat(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::LightTranslationBaseData::__get_beat() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LightTranslationBaseData::__set_usePreviousEventTranslationValue(bool value)  {
::cordl_internals::setInstanceField<bool, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::LightTranslationBaseData::__get_usePreviousEventTranslationValue() const {
return ::cordl_internals::getInstanceField<bool, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LightTranslationBaseData::__set_easeType(::GlobalNamespace::EaseType value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EaseType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::EaseType>(value));
}
constexpr ::GlobalNamespace::EaseType ::GlobalNamespace::LightTranslationBaseData::__get_easeType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EaseType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LightTranslationBaseData::__set_translation(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::LightTranslationBaseData::__get_translation() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "beat", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "usePreviousEventTranslationValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "easeType", ty: "::GlobalNamespace::EaseType", modifiers: "", def_value: None }, CppParam { name: "translation", ty: "float_t", modifiers: "", def_value: None }]
 ::GlobalNamespace::LightTranslationBaseData::LightTranslationBaseData(float_t beat, bool usePreviousEventTranslationValue, ::GlobalNamespace::EaseType easeType, float_t translation)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LightTranslationBaseData>(beat, usePreviousEventTranslationValue, easeType, translation))) {}
 void ::GlobalNamespace::LightTranslationBaseData::_ctor(float_t beat, bool usePreviousEventTranslationValue, ::GlobalNamespace::EaseType easeType, float_t translation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationBaseData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beat, usePreviousEventTranslationValue, easeType, translation);
}
} // end anonymous namespace
