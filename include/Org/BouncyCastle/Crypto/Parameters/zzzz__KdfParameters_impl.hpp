#pragma once
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KdfParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationParameters_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::KdfParameters._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Parameters::KdfParameters::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Parameters::KdfParameters::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xeaa6b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::KdfParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::KdfParameters.GetSharedSecret
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Parameters::KdfParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::KdfParameters::GetSharedSecret)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xeaa6e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::KdfParameters>::get(),
                            "GetSharedSecret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::KdfParameters.GetIV
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Parameters::KdfParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::KdfParameters::GetIV)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xeaa6e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::KdfParameters>::get(),
                            "GetIV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::IDerivationParameters
constexpr  Org::BouncyCastle::Crypto::Parameters::KdfParameters::operator Org::BouncyCastle::Crypto::IDerivationParameters() const noexcept {
return Org::BouncyCastle::Crypto::IDerivationParameters(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Parameters::KdfParameters::__set_iv(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Parameters::KdfParameters::__get_iv() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Parameters::KdfParameters::__set_shared(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Parameters::KdfParameters::__get_shared() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "shared", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "iv", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Parameters::KdfParameters::KdfParameters(::ArrayW<uint8_t> shared, ::ArrayW<uint8_t> iv)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<KdfParameters>(shared, iv))) {}
 void Org::BouncyCastle::Crypto::Parameters::KdfParameters::_ctor(::ArrayW<uint8_t> shared, ::ArrayW<uint8_t> iv)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::KdfParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shared, iv);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Parameters::KdfParameters::GetSharedSecret()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::KdfParameters>::get(),
                            "GetSharedSecret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Parameters::KdfParameters::GetIV()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::KdfParameters>::get(),
                            "GetIV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
