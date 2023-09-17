#pragma once
#include "System/Security/Cryptography/zzzz__AsymmetricSignatureDeformatter_impl.hpp"
namespace {
#include "System/Security/Cryptography/zzzz__DSASignatureDeformatter_def.hpp"
#include "System/Security/Cryptography/zzzz__DSA_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::DSASignatureDeformatter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::DSASignatureDeformatter::*)()>(&::System::Security::Cryptography::DSASignatureDeformatter::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x22f2b28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSASignatureDeformatter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSASignatureDeformatter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::DSASignatureDeformatter::*)(::System::Security::Cryptography::AsymmetricAlgorithm)>(&::System::Security::Cryptography::DSASignatureDeformatter::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x22f2ba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSASignatureDeformatter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::AsymmetricAlgorithm>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSASignatureDeformatter.SetKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::DSASignatureDeformatter::*)(::System::Security::Cryptography::AsymmetricAlgorithm)>(&::System::Security::Cryptography::DSASignatureDeformatter::SetKey)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x22f2c9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::Cryptography::DSASignatureDeformatter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSASignatureDeformatter>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSASignatureDeformatter.SetHashAlgorithm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::DSASignatureDeformatter::*)(::StringW)>(&::System::Security::Cryptography::DSASignatureDeformatter::SetHashAlgorithm)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x22f2d88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::Cryptography::DSASignatureDeformatter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSASignatureDeformatter>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSASignatureDeformatter.VerifySignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Cryptography::DSASignatureDeformatter::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::DSASignatureDeformatter::VerifySignature)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x22f2e58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::Cryptography::DSASignatureDeformatter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSASignatureDeformatter>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
constexpr void ::System::Security::Cryptography::DSASignatureDeformatter::__set__dsaKey(::System::Security::Cryptography::DSA value)  {
::cordl_internals::setInstanceField<::System::Security::Cryptography::DSA, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Security::Cryptography::DSA>(value));
}
constexpr ::System::Security::Cryptography::DSA ::System::Security::Cryptography::DSASignatureDeformatter::__get__dsaKey() const {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::DSA, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Security::Cryptography::DSASignatureDeformatter::__set__oid(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Security::Cryptography::DSASignatureDeformatter::__get__oid() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::Security::Cryptography::DSASignatureDeformatter::DSASignatureDeformatter()  : ::System::Security::Cryptography::AsymmetricSignatureDeformatter(THROW_UNLESS(::il2cpp_utils::New<DSASignatureDeformatter>())) {}
 void ::System::Security::Cryptography::DSASignatureDeformatter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSASignatureDeformatter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "::System::Security::Cryptography::AsymmetricAlgorithm", modifiers: "", def_value: None }]
 ::System::Security::Cryptography::DSASignatureDeformatter::DSASignatureDeformatter(::System::Security::Cryptography::AsymmetricAlgorithm key)  : ::System::Security::Cryptography::AsymmetricSignatureDeformatter(THROW_UNLESS(::il2cpp_utils::New<DSASignatureDeformatter>(key))) {}
 void ::System::Security::Cryptography::DSASignatureDeformatter::_ctor(::System::Security::Cryptography::AsymmetricAlgorithm key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSASignatureDeformatter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::AsymmetricAlgorithm>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key);
}
 void ::System::Security::Cryptography::DSASignatureDeformatter::SetKey(::System::Security::Cryptography::AsymmetricAlgorithm key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSASignatureDeformatter>::get(),
                            "SetKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::AsymmetricAlgorithm>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key);
}
 void ::System::Security::Cryptography::DSASignatureDeformatter::SetHashAlgorithm(::StringW strName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSASignatureDeformatter>::get(),
                            "SetHashAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, strName);
}
 bool ::System::Security::Cryptography::DSASignatureDeformatter::VerifySignature(::ArrayW<uint8_t> rgbHash, ::ArrayW<uint8_t> rgbSignature)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSASignatureDeformatter>::get(),
                            "VerifySignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, rgbHash, rgbSignature);
}
} // end anonymous namespace
