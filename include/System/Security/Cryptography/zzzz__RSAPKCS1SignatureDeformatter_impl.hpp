#pragma once
#include "System/Security/Cryptography/zzzz__AsymmetricSignatureDeformatter_impl.hpp"
#include "System/Security/Cryptography/zzzz__RSAPKCS1SignatureDeformatter_def.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
//  Writing Method size for method: System::Security::Cryptography::RSAPKCS1SignatureDeformatter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RSAPKCS1SignatureDeformatter::*)()>(&System::Security::Cryptography::RSAPKCS1SignatureDeformatter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2303284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RSAPKCS1SignatureDeformatter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::RSAPKCS1SignatureDeformatter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RSAPKCS1SignatureDeformatter::*)(System::Security::Cryptography::AsymmetricAlgorithm)>(&System::Security::Cryptography::RSAPKCS1SignatureDeformatter::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2307f14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RSAPKCS1SignatureDeformatter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::AsymmetricAlgorithm>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::RSAPKCS1SignatureDeformatter.SetHashAlgorithm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RSAPKCS1SignatureDeformatter::*)(::StringW)>(&System::Security::Cryptography::RSAPKCS1SignatureDeformatter::SetHashAlgorithm)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2307f48;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::RSAPKCS1SignatureDeformatter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RSAPKCS1SignatureDeformatter>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::RSAPKCS1SignatureDeformatter.SetKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RSAPKCS1SignatureDeformatter::*)(System::Security::Cryptography::AsymmetricAlgorithm)>(&System::Security::Cryptography::RSAPKCS1SignatureDeformatter::SetKey)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2307fa8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::RSAPKCS1SignatureDeformatter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RSAPKCS1SignatureDeformatter>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::RSAPKCS1SignatureDeformatter.VerifySignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::RSAPKCS1SignatureDeformatter::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&System::Security::Cryptography::RSAPKCS1SignatureDeformatter::VerifySignature)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2308094;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::RSAPKCS1SignatureDeformatter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RSAPKCS1SignatureDeformatter>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
constexpr void System::Security::Cryptography::RSAPKCS1SignatureDeformatter::__set_rsa(System::Security::Cryptography::RSA value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::RSA, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Cryptography::RSA>(value));
}
constexpr System::Security::Cryptography::RSA System::Security::Cryptography::RSAPKCS1SignatureDeformatter::__get_rsa() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::RSA, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::RSAPKCS1SignatureDeformatter::__set_hashName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Security::Cryptography::RSAPKCS1SignatureDeformatter::__get_hashName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 System::Security::Cryptography::RSAPKCS1SignatureDeformatter::RSAPKCS1SignatureDeformatter()  : System::Security::Cryptography::AsymmetricSignatureDeformatter(THROW_UNLESS(::il2cpp_utils::New<RSAPKCS1SignatureDeformatter>())) {}
 void System::Security::Cryptography::RSAPKCS1SignatureDeformatter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RSAPKCS1SignatureDeformatter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "System::Security::Cryptography::AsymmetricAlgorithm", modifiers: "", def_value: None }]
 System::Security::Cryptography::RSAPKCS1SignatureDeformatter::RSAPKCS1SignatureDeformatter(System::Security::Cryptography::AsymmetricAlgorithm key)  : System::Security::Cryptography::AsymmetricSignatureDeformatter(THROW_UNLESS(::il2cpp_utils::New<RSAPKCS1SignatureDeformatter>(key))) {}
 void System::Security::Cryptography::RSAPKCS1SignatureDeformatter::_ctor(System::Security::Cryptography::AsymmetricAlgorithm key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RSAPKCS1SignatureDeformatter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::AsymmetricAlgorithm>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key);
}
 void System::Security::Cryptography::RSAPKCS1SignatureDeformatter::SetHashAlgorithm(::StringW strName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RSAPKCS1SignatureDeformatter>::get(),
                            "SetHashAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, strName);
}
 void System::Security::Cryptography::RSAPKCS1SignatureDeformatter::SetKey(System::Security::Cryptography::AsymmetricAlgorithm key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RSAPKCS1SignatureDeformatter>::get(),
                            "SetKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::AsymmetricAlgorithm>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key);
}
 bool System::Security::Cryptography::RSAPKCS1SignatureDeformatter::VerifySignature(::ArrayW<uint8_t> rgbHash, ::ArrayW<uint8_t> rgbSignature)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RSAPKCS1SignatureDeformatter>::get(),
                            "VerifySignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, rgbHash, rgbSignature);
}
