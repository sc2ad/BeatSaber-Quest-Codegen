#pragma once
#include "Org/BouncyCastle/Security/zzzz__PbeUtilities_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__PbeParametersGenerator_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Security::PbeUtilities._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Security::PbeUtilities::*)()>(&Org::BouncyCastle::Security::PbeUtilities::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10a8640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::PbeUtilities.MakePbeGenerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::PbeParametersGenerator (*)(::StringW, Org::BouncyCastle::Crypto::IDigest, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Security::PbeUtilities::MakePbeGenerator)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x10adc4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "MakePbeGenerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::PbeUtilities.GetObjectIdentifier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerObjectIdentifier (*)(::StringW)>(&Org::BouncyCastle::Security::PbeUtilities::GetObjectIdentifier)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x10ade94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "GetObjectIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::PbeUtilities.get_Algorithms
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ICollection (*)()>(&Org::BouncyCastle::Security::PbeUtilities::get_Algorithms)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x10ae09c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "get_Algorithms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::PbeUtilities.IsPkcs12
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&Org::BouncyCastle::Security::PbeUtilities::IsPkcs12)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x10ae168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "IsPkcs12",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::PbeUtilities.IsPkcs5Scheme1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&Org::BouncyCastle::Security::PbeUtilities::IsPkcs5Scheme1)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x10ae364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "IsPkcs5Scheme1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::PbeUtilities.IsPkcs5Scheme2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&Org::BouncyCastle::Security::PbeUtilities::IsPkcs5Scheme2)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x10ae560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "IsPkcs5Scheme2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::PbeUtilities.IsOpenSsl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&Org::BouncyCastle::Security::PbeUtilities::IsOpenSsl)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x10ae75c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "IsOpenSsl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::PbeUtilities.IsPbeAlgorithm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&Org::BouncyCastle::Security::PbeUtilities::IsPbeAlgorithm)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x10ae958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "IsPbeAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::PbeUtilities.GenerateAlgorithmParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Encodable (*)(Org::BouncyCastle::Asn1::DerObjectIdentifier, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Security::PbeUtilities::GenerateAlgorithmParameters)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x10aeb24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "GenerateAlgorithmParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::PbeUtilities.GenerateAlgorithmParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Encodable (*)(::StringW, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Security::PbeUtilities::GenerateAlgorithmParameters)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x10aeb9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "GenerateAlgorithmParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::PbeUtilities.GenerateAlgorithmParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Encodable (*)(Org::BouncyCastle::Asn1::DerObjectIdentifier, Org::BouncyCastle::Asn1::DerObjectIdentifier, ::ArrayW<uint8_t>, int32_t, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Security::PbeUtilities::GenerateAlgorithmParameters)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x10aecd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "GenerateAlgorithmParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::PbeUtilities.GenerateCipherParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::ICipherParameters (*)(Org::BouncyCastle::Asn1::DerObjectIdentifier, ::ArrayW<char16_t>, Org::BouncyCastle::Asn1::Asn1Encodable)>(&Org::BouncyCastle::Security::PbeUtilities::GenerateCipherParameters)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x10af094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "GenerateCipherParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Encodable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::PbeUtilities.GenerateCipherParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::ICipherParameters (*)(Org::BouncyCastle::Asn1::DerObjectIdentifier, ::ArrayW<char16_t>, bool, Org::BouncyCastle::Asn1::Asn1Encodable)>(&Org::BouncyCastle::Security::PbeUtilities::GenerateCipherParameters)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x10b0244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "GenerateCipherParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Encodable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::PbeUtilities.GenerateCipherParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::ICipherParameters (*)(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, ::ArrayW<char16_t>)>(&Org::BouncyCastle::Security::PbeUtilities::GenerateCipherParameters)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x10b02c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "GenerateCipherParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::PbeUtilities.GenerateCipherParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::ICipherParameters (*)(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, ::ArrayW<char16_t>, bool)>(&Org::BouncyCastle::Security::PbeUtilities::GenerateCipherParameters)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x10b0368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "GenerateCipherParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::PbeUtilities.GenerateCipherParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::ICipherParameters (*)(::StringW, ::ArrayW<char16_t>, Org::BouncyCastle::Asn1::Asn1Encodable)>(&Org::BouncyCastle::Security::PbeUtilities::GenerateCipherParameters)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x10b0410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "GenerateCipherParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Encodable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::PbeUtilities.GenerateCipherParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::ICipherParameters (*)(::StringW, ::ArrayW<char16_t>, bool, Org::BouncyCastle::Asn1::Asn1Encodable)>(&Org::BouncyCastle::Security::PbeUtilities::GenerateCipherParameters)> {
  constexpr static std::size_t size = 0x1134;
  constexpr static std::size_t addrs = 0x10af110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "GenerateCipherParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Encodable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::PbeUtilities.CreateEngine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(Org::BouncyCastle::Asn1::DerObjectIdentifier)>(&Org::BouncyCastle::Security::PbeUtilities::CreateEngine)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x10b0698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "CreateEngine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::PbeUtilities.CreateEngine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier)>(&Org::BouncyCastle::Security::PbeUtilities::CreateEngine)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x10b0bf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "CreateEngine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::PbeUtilities.CreateEngine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::StringW)>(&Org::BouncyCastle::Security::PbeUtilities::CreateEngine)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x10b06f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "CreateEngine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::PbeUtilities.GetEncodingName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(Org::BouncyCastle::Asn1::DerObjectIdentifier)>(&Org::BouncyCastle::Security::PbeUtilities::GetEncodingName)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x10b0d00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "GetEncodingName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::PbeUtilities.FixDesParity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::ICipherParameters (*)(::StringW, Org::BouncyCastle::Crypto::ICipherParameters)>(&Org::BouncyCastle::Security::PbeUtilities::FixDesParity)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x10b0480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "FixDesParity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Security::PbeUtilities::__set_algorithms(System::Collections::IDictionary value)  {
::cordl_internals::setStaticField<System::Collections::IDictionary, "algorithms", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get>(std::forward<System::Collections::IDictionary>(value));
}
 System::Collections::IDictionary Org::BouncyCastle::Security::PbeUtilities::__get_algorithms()  {
return ::cordl_internals::getStaticField<System::Collections::IDictionary, "algorithms", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get>();
}
 void Org::BouncyCastle::Security::PbeUtilities::__set_algorithmType(System::Collections::IDictionary value)  {
::cordl_internals::setStaticField<System::Collections::IDictionary, "algorithmType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get>(std::forward<System::Collections::IDictionary>(value));
}
 System::Collections::IDictionary Org::BouncyCastle::Security::PbeUtilities::__get_algorithmType()  {
return ::cordl_internals::getStaticField<System::Collections::IDictionary, "algorithmType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get>();
}
 void Org::BouncyCastle::Security::PbeUtilities::__set_oids(System::Collections::IDictionary value)  {
::cordl_internals::setStaticField<System::Collections::IDictionary, "oids", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get>(std::forward<System::Collections::IDictionary>(value));
}
 System::Collections::IDictionary Org::BouncyCastle::Security::PbeUtilities::__get_oids()  {
return ::cordl_internals::getStaticField<System::Collections::IDictionary, "oids", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get>();
}
// Ctor Parameters []
 Org::BouncyCastle::Security::PbeUtilities::PbeUtilities()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PbeUtilities>())) {}
 void Org::BouncyCastle::Security::PbeUtilities::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Crypto::PbeParametersGenerator Org::BouncyCastle::Security::PbeUtilities::MakePbeGenerator(::StringW type, Org::BouncyCastle::Crypto::IDigest digest, ::ArrayW<uint8_t> key, ::ArrayW<uint8_t> salt, int32_t iterationCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "MakePbeGenerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::PbeParametersGenerator, false>(nullptr, ___internal_method, type, digest, key, salt, iterationCount);
}
 Org::BouncyCastle::Asn1::DerObjectIdentifier Org::BouncyCastle::Security::PbeUtilities::GetObjectIdentifier(::StringW mechanism)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "GetObjectIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::DerObjectIdentifier, false>(nullptr, ___internal_method, mechanism);
}
 System::Collections::ICollection Org::BouncyCastle::Security::PbeUtilities::get_Algorithms()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "get_Algorithms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::ICollection, false>(nullptr, ___internal_method);
}
 bool Org::BouncyCastle::Security::PbeUtilities::IsPkcs12(::StringW algorithm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "IsPkcs12",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, algorithm);
}
 bool Org::BouncyCastle::Security::PbeUtilities::IsPkcs5Scheme1(::StringW algorithm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "IsPkcs5Scheme1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, algorithm);
}
 bool Org::BouncyCastle::Security::PbeUtilities::IsPkcs5Scheme2(::StringW algorithm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "IsPkcs5Scheme2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, algorithm);
}
 bool Org::BouncyCastle::Security::PbeUtilities::IsOpenSsl(::StringW algorithm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "IsOpenSsl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, algorithm);
}
 bool Org::BouncyCastle::Security::PbeUtilities::IsPbeAlgorithm(::StringW algorithm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "IsPbeAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, algorithm);
}
 Org::BouncyCastle::Asn1::Asn1Encodable Org::BouncyCastle::Security::PbeUtilities::GenerateAlgorithmParameters(Org::BouncyCastle::Asn1::DerObjectIdentifier algorithmOid, ::ArrayW<uint8_t> salt, int32_t iterationCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "GenerateAlgorithmParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Asn1Encodable, false>(nullptr, ___internal_method, algorithmOid, salt, iterationCount);
}
 Org::BouncyCastle::Asn1::Asn1Encodable Org::BouncyCastle::Security::PbeUtilities::GenerateAlgorithmParameters(::StringW algorithm, ::ArrayW<uint8_t> salt, int32_t iterationCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "GenerateAlgorithmParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Asn1Encodable, false>(nullptr, ___internal_method, algorithm, salt, iterationCount);
}
 Org::BouncyCastle::Asn1::Asn1Encodable Org::BouncyCastle::Security::PbeUtilities::GenerateAlgorithmParameters(Org::BouncyCastle::Asn1::DerObjectIdentifier cipherAlgorithm, Org::BouncyCastle::Asn1::DerObjectIdentifier hashAlgorithm, ::ArrayW<uint8_t> salt, int32_t iterationCount, Org::BouncyCastle::Security::SecureRandom secureRandom)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "GenerateAlgorithmParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Asn1Encodable, false>(nullptr, ___internal_method, cipherAlgorithm, hashAlgorithm, salt, iterationCount, secureRandom);
}
 Org::BouncyCastle::Crypto::ICipherParameters Org::BouncyCastle::Security::PbeUtilities::GenerateCipherParameters(Org::BouncyCastle::Asn1::DerObjectIdentifier algorithmOid, ::ArrayW<char16_t> password, Org::BouncyCastle::Asn1::Asn1Encodable pbeParameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "GenerateCipherParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Encodable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::ICipherParameters, false>(nullptr, ___internal_method, algorithmOid, password, pbeParameters);
}
 Org::BouncyCastle::Crypto::ICipherParameters Org::BouncyCastle::Security::PbeUtilities::GenerateCipherParameters(Org::BouncyCastle::Asn1::DerObjectIdentifier algorithmOid, ::ArrayW<char16_t> password, bool wrongPkcs12Zero, Org::BouncyCastle::Asn1::Asn1Encodable pbeParameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "GenerateCipherParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Encodable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::ICipherParameters, false>(nullptr, ___internal_method, algorithmOid, password, wrongPkcs12Zero, pbeParameters);
}
 Org::BouncyCastle::Crypto::ICipherParameters Org::BouncyCastle::Security::PbeUtilities::GenerateCipherParameters(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algID, ::ArrayW<char16_t> password)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "GenerateCipherParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::ICipherParameters, false>(nullptr, ___internal_method, algID, password);
}
 Org::BouncyCastle::Crypto::ICipherParameters Org::BouncyCastle::Security::PbeUtilities::GenerateCipherParameters(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algID, ::ArrayW<char16_t> password, bool wrongPkcs12Zero)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "GenerateCipherParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::ICipherParameters, false>(nullptr, ___internal_method, algID, password, wrongPkcs12Zero);
}
 Org::BouncyCastle::Crypto::ICipherParameters Org::BouncyCastle::Security::PbeUtilities::GenerateCipherParameters(::StringW algorithm, ::ArrayW<char16_t> password, Org::BouncyCastle::Asn1::Asn1Encodable pbeParameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "GenerateCipherParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Encodable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::ICipherParameters, false>(nullptr, ___internal_method, algorithm, password, pbeParameters);
}
 Org::BouncyCastle::Crypto::ICipherParameters Org::BouncyCastle::Security::PbeUtilities::GenerateCipherParameters(::StringW algorithm, ::ArrayW<char16_t> password, bool wrongPkcs12Zero, Org::BouncyCastle::Asn1::Asn1Encodable pbeParameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "GenerateCipherParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Encodable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::ICipherParameters, false>(nullptr, ___internal_method, algorithm, password, wrongPkcs12Zero, pbeParameters);
}
 ::bs_hook::Il2CppWrapperType Org::BouncyCastle::Security::PbeUtilities::CreateEngine(Org::BouncyCastle::Asn1::DerObjectIdentifier algorithmOid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "CreateEngine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, algorithmOid);
}
 ::bs_hook::Il2CppWrapperType Org::BouncyCastle::Security::PbeUtilities::CreateEngine(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "CreateEngine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, algID);
}
 ::bs_hook::Il2CppWrapperType Org::BouncyCastle::Security::PbeUtilities::CreateEngine(::StringW algorithm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "CreateEngine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, algorithm);
}
 ::StringW Org::BouncyCastle::Security::PbeUtilities::GetEncodingName(Org::BouncyCastle::Asn1::DerObjectIdentifier oid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "GetEncodingName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, oid);
}
 Org::BouncyCastle::Crypto::ICipherParameters Org::BouncyCastle::Security::PbeUtilities::FixDesParity(::StringW mechanism, Org::BouncyCastle::Crypto::ICipherParameters parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::PbeUtilities>::get(),
                            "FixDesParity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::ICipherParameters, false>(nullptr, ___internal_method, mechanism, parameters);
}
