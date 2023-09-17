#pragma once
#include "System/zzzz__Attribute_impl.hpp"
namespace {
#include "UnityEngine/zzzz__RequireComponent_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::RequireComponent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RequireComponent::*)(::System::Type)>(&::UnityEngine::RequireComponent::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b5b1dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RequireComponent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RequireComponent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RequireComponent::*)(::System::Type, ::System::Type)>(&::UnityEngine::RequireComponent::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2b5b204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RequireComponent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::RequireComponent::__set_m_Type0(::System::Type value)  {
::cordl_internals::setInstanceField<::System::Type, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Type>(value));
}
constexpr ::System::Type ::UnityEngine::RequireComponent::__get_m_Type0() const {
return ::cordl_internals::getInstanceField<::System::Type, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::RequireComponent::__set_m_Type1(::System::Type value)  {
::cordl_internals::setInstanceField<::System::Type, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Type>(value));
}
constexpr ::System::Type ::UnityEngine::RequireComponent::__get_m_Type1() const {
return ::cordl_internals::getInstanceField<::System::Type, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::RequireComponent::__set_m_Type2(::System::Type value)  {
::cordl_internals::setInstanceField<::System::Type, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Type>(value));
}
constexpr ::System::Type ::UnityEngine::RequireComponent::__get_m_Type2() const {
return ::cordl_internals::getInstanceField<::System::Type, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "requiredComponent", ty: "::System::Type", modifiers: "", def_value: None }]
 ::UnityEngine::RequireComponent::RequireComponent(::System::Type requiredComponent)  : ::System::Attribute(THROW_UNLESS(::il2cpp_utils::New<RequireComponent>(requiredComponent))) {}
 void ::UnityEngine::RequireComponent::_ctor(::System::Type requiredComponent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RequireComponent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, requiredComponent);
}
// Ctor Parameters [CppParam { name: "requiredComponent", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "requiredComponent2", ty: "::System::Type", modifiers: "", def_value: None }]
 ::UnityEngine::RequireComponent::RequireComponent(::System::Type requiredComponent, ::System::Type requiredComponent2)  : ::System::Attribute(THROW_UNLESS(::il2cpp_utils::New<RequireComponent>(requiredComponent, requiredComponent2))) {}
 void ::UnityEngine::RequireComponent::_ctor(::System::Type requiredComponent, ::System::Type requiredComponent2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RequireComponent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, requiredComponent, requiredComponent2);
}
} // end anonymous namespace
