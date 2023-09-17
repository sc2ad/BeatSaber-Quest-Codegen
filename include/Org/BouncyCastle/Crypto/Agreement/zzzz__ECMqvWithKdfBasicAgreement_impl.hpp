#pragma once
#include "Org/BouncyCastle/Crypto/Agreement/zzzz__ECMqvBasicAgreement_impl.hpp"
namespace {
#include "Org/BouncyCastle/Crypto/Agreement/zzzz__ECMqvWithKdfBasicAgreement_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationFunction_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement::*)(::StringW, ::Org::BouncyCastle::Crypto::IDerivationFunction)>(&::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x1190280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDerivationFunction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement.CalculateAgreement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger (::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement::*)(::Org::BouncyCastle::Crypto::ICipherParameters)>(&::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement::CalculateAgreement)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x1190324;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement.BigIntToBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement::*)(::Org::BouncyCastle::Math::BigInteger)>(&::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement::BigIntToBytes)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x1190590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement>::get(),
                            "BigIntToBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement::__set_algorithm(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement::__get_algorithm() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement::__set_kdf(::Org::BouncyCastle::Crypto::IDerivationFunction value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::IDerivationFunction, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::IDerivationFunction>(value));
}
constexpr ::Org::BouncyCastle::Crypto::IDerivationFunction ::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement::__get_kdf() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::IDerivationFunction, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "algorithm", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "kdf", ty: "::Org::BouncyCastle::Crypto::IDerivationFunction", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement::ECMqvWithKdfBasicAgreement(::StringW algorithm, ::Org::BouncyCastle::Crypto::IDerivationFunction kdf)  : ::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement(THROW_UNLESS(::il2cpp_utils::New<ECMqvWithKdfBasicAgreement>(algorithm, kdf))) {}
 void ::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement::_ctor(::StringW algorithm, ::Org::BouncyCastle::Crypto::IDerivationFunction kdf)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDerivationFunction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, algorithm, kdf);
}
 ::Org::BouncyCastle::Math::BigInteger ::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement::CalculateAgreement(::Org::BouncyCastle::Crypto::ICipherParameters pubKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement>::get(),
                            "CalculateAgreement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method, pubKey);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement::BigIntToBytes(::Org::BouncyCastle::Math::BigInteger r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement>::get(),
                            "BigIntToBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, r);
}
} // end anonymous namespace
