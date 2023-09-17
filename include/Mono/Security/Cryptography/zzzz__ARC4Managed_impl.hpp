#pragma once
#include "Mono/Security/Cryptography/zzzz__RC4_impl.hpp"
namespace {
#include "Mono/Security/Cryptography/zzzz__ARC4Managed_def.hpp"
#include "System/Security/Cryptography/zzzz__ICryptoTransform_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Mono::Security::Cryptography::ARC4Managed._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::ARC4Managed::*)()>(&::Mono::Security::Cryptography::ARC4Managed::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2295c88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::ARC4Managed>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::ARC4Managed.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::ARC4Managed::*)()>(&::Mono::Security::Cryptography::ARC4Managed::Finalize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2295d84;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Security::Cryptography::ARC4Managed),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::ARC4Managed>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::ARC4Managed.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::ARC4Managed::*)(bool)>(&::Mono::Security::Cryptography::ARC4Managed::Dispose)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2295e24;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Security::Cryptography::ARC4Managed),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::ARC4Managed>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::ARC4Managed.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Mono::Security::Cryptography::ARC4Managed::*)()>(&::Mono::Security::Cryptography::ARC4Managed::get_Key)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2295ed0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Security::Cryptography::ARC4Managed),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::ARC4Managed>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::ARC4Managed.set_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::ARC4Managed::*)(::ArrayW<uint8_t>)>(&::Mono::Security::Cryptography::ARC4Managed::set_Key)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2295f64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Security::Cryptography::ARC4Managed),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::ARC4Managed>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::ARC4Managed.CreateEncryptor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::ICryptoTransform (::Mono::Security::Cryptography::ARC4Managed::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Mono::Security::Cryptography::ARC4Managed::CreateEncryptor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x229611c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Security::Cryptography::ARC4Managed),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::ARC4Managed>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::ARC4Managed.CreateDecryptor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::ICryptoTransform (::Mono::Security::Cryptography::ARC4Managed::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Mono::Security::Cryptography::ARC4Managed::CreateDecryptor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x229613c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Security::Cryptography::ARC4Managed),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::ARC4Managed>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::ARC4Managed.GenerateIV
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::ARC4Managed::*)()>(&::Mono::Security::Cryptography::ARC4Managed::GenerateIV)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2296168;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Security::Cryptography::ARC4Managed),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::ARC4Managed>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::ARC4Managed.GenerateKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::ARC4Managed::*)()>(&::Mono::Security::Cryptography::ARC4Managed::GenerateKey)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22961c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Security::Cryptography::ARC4Managed),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::ARC4Managed>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::ARC4Managed.get_CanTransformMultipleBlocks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::Cryptography::ARC4Managed::*)()>(&::Mono::Security::Cryptography::ARC4Managed::get_CanTransformMultipleBlocks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2296254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::ARC4Managed>::get(),
                            "get_CanTransformMultipleBlocks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::ARC4Managed.get_InputBlockSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Security::Cryptography::ARC4Managed::*)()>(&::Mono::Security::Cryptography::ARC4Managed::get_InputBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229625c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::ARC4Managed>::get(),
                            "get_InputBlockSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::ARC4Managed.get_OutputBlockSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Security::Cryptography::ARC4Managed::*)()>(&::Mono::Security::Cryptography::ARC4Managed::get_OutputBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2296264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::ARC4Managed>::get(),
                            "get_OutputBlockSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::ARC4Managed.KeySetup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::ARC4Managed::*)(::ArrayW<uint8_t>)>(&::Mono::Security::Cryptography::ARC4Managed::KeySetup)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x229603c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::ARC4Managed>::get(),
                            "KeySetup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::ARC4Managed.CheckInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::ARC4Managed::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Mono::Security::Cryptography::ARC4Managed::CheckInput)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x229626c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::ARC4Managed>::get(),
                            "CheckInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::ARC4Managed.TransformBlock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Security::Cryptography::ARC4Managed::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&::Mono::Security::Cryptography::ARC4Managed::TransformBlock)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x22963c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::ARC4Managed>::get(),
                            "TransformBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::ARC4Managed.InternalTransformBlock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Security::Cryptography::ARC4Managed::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&::Mono::Security::Cryptography::ARC4Managed::InternalTransformBlock)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2296530;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::ARC4Managed>::get(),
                            "InternalTransformBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::ARC4Managed.TransformFinalBlock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Mono::Security::Cryptography::ARC4Managed::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Mono::Security::Cryptography::ARC4Managed::TransformFinalBlock)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2296660;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::ARC4Managed>::get(),
                            "TransformFinalBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Security::Cryptography::ICryptoTransform
constexpr  ::Mono::Security::Cryptography::ARC4Managed::operator ::System::Security::Cryptography::ICryptoTransform() const noexcept {
return ::System::Security::Cryptography::ICryptoTransform(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::IDisposable
constexpr  ::Mono::Security::Cryptography::ARC4Managed::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::Cryptography::ARC4Managed::__set_key(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Mono::Security::Cryptography::ARC4Managed::__get_key() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::Cryptography::ARC4Managed::__set_state(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Mono::Security::Cryptography::ARC4Managed::__get_state() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::Cryptography::ARC4Managed::__set_x(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::Mono::Security::Cryptography::ARC4Managed::__get_x() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::Cryptography::ARC4Managed::__set_y(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x59>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::Mono::Security::Cryptography::ARC4Managed::__get_y() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x59>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::Cryptography::ARC4Managed::__set_m_disposed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x5a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Mono::Security::Cryptography::ARC4Managed::__get_m_disposed() const {
return ::cordl_internals::getInstanceField<bool, 0x5a>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::Mono::Security::Cryptography::ARC4Managed::ARC4Managed()  : ::Mono::Security::Cryptography::RC4(THROW_UNLESS(::il2cpp_utils::New<ARC4Managed>())) {}
 void ::Mono::Security::Cryptography::ARC4Managed::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::ARC4Managed>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Security::Cryptography::ARC4Managed::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::ARC4Managed>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Security::Cryptography::ARC4Managed::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::ARC4Managed>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 ::ArrayW<uint8_t> ::Mono::Security::Cryptography::ARC4Managed::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::ARC4Managed>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Security::Cryptography::ARC4Managed::set_Key(::ArrayW<uint8_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::ARC4Managed>::get(),
                            "set_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Security::Cryptography::ICryptoTransform ::Mono::Security::Cryptography::ARC4Managed::CreateEncryptor(::ArrayW<uint8_t> rgbKey, ::ArrayW<uint8_t> rgvIV)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::ARC4Managed>::get(),
                            "CreateEncryptor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform, false>(const_cast<void*>(instance), ___internal_method, rgbKey, rgvIV);
}
 ::System::Security::Cryptography::ICryptoTransform ::Mono::Security::Cryptography::ARC4Managed::CreateDecryptor(::ArrayW<uint8_t> rgbKey, ::ArrayW<uint8_t> rgvIV)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::ARC4Managed>::get(),
                            "CreateDecryptor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform, false>(const_cast<void*>(instance), ___internal_method, rgbKey, rgvIV);
}
 void ::Mono::Security::Cryptography::ARC4Managed::GenerateIV()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::ARC4Managed>::get(),
                            "GenerateIV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Security::Cryptography::ARC4Managed::GenerateKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::ARC4Managed>::get(),
                            "GenerateKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Mono::Security::Cryptography::ARC4Managed::get_CanTransformMultipleBlocks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::ARC4Managed>::get(),
                            "get_CanTransformMultipleBlocks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::Mono::Security::Cryptography::ARC4Managed::get_InputBlockSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::ARC4Managed>::get(),
                            "get_InputBlockSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::Mono::Security::Cryptography::ARC4Managed::get_OutputBlockSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::ARC4Managed>::get(),
                            "get_OutputBlockSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Security::Cryptography::ARC4Managed::KeySetup(::ArrayW<uint8_t> key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::ARC4Managed>::get(),
                            "KeySetup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key);
}
 void ::Mono::Security::Cryptography::ARC4Managed::CheckInput(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset, int32_t inputCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::ARC4Managed>::get(),
                            "CheckInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inputBuffer, inputOffset, inputCount);
}
 int32_t ::Mono::Security::Cryptography::ARC4Managed::TransformBlock(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset, int32_t inputCount, ::ArrayW<uint8_t> outputBuffer, int32_t outputOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::ARC4Managed>::get(),
                            "TransformBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
}
 int32_t ::Mono::Security::Cryptography::ARC4Managed::InternalTransformBlock(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset, int32_t inputCount, ::ArrayW<uint8_t> outputBuffer, int32_t outputOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::ARC4Managed>::get(),
                            "InternalTransformBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
}
 ::ArrayW<uint8_t> ::Mono::Security::Cryptography::ARC4Managed::TransformFinalBlock(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset, int32_t inputCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::ARC4Managed>::get(),
                            "TransformFinalBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, inputBuffer, inputOffset, inputCount);
}
} // end anonymous namespace
