#pragma once
namespace {
#include "System/Runtime/Remoting/zzzz__TypeInfo_def.hpp"
#include "System/Runtime/Remoting/zzzz__IRemotingTypeInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::TypeInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::TypeInfo::*)(::System::Type)>(&::System::Runtime::Remoting::TypeInfo::_ctor)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x2326afc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::TypeInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::TypeInfo.get_TypeName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::TypeInfo::*)()>(&::System::Runtime::Remoting::TypeInfo::get_TypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2329418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::TypeInfo>::get(),
                            "get_TypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::TypeInfo.CanCastTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::TypeInfo::*)(::System::Type, ::bs_hook::Il2CppWrapperType)>(&::System::Runtime::Remoting::TypeInfo::CanCastTo)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x2329420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::TypeInfo>::get(),
                            "CanCastTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::Remoting::IRemotingTypeInfo
constexpr  ::System::Runtime::Remoting::TypeInfo::operator ::System::Runtime::Remoting::IRemotingTypeInfo() const noexcept {
return ::System::Runtime::Remoting::IRemotingTypeInfo(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::TypeInfo::__set_serverType(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Runtime::Remoting::TypeInfo::__get_serverType() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::TypeInfo::__set_serverHierarchy(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> ::System::Runtime::Remoting::TypeInfo::__get_serverHierarchy() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::TypeInfo::__set_interfacesImplemented(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> ::System::Runtime::Remoting::TypeInfo::__get_interfacesImplemented() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "type", ty: "::System::Type", modifiers: "", def_value: None }]
 ::System::Runtime::Remoting::TypeInfo::TypeInfo(::System::Type type)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<TypeInfo>(type))) {}
 void ::System::Runtime::Remoting::TypeInfo::_ctor(::System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::TypeInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type);
}
 ::StringW ::System::Runtime::Remoting::TypeInfo::get_TypeName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::TypeInfo>::get(),
                            "get_TypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Runtime::Remoting::TypeInfo::CanCastTo(::System::Type fromType, ::bs_hook::Il2CppWrapperType o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::TypeInfo>::get(),
                            "CanCastTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, fromType, o);
}
} // end anonymous namespace
