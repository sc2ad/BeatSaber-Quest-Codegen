#pragma once
#include "Org/BouncyCastle/Crypto/Paddings/zzzz__ISO7816d4Padding_def.hpp"
#include "Org/BouncyCastle/Crypto/Paddings/zzzz__IBlockCipherPadding_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding::*)(Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding::Init)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xea11bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding.get_PaddingName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding::*)()>(&Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding::get_PaddingName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xea11c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding>::get(),
                            "get_PaddingName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding.AddPadding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding::*)(::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding::AddPadding)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xea1200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding>::get(),
                            "AddPadding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding.PadCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding::PadCount)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xea1264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding>::get(),
                            "PadCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding::*)()>(&Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xea1314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding
constexpr  Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding::operator Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding() const noexcept {
return Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding(::bs_hook::Il2CppWrapperType::instance);
}
 void Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding::Init(Org::BouncyCastle::Security::SecureRandom random)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, random);
}
 ::StringW Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding::get_PaddingName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding>::get(),
                            "get_PaddingName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding::AddPadding(::ArrayW<uint8_t> input, int32_t inOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding>::get(),
                            "AddPadding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, input, inOff);
}
 int32_t Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding::PadCount(::ArrayW<uint8_t> input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding>::get(),
                            "PadCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, input);
}
// Ctor Parameters []
 Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding::ISO7816d4Padding()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ISO7816d4Padding>())) {}
 void Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
