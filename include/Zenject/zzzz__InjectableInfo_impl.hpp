#pragma once
namespace {
#include "Zenject/zzzz__InjectableInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__InjectSources_def.hpp"
//  Writing Method size for method: ::Zenject::InjectableInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::InjectableInfo::*)(bool, ::bs_hook::Il2CppWrapperType, ::StringW, ::System::Type, ::bs_hook::Il2CppWrapperType, ::Zenject::InjectSources)>(&::Zenject::InjectableInfo::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d40258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectableInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectSources>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Zenject::InjectableInfo::__set_Optional(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Zenject::InjectableInfo::__get_Optional() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::InjectableInfo::__set_Identifier(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::Zenject::InjectableInfo::__get_Identifier() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::InjectableInfo::__set_SourceType(::Zenject::InjectSources value)  {
::cordl_internals::setInstanceField<::Zenject::InjectSources, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Zenject::InjectSources>(value));
}
constexpr ::Zenject::InjectSources ::Zenject::InjectableInfo::__get_SourceType() const {
return ::cordl_internals::getInstanceField<::Zenject::InjectSources, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::InjectableInfo::__set_MemberName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::Zenject::InjectableInfo::__get_MemberName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::InjectableInfo::__set_MemberType(::System::Type value)  {
::cordl_internals::setInstanceField<::System::Type, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Type>(value));
}
constexpr ::System::Type ::Zenject::InjectableInfo::__get_MemberType() const {
return ::cordl_internals::getInstanceField<::System::Type, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::InjectableInfo::__set_DefaultValue(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::Zenject::InjectableInfo::__get_DefaultValue() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "optional", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "identifier", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "memberName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "memberType", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "defaultValue", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "sourceType", ty: "::Zenject::InjectSources", modifiers: "", def_value: None }]
 ::Zenject::InjectableInfo::InjectableInfo(bool optional, ::bs_hook::Il2CppWrapperType identifier, ::StringW memberName, ::System::Type memberType, ::bs_hook::Il2CppWrapperType defaultValue, ::Zenject::InjectSources sourceType)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<InjectableInfo>(optional, identifier, memberName, memberType, defaultValue, sourceType))) {}
 void ::Zenject::InjectableInfo::_ctor(bool optional, ::bs_hook::Il2CppWrapperType identifier, ::StringW memberName, ::System::Type memberType, ::bs_hook::Il2CppWrapperType defaultValue, ::Zenject::InjectSources sourceType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectableInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectSources>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, optional, identifier, memberName, memberType, defaultValue, sourceType);
}
} // end anonymous namespace
