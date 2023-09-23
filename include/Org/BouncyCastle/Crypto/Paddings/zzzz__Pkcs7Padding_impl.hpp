#pragma once
#include "Org/BouncyCastle/Crypto/Paddings/zzzz__Pkcs7Padding_def.hpp"
#include "Org/BouncyCastle/Crypto/Paddings/zzzz__IBlockCipherPadding_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::*)(Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::Init)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xea1f70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding.get_PaddingName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::*)()>(&Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::get_PaddingName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xea1f74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding>::get(),
                            "get_PaddingName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding.AddPadding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::*)(::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::AddPadding)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xea1fb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding>::get(),
                            "AddPadding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding.PadCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::PadCount)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xea2000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding>::get(),
                            "PadCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::*)()>(&Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xea1480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding
constexpr  Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::operator Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding() const noexcept {
return Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding(::bs_hook::Il2CppWrapperType::instance);
}
 void Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::Init(Org::BouncyCastle::Security::SecureRandom random)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, random);
}
 ::StringW Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::get_PaddingName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding>::get(),
                            "get_PaddingName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::AddPadding(::ArrayW<uint8_t> input, int32_t inOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding>::get(),
                            "AddPadding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, input, inOff);
}
 int32_t Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::PadCount(::ArrayW<uint8_t> input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding>::get(),
                            "PadCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, input);
}
// Ctor Parameters []
 Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::Pkcs7Padding()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Pkcs7Padding>())) {}
 void Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
