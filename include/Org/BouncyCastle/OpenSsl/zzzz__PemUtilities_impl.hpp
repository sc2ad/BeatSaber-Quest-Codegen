#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Org/BouncyCastle/OpenSsl/zzzz__PemUtilities_def.hpp"
#include "Org/BouncyCastle/OpenSsl/zzzz__PemUtilities_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg::Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg  Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg::AES_128{0};
constexpr Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg  Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg::AES_192{1};
constexpr Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg  Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg::AES_256{2};
constexpr Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg  Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg::BF{3};
constexpr Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg  Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg::DES{4};
constexpr Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg  Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg::DES_EDE{5};
constexpr Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg  Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg::DES_EDE3{6};
constexpr Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg  Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg::RC2{7};
constexpr Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg  Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg::RC2_40{8};
constexpr Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg  Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg::RC2_64{9};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemMode::Org__BouncyCastle__OpenSsl__PemUtilities__PemMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemMode  Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemMode::CBC{0};
constexpr Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemMode  Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemMode::CFB{1};
constexpr Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemMode  Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemMode::ECB{2};
constexpr Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemMode  Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemMode::OFB{3};
//  Writing Method size for method: Org::BouncyCastle::OpenSsl::PemUtilities.ParseDekAlgName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ByRef<Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg>, ByRef<Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemMode>)>(&Org::BouncyCastle::OpenSsl::PemUtilities::ParseDekAlgName)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x1047a3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::OpenSsl::PemUtilities>::get(),
                            "ParseDekAlgName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemMode>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::OpenSsl::PemUtilities.Crypt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(bool, ::ArrayW<uint8_t>, ::ArrayW<char16_t>, ::StringW, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::OpenSsl::PemUtilities::Crypt)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x1044de8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::OpenSsl::PemUtilities>::get(),
                            "Crypt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::OpenSsl::PemUtilities.GetCipherParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::ICipherParameters (*)(::ArrayW<char16_t>, Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::OpenSsl::PemUtilities::GetCipherParameters)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1047d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::OpenSsl::PemUtilities>::get(),
                            "GetCipherParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::OpenSsl::PemUtilities._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::OpenSsl::PemUtilities::*)()>(&Org::BouncyCastle::OpenSsl::PemUtilities::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1047ed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::OpenSsl::PemUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::OpenSsl::PemUtilities::ParseDekAlgName(::StringW dekAlgName, ByRef<Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg> baseAlg, ByRef<Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemMode> mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::OpenSsl::PemUtilities>::get(),
                            "ParseDekAlgName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemMode>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dekAlgName, baseAlg, mode);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::OpenSsl::PemUtilities::Crypt(bool encrypt, ::ArrayW<uint8_t> bytes, ::ArrayW<char16_t> password, ::StringW dekAlgName, ::ArrayW<uint8_t> iv)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::OpenSsl::PemUtilities>::get(),
                            "Crypt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, encrypt, bytes, password, dekAlgName, iv);
}
 Org::BouncyCastle::Crypto::ICipherParameters Org::BouncyCastle::OpenSsl::PemUtilities::GetCipherParameters(::ArrayW<char16_t> password, Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg baseAlg, ::ArrayW<uint8_t> salt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::OpenSsl::PemUtilities>::get(),
                            "GetCipherParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::OpenSsl::Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::ICipherParameters, false>(nullptr, ___internal_method, password, baseAlg, salt);
}
 Org::BouncyCastle::OpenSsl::PemUtilities Org::BouncyCastle::OpenSsl::PemUtilities::New_ctor()  {
Org::BouncyCastle::OpenSsl::PemUtilities o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::OpenSsl::PemUtilities>())};
return o;
}
 void Org::BouncyCastle::OpenSsl::PemUtilities::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::OpenSsl::PemUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
