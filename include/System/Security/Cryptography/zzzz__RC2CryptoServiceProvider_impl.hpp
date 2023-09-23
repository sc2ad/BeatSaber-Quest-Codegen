#pragma once
#include "System/Security/Cryptography/zzzz__RC2_impl.hpp"
#include "System/Security/Cryptography/zzzz__RC2CryptoServiceProvider_def.hpp"
#include "System/Security/Cryptography/zzzz__ICryptoTransform_def.hpp"
#include "System/Security/Cryptography/zzzz__KeySizes_def.hpp"
//  Writing Method size for method: System::Security::Cryptography::RC2CryptoServiceProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RC2CryptoServiceProvider::*)()>(&System::Security::Cryptography::RC2CryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x22f5060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RC2CryptoServiceProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::RC2CryptoServiceProvider.get_EffectiveKeySize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Security::Cryptography::RC2CryptoServiceProvider::*)()>(&System::Security::Cryptography::RC2CryptoServiceProvider::get_EffectiveKeySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22f51d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::RC2CryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RC2CryptoServiceProvider>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::RC2CryptoServiceProvider.CreateEncryptor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::ICryptoTransform (System::Security::Cryptography::RC2CryptoServiceProvider::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&System::Security::Cryptography::RC2CryptoServiceProvider::CreateEncryptor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x22f51dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::RC2CryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RC2CryptoServiceProvider>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::RC2CryptoServiceProvider.CreateDecryptor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::ICryptoTransform (System::Security::Cryptography::RC2CryptoServiceProvider::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&System::Security::Cryptography::RC2CryptoServiceProvider::CreateDecryptor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x22f52b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::RC2CryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RC2CryptoServiceProvider>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::RC2CryptoServiceProvider.GenerateKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RC2CryptoServiceProvider::*)()>(&System::Security::Cryptography::RC2CryptoServiceProvider::GenerateKey)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22f5384;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::RC2CryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RC2CryptoServiceProvider>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::RC2CryptoServiceProvider.GenerateIV
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RC2CryptoServiceProvider::*)()>(&System::Security::Cryptography::RC2CryptoServiceProvider::GenerateIV)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x22f5400;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::RC2CryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RC2CryptoServiceProvider>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
constexpr void System::Security::Cryptography::RC2CryptoServiceProvider::__set_m_use40bitSalt(bool value)  {
::cordl_internals::setInstanceField<bool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Security::Cryptography::RC2CryptoServiceProvider::__get_m_use40bitSalt() const {
return ::cordl_internals::getInstanceField<bool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Security::Cryptography::RC2CryptoServiceProvider::__set_s_legalKeySizes(::ArrayW<System::Security::Cryptography::KeySizes> value)  {
::cordl_internals::setStaticField<::ArrayW<System::Security::Cryptography::KeySizes>, "s_legalKeySizes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RC2CryptoServiceProvider>::get>(std::forward<::ArrayW<System::Security::Cryptography::KeySizes>>(value));
}
 ::ArrayW<System::Security::Cryptography::KeySizes> System::Security::Cryptography::RC2CryptoServiceProvider::__get_s_legalKeySizes()  {
return ::cordl_internals::getStaticField<::ArrayW<System::Security::Cryptography::KeySizes>, "s_legalKeySizes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RC2CryptoServiceProvider>::get>();
}
// Ctor Parameters []
 System::Security::Cryptography::RC2CryptoServiceProvider::RC2CryptoServiceProvider()  : System::Security::Cryptography::RC2(THROW_UNLESS(::il2cpp_utils::New<RC2CryptoServiceProvider>())) {}
 void System::Security::Cryptography::RC2CryptoServiceProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RC2CryptoServiceProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Security::Cryptography::RC2CryptoServiceProvider::get_EffectiveKeySize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RC2CryptoServiceProvider>::get(),
                            "get_EffectiveKeySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Security::Cryptography::ICryptoTransform System::Security::Cryptography::RC2CryptoServiceProvider::CreateEncryptor(::ArrayW<uint8_t> rgbKey, ::ArrayW<uint8_t> rgbIV)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RC2CryptoServiceProvider>::get(),
                            "CreateEncryptor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::ICryptoTransform, false>(const_cast<void*>(instance), ___internal_method, rgbKey, rgbIV);
}
 System::Security::Cryptography::ICryptoTransform System::Security::Cryptography::RC2CryptoServiceProvider::CreateDecryptor(::ArrayW<uint8_t> rgbKey, ::ArrayW<uint8_t> rgbIV)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RC2CryptoServiceProvider>::get(),
                            "CreateDecryptor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::ICryptoTransform, false>(const_cast<void*>(instance), ___internal_method, rgbKey, rgbIV);
}
 void System::Security::Cryptography::RC2CryptoServiceProvider::GenerateKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RC2CryptoServiceProvider>::get(),
                            "GenerateKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Security::Cryptography::RC2CryptoServiceProvider::GenerateIV()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RC2CryptoServiceProvider>::get(),
                            "GenerateIV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
