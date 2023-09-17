#pragma once
namespace {
#include "Mono/Security/X509/zzzz__PKCS12_def.hpp"
#include "System/Security/Cryptography/zzzz__SymmetricAlgorithm_def.hpp"
#include "Mono/Security/zzzz__PKCS7_def.hpp"
#include "System/Security/Cryptography/zzzz__DSAParameters_def.hpp"
#include "Mono/Security/X509/zzzz__X509CertificateCollection_def.hpp"
#include "Mono/Security/Cryptography/zzzz__PKCS8_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "Mono/Security/X509/zzzz__X509Certificate_def.hpp"
#include "Mono/Security/zzzz__ASN1_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "Mono/Security/zzzz__PKCS7_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/Security/Cryptography/zzzz__RandomNumberGenerator_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::*)()>(&::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22855e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes.set_HashName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::*)(::StringW)>(&::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::set_HashName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2289eb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes>::get(),
                            "set_HashName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes.set_IterationCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::*)(int32_t)>(&::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::set_IterationCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2289ec0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes>::get(),
                            "set_IterationCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes.set_Password
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::*)(::ArrayW<uint8_t>)>(&::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::set_Password)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x22855ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes>::get(),
                            "set_Password",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes.set_Salt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::*)(::ArrayW<uint8_t>)>(&::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::set_Salt)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x22856a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes>::get(),
                            "set_Salt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes.Adjust
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>)>(&::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::Adjust)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2289ec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes>::get(),
                            "Adjust",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes.Derive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::*)(::ArrayW<uint8_t>, int32_t)>(&::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::Derive)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x2289fa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes>::get(),
                            "Derive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes.DeriveKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::*)(int32_t)>(&::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::DeriveKey)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2285750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes>::get(),
                            "DeriveKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes.DeriveIV
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::*)(int32_t)>(&::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::DeriveIV)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x22857c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes>::get(),
                            "DeriveIV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes.DeriveMAC
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::*)(int32_t)>(&::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::DeriveMAC)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2287014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes>::get(),
                            "DeriveMAC",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::__set_keyDiversifier(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "keyDiversifier", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> ::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::__get_keyDiversifier()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "keyDiversifier", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes>::get>();
}
 void ::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::__set_ivDiversifier(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "ivDiversifier", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> ::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::__get_ivDiversifier()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "ivDiversifier", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes>::get>();
}
 void ::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::__set_macDiversifier(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "macDiversifier", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> ::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::__get_macDiversifier()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "macDiversifier", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes>::get>();
}
constexpr void ::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::__set__hashName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::__get__hashName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::__set__iterations(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::__get__iterations() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::__set__password(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::__get__password() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::__set__salt(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::__get__salt() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::____Mono__Security__X509__PKCS12__DeriveBytes()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____Mono__Security__X509__PKCS12__DeriveBytes>())) {}
 void ::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::set_HashName(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes>::get(),
                            "set_HashName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::set_IterationCount(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes>::get(),
                            "set_IterationCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::set_Password(::ArrayW<uint8_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes>::get(),
                            "set_Password",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::set_Salt(::ArrayW<uint8_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes>::get(),
                            "set_Salt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::Adjust(::ArrayW<uint8_t> a, int32_t aOff, ::ArrayW<uint8_t> b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes>::get(),
                            "Adjust",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, a, aOff, b);
}
 ::ArrayW<uint8_t> ::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::Derive(::ArrayW<uint8_t> diversifier, int32_t n)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes>::get(),
                            "Derive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, diversifier, n);
}
 ::ArrayW<uint8_t> ::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::DeriveKey(int32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes>::get(),
                            "DeriveKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, size);
}
 ::ArrayW<uint8_t> ::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::DeriveIV(int32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes>::get(),
                            "DeriveIV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, size);
}
 ::ArrayW<uint8_t> ::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes::DeriveMAC(int32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes>::get(),
                            "DeriveMAC",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, size);
}
//  Writing Method size for method: ::Mono::Security::X509::PKCS12._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::PKCS12::*)()>(&::Mono::Security::X509::PKCS12::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2282f64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::ArrayW<uint8_t>)>(&::Mono::Security::X509::PKCS12::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2283050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::ArrayW<uint8_t>, ::StringW)>(&::Mono::Security::X509::PKCS12::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x22838e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.Decode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::ArrayW<uint8_t>)>(&::Mono::Security::X509::PKCS12::Decode)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0x2283238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "Decode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::PKCS12::*)()>(&::Mono::Security::X509::PKCS12::Finalize)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2284278;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Security::X509::PKCS12),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.set_Password
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::StringW)>(&::Mono::Security::X509::PKCS12::set_Password)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x2283084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "set_Password",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.get_IterationCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Security::X509::PKCS12::*)()>(&::Mono::Security::X509::PKCS12::get_IterationCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2284324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "get_IterationCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.set_IterationCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::PKCS12::*)(int32_t)>(&::Mono::Security::X509::PKCS12::set_IterationCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x228432c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "set_IterationCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.get_Keys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList (::Mono::Security::X509::PKCS12::*)()>(&::Mono::Security::X509::PKCS12::get_Keys)> {
  constexpr static std::size_t size = 0x700;
  constexpr static std::size_t addrs = 0x2284334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "get_Keys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.get_Certificates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509CertificateCollection (::Mono::Security::X509::PKCS12::*)()>(&::Mono::Security::X509::PKCS12::get_Certificates)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x2284be8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "get_Certificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.get_RNG
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RandomNumberGenerator (::Mono::Security::X509::PKCS12::*)()>(&::Mono::Security::X509::PKCS12::get_RNG)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2285038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "get_RNG",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.Compare
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::X509::PKCS12::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Mono::Security::X509::PKCS12::Compare)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2283a74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.GetSymmetricAlgorithm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::SymmetricAlgorithm (::Mono::Security::X509::PKCS12::*)(::StringW, ::ArrayW<uint8_t>, int32_t)>(&::Mono::Security::X509::PKCS12::GetSymmetricAlgorithm)> {
  constexpr static std::size_t size = 0x58c;
  constexpr static std::size_t addrs = 0x2285058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "GetSymmetricAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.Decrypt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::PKCS12::*)(::StringW, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>)>(&::Mono::Security::X509::PKCS12::Decrypt)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x2284a34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "Decrypt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.Decrypt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::PKCS12::*)(::Mono::Security::____Mono__Security__PKCS7__EncryptedData)>(&::Mono::Security::X509::PKCS12::Decrypt)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x22841e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "Decrypt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::____Mono__Security__PKCS7__EncryptedData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.Encrypt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::PKCS12::*)(::StringW, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>)>(&::Mono::Security::X509::PKCS12::Encrypt)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2285830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "Encrypt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.GetExistingParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::DSAParameters (::Mono::Security::X509::PKCS12::*)(ByRef<bool>)>(&::Mono::Security::X509::PKCS12::GetExistingParameters)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x2285a84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "GetExistingParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.AddPrivateKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::Mono::Security::Cryptography::____Mono__Security__Cryptography__PKCS8__PrivateKeyInfo)>(&::Mono::Security::X509::PKCS12::AddPrivateKey)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x22861a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "AddPrivateKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Cryptography::____Mono__Security__Cryptography__PKCS8__PrivateKeyInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.ReadSafeBag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::Mono::Security::ASN1)>(&::Mono::Security::X509::PKCS12::ReadSafeBag)> {
  constexpr static std::size_t size = 0x700;
  constexpr static std::size_t addrs = 0x2283ae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "ReadSafeBag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::ASN1>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.CertificateSafeBag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::ASN1 (::Mono::Security::X509::PKCS12::*)(::Mono::Security::X509::X509Certificate, ::System::Collections::IDictionary)>(&::Mono::Security::X509::PKCS12::CertificateSafeBag)> {
  constexpr static std::size_t size = 0xbf8;
  constexpr static std::size_t addrs = 0x228641c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "CertificateSafeBag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.MAC
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::PKCS12::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>)>(&::Mono::Security::X509::PKCS12::MAC)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2283920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "MAC",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.GetBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::PKCS12::*)()>(&::Mono::Security::X509::PKCS12::GetBytes)> {
  constexpr static std::size_t size = 0x2240;
  constexpr static std::size_t addrs = 0x2287084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.EncryptedContentInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::____Mono__Security__PKCS7__ContentInfo (::Mono::Security::X509::PKCS12::*)(::Mono::Security::ASN1, ::StringW)>(&::Mono::Security::X509::PKCS12::EncryptedContentInfo)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x22892d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "EncryptedContentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::ASN1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.AddCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::Mono::Security::X509::X509Certificate)>(&::Mono::Security::X509::PKCS12::AddCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22892cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "AddCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.AddCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::Mono::Security::X509::X509Certificate, ::System::Collections::IDictionary)>(&::Mono::Security::X509::PKCS12::AddCertificate)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x22895e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "AddCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.RemoveCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::Mono::Security::X509::X509Certificate)>(&::Mono::Security::X509::PKCS12::RemoveCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22892c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "RemoveCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.RemoveCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::Mono::Security::X509::X509Certificate, ::System::Collections::IDictionary)>(&::Mono::Security::X509::PKCS12::RemoveCertificate)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x2289834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "RemoveCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.Clone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::Mono::Security::X509::PKCS12::*)()>(&::Mono::Security::X509::PKCS12::Clone)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2289d40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.get_MaximumPasswordLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::Mono::Security::X509::PKCS12::get_MaximumPasswordLength)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2289e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "get_MaximumPasswordLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::ICloneable
