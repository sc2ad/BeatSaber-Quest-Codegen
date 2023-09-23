#pragma once
#include "Mono/Security/X509/zzzz__X509Chain_def.hpp"
#include "Mono/Security/X509/zzzz__X509ChainStatusFlags_def.hpp"
#include "Mono/Security/X509/zzzz__X509CertificateCollection_def.hpp"
#include "Mono/Security/X509/zzzz__X509Certificate_def.hpp"
//  Writing Method size for method: Mono::Security::X509::X509Chain._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::X509::X509Chain::*)()>(&Mono::Security::X509::X509Chain::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x228e864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X509Chain>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::X509::X509Chain.get_TrustAnchors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::X509::X509CertificateCollection (Mono::Security::X509::X509Chain::*)()>(&Mono::Security::X509::X509Chain::get_TrustAnchors)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x228e8d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X509Chain>::get(),
                            "get_TrustAnchors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::X509::X509Chain.LoadCertificates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::X509::X509Chain::*)(Mono::Security::X509::X509CertificateCollection)>(&Mono::Security::X509::X509Chain::LoadCertificates)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x228ea18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X509Chain>::get(),
                            "LoadCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::X509::X509CertificateCollection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::X509::X509Chain.Build
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::X509::X509Chain::*)(Mono::Security::X509::X509Certificate)>(&Mono::Security::X509::X509Chain::Build)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x228ea30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X509Chain>::get(),
                            "Build",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::X509::X509Certificate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::X509::X509Chain.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::X509::X509Chain::*)()>(&Mono::Security::X509::X509Chain::Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x228f3f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X509Chain>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::X509::X509Chain.IsValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::X509::X509Chain::*)(Mono::Security::X509::X509Certificate)>(&Mono::Security::X509::X509Chain::IsValid)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x228f34c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X509Chain>::get(),
                            "IsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::X509::X509Certificate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::X509::X509Chain.FindCertificateParent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::X509::X509Certificate (Mono::Security::X509::X509Chain::*)(Mono::Security::X509::X509Certificate)>(&Mono::Security::X509::X509Chain::FindCertificateParent)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x228edd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X509Chain>::get(),
                            "FindCertificateParent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::X509::X509Certificate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::X509::X509Chain.FindCertificateRoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::X509::X509Certificate (Mono::Security::X509::X509Chain::*)(Mono::Security::X509::X509Certificate)>(&Mono::Security::X509::X509Chain::FindCertificateRoot)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x228efc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X509Chain>::get(),
                            "FindCertificateRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::X509::X509Certificate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::X509::X509Chain.IsTrusted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::X509::X509Chain::*)(Mono::Security::X509::X509Certificate)>(&Mono::Security::X509::X509Chain::IsTrusted)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x228f438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X509Chain>::get(),
                            "IsTrusted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::X509::X509Certificate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::X509::X509Chain.IsParent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::X509::X509Chain::*)(Mono::Security::X509::X509Certificate, Mono::Security::X509::X509Certificate)>(&Mono::Security::X509::X509Chain::IsParent)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x228f208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X509Chain>::get(),
                            "IsParent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::X509::X509Certificate>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Mono::Security::X509::X509Chain::__set_roots(Mono::Security::X509::X509CertificateCollection value)  {
