#pragma once
namespace {
#include "Org/BouncyCastle/Crypto/Agreement/Kdf/zzzz__ConcatenationKdfGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationFunction_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::*)(::Org::BouncyCastle::Crypto::IDigest)>(&::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x118b43c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::*)(::Org::BouncyCastle::Crypto::IDerivationParameters)>(&::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::Init)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x118b4f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator.get_Digest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IDigest (::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::*)()>(&::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::get_Digest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x118b5c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator.GenerateBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::GenerateBytes)> {
  constexpr static std::size_t size = 0x5d8;
  constexpr static std::size_t addrs = 0x118b5cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IDerivationFunction
constexpr  ::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::operator ::Org::BouncyCastle::Crypto::IDerivationFunction() const noexcept {
return ::Org::BouncyCastle::Crypto::IDerivationFunction(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::__set_mDigest(::Org::BouncyCastle::Crypto::IDigest value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::IDigest, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::IDigest>(value));
}
constexpr ::Org::BouncyCastle::Crypto::IDigest ::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::__get_mDigest() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::IDigest, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::__set_mShared(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::__get_mShared() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::__set_mOtherInfo(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::__get_mOtherInfo() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::__set_mHLen(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::__get_mHLen() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "digest", ty: "::Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::ConcatenationKdfGenerator(::Org::BouncyCastle::Crypto::IDigest digest)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ConcatenationKdfGenerator>(digest))) {}
 void ::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::_ctor(::Org::BouncyCastle::Crypto::IDigest digest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, digest);
}
 void ::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::Init(::Org::BouncyCastle::Crypto::IDerivationParameters param)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDerivationParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, param);
}
 ::Org::BouncyCastle::Crypto::IDigest ::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::get_Digest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator>::get(),
                            "get_Digest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IDigest, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::GenerateBytes(::ArrayW<uint8_t> outBytes, int32_t outOff, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator>::get(),
                            "GenerateBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, outBytes, outOff, len);
}
} // end anonymous namespace
