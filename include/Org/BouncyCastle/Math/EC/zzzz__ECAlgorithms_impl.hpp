#pragma once
#include "Org/BouncyCastle/Math/EC/zzzz__ECAlgorithms_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__WNafPreCompInfo_def.hpp"
#include "Org/BouncyCastle/Math/Field/zzzz__IFiniteField_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__ECEndomorphism_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__GlvEndomorphism_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECAlgorithms.IsF2mCurve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Org::BouncyCastle::Math::EC::ECCurve)>(&Org::BouncyCastle::Math::EC::ECAlgorithms::IsF2mCurve)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xfbcc64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "IsF2mCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECCurve>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECAlgorithms.IsF2mField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Org::BouncyCastle::Math::Field::IFiniteField)>(&Org::BouncyCastle::Math::EC::ECAlgorithms::IsF2mField)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xfbcc88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "IsF2mField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::Field::IFiniteField>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECAlgorithms.IsFpCurve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Org::BouncyCastle::Math::EC::ECCurve)>(&Org::BouncyCastle::Math::EC::ECAlgorithms::IsFpCurve)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xfbce0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "IsFpCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECCurve>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECAlgorithms.IsFpField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Org::BouncyCastle::Math::Field::IFiniteField)>(&Org::BouncyCastle::Math::EC::ECAlgorithms::IsFpField)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xfbce30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "IsFpField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::Field::IFiniteField>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECAlgorithms.SumOfMultiplies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (*)(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint>, ::ArrayW<Org::BouncyCastle::Math::BigInteger>)>(&Org::BouncyCastle::Math::EC::ECAlgorithms::SumOfMultiplies)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0xfbcedc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "SumOfMultiplies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::EC::ECPoint>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::BigInteger>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECAlgorithms.SumOfTwoMultiplies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (*)(Org::BouncyCastle::Math::EC::ECPoint, Org::BouncyCastle::Math::BigInteger, Org::BouncyCastle::Math::EC::ECPoint, Org::BouncyCastle::Math::BigInteger)>(&Org::BouncyCastle::Math::EC::ECAlgorithms::SumOfTwoMultiplies)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0xfbd184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "SumOfTwoMultiplies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECAlgorithms.ShamirsTrick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (*)(Org::BouncyCastle::Math::EC::ECPoint, Org::BouncyCastle::Math::BigInteger, Org::BouncyCastle::Math::EC::ECPoint, Org::BouncyCastle::Math::BigInteger)>(&Org::BouncyCastle::Math::EC::ECAlgorithms::ShamirsTrick)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xfbded0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "ShamirsTrick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECAlgorithms.ImportPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (*)(Org::BouncyCastle::Math::EC::ECCurve, Org::BouncyCastle::Math::EC::ECPoint)>(&Org::BouncyCastle::Math::EC::ECAlgorithms::ImportPoint)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xfbd3f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "ImportPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECCurve>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECAlgorithms.MontgomeryTrick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement>, int32_t, int32_t)>(&Org::BouncyCastle::Math::EC::ECAlgorithms::MontgomeryTrick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfbe3f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "MontgomeryTrick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECAlgorithms.MontgomeryTrick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement>, int32_t, int32_t, Org::BouncyCastle::Math::EC::ECFieldElement)>(&Org::BouncyCastle::Math::EC::ECAlgorithms::MontgomeryTrick)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0xfbe3f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "MontgomeryTrick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECFieldElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECAlgorithms.ReferenceMultiply
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (*)(Org::BouncyCastle::Math::EC::ECPoint, Org::BouncyCastle::Math::BigInteger)>(&Org::BouncyCastle::Math::EC::ECAlgorithms::ReferenceMultiply)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xfbe6a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "ReferenceMultiply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECAlgorithms.ValidatePoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (*)(Org::BouncyCastle::Math::EC::ECPoint)>(&Org::BouncyCastle::Math::EC::ECAlgorithms::ValidatePoint)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xfbe7e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "ValidatePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECAlgorithms.CleanPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (*)(Org::BouncyCastle::Math::EC::ECCurve, Org::BouncyCastle::Math::EC::ECPoint)>(&Org::BouncyCastle::Math::EC::ECAlgorithms::CleanPoint)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xfbe854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "CleanPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECCurve>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECAlgorithms.ImplCheckResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (*)(Org::BouncyCastle::Math::EC::ECPoint)>(&Org::BouncyCastle::Math::EC::ECAlgorithms::ImplCheckResult)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xfbd878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "ImplCheckResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECAlgorithms.ImplShamirsTrickJsf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (*)(Org::BouncyCastle::Math::EC::ECPoint, Org::BouncyCastle::Math::BigInteger, Org::BouncyCastle::Math::EC::ECPoint, Org::BouncyCastle::Math::BigInteger)>(&Org::BouncyCastle::Math::EC::ECAlgorithms::ImplShamirsTrickJsf)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0xfbdf2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "ImplShamirsTrickJsf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECAlgorithms.ImplShamirsTrickWNaf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (*)(Org::BouncyCastle::Math::EC::ECPoint, Org::BouncyCastle::Math::BigInteger, Org::BouncyCastle::Math::EC::ECPoint, Org::BouncyCastle::Math::BigInteger)>(&Org::BouncyCastle::Math::EC::ECAlgorithms::ImplShamirsTrickWNaf)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0xfbdb70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "ImplShamirsTrickWNaf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECAlgorithms.ImplShamirsTrickWNaf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (*)(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism, Org::BouncyCastle::Math::EC::ECPoint, Org::BouncyCastle::Math::BigInteger, Org::BouncyCastle::Math::BigInteger)>(&Org::BouncyCastle::Math::EC::ECAlgorithms::ImplShamirsTrickWNaf)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0xfbf080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "ImplShamirsTrickWNaf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Endo::ECEndomorphism>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECAlgorithms.ImplShamirsTrickWNaf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (*)(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint>, ::ArrayW<Org::BouncyCastle::Math::EC::ECPoint>, ::ArrayW<uint8_t>, ::ArrayW<Org::BouncyCastle::Math::EC::ECPoint>, ::ArrayW<Org::BouncyCastle::Math::EC::ECPoint>, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Math::EC::ECAlgorithms::ImplShamirsTrickWNaf)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0xfbedc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "ImplShamirsTrickWNaf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::EC::ECPoint>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::EC::ECPoint>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::EC::ECPoint>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::EC::ECPoint>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECAlgorithms.ImplSumOfMultiplies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (*)(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint>, ::ArrayW<Org::BouncyCastle::Math::BigInteger>)>(&Org::BouncyCastle::Math::EC::ECAlgorithms::ImplSumOfMultiplies)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0xfbd8ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "ImplSumOfMultiplies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::EC::ECPoint>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::BigInteger>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECAlgorithms.ImplSumOfMultipliesGlv
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (*)(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint>, ::ArrayW<Org::BouncyCastle::Math::BigInteger>, Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism)>(&Org::BouncyCastle::Math::EC::ECAlgorithms::ImplSumOfMultipliesGlv)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0xfbd4ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "ImplSumOfMultipliesGlv",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::EC::ECPoint>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::BigInteger>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECAlgorithms.ImplSumOfMultiplies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (*)(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism, ::ArrayW<Org::BouncyCastle::Math::EC::ECPoint>, ::ArrayW<Org::BouncyCastle::Math::BigInteger>)>(&Org::BouncyCastle::Math::EC::ECAlgorithms::ImplSumOfMultiplies)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0xfbf6b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "ImplSumOfMultiplies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Endo::ECEndomorphism>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::EC::ECPoint>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::BigInteger>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECAlgorithms.ImplSumOfMultiplies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (*)(::ArrayW<bool>, ::ArrayW<Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo>, ::ArrayW<::ArrayW<uint8_t>>)>(&Org::BouncyCastle::Math::EC::ECAlgorithms::ImplSumOfMultiplies)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0xfbf3ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "ImplSumOfMultiplies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<uint8_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECAlgorithms.ImplShamirsTrickFixedPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (*)(Org::BouncyCastle::Math::EC::ECPoint, Org::BouncyCastle::Math::BigInteger, Org::BouncyCastle::Math::EC::ECPoint, Org::BouncyCastle::Math::BigInteger)>(&Org::BouncyCastle::Math::EC::ECAlgorithms::ImplShamirsTrickFixedPoint)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0xfbe934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "ImplShamirsTrickFixedPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECAlgorithms._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::ECAlgorithms::*)()>(&Org::BouncyCastle::Math::EC::ECAlgorithms::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfbfb88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 bool Org::BouncyCastle::Math::EC::ECAlgorithms::IsF2mCurve(Org::BouncyCastle::Math::EC::ECCurve c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "IsF2mCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECCurve>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, c);
}
 bool Org::BouncyCastle::Math::EC::ECAlgorithms::IsF2mField(Org::BouncyCastle::Math::Field::IFiniteField field)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "IsF2mField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::Field::IFiniteField>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, field);
}
 bool Org::BouncyCastle::Math::EC::ECAlgorithms::IsFpCurve(Org::BouncyCastle::Math::EC::ECCurve c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "IsFpCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECCurve>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, c);
}
 bool Org::BouncyCastle::Math::EC::ECAlgorithms::IsFpField(Org::BouncyCastle::Math::Field::IFiniteField field)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "IsFpField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::Field::IFiniteField>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, field);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECAlgorithms::SumOfMultiplies(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> ps, ::ArrayW<Org::BouncyCastle::Math::BigInteger> ks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "SumOfMultiplies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::EC::ECPoint>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::BigInteger>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(nullptr, ___internal_method, ps, ks);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECAlgorithms::SumOfTwoMultiplies(Org::BouncyCastle::Math::EC::ECPoint P, Org::BouncyCastle::Math::BigInteger a, Org::BouncyCastle::Math::EC::ECPoint Q, Org::BouncyCastle::Math::BigInteger b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "SumOfTwoMultiplies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(nullptr, ___internal_method, P, a, Q, b);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECAlgorithms::ShamirsTrick(Org::BouncyCastle::Math::EC::ECPoint P, Org::BouncyCastle::Math::BigInteger k, Org::BouncyCastle::Math::EC::ECPoint Q, Org::BouncyCastle::Math::BigInteger l)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "ShamirsTrick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(nullptr, ___internal_method, P, k, Q, l);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECAlgorithms::ImportPoint(Org::BouncyCastle::Math::EC::ECCurve c, Org::BouncyCastle::Math::EC::ECPoint p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "ImportPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECCurve>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(nullptr, ___internal_method, c, p);
}
 void Org::BouncyCastle::Math::EC::ECAlgorithms::MontgomeryTrick(::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> zs, int32_t off, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "MontgomeryTrick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, zs, off, len);
}
 void Org::BouncyCastle::Math::EC::ECAlgorithms::MontgomeryTrick(::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> zs, int32_t off, int32_t len, Org::BouncyCastle::Math::EC::ECFieldElement scale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "MontgomeryTrick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECFieldElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, zs, off, len, scale);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECAlgorithms::ReferenceMultiply(Org::BouncyCastle::Math::EC::ECPoint p, Org::BouncyCastle::Math::BigInteger k)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "ReferenceMultiply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(nullptr, ___internal_method, p, k);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECAlgorithms::ValidatePoint(Org::BouncyCastle::Math::EC::ECPoint p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "ValidatePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(nullptr, ___internal_method, p);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECAlgorithms::CleanPoint(Org::BouncyCastle::Math::EC::ECCurve c, Org::BouncyCastle::Math::EC::ECPoint p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "CleanPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECCurve>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(nullptr, ___internal_method, c, p);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECAlgorithms::ImplCheckResult(Org::BouncyCastle::Math::EC::ECPoint p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "ImplCheckResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(nullptr, ___internal_method, p);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECAlgorithms::ImplShamirsTrickJsf(Org::BouncyCastle::Math::EC::ECPoint P, Org::BouncyCastle::Math::BigInteger k, Org::BouncyCastle::Math::EC::ECPoint Q, Org::BouncyCastle::Math::BigInteger l)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "ImplShamirsTrickJsf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(nullptr, ___internal_method, P, k, Q, l);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECAlgorithms::ImplShamirsTrickWNaf(Org::BouncyCastle::Math::EC::ECPoint P, Org::BouncyCastle::Math::BigInteger k, Org::BouncyCastle::Math::EC::ECPoint Q, Org::BouncyCastle::Math::BigInteger l)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "ImplShamirsTrickWNaf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(nullptr, ___internal_method, P, k, Q, l);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECAlgorithms::ImplShamirsTrickWNaf(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism endomorphism, Org::BouncyCastle::Math::EC::ECPoint P, Org::BouncyCastle::Math::BigInteger k, Org::BouncyCastle::Math::BigInteger l)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "ImplShamirsTrickWNaf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Endo::ECEndomorphism>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(nullptr, ___internal_method, endomorphism, P, k, l);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECAlgorithms::ImplShamirsTrickWNaf(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> preCompP, ::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> preCompNegP, ::ArrayW<uint8_t> wnafP, ::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> preCompQ, ::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> preCompNegQ, ::ArrayW<uint8_t> wnafQ)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "ImplShamirsTrickWNaf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::EC::ECPoint>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::EC::ECPoint>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::EC::ECPoint>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::EC::ECPoint>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(nullptr, ___internal_method, preCompP, preCompNegP, wnafP, preCompQ, preCompNegQ, wnafQ);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECAlgorithms::ImplSumOfMultiplies(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> ps, ::ArrayW<Org::BouncyCastle::Math::BigInteger> ks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "ImplSumOfMultiplies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::EC::ECPoint>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::BigInteger>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(nullptr, ___internal_method, ps, ks);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECAlgorithms::ImplSumOfMultipliesGlv(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> ps, ::ArrayW<Org::BouncyCastle::Math::BigInteger> ks, Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism glvEndomorphism)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "ImplSumOfMultipliesGlv",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::EC::ECPoint>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::BigInteger>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(nullptr, ___internal_method, ps, ks, glvEndomorphism);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECAlgorithms::ImplSumOfMultiplies(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism endomorphism, ::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> ps, ::ArrayW<Org::BouncyCastle::Math::BigInteger> ks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "ImplSumOfMultiplies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Endo::ECEndomorphism>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::EC::ECPoint>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::BigInteger>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(nullptr, ___internal_method, endomorphism, ps, ks);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECAlgorithms::ImplSumOfMultiplies(::ArrayW<bool> negs, ::ArrayW<Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo> infos, ::ArrayW<::ArrayW<uint8_t>> wnafs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "ImplSumOfMultiplies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<uint8_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(nullptr, ___internal_method, negs, infos, wnafs);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECAlgorithms::ImplShamirsTrickFixedPoint(Org::BouncyCastle::Math::EC::ECPoint p, Org::BouncyCastle::Math::BigInteger k, Org::BouncyCastle::Math::EC::ECPoint q, Org::BouncyCastle::Math::BigInteger l)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            "ImplShamirsTrickFixedPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(nullptr, ___internal_method, p, k, q, l);
}
// Ctor Parameters []
 Org::BouncyCastle::Math::EC::ECAlgorithms::ECAlgorithms()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ECAlgorithms>())) {}
 void Org::BouncyCastle::Math::EC::ECAlgorithms::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECAlgorithms>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
