#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Org/BouncyCastle/Security/zzzz__WrapperUtilities_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IWrapper_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBufferedCipher_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__WrapperUtilities_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm::Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm::AESWRAP{0};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm::CAMELLIAWRAP{1};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm::DESEDEWRAP{2};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm::RC2WRAP{3};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm::SEEDWRAP{4};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm::DESEDERFC3211WRAP{5};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm::AESRFC3211WRAP{6};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__WrapAlgorithm::CAMELLIARFC3211WRAP{7};
//  Writing Method size for method: Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper::*)(Org::BouncyCastle::Crypto::IBufferedCipher)>(&Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x10c28ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IBufferedCipher>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper.get_AlgorithmName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper::*)()>(&Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper::get_AlgorithmName)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x10c2a1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper>::get(),
                            "get_AlgorithmName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters)>(&Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper::Init)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x10c2abc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper.Wrap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper::Wrap)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x10c2b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper>::get(),
                            "Wrap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper.Unwrap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper::Unwrap)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x10c2c98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper>::get(),
                            "Unwrap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::IWrapper
constexpr  Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper::operator Org::BouncyCastle::Crypto::IWrapper() const noexcept {
return Org::BouncyCastle::Crypto::IWrapper(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper::__set_cipher(Org::BouncyCastle::Crypto::IBufferedCipher value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::IBufferedCipher, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::IBufferedCipher>(value));
}
constexpr Org::BouncyCastle::Crypto::IBufferedCipher Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper::__get_cipher() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::IBufferedCipher, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper::__set_forWrapping(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper::__get_forWrapping() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper::New_ctor(Org::BouncyCastle::Crypto::IBufferedCipher cipher)  {
Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper>(cipher))};
return o;
}
 void Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper::_ctor(Org::BouncyCastle::Crypto::IBufferedCipher cipher)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IBufferedCipher>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cipher);
}
 ::StringW Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper::get_AlgorithmName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper>::get(),
                            "get_AlgorithmName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper::Init(bool forWrapping, Org::BouncyCastle::Crypto::ICipherParameters parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, forWrapping, parameters);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper::Wrap(::ArrayW<uint8_t> input, int32_t inOff, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper>::get(),
                            "Wrap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, input, inOff, length);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper::Unwrap(::ArrayW<uint8_t> input, int32_t inOff, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::Org__BouncyCastle__Security__WrapperUtilities__BufferedCipherWrapper>::get(),
                            "Unwrap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, input, inOff, length);
}
//  Writing Method size for method: Org::BouncyCastle::Security::WrapperUtilities._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Security::WrapperUtilities::*)()>(&Org::BouncyCastle::Security::WrapperUtilities::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10c1b14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::WrapperUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::WrapperUtilities.GetWrapper
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::IWrapper (*)(Org::BouncyCastle::Asn1::DerObjectIdentifier)>(&Org::BouncyCastle::Security::WrapperUtilities::GetWrapper)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x10c22d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::WrapperUtilities>::get(),
                            "GetWrapper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::WrapperUtilities.GetWrapper
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::IWrapper (*)(::StringW)>(&Org::BouncyCastle::Security::WrapperUtilities::GetWrapper)> {
  constexpr static std::size_t size = 0x5b8;
  constexpr static std::size_t addrs = 0x10c2334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::WrapperUtilities>::get(),
                            "GetWrapper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::WrapperUtilities.GetAlgorithmName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(Org::BouncyCastle::Asn1::DerObjectIdentifier)>(&Org::BouncyCastle::Security::WrapperUtilities::GetAlgorithmName)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x10c2914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::WrapperUtilities>::get(),
                            "GetAlgorithmName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Security::WrapperUtilities::__set_algorithms(System::Collections::IDictionary value)  {
::cordl_internals::setStaticField<System::Collections::IDictionary, "algorithms", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::WrapperUtilities>::get>(std::forward<System::Collections::IDictionary>(value));
}
 System::Collections::IDictionary Org::BouncyCastle::Security::WrapperUtilities::__get_algorithms()  {
return ::cordl_internals::getStaticField<System::Collections::IDictionary, "algorithms", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::WrapperUtilities>::get>();
}
 Org::BouncyCastle::Security::WrapperUtilities Org::BouncyCastle::Security::WrapperUtilities::New_ctor()  {
Org::BouncyCastle::Security::WrapperUtilities o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Security::WrapperUtilities>())};
return o;
}
 void Org::BouncyCastle::Security::WrapperUtilities::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::WrapperUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Crypto::IWrapper Org::BouncyCastle::Security::WrapperUtilities::GetWrapper(Org::BouncyCastle::Asn1::DerObjectIdentifier oid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::WrapperUtilities>::get(),
                            "GetWrapper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::IWrapper, false>(nullptr, ___internal_method, oid);
}
 Org::BouncyCastle::Crypto::IWrapper Org::BouncyCastle::Security::WrapperUtilities::GetWrapper(::StringW algorithm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::WrapperUtilities>::get(),
                            "GetWrapper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::IWrapper, false>(nullptr, ___internal_method, algorithm);
}
 ::StringW Org::BouncyCastle::Security::WrapperUtilities::GetAlgorithmName(Org::BouncyCastle::Asn1::DerObjectIdentifier oid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::WrapperUtilities>::get(),
                            "GetAlgorithmName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, oid);
}