constexpr  ::Mono::Security::X509::PKCS12::operator ::System::ICloneable() const noexcept {
return ::System::ICloneable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::X509::PKCS12::__set__password(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Mono::Security::X509::PKCS12::__get__password() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::X509::PKCS12::__set__keyBags(::System::Collections::ArrayList value)  {
::cordl_internals::setInstanceField<::System::Collections::ArrayList, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::ArrayList>(value));
}
constexpr ::System::Collections::ArrayList ::Mono::Security::X509::PKCS12::__get__keyBags() const {
return ::cordl_internals::getInstanceField<::System::Collections::ArrayList, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::X509::PKCS12::__set__secretBags(::System::Collections::ArrayList value)  {
::cordl_internals::setInstanceField<::System::Collections::ArrayList, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::ArrayList>(value));
}
constexpr ::System::Collections::ArrayList ::Mono::Security::X509::PKCS12::__get__secretBags() const {
return ::cordl_internals::getInstanceField<::System::Collections::ArrayList, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::X509::PKCS12::__set__certs(::Mono::Security::X509::X509CertificateCollection value)  {
::cordl_internals::setInstanceField<::Mono::Security::X509::X509CertificateCollection, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Mono::Security::X509::X509CertificateCollection>(value));
}
constexpr ::Mono::Security::X509::X509CertificateCollection ::Mono::Security::X509::PKCS12::__get__certs() const {
return ::cordl_internals::getInstanceField<::Mono::Security::X509::X509CertificateCollection, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::X509::PKCS12::__set__keyBagsChanged(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Mono::Security::X509::PKCS12::__get__keyBagsChanged() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::X509::PKCS12::__set__secretBagsChanged(bool value)  {
::cordl_internals::setInstanceField<bool, 0x31>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Mono::Security::X509::PKCS12::__get__secretBagsChanged() const {
return ::cordl_internals::getInstanceField<bool, 0x31>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::X509::PKCS12::__set__certsChanged(bool value)  {
::cordl_internals::setInstanceField<bool, 0x32>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Mono::Security::X509::PKCS12::__get__certsChanged() const {
return ::cordl_internals::getInstanceField<bool, 0x32>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::X509::PKCS12::__set__iterations(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Mono::Security::X509::PKCS12::__get__iterations() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::X509::PKCS12::__set__safeBags(::System::Collections::ArrayList value)  {
::cordl_internals::setInstanceField<::System::Collections::ArrayList, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::ArrayList>(value));
}
constexpr ::System::Collections::ArrayList ::Mono::Security::X509::PKCS12::__get__safeBags() const {
return ::cordl_internals::getInstanceField<::System::Collections::ArrayList, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::X509::PKCS12::__set__rng(::System::Security::Cryptography::RandomNumberGenerator value)  {
::cordl_internals::setInstanceField<::System::Security::Cryptography::RandomNumberGenerator, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Security::Cryptography::RandomNumberGenerator>(value));
}
constexpr ::System::Security::Cryptography::RandomNumberGenerator ::Mono::Security::X509::PKCS12::__get__rng() const {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::RandomNumberGenerator, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::Mono::Security::X509::PKCS12::__set_password_max_length(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "password_max_length", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get>(std::forward<int32_t>(value));
}
 int32_t ::Mono::Security::X509::PKCS12::__get_password_max_length()  {
return ::cordl_internals::getStaticField<int32_t, "password_max_length", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get>();
}
// Ctor Parameters []
 ::Mono::Security::X509::PKCS12::PKCS12()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PKCS12>())) {}
 void ::Mono::Security::X509::PKCS12::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 ::Mono::Security::X509::PKCS12::PKCS12(::ArrayW<uint8_t> data)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PKCS12>(data))) {}
 void ::Mono::Security::X509::PKCS12::_ctor(::ArrayW<uint8_t> data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data);
}
// Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "password", ty: "::StringW", modifiers: "", def_value: None }]
 ::Mono::Security::X509::PKCS12::PKCS12(::ArrayW<uint8_t> data, ::StringW password)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PKCS12>(data, password))) {}
 void ::Mono::Security::X509::PKCS12::_ctor(::ArrayW<uint8_t> data, ::StringW password)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data, password);
}
 void ::Mono::Security::X509::PKCS12::Decode(::ArrayW<uint8_t> data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "Decode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data);
}
 void ::Mono::Security::X509::PKCS12::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Security::X509::PKCS12::set_Password(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "set_Password",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::Mono::Security::X509::PKCS12::get_IterationCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "get_IterationCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Security::X509::PKCS12::set_IterationCount(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "set_IterationCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Collections::ArrayList ::Mono::Security::X509::PKCS12::get_Keys()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "get_Keys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Mono::Security::X509::X509CertificateCollection ::Mono::Security::X509::PKCS12::get_Certificates()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "get_Certificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509CertificateCollection, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Security::Cryptography::RandomNumberGenerator ::Mono::Security::X509::PKCS12::get_RNG()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "get_RNG",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RandomNumberGenerator, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Mono::Security::X509::PKCS12::Compare(::ArrayW<uint8_t> expected, ::ArrayW<uint8_t> actual)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, expected, actual);
}
 ::System::Security::Cryptography::SymmetricAlgorithm ::Mono::Security::X509::PKCS12::GetSymmetricAlgorithm(::StringW algorithmOid, ::ArrayW<uint8_t> salt, int32_t iterationCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "GetSymmetricAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::SymmetricAlgorithm, false>(const_cast<void*>(instance), ___internal_method, algorithmOid, salt, iterationCount);
}
 ::ArrayW<uint8_t> ::Mono::Security::X509::PKCS12::Decrypt(::StringW algorithmOid, ::ArrayW<uint8_t> salt, int32_t iterationCount, ::ArrayW<uint8_t> encryptedData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "Decrypt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, algorithmOid, salt, iterationCount, encryptedData);
}
 ::ArrayW<uint8_t> ::Mono::Security::X509::PKCS12::Decrypt(::Mono::Security::____Mono__Security__PKCS7__EncryptedData ed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "Decrypt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::____Mono__Security__PKCS7__EncryptedData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, ed);
}
 ::ArrayW<uint8_t> ::Mono::Security::X509::PKCS12::Encrypt(::StringW algorithmOid, ::ArrayW<uint8_t> salt, int32_t iterationCount, ::ArrayW<uint8_t> data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "Encrypt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, algorithmOid, salt, iterationCount, data);
}
 ::System::Security::Cryptography::DSAParameters ::Mono::Security::X509::PKCS12::GetExistingParameters(ByRef<bool> found)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "GetExistingParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::DSAParameters, false>(const_cast<void*>(instance), ___internal_method, found);
}
 void ::Mono::Security::X509::PKCS12::AddPrivateKey(::Mono::Security::Cryptography::____Mono__Security__Cryptography__PKCS8__PrivateKeyInfo pki)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "AddPrivateKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Cryptography::____Mono__Security__Cryptography__PKCS8__PrivateKeyInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pki);
}
 void ::Mono::Security::X509::PKCS12::ReadSafeBag(::Mono::Security::ASN1 safeBag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "ReadSafeBag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::ASN1>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, safeBag);
}
 ::Mono::Security::ASN1 ::Mono::Security::X509::PKCS12::CertificateSafeBag(::Mono::Security::X509::X509Certificate x509, ::System::Collections::IDictionary attributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "CertificateSafeBag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::ASN1, false>(const_cast<void*>(instance), ___internal_method, x509, attributes);
}
 ::ArrayW<uint8_t> ::Mono::Security::X509::PKCS12::MAC(::ArrayW<uint8_t> password, ::ArrayW<uint8_t> salt, int32_t iterations, ::ArrayW<uint8_t> data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "MAC",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, password, salt, iterations, data);
}
 ::ArrayW<uint8_t> ::Mono::Security::X509::PKCS12::GetBytes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Mono::Security::____Mono__Security__PKCS7__ContentInfo ::Mono::Security::X509::PKCS12::EncryptedContentInfo(::Mono::Security::ASN1 safeBags, ::StringW algorithmOid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "EncryptedContentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::ASN1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::____Mono__Security__PKCS7__ContentInfo, false>(const_cast<void*>(instance), ___internal_method, safeBags, algorithmOid);
}
 void ::Mono::Security::X509::PKCS12::AddCertificate(::Mono::Security::X509::X509Certificate cert)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "AddCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cert);
}
 void ::Mono::Security::X509::PKCS12::AddCertificate(::Mono::Security::X509::X509Certificate cert, ::System::Collections::IDictionary attributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "AddCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cert, attributes);
}
 void ::Mono::Security::X509::PKCS12::RemoveCertificate(::Mono::Security::X509::X509Certificate cert)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "RemoveCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cert);
}
 void ::Mono::Security::X509::PKCS12::RemoveCertificate(::Mono::Security::X509::X509Certificate cert, ::System::Collections::IDictionary attrs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "RemoveCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cert, attrs);
}
 ::bs_hook::Il2CppWrapperType ::Mono::Security::X509::PKCS12::Clone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::Mono::Security::X509::PKCS12::get_MaximumPasswordLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::PKCS12>::get(),
                            "get_MaximumPasswordLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
} // end anonymous namespace
