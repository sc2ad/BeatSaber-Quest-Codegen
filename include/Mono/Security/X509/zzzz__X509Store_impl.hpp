#pragma once
namespace {
#include "Mono/Security/X509/zzzz__X509Store_def.hpp"
#include "Mono/Security/X509/zzzz__X509Certificate_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "Mono/Security/X509/zzzz__X509CertificateCollection_def.hpp"
#include "Mono/Security/X509/zzzz__X509Crl_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::X509Store._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::X509Store::*)(::StringW, bool, bool)>(&::Mono::Security::X509::X509Store::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x228ff40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.get_Certificates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509CertificateCollection (::Mono::Security::X509::X509Store::*)()>(&::Mono::Security::X509::X509Store::get_Certificates)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x228ff80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store>::get(),
                            "get_Certificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.get_Crls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList (::Mono::Security::X509::X509Store::*)()>(&::Mono::Security::X509::X509Store::get_Crls)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x229017c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store>::get(),
                            "get_Crls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.Load
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::X509Store::*)(::StringW)>(&::Mono::Security::X509::X509Store::Load)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x22903cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.LoadCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509Certificate (::Mono::Security::X509::X509Store::*)(::StringW)>(&::Mono::Security::X509::X509Store::LoadCertificate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x22905d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store>::get(),
                            "LoadCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.LoadCrl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509Crl (::Mono::Security::X509::X509Store::*)(::StringW)>(&::Mono::Security::X509::X509Store::LoadCrl)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2290648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store>::get(),
                            "LoadCrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.CheckStore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::X509::X509Store::*)(::StringW, bool)>(&::Mono::Security::X509::X509Store::CheckStore)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x22906b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store>::get(),
                            "CheckStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.BuildCertificatesCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509CertificateCollection (::Mono::Security::X509::X509Store::*)(::StringW)>(&::Mono::Security::X509::X509Store::BuildCertificatesCollection)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x228ffa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store>::get(),
                            "BuildCertificatesCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.BuildCrlsCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList (::Mono::Security::X509::X509Store::*)(::StringW)>(&::Mono::Security::X509::X509Store::BuildCrlsCollection)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x229020c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store>::get(),
                            "BuildCrlsCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Mono::Security::X509::X509Store::__set__storePath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::Mono::Security::X509::X509Store::__get__storePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::X509::X509Store::__set__certificates(::Mono::Security::X509::X509CertificateCollection value)  {
::cordl_internals::setInstanceField<::Mono::Security::X509::X509CertificateCollection, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Mono::Security::X509::X509CertificateCollection>(value));
}
constexpr ::Mono::Security::X509::X509CertificateCollection ::Mono::Security::X509::X509Store::__get__certificates() const {
return ::cordl_internals::getInstanceField<::Mono::Security::X509::X509CertificateCollection, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::X509::X509Store::__set__crls(::System::Collections::ArrayList value)  {
::cordl_internals::setInstanceField<::System::Collections::ArrayList, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::ArrayList>(value));
}
constexpr ::System::Collections::ArrayList ::Mono::Security::X509::X509Store::__get__crls() const {
return ::cordl_internals::getInstanceField<::System::Collections::ArrayList, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::X509::X509Store::__set__crl(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Mono::Security::X509::X509Store::__get__crl() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::X509::X509Store::__set__newFormat(bool value)  {
::cordl_internals::setInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Mono::Security::X509::X509Store::__get__newFormat() const {
return ::cordl_internals::getInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "crl", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "newFormat", ty: "bool", modifiers: "", def_value: None }]
 ::Mono::Security::X509::X509Store::X509Store(::StringW path, bool crl, bool newFormat)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<X509Store>(path, crl, newFormat))) {}
 void ::Mono::Security::X509::X509Store::_ctor(::StringW path, bool crl, bool newFormat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, path, crl, newFormat);
}
 ::Mono::Security::X509::X509CertificateCollection ::Mono::Security::X509::X509Store::get_Certificates()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store>::get(),
                            "get_Certificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509CertificateCollection, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::ArrayList ::Mono::Security::X509::X509Store::get_Crls()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store>::get(),
                            "get_Crls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> ::Mono::Security::X509::X509Store::Load(::StringW filename)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, filename);
}
 ::Mono::Security::X509::X509Certificate ::Mono::Security::X509::X509Store::LoadCertificate(::StringW filename)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store>::get(),
                            "LoadCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Certificate, false>(const_cast<void*>(instance), ___internal_method, filename);
}
 ::Mono::Security::X509::X509Crl ::Mono::Security::X509::X509Store::LoadCrl(::StringW filename)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store>::get(),
                            "LoadCrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Crl, false>(const_cast<void*>(instance), ___internal_method, filename);
}
 bool ::Mono::Security::X509::X509Store::CheckStore(::StringW path, bool throwException)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store>::get(),
                            "CheckStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, path, throwException);
}
 ::Mono::Security::X509::X509CertificateCollection ::Mono::Security::X509::X509Store::BuildCertificatesCollection(::StringW storeName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store>::get(),
                            "BuildCertificatesCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509CertificateCollection, false>(const_cast<void*>(instance), ___internal_method, storeName);
}
 ::System::Collections::ArrayList ::Mono::Security::X509::X509Store::BuildCrlsCollection(::StringW storeName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store>::get(),
                            "BuildCrlsCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList, false>(const_cast<void*>(instance), ___internal_method, storeName);
}
} // end anonymous namespace
