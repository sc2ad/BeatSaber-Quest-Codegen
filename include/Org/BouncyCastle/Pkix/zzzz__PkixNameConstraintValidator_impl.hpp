#pragma once
#include "Org/BouncyCastle/Pkix/zzzz__PkixNameConstraintValidator_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralSubtree_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__OtherName_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)()>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x106aa54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.WithinDNSubtree
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Org::BouncyCastle::Asn1::Asn1Sequence, Org::BouncyCastle::Asn1::Asn1Sequence)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::WithinDNSubtree)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x1079d84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "WithinDNSubtree",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Sequence>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckPermittedDN
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Asn1::Asn1Sequence)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedDN)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x107a140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "CheckPermittedDN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckExcludedDN
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Asn1::Asn1Sequence)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedDN)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x107a270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "CheckExcludedDN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IntersectDN
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::Collections::ISet (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Utilities::Collections::ISet, Org::BouncyCastle::Utilities::Collections::ISet)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectDN)> {
  constexpr static std::size_t size = 0x7d4;
  constexpr static std::size_t addrs = 0x107a2dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IntersectDN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.UnionDN
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::Collections::ISet (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Utilities::Collections::ISet, Org::BouncyCastle::Asn1::Asn1Sequence)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionDN)> {
  constexpr static std::size_t size = 0x5e4;
  constexpr static std::size_t addrs = 0x107aab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "UnionDN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IntersectOtherName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::Collections::ISet (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Utilities::Collections::ISet, Org::BouncyCastle::Utilities::Collections::ISet)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectOtherName)> {
  constexpr static std::size_t size = 0x698;
  constexpr static std::size_t addrs = 0x107b094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IntersectOtherName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IntersectOtherName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Asn1::X509::OtherName, Org::BouncyCastle::Asn1::X509::OtherName, Org::BouncyCastle::Utilities::Collections::ISet)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectOtherName)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x107b72c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IntersectOtherName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::OtherName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::OtherName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.UnionOtherName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::Collections::ISet (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Utilities::Collections::ISet, Org::BouncyCastle::Asn1::X509::OtherName)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionOtherName)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x107b804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "UnionOtherName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::OtherName>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IntersectEmail
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::Collections::ISet (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Utilities::Collections::ISet, Org::BouncyCastle::Utilities::Collections::ISet)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectEmail)> {
  constexpr static std::size_t size = 0x6b8;
  constexpr static std::size_t addrs = 0x107b8f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IntersectEmail",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.UnionEmail
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::Collections::ISet (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Utilities::Collections::ISet, ::StringW)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionEmail)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x107c55c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "UnionEmail",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IntersectIP
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::Collections::ISet (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Utilities::Collections::ISet, Org::BouncyCastle::Utilities::Collections::ISet)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectIP)> {
  constexpr static std::size_t size = 0x780;
  constexpr static std::size_t addrs = 0x107d2d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IntersectIP",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.UnionIP
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::Collections::ISet (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Utilities::Collections::ISet, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionIP)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x107dc94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "UnionIP",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.UnionIPRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::Collections::ISet (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionIPRange)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x107e13c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "UnionIPRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IntersectIPRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::Collections::ISet (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectIPRange)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x107da54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IntersectIPRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IpWithSubnetMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IpWithSubnetMask)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x107e9e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IpWithSubnetMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.ExtractIPsAndSubnetMasks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::ArrayW<uint8_t>> (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::ExtractIPsAndSubnetMasks)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x107e2b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "ExtractIPsAndSubnetMasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.MinMaxIPs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::ArrayW<uint8_t>> (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::MinMaxIPs)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x107e4ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "MinMaxIPs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IsOtherNameConstrained
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Asn1::X509::OtherName, Org::BouncyCastle::Asn1::X509::OtherName)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsOtherNameConstrained)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x107ea84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IsOtherNameConstrained",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::OtherName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::OtherName>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IsOtherNameConstrained
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Utilities::Collections::ISet, Org::BouncyCastle::Asn1::X509::OtherName)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsOtherNameConstrained)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x107eaa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IsOtherNameConstrained",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::OtherName>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckPermittedOtherName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Utilities::Collections::ISet, Org::BouncyCastle::Asn1::X509::OtherName)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedOtherName)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x107edc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "CheckPermittedOtherName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::OtherName>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckExcludedOtherName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Utilities::Collections::ISet, Org::BouncyCastle::Asn1::X509::OtherName)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedOtherName)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x107ee8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "CheckExcludedOtherName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::OtherName>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IsEmailConstrained
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::StringW, ::StringW)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsEmailConstrained)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x107eee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IsEmailConstrained",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IsEmailConstrained
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Utilities::Collections::ISet, ::StringW)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsEmailConstrained)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x107f240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IsEmailConstrained",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckPermittedEmail
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Utilities::Collections::ISet, ::StringW)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedEmail)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x107f594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "CheckPermittedEmail",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckExcludedEmail
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Utilities::Collections::ISet, ::StringW)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedEmail)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x107f6b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "CheckExcludedEmail",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IsDnsConstrained
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::StringW, ::StringW)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsDnsConstrained)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x107f710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IsDnsConstrained",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IsDnsConstrained
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Utilities::Collections::ISet, ::StringW)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsDnsConstrained)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x107f790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IsDnsConstrained",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckPermittedDns
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Utilities::Collections::ISet, ::StringW)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedDns)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x107facc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "CheckPermittedDns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckExcludedDns
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Utilities::Collections::ISet, ::StringW)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedDns)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x107fbdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "CheckExcludedDns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IsDirectoryConstrained
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Utilities::Collections::ISet, Org::BouncyCastle::Asn1::Asn1Sequence)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsDirectoryConstrained)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x107fc38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IsDirectoryConstrained",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckPermittedDirectory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Utilities::Collections::ISet, Org::BouncyCastle::Asn1::Asn1Sequence)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedDirectory)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x107a150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "CheckPermittedDirectory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckExcludedDirectory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Utilities::Collections::ISet, Org::BouncyCastle::Asn1::Asn1Sequence)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedDirectory)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x107a280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "CheckExcludedDirectory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IsUriConstrained
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::StringW, ::StringW)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsUriConstrained)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x107ff84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IsUriConstrained",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IsUriConstrained
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Utilities::Collections::ISet, ::StringW)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsUriConstrained)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x108020c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IsUriConstrained",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckPermittedUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Utilities::Collections::ISet, ::StringW)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedUri)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1080548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "CheckPermittedUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckExcludedUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Utilities::Collections::ISet, ::StringW)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedUri)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1080658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "CheckExcludedUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IsIPConstrained
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsIPConstrained)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x10806b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IsIPConstrained",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IsIPConstrained
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Utilities::Collections::ISet, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsIPConstrained)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x108086c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IsIPConstrained",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckPermittedIP
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Utilities::Collections::ISet, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedIP)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1080bc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "CheckPermittedIP",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckExcludedIP
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Utilities::Collections::ISet, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedIP)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1080cd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "CheckExcludedIP",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.WithinDomain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::StringW, ::StringW)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::WithinDomain)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x107f04c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "WithinDomain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.UnionEmail
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::StringW, ::StringW, Org::BouncyCastle::Utilities::Collections::ISet)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionEmail)> {
  constexpr static std::size_t size = 0x940;
  constexpr static std::size_t addrs = 0x107c994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "UnionEmail",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.unionURI
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::StringW, ::StringW, Org::BouncyCastle::Utilities::Collections::ISet)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::unionURI)> {
  constexpr static std::size_t size = 0x940;
  constexpr static std::size_t addrs = 0x1080d34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "unionURI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IntersectDns
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::Collections::ISet (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Utilities::Collections::ISet, Org::BouncyCastle::Utilities::Collections::ISet)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectDns)> {
  constexpr static std::size_t size = 0x7b8;
  constexpr static std::size_t addrs = 0x1081674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IntersectDns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.UnionDns
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::Collections::ISet (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Utilities::Collections::ISet, ::StringW)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionDns)> {
  constexpr static std::size_t size = 0x5c8;
  constexpr static std::size_t addrs = 0x1081e2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "UnionDns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IntersectEmail
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::StringW, ::StringW, Org::BouncyCastle::Utilities::Collections::ISet)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectEmail)> {
  constexpr static std::size_t size = 0x584;
  constexpr static std::size_t addrs = 0x107bfd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IntersectEmail",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IntersectUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::Collections::ISet (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Utilities::Collections::ISet, Org::BouncyCastle::Utilities::Collections::ISet)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectUri)> {
  constexpr static std::size_t size = 0x6a4;
  constexpr static std::size_t addrs = 0x10823f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IntersectUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.UnionUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::Collections::ISet (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Utilities::Collections::ISet, ::StringW)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionUri)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x108301c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "UnionUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IntersectUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::StringW, ::StringW, Org::BouncyCastle::Utilities::Collections::ISet)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectUri)> {
  constexpr static std::size_t size = 0x584;
  constexpr static std::size_t addrs = 0x1082a98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IntersectUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.ExtractHostFromURL
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::ExtractHostFromURL)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x1080070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "ExtractHostFromURL",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.checkPermitted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Asn1::X509::GeneralName)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::checkPermitted)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x1083444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "checkPermitted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::GeneralName>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.checkExcluded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Asn1::X509::GeneralName)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::checkExcluded)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x108356c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "checkExcluded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::GeneralName>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IntersectPermittedSubtree
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Asn1::Asn1Sequence)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectPermittedSubtree)> {
  constexpr static std::size_t size = 0xaa4;
  constexpr static std::size_t addrs = 0x1083694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IntersectPermittedSubtree",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.ExtractNameAsString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Asn1::X509::GeneralName)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::ExtractNameAsString)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x107bfac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "ExtractNameAsString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::GeneralName>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IntersectEmptyPermittedSubtree
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(int32_t)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectEmptyPermittedSubtree)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x1084138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IntersectEmptyPermittedSubtree",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.AddExcludedSubtree
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Asn1::X509::GeneralSubtree)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::AddExcludedSubtree)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x1084260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "AddExcludedSubtree",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::GeneralSubtree>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.Max
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::Max)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x107e7d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "Max",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.Min
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::Min)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x107e768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "Min",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CompareTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CompareTo)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x107e840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.Or
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::Or)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x107e91c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "Or",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.HashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)()>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::HashCode)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x10843e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "HashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)()>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::GetHashCode)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x10843f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Pkix::PkixNameConstraintValidator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.HashCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(System::Collections::ICollection)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::HashCollection)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x10844e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "HashCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ICollection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::bs_hook::Il2CppWrapperType)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::Equals)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x1084880;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Pkix::PkixNameConstraintValidator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CollectionsAreEqual
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(System::Collections::ICollection, System::Collections::ICollection)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CollectionsAreEqual)> {
  constexpr static std::size_t size = 0x6a4;
  constexpr static std::size_t addrs = 0x10849ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "CollectionsAreEqual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ICollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ICollection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.SpecialEquals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::SpecialEquals)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x1085090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "SpecialEquals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.StringifyIP
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::StringifyIP)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x10851b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "StringifyIP",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.StringifyIPCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Utilities::Collections::ISet)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::StringifyIPCollection)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x108536c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "StringifyIPCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.StringifyOtherNameCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(Org::BouncyCastle::Utilities::Collections::ISet)>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::StringifyOtherNameCollection)> {
  constexpr static std::size_t size = 0x594;
  constexpr static std::size_t addrs = 0x108575c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "StringifyOtherNameCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixNameConstraintValidator.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)()>(&Org::BouncyCastle::Pkix::PkixNameConstraintValidator::ToString)> {
  constexpr static std::size_t size = 0x6bc;
  constexpr static std::size_t addrs = 0x1085cf0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Pkix::PkixNameConstraintValidator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__set_SerialNumberOid(Org::BouncyCastle::Asn1::DerObjectIdentifier value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Asn1::DerObjectIdentifier, "SerialNumberOid", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get>(std::forward<Org::BouncyCastle::Asn1::DerObjectIdentifier>(value));
}
 Org::BouncyCastle::Asn1::DerObjectIdentifier Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__get_SerialNumberOid()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Asn1::DerObjectIdentifier, "SerialNumberOid", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get>();
}
constexpr void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__set_excludedSubtreesDN(Org::BouncyCastle::Utilities::Collections::ISet value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Utilities::Collections::ISet, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Utilities::Collections::ISet>(value));
}
constexpr Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__get_excludedSubtreesDN() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Utilities::Collections::ISet, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__set_excludedSubtreesDNS(Org::BouncyCastle::Utilities::Collections::ISet value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Utilities::Collections::ISet, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Utilities::Collections::ISet>(value));
}
constexpr Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__get_excludedSubtreesDNS() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Utilities::Collections::ISet, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__set_excludedSubtreesEmail(Org::BouncyCastle::Utilities::Collections::ISet value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Utilities::Collections::ISet, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Utilities::Collections::ISet>(value));
}
constexpr Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__get_excludedSubtreesEmail() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Utilities::Collections::ISet, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__set_excludedSubtreesURI(Org::BouncyCastle::Utilities::Collections::ISet value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Utilities::Collections::ISet, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Utilities::Collections::ISet>(value));
}
constexpr Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__get_excludedSubtreesURI() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Utilities::Collections::ISet, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__set_excludedSubtreesIP(Org::BouncyCastle::Utilities::Collections::ISet value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Utilities::Collections::ISet, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Utilities::Collections::ISet>(value));
}
constexpr Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__get_excludedSubtreesIP() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Utilities::Collections::ISet, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__set_excludedSubtreesOtherName(Org::BouncyCastle::Utilities::Collections::ISet value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Utilities::Collections::ISet, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Utilities::Collections::ISet>(value));
}
constexpr Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__get_excludedSubtreesOtherName() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Utilities::Collections::ISet, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__set_permittedSubtreesDN(Org::BouncyCastle::Utilities::Collections::ISet value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Utilities::Collections::ISet, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Utilities::Collections::ISet>(value));
}
constexpr Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__get_permittedSubtreesDN() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Utilities::Collections::ISet, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__set_permittedSubtreesDNS(Org::BouncyCastle::Utilities::Collections::ISet value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Utilities::Collections::ISet, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Utilities::Collections::ISet>(value));
}
constexpr Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__get_permittedSubtreesDNS() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Utilities::Collections::ISet, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__set_permittedSubtreesEmail(Org::BouncyCastle::Utilities::Collections::ISet value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Utilities::Collections::ISet, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Utilities::Collections::ISet>(value));
}
constexpr Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__get_permittedSubtreesEmail() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Utilities::Collections::ISet, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__set_permittedSubtreesURI(Org::BouncyCastle::Utilities::Collections::ISet value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Utilities::Collections::ISet, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Utilities::Collections::ISet>(value));
}
constexpr Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__get_permittedSubtreesURI() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Utilities::Collections::ISet, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__set_permittedSubtreesIP(Org::BouncyCastle::Utilities::Collections::ISet value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Utilities::Collections::ISet, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Utilities::Collections::ISet>(value));
}
constexpr Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__get_permittedSubtreesIP() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Utilities::Collections::ISet, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__set_permittedSubtreesOtherName(Org::BouncyCastle::Utilities::Collections::ISet value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Utilities::Collections::ISet, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Utilities::Collections::ISet>(value));
}
constexpr Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__get_permittedSubtreesOtherName() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Utilities::Collections::ISet, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Pkix::PkixNameConstraintValidator Org::BouncyCastle::Pkix::PkixNameConstraintValidator::New_ctor()  {
Org::BouncyCastle::Pkix::PkixNameConstraintValidator o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>())};
return o;
}
 void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::WithinDNSubtree(Org::BouncyCastle::Asn1::Asn1Sequence dns, Org::BouncyCastle::Asn1::Asn1Sequence subtree)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "WithinDNSubtree",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Sequence>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, dns, subtree);
}
 void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedDN(Org::BouncyCastle::Asn1::Asn1Sequence dn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "CheckPermittedDN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dn);
}
 void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedDN(Org::BouncyCastle::Asn1::Asn1Sequence dn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "CheckExcludedDN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dn);
}
 Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectDN(Org::BouncyCastle::Utilities::Collections::ISet permitted, Org::BouncyCastle::Utilities::Collections::ISet dns)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IntersectDN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Utilities::Collections::ISet, false>(const_cast<void*>(instance), ___internal_method, permitted, dns);
}
 Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionDN(Org::BouncyCastle::Utilities::Collections::ISet excluded, Org::BouncyCastle::Asn1::Asn1Sequence dn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "UnionDN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Utilities::Collections::ISet, false>(const_cast<void*>(instance), ___internal_method, excluded, dn);
}
 Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectOtherName(Org::BouncyCastle::Utilities::Collections::ISet permitted, Org::BouncyCastle::Utilities::Collections::ISet otherNames)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IntersectOtherName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Utilities::Collections::ISet, false>(const_cast<void*>(instance), ___internal_method, permitted, otherNames);
}
 void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectOtherName(Org::BouncyCastle::Asn1::X509::OtherName otherName1, Org::BouncyCastle::Asn1::X509::OtherName otherName2, Org::BouncyCastle::Utilities::Collections::ISet intersect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IntersectOtherName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::OtherName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::OtherName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, otherName1, otherName2, intersect);
}
 Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionOtherName(Org::BouncyCastle::Utilities::Collections::ISet permitted, Org::BouncyCastle::Asn1::X509::OtherName otherName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "UnionOtherName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::OtherName>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Utilities::Collections::ISet, false>(const_cast<void*>(instance), ___internal_method, permitted, otherName);
}
 Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectEmail(Org::BouncyCastle::Utilities::Collections::ISet permitted, Org::BouncyCastle::Utilities::Collections::ISet emails)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IntersectEmail",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Utilities::Collections::ISet, false>(const_cast<void*>(instance), ___internal_method, permitted, emails);
}
 Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionEmail(Org::BouncyCastle::Utilities::Collections::ISet excluded, ::StringW email)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "UnionEmail",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Utilities::Collections::ISet, false>(const_cast<void*>(instance), ___internal_method, excluded, email);
}
 Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectIP(Org::BouncyCastle::Utilities::Collections::ISet permitted, Org::BouncyCastle::Utilities::Collections::ISet ips)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IntersectIP",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Utilities::Collections::ISet, false>(const_cast<void*>(instance), ___internal_method, permitted, ips);
}
 Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionIP(Org::BouncyCastle::Utilities::Collections::ISet excluded, ::ArrayW<uint8_t> ip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "UnionIP",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Utilities::Collections::ISet, false>(const_cast<void*>(instance), ___internal_method, excluded, ip);
}
 Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionIPRange(::ArrayW<uint8_t> ipWithSubmask1, ::ArrayW<uint8_t> ipWithSubmask2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "UnionIPRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Utilities::Collections::ISet, false>(const_cast<void*>(instance), ___internal_method, ipWithSubmask1, ipWithSubmask2);
}
 Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectIPRange(::ArrayW<uint8_t> ipWithSubmask1, ::ArrayW<uint8_t> ipWithSubmask2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IntersectIPRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Utilities::Collections::ISet, false>(const_cast<void*>(instance), ___internal_method, ipWithSubmask1, ipWithSubmask2);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IpWithSubnetMask(::ArrayW<uint8_t> ip, ::ArrayW<uint8_t> subnetMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IpWithSubnetMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, ip, subnetMask);
}
 ::ArrayW<::ArrayW<uint8_t>> Org::BouncyCastle::Pkix::PkixNameConstraintValidator::ExtractIPsAndSubnetMasks(::ArrayW<uint8_t> ipWithSubmask1, ::ArrayW<uint8_t> ipWithSubmask2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "ExtractIPsAndSubnetMasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::ArrayW<uint8_t>>, false>(const_cast<void*>(instance), ___internal_method, ipWithSubmask1, ipWithSubmask2);
}
 ::ArrayW<::ArrayW<uint8_t>> Org::BouncyCastle::Pkix::PkixNameConstraintValidator::MinMaxIPs(::ArrayW<uint8_t> ip1, ::ArrayW<uint8_t> subnetmask1, ::ArrayW<uint8_t> ip2, ::ArrayW<uint8_t> subnetmask2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "MinMaxIPs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::ArrayW<uint8_t>>, false>(const_cast<void*>(instance), ___internal_method, ip1, subnetmask1, ip2, subnetmask2);
}
 bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsOtherNameConstrained(Org::BouncyCastle::Asn1::X509::OtherName constraint, Org::BouncyCastle::Asn1::X509::OtherName otherName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IsOtherNameConstrained",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::OtherName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::OtherName>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, constraint, otherName);
}
 bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsOtherNameConstrained(Org::BouncyCastle::Utilities::Collections::ISet constraints, Org::BouncyCastle::Asn1::X509::OtherName otherName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IsOtherNameConstrained",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::OtherName>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, constraints, otherName);
}
 void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedOtherName(Org::BouncyCastle::Utilities::Collections::ISet permitted, Org::BouncyCastle::Asn1::X509::OtherName name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "CheckPermittedOtherName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::OtherName>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, permitted, name);
}
 void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedOtherName(Org::BouncyCastle::Utilities::Collections::ISet excluded, Org::BouncyCastle::Asn1::X509::OtherName name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "CheckExcludedOtherName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::OtherName>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, excluded, name);
}
 bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsEmailConstrained(::StringW constraint, ::StringW email)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IsEmailConstrained",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, constraint, email);
}
 bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsEmailConstrained(Org::BouncyCastle::Utilities::Collections::ISet constraints, ::StringW email)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IsEmailConstrained",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, constraints, email);
}
 void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedEmail(Org::BouncyCastle::Utilities::Collections::ISet permitted, ::StringW email)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "CheckPermittedEmail",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, permitted, email);
}
 void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedEmail(Org::BouncyCastle::Utilities::Collections::ISet excluded, ::StringW email)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "CheckExcludedEmail",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, excluded, email);
}
 bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsDnsConstrained(::StringW constraint, ::StringW dns)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IsDnsConstrained",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, constraint, dns);
}
 bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsDnsConstrained(Org::BouncyCastle::Utilities::Collections::ISet constraints, ::StringW dns)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IsDnsConstrained",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, constraints, dns);
}
 void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedDns(Org::BouncyCastle::Utilities::Collections::ISet permitted, ::StringW dns)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "CheckPermittedDns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, permitted, dns);
}
 void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedDns(Org::BouncyCastle::Utilities::Collections::ISet excluded, ::StringW dns)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "CheckExcludedDns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, excluded, dns);
}
 bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsDirectoryConstrained(Org::BouncyCastle::Utilities::Collections::ISet constraints, Org::BouncyCastle::Asn1::Asn1Sequence directory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IsDirectoryConstrained",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, constraints, directory);
}
 void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedDirectory(Org::BouncyCastle::Utilities::Collections::ISet permitted, Org::BouncyCastle::Asn1::Asn1Sequence directory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "CheckPermittedDirectory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, permitted, directory);
}
 void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedDirectory(Org::BouncyCastle::Utilities::Collections::ISet excluded, Org::BouncyCastle::Asn1::Asn1Sequence directory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "CheckExcludedDirectory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, excluded, directory);
}
 bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsUriConstrained(::StringW constraint, ::StringW uri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IsUriConstrained",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, constraint, uri);
}
 bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsUriConstrained(Org::BouncyCastle::Utilities::Collections::ISet constraints, ::StringW uri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IsUriConstrained",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, constraints, uri);
}
 void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedUri(Org::BouncyCastle::Utilities::Collections::ISet permitted, ::StringW uri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "CheckPermittedUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, permitted, uri);
}
 void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedUri(Org::BouncyCastle::Utilities::Collections::ISet excluded, ::StringW uri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "CheckExcludedUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, excluded, uri);
}
 bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsIPConstrained(::ArrayW<uint8_t> constraint, ::ArrayW<uint8_t> ip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IsIPConstrained",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, constraint, ip);
}
 bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsIPConstrained(Org::BouncyCastle::Utilities::Collections::ISet constraints, ::ArrayW<uint8_t> ip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IsIPConstrained",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, constraints, ip);
}
 void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedIP(Org::BouncyCastle::Utilities::Collections::ISet permitted, ::ArrayW<uint8_t> ip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "CheckPermittedIP",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, permitted, ip);
}
 void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedIP(Org::BouncyCastle::Utilities::Collections::ISet excluded, ::ArrayW<uint8_t> ip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "CheckExcludedIP",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, excluded, ip);
}
 bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::WithinDomain(::StringW testDomain, ::StringW domain)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "WithinDomain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, testDomain, domain);
}
 void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionEmail(::StringW email1, ::StringW email2, Org::BouncyCastle::Utilities::Collections::ISet union)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "UnionEmail",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, email1, email2, union);
}
 void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::unionURI(::StringW email1, ::StringW email2, Org::BouncyCastle::Utilities::Collections::ISet union)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "unionURI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, email1, email2, union);
}
 Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectDns(Org::BouncyCastle::Utilities::Collections::ISet permitted, Org::BouncyCastle::Utilities::Collections::ISet dnss)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IntersectDns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Utilities::Collections::ISet, false>(const_cast<void*>(instance), ___internal_method, permitted, dnss);
}
 Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionDns(Org::BouncyCastle::Utilities::Collections::ISet excluded, ::StringW dns)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "UnionDns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Utilities::Collections::ISet, false>(const_cast<void*>(instance), ___internal_method, excluded, dns);
}
 void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectEmail(::StringW email1, ::StringW email2, Org::BouncyCastle::Utilities::Collections::ISet intersect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IntersectEmail",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, email1, email2, intersect);
}
 Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectUri(Org::BouncyCastle::Utilities::Collections::ISet permitted, Org::BouncyCastle::Utilities::Collections::ISet uris)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IntersectUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Utilities::Collections::ISet, false>(const_cast<void*>(instance), ___internal_method, permitted, uris);
}
 Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionUri(Org::BouncyCastle::Utilities::Collections::ISet excluded, ::StringW uri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "UnionUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Utilities::Collections::ISet, false>(const_cast<void*>(instance), ___internal_method, excluded, uri);
}
 void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectUri(::StringW email1, ::StringW email2, Org::BouncyCastle::Utilities::Collections::ISet intersect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IntersectUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, email1, email2, intersect);
}
 ::StringW Org::BouncyCastle::Pkix::PkixNameConstraintValidator::ExtractHostFromURL(::StringW url)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "ExtractHostFromURL",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, url);
}
 void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::checkPermitted(Org::BouncyCastle::Asn1::X509::GeneralName name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "checkPermitted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::GeneralName>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name);
}
 void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::checkExcluded(Org::BouncyCastle::Asn1::X509::GeneralName name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "checkExcluded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::GeneralName>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name);
}
 void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectPermittedSubtree(Org::BouncyCastle::Asn1::Asn1Sequence permitted)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IntersectPermittedSubtree",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, permitted);
}
 ::StringW Org::BouncyCastle::Pkix::PkixNameConstraintValidator::ExtractNameAsString(Org::BouncyCastle::Asn1::X509::GeneralName name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "ExtractNameAsString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::GeneralName>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, name);
}
 void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectEmptyPermittedSubtree(int32_t nameType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "IntersectEmptyPermittedSubtree",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, nameType);
}
 void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::AddExcludedSubtree(Org::BouncyCastle::Asn1::X509::GeneralSubtree subtree)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "AddExcludedSubtree",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::GeneralSubtree>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, subtree);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Pkix::PkixNameConstraintValidator::Max(::ArrayW<uint8_t> ip1, ::ArrayW<uint8_t> ip2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "Max",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, ip1, ip2);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Pkix::PkixNameConstraintValidator::Min(::ArrayW<uint8_t> ip1, ::ArrayW<uint8_t> ip2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "Min",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, ip1, ip2);
}
 int32_t Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CompareTo(::ArrayW<uint8_t> ip1, ::ArrayW<uint8_t> ip2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, ip1, ip2);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Pkix::PkixNameConstraintValidator::Or(::ArrayW<uint8_t> ip1, ::ArrayW<uint8_t> ip2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "Or",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, ip1, ip2);
}
 int32_t Org::BouncyCastle::Pkix::PkixNameConstraintValidator::HashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "HashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Org::BouncyCastle::Pkix::PkixNameConstraintValidator::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Org::BouncyCastle::Pkix::PkixNameConstraintValidator::HashCollection(System::Collections::ICollection c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "HashCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ICollection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, c);
}
 bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::Equals(::bs_hook::Il2CppWrapperType o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, o);
}
 bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CollectionsAreEqual(System::Collections::ICollection coll1, System::Collections::ICollection coll2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "CollectionsAreEqual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ICollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ICollection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, coll1, coll2);
}
 bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::SpecialEquals(::bs_hook::Il2CppWrapperType o1, ::bs_hook::Il2CppWrapperType o2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "SpecialEquals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, o1, o2);
}
 ::StringW Org::BouncyCastle::Pkix::PkixNameConstraintValidator::StringifyIP(::ArrayW<uint8_t> ip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "StringifyIP",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, ip);
}
 ::StringW Org::BouncyCastle::Pkix::PkixNameConstraintValidator::StringifyIPCollection(Org::BouncyCastle::Utilities::Collections::ISet ips)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "StringifyIPCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, ips);
}
 ::StringW Org::BouncyCastle::Pkix::PkixNameConstraintValidator::StringifyOtherNameCollection(Org::BouncyCastle::Utilities::Collections::ISet otherNames)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "StringifyOtherNameCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, otherNames);
}
 ::StringW Org::BouncyCastle::Pkix::PkixNameConstraintValidator::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixNameConstraintValidator>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
