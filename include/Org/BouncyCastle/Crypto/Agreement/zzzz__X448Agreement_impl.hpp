#pragma once
#include "Org/BouncyCastle/Crypto/Agreement/zzzz__X448Agreement_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IRawAgreement_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__X448PrivateKeyParameters_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Agreement::X448Agreement.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Agreement::X448Agreement::*)(Org::BouncyCastle::Crypto::ICipherParameters)>(&Org::BouncyCastle::Crypto::Agreement::X448Agreement::Init)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x119219c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::X448Agreement>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Agreement::X448Agreement.get_AgreementSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Crypto::Agreement::X448Agreement::*)()>(&Org::BouncyCastle::Crypto::Agreement::X448Agreement::get_AgreementSize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1192210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::X448Agreement>::get(),
                            "get_AgreementSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Agreement::X448Agreement.CalculateAgreement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Agreement::X448Agreement::*)(Org::BouncyCastle::Crypto::ICipherParameters, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Crypto::Agreement::X448Agreement::CalculateAgreement)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1192268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::X448Agreement>::get(),
                            "CalculateAgreement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Agreement::X448Agreement._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Agreement::X448Agreement::*)()>(&Org::BouncyCastle::Crypto::Agreement::X448Agreement::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11922f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::X448Agreement>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::IRawAgreement
constexpr  Org::BouncyCastle::Crypto::Agreement::X448Agreement::operator Org::BouncyCastle::Crypto::IRawAgreement() const noexcept {
return Org::BouncyCastle::Crypto::IRawAgreement(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Agreement::X448Agreement::__set_privateKey(Org::BouncyCastle::Crypto::Parameters::X448PrivateKeyParameters value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Parameters::X448PrivateKeyParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Parameters::X448PrivateKeyParameters>(value));
}
constexpr Org::BouncyCastle::Crypto::Parameters::X448PrivateKeyParameters Org::BouncyCastle::Crypto::Agreement::X448Agreement::__get_privateKey() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Parameters::X448PrivateKeyParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void Org::BouncyCastle::Crypto::Agreement::X448Agreement::Init(Org::BouncyCastle::Crypto::ICipherParameters parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::X448Agreement>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parameters);
}
 int32_t Org::BouncyCastle::Crypto::Agreement::X448Agreement::get_AgreementSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::X448Agreement>::get(),
                            "get_AgreementSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Agreement::X448Agreement::CalculateAgreement(Org::BouncyCastle::Crypto::ICipherParameters publicKey, ::ArrayW<uint8_t> buf, int32_t off)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::X448Agreement>::get(),
                            "CalculateAgreement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, publicKey, buf, off);
}
 Org::BouncyCastle::Crypto::Agreement::X448Agreement Org::BouncyCastle::Crypto::Agreement::X448Agreement::New_ctor()  {
Org::BouncyCastle::Crypto::Agreement::X448Agreement o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Agreement::X448Agreement>())};
return o;
}
 void Org::BouncyCastle::Crypto::Agreement::X448Agreement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::X448Agreement>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
