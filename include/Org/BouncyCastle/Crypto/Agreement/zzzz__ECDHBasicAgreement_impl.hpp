#pragma once
namespace {
#include "Org/BouncyCastle/Crypto/Agreement/zzzz__ECDHBasicAgreement_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBasicAgreement_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECPrivateKeyParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::*)(::Org::BouncyCastle::Crypto::ICipherParameters)>(&::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::Init)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x118f2b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement.GetFieldSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::*)()>(&::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::GetFieldSize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x118f3a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement.CalculateAgreement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger (::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::*)(::Org::BouncyCastle::Crypto::ICipherParameters)>(&::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::CalculateAgreement)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x118f3e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::*)()>(&::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x118f650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IBasicAgreement
constexpr  ::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::operator ::Org::BouncyCastle::Crypto::IBasicAgreement() const noexcept {
return ::Org::BouncyCastle::Crypto::IBasicAgreement(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::__set_privKey(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters ::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::__get_privKey() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::Init(::Org::BouncyCastle::Crypto::ICipherParameters parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parameters);
}
 int32_t ::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::GetFieldSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement>::get(),
                            "GetFieldSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Math::BigInteger ::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::CalculateAgreement(::Org::BouncyCastle::Crypto::ICipherParameters pubKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement>::get(),
                            "CalculateAgreement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method, pubKey);
}
// Ctor Parameters []
 ::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::ECDHBasicAgreement()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ECDHBasicAgreement>())) {}
 void ::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
