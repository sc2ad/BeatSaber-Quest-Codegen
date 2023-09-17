#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Org/BouncyCastle/Crypto/Modes/zzzz__EaxBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__IAeadCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__IAeadBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__SicBlockCipher_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Crypto::Modes::____Org__BouncyCastle__Crypto__Modes__EaxBlockCipher__Tag::____Org__BouncyCastle__Crypto__Modes__EaxBlockCipher__Tag(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Org::BouncyCastle::Crypto::Modes::____Org__BouncyCastle__Crypto__Modes__EaxBlockCipher__Tag::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::Org::BouncyCastle::Crypto::Modes::____Org__BouncyCastle__Crypto__Modes__EaxBlockCipher__Tag::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr ::Org::BouncyCastle::Crypto::Modes::____Org__BouncyCastle__Crypto__Modes__EaxBlockCipher__Tag  ::Org::BouncyCastle::Crypto::Modes::____Org__BouncyCastle__Crypto__Modes__EaxBlockCipher__Tag::N{0u};
constexpr ::Org::BouncyCastle::Crypto::Modes::____Org__BouncyCastle__Crypto__Modes__EaxBlockCipher__Tag  ::Org::BouncyCastle::Crypto::Modes::____Org__BouncyCastle__Crypto__Modes__EaxBlockCipher__Tag::H{1u};
constexpr ::Org::BouncyCastle::Crypto::Modes::____Org__BouncyCastle__Crypto__Modes__EaxBlockCipher__Tag  ::Org::BouncyCastle::Crypto::Modes::____Org__BouncyCastle__Crypto__Modes__EaxBlockCipher__Tag::C{2u};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)(::Org::BouncyCastle::Crypto::IBlockCipher)>(&::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::_ctor)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0xe8fc38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IBlockCipher>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher.get_AlgorithmName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::get_AlgorithmName)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xe8fe84;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher.GetUnderlyingCipher
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IBlockCipher (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::GetUnderlyingCipher)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe8ff58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher.GetBlockSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::GetBlockSize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xe8ff60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters)>(&::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::Init)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0xe8ff84;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher.InitCipher
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::InitCipher)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xe90414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                            "InitCipher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher.CalculateMac
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::CalculateMac)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xe905ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                            "CalculateMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe90704;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)(bool)>(&::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::Reset)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xe9070c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher.ProcessAadByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::ProcessAadByte)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xe90904;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher.ProcessAadBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::ProcessAadBytes)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xe90a04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher.ProcessByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)(uint8_t, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::ProcessByte)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xe90b1c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher.ProcessBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::ProcessBytes)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xe90db8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher.DoFinal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)(::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::DoFinal)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0xe90e4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher.GetMac
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::GetMac)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xe91230;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher.GetUpdateOutputSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::GetUpdateOutputSize)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xe912a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher.GetOutputSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::GetOutputSize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xe912d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)(uint8_t, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::Process)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0xe90b5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher.VerifyMac
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::*)(::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::VerifyMac)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xe9119c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                            "VerifyMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher
constexpr  ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::operator ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher() const noexcept {
return ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::Modes::IAeadCipher
constexpr  ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::operator ::Org::BouncyCastle::Crypto::Modes::IAeadCipher() const noexcept {
return ::Org::BouncyCastle::Crypto::Modes::IAeadCipher(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__set_cipher(::Org::BouncyCastle::Crypto::Modes::SicBlockCipher value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Modes::SicBlockCipher, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Modes::SicBlockCipher>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Modes::SicBlockCipher ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__get_cipher() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Modes::SicBlockCipher, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__set_forEncryption(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__get_forEncryption() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__set_blockSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__get_blockSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__set_mac(::Org::BouncyCastle::Crypto::IMac value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::IMac, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::IMac>(value));
}
constexpr ::Org::BouncyCastle::Crypto::IMac ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__get_mac() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::IMac, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__set_nonceMac(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__get_nonceMac() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__set_associatedTextMac(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__get_associatedTextMac() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__set_macBlock(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__get_macBlock() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__set_macSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__get_macSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__set_bufBlock(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__get_bufBlock() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__set_bufOff(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__get_bufOff() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__set_cipherInitialized(bool value)  {
::cordl_internals::setInstanceField<bool, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__get_cipherInitialized() const {
return ::cordl_internals::getInstanceField<bool, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__set_initialAssociatedText(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::__get_initialAssociatedText() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "cipher", ty: "::Org::BouncyCastle::Crypto::IBlockCipher", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::EaxBlockCipher(::Org::BouncyCastle::Crypto::IBlockCipher cipher)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<EaxBlockCipher>(cipher))) {}
 void ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::_ctor(::Org::BouncyCastle::Crypto::IBlockCipher cipher)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IBlockCipher>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cipher);
}
 ::StringW ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::get_AlgorithmName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                            "get_AlgorithmName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Crypto::IBlockCipher ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::GetUnderlyingCipher()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                            "GetUnderlyingCipher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBlockCipher, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::GetBlockSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                            "GetBlockSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, forEncryption, parameters);
}
 void ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::InitCipher()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                            "InitCipher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::CalculateMac()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                            "CalculateMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::Reset(bool clearMac)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, clearMac);
}
 void ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::ProcessAadByte(uint8_t input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                            "ProcessAadByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input);
}
 void ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::ProcessAadBytes(::ArrayW<uint8_t> inBytes, int32_t inOff, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                            "ProcessAadBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inBytes, inOff, len);
}
 int32_t ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::ProcessByte(uint8_t input, ::ArrayW<uint8_t> outBytes, int32_t outOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                            "ProcessByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, input, outBytes, outOff);
}
 int32_t ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::ProcessBytes(::ArrayW<uint8_t> inBytes, int32_t inOff, int32_t len, ::ArrayW<uint8_t> outBytes, int32_t outOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                            "ProcessBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, inBytes, inOff, len, outBytes, outOff);
}
 int32_t ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::DoFinal(::ArrayW<uint8_t> outBytes, int32_t outOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                            "DoFinal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, outBytes, outOff);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::GetMac()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                            "GetMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::GetUpdateOutputSize(int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                            "GetUpdateOutputSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, len);
}
 int32_t ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::GetOutputSize(int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                            "GetOutputSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, len);
}
 int32_t ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::Process(uint8_t b, ::ArrayW<uint8_t> outBytes, int32_t outOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, b, outBytes, outOff);
}
 bool ::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher::VerifyMac(::ArrayW<uint8_t> mac, int32_t off)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::EaxBlockCipher>::get(),
                            "VerifyMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, mac, off);
}
} // end anonymous namespace
