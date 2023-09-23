#pragma once
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__ScopeTypes_def.hpp"
#include "Zenject/zzzz__BindingInheritanceMethods_def.hpp"
#include "Zenject/zzzz__BindingCondition_def.hpp"
#include "Zenject/zzzz__ToChoices_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "Zenject/zzzz__InvalidBindResponses_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
//  Writing Method size for method: Zenject::BindInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::BindInfo::*)()>(&Zenject::BindInfo::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2d65480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::BindInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::BindInfo.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::BindInfo::*)()>(&Zenject::BindInfo::Dispose)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2d65668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::BindInfo>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::BindInfo.SetContextInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::BindInfo::*)(::StringW)>(&Zenject::BindInfo::SetContextInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d656c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::BindInfo>::get(),
                            "SetContextInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::BindInfo.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::BindInfo::*)()>(&Zenject::BindInfo::Reset)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2d6556c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::BindInfo>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  Zenject::BindInfo::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::BindInfo::__set_MarkAsCreationBinding(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Zenject::BindInfo::__get_MarkAsCreationBinding() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::BindInfo::__set_MarkAsUniqueSingleton(bool value)  {
::cordl_internals::setInstanceField<bool, 0x11>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Zenject::BindInfo::__get_MarkAsUniqueSingleton() const {
return ::cordl_internals::getInstanceField<bool, 0x11>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::BindInfo::__set_ConcreteIdentifier(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType Zenject::BindInfo::__get_ConcreteIdentifier() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::BindInfo::__set_SaveProvider(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Zenject::BindInfo::__get_SaveProvider() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::BindInfo::__set_OnlyBindIfNotBound(bool value)  {
::cordl_internals::setInstanceField<bool, 0x21>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Zenject::BindInfo::__get_OnlyBindIfNotBound() const {
return ::cordl_internals::getInstanceField<bool, 0x21>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::BindInfo::__set_RequireExplicitScope(bool value)  {
::cordl_internals::setInstanceField<bool, 0x22>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Zenject::BindInfo::__get_RequireExplicitScope() const {
return ::cordl_internals::getInstanceField<bool, 0x22>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::BindInfo::__set_Identifier(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType Zenject::BindInfo::__get_Identifier() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::BindInfo::__set_ContractTypes(System::Collections::Generic::List_1<System::Type> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<System::Type>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<System::Type>>(value));
}
constexpr System::Collections::Generic::List_1<System::Type> Zenject::BindInfo::__get_ContractTypes() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<System::Type>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::BindInfo::__set_BindingInheritanceMethod(Zenject::BindingInheritanceMethods value)  {
::cordl_internals::setInstanceField<Zenject::BindingInheritanceMethods, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::BindingInheritanceMethods>(value));
}
constexpr Zenject::BindingInheritanceMethods Zenject::BindInfo::__get_BindingInheritanceMethod() const {
return ::cordl_internals::getInstanceField<Zenject::BindingInheritanceMethods, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::BindInfo::__set_InvalidBindResponse(Zenject::InvalidBindResponses value)  {
::cordl_internals::setInstanceField<Zenject::InvalidBindResponses, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::InvalidBindResponses>(value));
}
constexpr Zenject::InvalidBindResponses Zenject::BindInfo::__get_InvalidBindResponse() const {
return ::cordl_internals::getInstanceField<Zenject::InvalidBindResponses, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::BindInfo::__set_NonLazy(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Zenject::BindInfo::__get_NonLazy() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::BindInfo::__set_Condition(Zenject::BindingCondition value)  {
::cordl_internals::setInstanceField<Zenject::BindingCondition, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::BindingCondition>(value));
}
constexpr Zenject::BindingCondition Zenject::BindInfo::__get_Condition() const {
return ::cordl_internals::getInstanceField<Zenject::BindingCondition, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::BindInfo::__set_ToChoice(Zenject::ToChoices value)  {
::cordl_internals::setInstanceField<Zenject::ToChoices, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::ToChoices>(value));
}
constexpr Zenject::ToChoices Zenject::BindInfo::__get_ToChoice() const {
return ::cordl_internals::getInstanceField<Zenject::ToChoices, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::BindInfo::__set_ContextInfo(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Zenject::BindInfo::__get_ContextInfo() const {
return ::cordl_internals::getInstanceField<::StringW, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::BindInfo::__set_ToTypes(System::Collections::Generic::List_1<System::Type> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<System::Type>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<System::Type>>(value));
}
constexpr System::Collections::Generic::List_1<System::Type> Zenject::BindInfo::__get_ToTypes() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<System::Type>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::BindInfo::__set_Scope(Zenject::ScopeTypes value)  {
::cordl_internals::setInstanceField<Zenject::ScopeTypes, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::ScopeTypes>(value));
}
constexpr Zenject::ScopeTypes Zenject::BindInfo::__get_Scope() const {
return ::cordl_internals::getInstanceField<Zenject::ScopeTypes, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::BindInfo::__set_Arguments(System::Collections::Generic::List_1<Zenject::TypeValuePair> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<Zenject::TypeValuePair>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<Zenject::TypeValuePair>>(value));
}
constexpr System::Collections::Generic::List_1<Zenject::TypeValuePair> Zenject::BindInfo::__get_Arguments() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<Zenject::TypeValuePair>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::BindInfo::__set_InstantiatedCallback(System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType>>(value));
}
constexpr System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType> Zenject::BindInfo::__get_InstantiatedCallback() const {
return ::cordl_internals::getInstanceField<System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 Zenject::BindInfo::BindInfo()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BindInfo>())) {}
 void Zenject::BindInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::BindInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Zenject::BindInfo::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::BindInfo>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Zenject::BindInfo::SetContextInfo(::StringW contextInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::BindInfo>::get(),
                            "SetContextInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, contextInfo);
}
 void Zenject::BindInfo::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::BindInfo>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
