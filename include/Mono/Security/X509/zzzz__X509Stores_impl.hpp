#pragma once
namespace {
#include "Mono/Security/X509/zzzz__X509Stores_def.hpp"
#include "Mono/Security/X509/zzzz__X509Store_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::X509Stores._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::X509Stores::*)(::StringW, bool)>(&::Mono::Security::X509::X509Stores::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2290a1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Stores>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Stores.get_TrustedRoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509Store (::Mono::Security::X509::X509Stores::*)()>(&::Mono::Security::X509::X509Stores::get_TrustedRoot)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2290aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Stores>::get(),
                            "get_TrustedRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Stores.Open
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509Store (::Mono::Security::X509::X509Stores::*)(::StringW, bool)>(&::Mono::Security::X509::X509Stores::Open)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2290bc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Stores>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Mono::Security::X509::X509Stores::__set__storePath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::Mono::Security::X509::X509Stores::__get__storePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::X509::X509Stores::__set__newFormat(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Mono::Security::X509::X509Stores::__get__newFormat() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::X509::X509Stores::__set__trusted(::Mono::Security::X509::X509Store value)  {
::cordl_internals::setInstanceField<::Mono::Security::X509::X509Store, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Mono::Security::X509::X509Store>(value));
}
constexpr ::Mono::Security::X509::X509Store ::Mono::Security::X509::X509Stores::__get__trusted() const {
return ::cordl_internals::getInstanceField<::Mono::Security::X509::X509Store, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "newFormat", ty: "bool", modifiers: "", def_value: None }]
 ::Mono::Security::X509::X509Stores::X509Stores(::StringW path, bool newFormat)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<X509Stores>(path, newFormat))) {}
 void ::Mono::Security::X509::X509Stores::_ctor(::StringW path, bool newFormat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Stores>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, path, newFormat);
}
 ::Mono::Security::X509::X509Store ::Mono::Security::X509::X509Stores::get_TrustedRoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Stores>::get(),
                            "get_TrustedRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Store, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Mono::Security::X509::X509Store ::Mono::Security::X509::X509Stores::Open(::StringW storeName, bool create)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Stores>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Store, false>(const_cast<void*>(instance), ___internal_method, storeName, create);
}
} // end anonymous namespace
