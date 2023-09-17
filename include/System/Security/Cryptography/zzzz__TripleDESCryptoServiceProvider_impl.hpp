#pragma once
#include "System/Security/Cryptography/zzzz__TripleDES_impl.hpp"
namespace {
#include "System/Security/Cryptography/zzzz__TripleDESCryptoServiceProvider_def.hpp"
#include "System/Security/Cryptography/zzzz__ICryptoTransform_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::TripleDESCryptoServiceProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::TripleDESCryptoServiceProvider::*)()>(&::System::Security::Cryptography::TripleDESCryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2300088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESCryptoServiceProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::TripleDESCryptoServiceProvider.CreateEncryptor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::ICryptoTransform (::System::Security::Cryptography::TripleDESCryptoServiceProvider::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::TripleDESCryptoServiceProvider::CreateEncryptor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x23004cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::Cryptography::TripleDESCryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESCryptoServiceProvider>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::TripleDESCryptoServiceProvider.CreateDecryptor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::ICryptoTransform (::System::Security::Cryptography::TripleDESCryptoServiceProvider::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::TripleDESCryptoServiceProvider::CreateDecryptor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2300900;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::Cryptography::TripleDESCryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESCryptoServiceProvider>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::TripleDESCryptoServiceProvider.GenerateKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::TripleDESCryptoServiceProvider::*)()>(&::System::Security::Cryptography::TripleDESCryptoServiceProvider::GenerateKey)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2300a14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::Cryptography::TripleDESCryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESCryptoServiceProvider>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::TripleDESCryptoServiceProvider.GenerateIV
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::TripleDESCryptoServiceProvider::*)()>(&::System::Security::Cryptography::TripleDESCryptoServiceProvider::GenerateIV)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2300b7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::Cryptography::TripleDESCryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESCryptoServiceProvider>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::System::Security::Cryptography::TripleDESCryptoServiceProvider::TripleDESCryptoServiceProvider()  : ::System::Security::Cryptography::TripleDES(THROW_UNLESS(::il2cpp_utils::New<TripleDESCryptoServiceProvider>())) {}
 void ::System::Security::Cryptography::TripleDESCryptoServiceProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESCryptoServiceProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Security::Cryptography::ICryptoTransform ::System::Security::Cryptography::TripleDESCryptoServiceProvider::CreateEncryptor(::ArrayW<uint8_t> rgbKey, ::ArrayW<uint8_t> rgbIV)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESCryptoServiceProvider>::get(),
                            "CreateEncryptor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform, false>(const_cast<void*>(instance), ___internal_method, rgbKey, rgbIV);
}
 ::System::Security::Cryptography::ICryptoTransform ::System::Security::Cryptography::TripleDESCryptoServiceProvider::CreateDecryptor(::ArrayW<uint8_t> rgbKey, ::ArrayW<uint8_t> rgbIV)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESCryptoServiceProvider>::get(),
                            "CreateDecryptor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform, false>(const_cast<void*>(instance), ___internal_method, rgbKey, rgbIV);
}
 void ::System::Security::Cryptography::TripleDESCryptoServiceProvider::GenerateKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESCryptoServiceProvider>::get(),
                            "GenerateKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Security::Cryptography::TripleDESCryptoServiceProvider::GenerateIV()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::TripleDESCryptoServiceProvider>::get(),
                            "GenerateIV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
