#pragma once
#include "System/Security/Cryptography/zzzz__DSA_impl.hpp"
namespace {
#include "System/Security/Cryptography/zzzz__DSACryptoServiceProvider_def.hpp"
#include "System/Security/Cryptography/zzzz__DSAParameters_def.hpp"
#include "Mono/Security/Cryptography/zzzz__KeyPairPersistence_def.hpp"
#include "Mono/Security/Cryptography/zzzz__DSAManaged_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::DSACryptoServiceProvider::*)()>(&::System::Security::Cryptography::DSACryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23031b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSACryptoServiceProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::DSACryptoServiceProvider::*)(int32_t)>(&::System::Security::Cryptography::DSACryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2305348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSACryptoServiceProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.Common
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::DSACryptoServiceProvider::*)(int32_t, bool)>(&::System::Security::Cryptography::DSACryptoServiceProvider::Common)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2305380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSACryptoServiceProvider>::get(),
                            "Common",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::DSACryptoServiceProvider::*)()>(&::System::Security::Cryptography::DSACryptoServiceProvider::Finalize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x23055a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::Cryptography::DSACryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSACryptoServiceProvider>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.get_KeySize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::Cryptography::DSACryptoServiceProvider::*)()>(&::System::Security::Cryptography::DSACryptoServiceProvider::get_KeySize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2305644;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::Cryptography::DSACryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSACryptoServiceProvider>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.get_PublicOnly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Cryptography::DSACryptoServiceProvider::*)()>(&::System::Security::Cryptography::DSACryptoServiceProvider::get_PublicOnly)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2305664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSACryptoServiceProvider>::get(),
                            "get_PublicOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.ExportParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::DSAParameters (::System::Security::Cryptography::DSACryptoServiceProvider::*)(bool)>(&::System::Security::Cryptography::DSACryptoServiceProvider::ExportParameters)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2305680;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::Cryptography::DSACryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSACryptoServiceProvider>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.ImportParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::DSACryptoServiceProvider::*)(::System::Security::Cryptography::DSAParameters)>(&::System::Security::Cryptography::DSACryptoServiceProvider::ImportParameters)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2305734;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::Cryptography::DSACryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSACryptoServiceProvider>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.VerifySignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Cryptography::DSACryptoServiceProvider::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::DSACryptoServiceProvider::VerifySignature)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2305788;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::Cryptography::DSACryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSACryptoServiceProvider>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::DSACryptoServiceProvider::*)(bool)>(&::System::Security::Cryptography::DSACryptoServiceProvider::Dispose)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x23057a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::Cryptography::DSACryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSACryptoServiceProvider>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.OnKeyGenerated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::DSACryptoServiceProvider::*)(::bs_hook::Il2CppWrapperType, ::System::EventArgs)>(&::System::Security::Cryptography::DSACryptoServiceProvider::OnKeyGenerated)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x23057fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSACryptoServiceProvider>::get(),
                            "OnKeyGenerated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Security::Cryptography::DSACryptoServiceProvider::__set_store(::Mono::Security::Cryptography::KeyPairPersistence value)  {