::cordl_internals::setInstanceField<Mono::Security::X509::X509CertificateCollection, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Mono::Security::X509::X509CertificateCollection>(value));
}
constexpr Mono::Security::X509::X509CertificateCollection Mono::Security::X509::X509Chain::__get_roots() const {
return ::cordl_internals::getInstanceField<Mono::Security::X509::X509CertificateCollection, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Security::X509::X509Chain::__set_certs(Mono::Security::X509::X509CertificateCollection value)  {
::cordl_internals::setInstanceField<Mono::Security::X509::X509CertificateCollection, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Mono::Security::X509::X509CertificateCollection>(value));
}
constexpr Mono::Security::X509::X509CertificateCollection Mono::Security::X509::X509Chain::__get_certs() const {
return ::cordl_internals::getInstanceField<Mono::Security::X509::X509CertificateCollection, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Security::X509::X509Chain::__set__root(Mono::Security::X509::X509Certificate value)  {
::cordl_internals::setInstanceField<Mono::Security::X509::X509Certificate, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Mono::Security::X509::X509Certificate>(value));
}
constexpr Mono::Security::X509::X509Certificate Mono::Security::X509::X509Chain::__get__root() const {
return ::cordl_internals::getInstanceField<Mono::Security::X509::X509Certificate, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Security::X509::X509Chain::__set__chain(Mono::Security::X509::X509CertificateCollection value)  {
::cordl_internals::setInstanceField<Mono::Security::X509::X509CertificateCollection, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Mono::Security::X509::X509CertificateCollection>(value));
}
constexpr Mono::Security::X509::X509CertificateCollection Mono::Security::X509::X509Chain::__get__chain() const {
return ::cordl_internals::getInstanceField<Mono::Security::X509::X509CertificateCollection, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Security::X509::X509Chain::__set__status(Mono::Security::X509::X509ChainStatusFlags value)  {
::cordl_internals::setInstanceField<Mono::Security::X509::X509ChainStatusFlags, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Mono::Security::X509::X509ChainStatusFlags>(value));
}
constexpr Mono::Security::X509::X509ChainStatusFlags Mono::Security::X509::X509Chain::__get__status() const {
return ::cordl_internals::getInstanceField<Mono::Security::X509::X509ChainStatusFlags, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 Mono::Security::X509::X509Chain::X509Chain()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<X509Chain>())) {}
 void Mono::Security::X509::X509Chain::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X509Chain>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Mono::Security::X509::X509CertificateCollection Mono::Security::X509::X509Chain::get_TrustAnchors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X509Chain>::get(),
                            "get_TrustAnchors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Security::X509::X509CertificateCollection, false>(const_cast<void*>(instance), ___internal_method);
}
 void Mono::Security::X509::X509Chain::LoadCertificates(Mono::Security::X509::X509CertificateCollection collection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X509Chain>::get(),
                            "LoadCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::X509::X509CertificateCollection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, collection);
}
 bool Mono::Security::X509::X509Chain::Build(Mono::Security::X509::X509Certificate leaf)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X509Chain>::get(),
                            "Build",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::X509::X509Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, leaf);
}
 void Mono::Security::X509::X509Chain::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X509Chain>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Mono::Security::X509::X509Chain::IsValid(Mono::Security::X509::X509Certificate cert)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X509Chain>::get(),
                            "IsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::X509::X509Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, cert);
}
 Mono::Security::X509::X509Certificate Mono::Security::X509::X509Chain::FindCertificateParent(Mono::Security::X509::X509Certificate child)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X509Chain>::get(),
                            "FindCertificateParent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::X509::X509Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Security::X509::X509Certificate, false>(const_cast<void*>(instance), ___internal_method, child);
}
 Mono::Security::X509::X509Certificate Mono::Security::X509::X509Chain::FindCertificateRoot(Mono::Security::X509::X509Certificate potentialRoot)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X509Chain>::get(),
                            "FindCertificateRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::X509::X509Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Security::X509::X509Certificate, false>(const_cast<void*>(instance), ___internal_method, potentialRoot);
}
 bool Mono::Security::X509::X509Chain::IsTrusted(Mono::Security::X509::X509Certificate potentialTrusted)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X509Chain>::get(),
                            "IsTrusted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::X509::X509Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, potentialTrusted);
}
 bool Mono::Security::X509::X509Chain::IsParent(Mono::Security::X509::X509Certificate child, Mono::Security::X509::X509Certificate parent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X509Chain>::get(),
                            "IsParent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::X509::X509Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, child, parent);
}
