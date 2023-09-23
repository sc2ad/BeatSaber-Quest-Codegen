#pragma once
#include "UnityEngine/UIElements/zzzz__StyleRule_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleProperty_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::StyleRule.get_properties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::UIElements::StyleProperty> (UnityEngine::UIElements::StyleRule::*)()>(&UnityEngine::UIElements::StyleRule::get_properties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf4058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleRule>::get(),
                            "get_properties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleRule._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::StyleRule::*)()>(&UnityEngine::UIElements::StyleRule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf4060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleRule>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::StyleRule::__set_m_Properties(::ArrayW<UnityEngine::UIElements::StyleProperty> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::UIElements::StyleProperty>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::UIElements::StyleProperty>>(value));
}
constexpr ::ArrayW<UnityEngine::UIElements::StyleProperty> UnityEngine::UIElements::StyleRule::__get_m_Properties() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::UIElements::StyleProperty>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::StyleRule::__set_line(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::StyleRule::__get_line() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::StyleRule::__set_customPropertiesCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::StyleRule::__get_customPropertiesCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<UnityEngine::UIElements::StyleProperty> UnityEngine::UIElements::StyleRule::get_properties()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleRule>::get(),
                            "get_properties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::UIElements::StyleProperty>, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 UnityEngine::UIElements::StyleRule::StyleRule()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<StyleRule>())) {}
 void UnityEngine::UIElements::StyleRule::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleRule>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
