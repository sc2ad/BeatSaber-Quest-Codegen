#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Org/BouncyCastle/Security/zzzz__DigestUtilities_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::BLAKE2B_160{0};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::BLAKE2B_256{1};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::BLAKE2B_384{2};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::BLAKE2B_512{3};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::BLAKE2S_128{4};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::BLAKE2S_160{5};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::BLAKE2S_224{6};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::BLAKE2S_256{7};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::DSTU7564_256{8};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::DSTU7564_384{9};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::DSTU7564_512{10};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::GOST3411{11};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::GOST3411_2012_256{12};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::GOST3411_2012_512{13};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::KECCAK_224{14};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::KECCAK_256{15};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::KECCAK_288{16};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::KECCAK_384{17};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::KECCAK_512{18};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::MD2{19};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::MD4{20};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::MD5{21};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::NONE{22};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::RIPEMD128{23};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::RIPEMD160{24};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::RIPEMD256{25};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::RIPEMD320{26};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::SHA_1{27};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::SHA_224{28};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::SHA_256{29};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::SHA_384{30};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::SHA_512{31};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::SHA_512_224{32};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::SHA_512_256{33};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::SHA3_224{34};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::SHA3_256{35};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::SHA3_384{36};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::SHA3_512{37};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::SHAKE128{38};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::SHAKE256{39};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::SM3{40};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::TIGER{41};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm::WHIRLPOOL{42};
//  Writing Method size for method: Org::BouncyCastle::Security::DigestUtilities._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Security::DigestUtilities::*)()>(&Org::BouncyCastle::Security::DigestUtilities::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x109807c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::DigestUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::DigestUtilities.GetObjectIdentifier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerObjectIdentifier (*)(::StringW)>(&Org::BouncyCastle::Security::DigestUtilities::GetObjectIdentifier)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x109bac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::DigestUtilities>::get(),
                            "GetObjectIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::DigestUtilities.get_Algorithms
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ICollection (*)()>(&Org::BouncyCastle::Security::DigestUtilities::get_Algorithms)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x109bd20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::DigestUtilities>::get(),
                            "get_Algorithms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::DigestUtilities.GetDigest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::IDigest (*)(Org::BouncyCastle::Asn1::DerObjectIdentifier)>(&Org::BouncyCastle::Security::DigestUtilities::GetDigest)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x109bdec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::DigestUtilities>::get(),
                            "GetDigest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::DigestUtilities.GetDigest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::IDigest (*)(::StringW)>(&Org::BouncyCastle::Security::DigestUtilities::GetDigest)> {
  constexpr static std::size_t size = 0xc04;
  constexpr static std::size_t addrs = 0x109be4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::DigestUtilities>::get(),
                            "GetDigest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::DigestUtilities.GetAlgorithmName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(Org::BouncyCastle::Asn1::DerObjectIdentifier)>(&Org::BouncyCastle::Security::DigestUtilities::GetAlgorithmName)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x109ca50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::DigestUtilities>::get(),
                            "GetAlgorithmName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::DigestUtilities.CalculateDigest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(Org::BouncyCastle::Asn1::DerObjectIdentifier, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Security::DigestUtilities::CalculateDigest)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x109cb58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::DigestUtilities>::get(),
                            "CalculateDigest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::DigestUtilities.CalculateDigest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::StringW, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Security::DigestUtilities::CalculateDigest)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x109cbc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::DigestUtilities>::get(),
                            "CalculateDigest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::DigestUtilities.DoFinal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(Org::BouncyCastle::Crypto::IDigest)>(&Org::BouncyCastle::Security::DigestUtilities::DoFinal)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x109ccb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::DigestUtilities>::get(),
                            "DoFinal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::DigestUtilities.DoFinal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(Org::BouncyCastle::Crypto::IDigest, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Security::DigestUtilities::DoFinal)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x109cdec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::DigestUtilities>::get(),
                            "DoFinal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Security::DigestUtilities::__set_algorithms(System::Collections::IDictionary value)  {
::cordl_internals::setStaticField<System::Collections::IDictionary, "algorithms", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::DigestUtilities>::get>(std::forward<System::Collections::IDictionary>(value));
}
 System::Collections::IDictionary Org::BouncyCastle::Security::DigestUtilities::__get_algorithms()  {
return ::cordl_internals::getStaticField<System::Collections::IDictionary, "algorithms", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::DigestUtilities>::get>();
}
 void Org::BouncyCastle::Security::DigestUtilities::__set_oids(System::Collections::IDictionary value)  {
::cordl_internals::setStaticField<System::Collections::IDictionary, "oids", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::DigestUtilities>::get>(std::forward<System::Collections::IDictionary>(value));
}
 System::Collections::IDictionary Org::BouncyCastle::Security::DigestUtilities::__get_oids()  {
return ::cordl_internals::getStaticField<System::Collections::IDictionary, "oids", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::DigestUtilities>::get>();
}
// Ctor Parameters []
 Org::BouncyCastle::Security::DigestUtilities::DigestUtilities()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DigestUtilities>())) {}
 void Org::BouncyCastle::Security::DigestUtilities::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::DigestUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::DerObjectIdentifier Org::BouncyCastle::Security::DigestUtilities::GetObjectIdentifier(::StringW mechanism)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::DigestUtilities>::get(),
                            "GetObjectIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::DerObjectIdentifier, false>(nullptr, ___internal_method, mechanism);
}
 System::Collections::ICollection Org::BouncyCastle::Security::DigestUtilities::get_Algorithms()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::DigestUtilities>::get(),
                            "get_Algorithms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::ICollection, false>(nullptr, ___internal_method);
}
 Org::BouncyCastle::Crypto::IDigest Org::BouncyCastle::Security::DigestUtilities::GetDigest(Org::BouncyCastle::Asn1::DerObjectIdentifier id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::DigestUtilities>::get(),
                            "GetDigest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::IDigest, false>(nullptr, ___internal_method, id);
}
 Org::BouncyCastle::Crypto::IDigest Org::BouncyCastle::Security::DigestUtilities::GetDigest(::StringW algorithm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::DigestUtilities>::get(),
                            "GetDigest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::IDigest, false>(nullptr, ___internal_method, algorithm);
}
 ::StringW Org::BouncyCastle::Security::DigestUtilities::GetAlgorithmName(Org::BouncyCastle::Asn1::DerObjectIdentifier oid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::DigestUtilities>::get(),
                            "GetAlgorithmName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, oid);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Security::DigestUtilities::CalculateDigest(Org::BouncyCastle::Asn1::DerObjectIdentifier id, ::ArrayW<uint8_t> input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::DigestUtilities>::get(),
                            "CalculateDigest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, id, input);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Security::DigestUtilities::CalculateDigest(::StringW algorithm, ::ArrayW<uint8_t> input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::DigestUtilities>::get(),
                            "CalculateDigest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, algorithm, input);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Security::DigestUtilities::DoFinal(Org::BouncyCastle::Crypto::IDigest digest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::DigestUtilities>::get(),
                            "DoFinal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, digest);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Security::DigestUtilities::DoFinal(Org::BouncyCastle::Crypto::IDigest digest, ::ArrayW<uint8_t> input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::DigestUtilities>::get(),
                            "DoFinal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, digest, input);
}