::cordl_internals::setInstanceField<::Mono::Security::Cryptography::KeyPairPersistence, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Mono::Security::Cryptography::KeyPairPersistence>(value));
}
constexpr ::Mono::Security::Cryptography::KeyPairPersistence ::System::Security::Cryptography::DSACryptoServiceProvider::__get_store() const {
return ::cordl_internals::getInstanceField<::Mono::Security::Cryptography::KeyPairPersistence, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Security::Cryptography::DSACryptoServiceProvider::__set_persistKey(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Security::Cryptography::DSACryptoServiceProvider::__get_persistKey() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Security::Cryptography::DSACryptoServiceProvider::__set_persisted(bool value)  {
::cordl_internals::setInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Security::Cryptography::DSACryptoServiceProvider::__get_persisted() const {
return ::cordl_internals::getInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Security::Cryptography::DSACryptoServiceProvider::__set_privateKeyExportable(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Security::Cryptography::DSACryptoServiceProvider::__get_privateKeyExportable() const {
return ::cordl_internals::getInstanceField<bool, 0x2a>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Security::Cryptography::DSACryptoServiceProvider::__set_m_disposed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2b>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Security::Cryptography::DSACryptoServiceProvider::__get_m_disposed() const {
return ::cordl_internals::getInstanceField<bool, 0x2b>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Security::Cryptography::DSACryptoServiceProvider::__set_dsa(::Mono::Security::Cryptography::DSAManaged value)  {
::cordl_internals::setInstanceField<::Mono::Security::Cryptography::DSAManaged, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Mono::Security::Cryptography::DSAManaged>(value));
}
constexpr ::Mono::Security::Cryptography::DSAManaged ::System::Security::Cryptography::DSACryptoServiceProvider::__get_dsa() const {
return ::cordl_internals::getInstanceField<::Mono::Security::Cryptography::DSAManaged, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::System::Security::Cryptography::DSACryptoServiceProvider::__set_useMachineKeyStore(bool value)  {
::cordl_internals::setStaticField<bool, "useMachineKeyStore", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSACryptoServiceProvider>::get>(std::forward<bool>(value));
}
 bool ::System::Security::Cryptography::DSACryptoServiceProvider::__get_useMachineKeyStore()  {
return ::cordl_internals::getStaticField<bool, "useMachineKeyStore", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSACryptoServiceProvider>::get>();
}
// Ctor Parameters []
 ::System::Security::Cryptography::DSACryptoServiceProvider::DSACryptoServiceProvider()  : ::System::Security::Cryptography::DSA(THROW_UNLESS(::il2cpp_utils::New<DSACryptoServiceProvider>())) {}
 void ::System::Security::Cryptography::DSACryptoServiceProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSACryptoServiceProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "dwKeySize", ty: "int32_t", modifiers: "", def_value: None }]
 ::System::Security::Cryptography::DSACryptoServiceProvider::DSACryptoServiceProvider(int32_t dwKeySize)  : ::System::Security::Cryptography::DSA(THROW_UNLESS(::il2cpp_utils::New<DSACryptoServiceProvider>(dwKeySize))) {}
 void ::System::Security::Cryptography::DSACryptoServiceProvider::_ctor(int32_t dwKeySize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSACryptoServiceProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dwKeySize);
}
 void ::System::Security::Cryptography::DSACryptoServiceProvider::Common(int32_t dwKeySize, bool parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSACryptoServiceProvider>::get(),
                            "Common",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dwKeySize, parameters);
}
 void ::System::Security::Cryptography::DSACryptoServiceProvider::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSACryptoServiceProvider>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::System::Security::Cryptography::DSACryptoServiceProvider::get_KeySize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSACryptoServiceProvider>::get(),
                            "get_KeySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Security::Cryptography::DSACryptoServiceProvider::get_PublicOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSACryptoServiceProvider>::get(),
                            "get_PublicOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Security::Cryptography::DSAParameters ::System::Security::Cryptography::DSACryptoServiceProvider::ExportParameters(bool includePrivateParameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSACryptoServiceProvider>::get(),
                            "ExportParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::DSAParameters, false>(const_cast<void*>(instance), ___internal_method, includePrivateParameters);
}
 void ::System::Security::Cryptography::DSACryptoServiceProvider::ImportParameters(::System::Security::Cryptography::DSAParameters parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSACryptoServiceProvider>::get(),
                            "ImportParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::DSAParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parameters);
}
 bool ::System::Security::Cryptography::DSACryptoServiceProvider::VerifySignature(::ArrayW<uint8_t> rgbHash, ::ArrayW<uint8_t> rgbSignature)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSACryptoServiceProvider>::get(),
                            "VerifySignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, rgbHash, rgbSignature);
}
 void ::System::Security::Cryptography::DSACryptoServiceProvider::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSACryptoServiceProvider>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 void ::System::Security::Cryptography::DSACryptoServiceProvider::OnKeyGenerated(::bs_hook::Il2CppWrapperType sender, ::System::EventArgs e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSACryptoServiceProvider>::get(),
                            "OnKeyGenerated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sender, e);
}
} // end anonymous namespace
