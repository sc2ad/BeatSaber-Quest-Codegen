#pragma once
namespace {
#include "Org/BouncyCastle/Crypto/Modes/zzzz__CcmBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__IAeadCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__IAeadBlockCipher_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::*)(::Org::BouncyCastle::Crypto::IBlockCipher)>(&::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::_ctor)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0xe893c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IBlockCipher>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher.GetUnderlyingCipher
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IBlockCipher (::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::GetUnderlyingCipher)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe895f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters)>(&::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::Init)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0xe895f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher.get_AlgorithmName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::get_AlgorithmName)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xe89840;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher.GetBlockSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::GetBlockSize)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xe89900;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher.ProcessAadByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::ProcessAadByte)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xe899a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher.ProcessAadBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::ProcessAadBytes)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xe899c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher.ProcessByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::*)(uint8_t, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::ProcessByte)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xe899ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher.ProcessBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::ProcessBytes)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xe89a18;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher.DoFinal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::*)(::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::DoFinal)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xe89ab8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::Reset)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xe89b5c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher.GetMac
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::GetMac)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xe89c38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher.GetUpdateOutputSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::GetUpdateOutputSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe89ca0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher.GetOutputSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::GetOutputSize)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xe89ca8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher.ProcessPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::ProcessPacket)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xe89cfc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher.ProcessPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::ProcessPacket)> {
  constexpr static std::size_t size = 0x8cc;
  constexpr static std::size_t addrs = 0xe89df8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher.CalculateMac
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::CalculateMac)> {
  constexpr static std::size_t size = 0x88c;
  constexpr static std::size_t addrs = 0xe8a6c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                            "CalculateMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher.GetMacSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::*)(bool, int32_t)>(&::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::GetMacSize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xe897d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                            "GetMacSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher.GetAssociatedTextLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::GetAssociatedTextLength)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xe8af68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                            "GetAssociatedTextLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher.HasAssociatedText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::HasAssociatedText)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xe8af50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                            "HasAssociatedText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher
constexpr  ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::operator ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher() const noexcept {
return ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::Modes::IAeadCipher
constexpr  ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::operator ::Org::BouncyCastle::Crypto::Modes::IAeadCipher() const noexcept {
return ::Org::BouncyCastle::Crypto::Modes::IAeadCipher(::bs_hook::Il2CppWrapperType::instance);
}
 void ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::__set_BlockSize(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "BlockSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get>(std::forward<int32_t>(value));
}
 int32_t ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::__get_BlockSize()  {
return ::cordl_internals::getStaticField<int32_t, "BlockSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get>();
}
constexpr void ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::__set_cipher(::Org::BouncyCastle::Crypto::IBlockCipher value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::IBlockCipher, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::IBlockCipher>(value));
}
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::__get_cipher() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::IBlockCipher, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::__set_macBlock(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::__get_macBlock() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::__set_forEncryption(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::__get_forEncryption() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::__set_nonce(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::__get_nonce() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::__set_initialAssociatedText(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::__get_initialAssociatedText() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::__set_macSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::__get_macSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::__set_keyParam(::Org::BouncyCastle::Crypto::ICipherParameters value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::ICipherParameters, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::ICipherParameters>(value));
}
constexpr ::Org::BouncyCastle::Crypto::ICipherParameters ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::__get_keyParam() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::ICipherParameters, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::__set_associatedText(::System::IO::MemoryStream value)  {
::cordl_internals::setInstanceField<::System::IO::MemoryStream, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::IO::MemoryStream>(value));
}
constexpr ::System::IO::MemoryStream ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::__get_associatedText() const {
return ::cordl_internals::getInstanceField<::System::IO::MemoryStream, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::__set_data(::System::IO::MemoryStream value)  {
::cordl_internals::setInstanceField<::System::IO::MemoryStream, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::IO::MemoryStream>(value));
}
constexpr ::System::IO::MemoryStream ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::__get_data() const {
return ::cordl_internals::getInstanceField<::System::IO::MemoryStream, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "cipher", ty: "::Org::BouncyCastle::Crypto::IBlockCipher", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::CcmBlockCipher(::Org::BouncyCastle::Crypto::IBlockCipher cipher)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CcmBlockCipher>(cipher))) {}
 void ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::_ctor(::Org::BouncyCastle::Crypto::IBlockCipher cipher)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IBlockCipher>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cipher);
}
 ::Org::BouncyCastle::Crypto::IBlockCipher ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::GetUnderlyingCipher()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                            "GetUnderlyingCipher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBlockCipher, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, forEncryption, parameters);
}
 ::StringW ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::get_AlgorithmName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                            "get_AlgorithmName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::GetBlockSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                            "GetBlockSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::ProcessAadByte(uint8_t input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                            "ProcessAadByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input);
}
 void ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::ProcessAadBytes(::ArrayW<uint8_t> inBytes, int32_t inOff, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                            "ProcessAadBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inBytes, inOff, len);
}
 int32_t ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::ProcessByte(uint8_t input, ::ArrayW<uint8_t> outBytes, int32_t outOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                            "ProcessByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, input, outBytes, outOff);
}
 int32_t ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::ProcessBytes(::ArrayW<uint8_t> inBytes, int32_t inOff, int32_t inLen, ::ArrayW<uint8_t> outBytes, int32_t outOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                            "ProcessBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, inBytes, inOff, inLen, outBytes, outOff);
}
 int32_t ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::DoFinal(::ArrayW<uint8_t> outBytes, int32_t outOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                            "DoFinal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, outBytes, outOff);
}
 void ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::GetMac()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                            "GetMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::GetUpdateOutputSize(int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                            "GetUpdateOutputSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, len);
}
 int32_t ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::GetOutputSize(int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                            "GetOutputSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, len);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::ProcessPacket(::ArrayW<uint8_t> input, int32_t inOff, int32_t inLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                            "ProcessPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, input, inOff, inLen);
}
 int32_t ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::ProcessPacket(::ArrayW<uint8_t> input, int32_t inOff, int32_t inLen, ::ArrayW<uint8_t> output, int32_t outOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                            "ProcessPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, input, inOff, inLen, output, outOff);
}
 int32_t ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::CalculateMac(::ArrayW<uint8_t> data, int32_t dataOff, int32_t dataLen, ::ArrayW<uint8_t> macBlock)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                            "CalculateMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, data, dataOff, dataLen, macBlock);
}
 int32_t ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::GetMacSize(bool forEncryption, int32_t requestedMacBits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                            "GetMacSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, forEncryption, requestedMacBits);
}
 int32_t ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::GetAssociatedTextLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                            "GetAssociatedTextLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher::HasAssociatedText()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher>::get(),
                            "HasAssociatedText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
