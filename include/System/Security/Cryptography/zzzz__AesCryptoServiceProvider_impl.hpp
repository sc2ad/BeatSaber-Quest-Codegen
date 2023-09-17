#pragma once
#include "System/Security/Cryptography/zzzz__Aes_impl.hpp"
namespace {
#include "System/Security/Cryptography/zzzz__AesCryptoServiceProvider_def.hpp"
#include "System/Security/Cryptography/zzzz__ICryptoTransform_def.hpp"
#include "System/Security/Cryptography/zzzz__PaddingMode_def.hpp"
#include "System/Security/Cryptography/zzzz__CipherMode_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::AesCryptoServiceProvider::*)()>(&::System::Security::Cryptography::AesCryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x267bf50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider.GenerateIV
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::AesCryptoServiceProvider::*)()>(&::System::Security::Cryptography::AesCryptoServiceProvider::GenerateIV)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x267bfb4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::Cryptography::AesCryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider.GenerateKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::AesCryptoServiceProvider::*)()>(&::System::Security::Cryptography::AesCryptoServiceProvider::GenerateKey)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x267bfd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::Cryptography::AesCryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider.CreateDecryptor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::ICryptoTransform (::System::Security::Cryptography::AesCryptoServiceProvider::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::AesCryptoServiceProvider::CreateDecryptor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x267bffc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::Cryptography::AesCryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider.CreateEncryptor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::ICryptoTransform (::System::Security::Cryptography::AesCryptoServiceProvider::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::AesCryptoServiceProvider::CreateEncryptor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x267c7ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::Cryptography::AesCryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider.get_IV
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::AesCryptoServiceProvider::*)()>(&::System::Security::Cryptography::AesCryptoServiceProvider::get_IV)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x267c8e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::Cryptography::AesCryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider.set_IV
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::AesCryptoServiceProvider::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::AesCryptoServiceProvider::set_IV)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x267c8f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::Cryptography::AesCryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::AesCryptoServiceProvider::*)()>(&::System::Security::Cryptography::AesCryptoServiceProvider::get_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x267c8f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::Cryptography::AesCryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider.set_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::AesCryptoServiceProvider::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::AesCryptoServiceProvider::set_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x267c900;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::Cryptography::AesCryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider.get_KeySize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::Cryptography::AesCryptoServiceProvider::*)()>(&::System::Security::Cryptography::AesCryptoServiceProvider::get_KeySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x267c908;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::Cryptography::AesCryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider.set_KeySize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::AesCryptoServiceProvider::*)(int32_t)>(&::System::Security::Cryptography::AesCryptoServiceProvider::set_KeySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x267c910;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::Cryptography::AesCryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider.get_FeedbackSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::Cryptography::AesCryptoServiceProvider::*)()>(&::System::Security::Cryptography::AesCryptoServiceProvider::get_FeedbackSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x267c918;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::Cryptography::AesCryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider.get_Mode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::CipherMode (::System::Security::Cryptography::AesCryptoServiceProvider::*)()>(&::System::Security::Cryptography::AesCryptoServiceProvider::get_Mode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x267c920;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::Cryptography::AesCryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider.set_Mode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::AesCryptoServiceProvider::*)(::System::Security::Cryptography::CipherMode)>(&::System::Security::Cryptography::AesCryptoServiceProvider::set_Mode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x267c928;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::Cryptography::AesCryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider.get_Padding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::PaddingMode (::System::Security::Cryptography::AesCryptoServiceProvider::*)()>(&::System::Security::Cryptography::AesCryptoServiceProvider::get_Padding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x267c988;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::Cryptography::AesCryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider.set_Padding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::AesCryptoServiceProvider::*)(::System::Security::Cryptography::PaddingMode)>(&::System::Security::Cryptography::AesCryptoServiceProvider::set_Padding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x267c990;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::Cryptography::AesCryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider.CreateDecryptor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::ICryptoTransform (::System::Security::Cryptography::AesCryptoServiceProvider::*)()>(&::System::Security::Cryptography::AesCryptoServiceProvider::CreateDecryptor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x267c998;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::Cryptography::AesCryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider.CreateEncryptor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::ICryptoTransform (::System::Security::Cryptography::AesCryptoServiceProvider::*)()>(&::System::Security::Cryptography::AesCryptoServiceProvider::CreateEncryptor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x267c9e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::Cryptography::AesCryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::AesCryptoServiceProvider::*)(bool)>(&::System::Security::Cryptography::AesCryptoServiceProvider::Dispose)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x267ca38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::Cryptography::AesCryptoServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::System::Security::Cryptography::AesCryptoServiceProvider::AesCryptoServiceProvider()  : ::System::Security::Cryptography::Aes(THROW_UNLESS(::il2cpp_utils::New<AesCryptoServiceProvider>())) {}
 void ::System::Security::Cryptography::AesCryptoServiceProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Security::Cryptography::AesCryptoServiceProvider::GenerateIV()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                            "GenerateIV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Security::Cryptography::AesCryptoServiceProvider::GenerateKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                            "GenerateKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Security::Cryptography::ICryptoTransform ::System::Security::Cryptography::AesCryptoServiceProvider::CreateDecryptor(::ArrayW<uint8_t> key, ::ArrayW<uint8_t> iv)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                            "CreateDecryptor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform, false>(const_cast<void*>(instance), ___internal_method, key, iv);
}
 ::System::Security::Cryptography::ICryptoTransform ::System::Security::Cryptography::AesCryptoServiceProvider::CreateEncryptor(::ArrayW<uint8_t> key, ::ArrayW<uint8_t> iv)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                            "CreateEncryptor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform, false>(const_cast<void*>(instance), ___internal_method, key, iv);
}
 ::ArrayW<uint8_t> ::System::Security::Cryptography::AesCryptoServiceProvider::get_IV()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                            "get_IV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Security::Cryptography::AesCryptoServiceProvider::set_IV(::ArrayW<uint8_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                            "set_IV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<uint8_t> ::System::Security::Cryptography::AesCryptoServiceProvider::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Security::Cryptography::AesCryptoServiceProvider::set_Key(::ArrayW<uint8_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                            "set_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::System::Security::Cryptography::AesCryptoServiceProvider::get_KeySize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                            "get_KeySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Security::Cryptography::AesCryptoServiceProvider::set_KeySize(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                            "set_KeySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::System::Security::Cryptography::AesCryptoServiceProvider::get_FeedbackSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                            "get_FeedbackSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Security::Cryptography::CipherMode ::System::Security::Cryptography::AesCryptoServiceProvider::get_Mode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                            "get_Mode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::CipherMode, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Security::Cryptography::AesCryptoServiceProvider::set_Mode(::System::Security::Cryptography::CipherMode value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                            "set_Mode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::CipherMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Security::Cryptography::PaddingMode ::System::Security::Cryptography::AesCryptoServiceProvider::get_Padding()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                            "get_Padding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::PaddingMode, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Security::Cryptography::AesCryptoServiceProvider::set_Padding(::System::Security::Cryptography::PaddingMode value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                            "set_Padding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::PaddingMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Security::Cryptography::ICryptoTransform ::System::Security::Cryptography::AesCryptoServiceProvider::CreateDecryptor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                            "CreateDecryptor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Security::Cryptography::ICryptoTransform ::System::Security::Cryptography::AesCryptoServiceProvider::CreateEncryptor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                            "CreateEncryptor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Security::Cryptography::AesCryptoServiceProvider::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::AesCryptoServiceProvider>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
} // end anonymous namespace
