#pragma once
#include "Org/BouncyCastle/Crypto/Agreement/Kdf/zzzz__ECDHKekGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationFunction_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationParameters_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator::*)(Org::BouncyCastle::Crypto::IDigest)>(&Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x118c3c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator::*)(Org::BouncyCastle::Crypto::IDerivationParameters)>(&Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator::Init)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x118c43c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator.get_Digest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::IDigest (Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator::*)()>(&Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator::get_Digest)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x118c4d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator.GenerateBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator::GenerateBytes)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x118c578;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::IDerivationFunction
constexpr  Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator::operator Org::BouncyCastle::Crypto::IDerivationFunction() const noexcept {
return Org::BouncyCastle::Crypto::IDerivationFunction(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator::__set_kdf(Org::BouncyCastle::Crypto::IDerivationFunction value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::IDerivationFunction, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::IDerivationFunction>(value));
}
constexpr Org::BouncyCastle::Crypto::IDerivationFunction Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator::__get_kdf() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::IDerivationFunction, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator::__set_algorithm(Org::BouncyCastle::Asn1::DerObjectIdentifier value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::DerObjectIdentifier, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::DerObjectIdentifier>(value));
}
constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator::__get_algorithm() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::DerObjectIdentifier, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator::__set_keySize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator::__get_keySize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator::__set_z(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator::__get_z() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator::New_ctor(Org::BouncyCastle::Crypto::IDigest digest)  {
Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator>(digest))};
return o;
}
 void Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator::_ctor(Org::BouncyCastle::Crypto::IDigest digest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, digest);
}
 void Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator::Init(Org::BouncyCastle::Crypto::IDerivationParameters param)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDerivationParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, param);
}
 Org::BouncyCastle::Crypto::IDigest Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator::get_Digest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator>::get(),
                            "get_Digest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::IDigest, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator::GenerateBytes(::ArrayW<uint8_t> outBytes, int32_t outOff, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator>::get(),
                            "GenerateBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, outBytes, outOff, len);
}
