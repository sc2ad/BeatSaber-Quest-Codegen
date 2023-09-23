#pragma once
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__IPreCompCallback_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__PreCompInfo_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback::*)(Org::BouncyCastle::Math::EC::ECPoint, bool, bool)>(&Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xf42e34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback.Precompute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo (Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback::*)(Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo)>(&Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback::Precompute)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xf43804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback>::get(),
                            "Precompute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback
constexpr  Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback::operator Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback() const noexcept {
return Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback::__set_m_outer(Org::BouncyCastle::Math::EC::ECPoint value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::EC::ECPoint, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::EC::ECPoint>(value));
}
constexpr Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback::__get_m_outer() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::EC::ECPoint, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback::__set_m_decompressed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback::__get_m_decompressed() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback::__set_m_checkOrder(bool value)  {
::cordl_internals::setInstanceField<bool, 0x19>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback::__get_m_checkOrder() const {
return ::cordl_internals::getInstanceField<bool, 0x19>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "outer", ty: "Org::BouncyCastle::Math::EC::ECPoint", modifiers: "", def_value: None }, CppParam { name: "decompressed", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "checkOrder", ty: "bool", modifiers: "", def_value: None }]
 Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback::Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback(Org::BouncyCastle::Math::EC::ECPoint outer, bool decompressed, bool checkOrder)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback>(outer, decompressed, checkOrder))) {}
 void Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback::_ctor(Org::BouncyCastle::Math::EC::ECPoint outer, bool decompressed, bool checkOrder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, outer, decompressed, checkOrder);
}
 Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback::Precompute(Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo existing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECPoint__ValidityCallback>::get(),
                            "Precompute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo, false>(const_cast<void*>(instance), ___internal_method, existing);
}
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.GetInitialZCoords
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> (*)(Org::BouncyCastle::Math::EC::ECCurve)>(&Org::BouncyCastle::Math::EC::ECPoint::GetInitialZCoords)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0xf423f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "GetInitialZCoords",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECCurve>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::ECPoint::*)(Org::BouncyCastle::Math::EC::ECCurve, Org::BouncyCastle::Math::EC::ECFieldElement, Org::BouncyCastle::Math::EC::ECFieldElement, bool)>(&Org::BouncyCastle::Math::EC::ECPoint::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xf4269c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECCurve>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECFieldElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECFieldElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::ECPoint::*)(Org::BouncyCastle::Math::EC::ECCurve, Org::BouncyCastle::Math::EC::ECFieldElement, Org::BouncyCastle::Math::EC::ECFieldElement, ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement>, bool)>(&Org::BouncyCastle::Math::EC::ECPoint::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xf42738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECCurve>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECFieldElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECFieldElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.SatisfiesCurveEquation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::SatisfiesCurveEquation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.SatisfiesOrder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::SatisfiesOrder)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xf4278c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.GetDetachedPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::GetDetachedPoint)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xf4288c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "GetDetachedPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.get_Curve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECCurve (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::get_Curve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf428b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.Detach
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::Detach)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.get_CurveCoordinateSystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::get_CurveCoordinateSystem)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xf428c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.get_AffineXCoord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::get_AffineXCoord)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xf428dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.get_AffineYCoord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::get_AffineYCoord)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xf42908;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.get_XCoord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::get_XCoord)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf42934;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.get_YCoord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::get_YCoord)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf4293c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.GetZCoord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement (Org::BouncyCastle::Math::EC::ECPoint::*)(int32_t)>(&Org::BouncyCastle::Math::EC::ECPoint::GetZCoord)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xf42944;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.GetZCoords
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::GetZCoords)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xf42984;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.get_RawXCoord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::get_RawXCoord)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf42a0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "get_RawXCoord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.get_RawYCoord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::get_RawYCoord)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf42a14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "get_RawYCoord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.get_RawZCoords
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::get_RawZCoords)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf42a1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "get_RawZCoords",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.CheckNormalized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::CheckNormalized)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xf42a24;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.IsNormalized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::IsNormalized)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xf42a90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.Normalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::Normalize)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xf42b00;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.Normalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (Org::BouncyCastle::Math::EC::ECPoint::*)(Org::BouncyCastle::Math::EC::ECFieldElement)>(&Org::BouncyCastle::Math::EC::ECPoint::Normalize)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xf42c90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.CreateScaledPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (Org::BouncyCastle::Math::EC::ECPoint::*)(Org::BouncyCastle::Math::EC::ECFieldElement, Org::BouncyCastle::Math::EC::ECFieldElement)>(&Org::BouncyCastle::Math::EC::ECPoint::CreateScaledPoint)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xf42d84;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.get_IsInfinity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::get_IsInfinity)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xf3d574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "get_IsInfinity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.get_IsCompressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::get_IsCompressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf42e20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "get_IsCompressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.IsValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::IsValid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xf3cd1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "IsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.IsValidPartial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::IsValidPartial)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xf42e28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "IsValidPartial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.ImplIsValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::ECPoint::*)(bool, bool)>(&Org::BouncyCastle::Math::EC::ECPoint::ImplIsValid)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xf3e4e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "ImplIsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.ScaleX
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (Org::BouncyCastle::Math::EC::ECPoint::*)(Org::BouncyCastle::Math::EC::ECFieldElement)>(&Org::BouncyCastle::Math::EC::ECPoint::ScaleX)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xf42e74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.ScaleXNegateY
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (Org::BouncyCastle::Math::EC::ECPoint::*)(Org::BouncyCastle::Math::EC::ECFieldElement)>(&Org::BouncyCastle::Math::EC::ECPoint::ScaleXNegateY)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xf42f04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.ScaleY
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (Org::BouncyCastle::Math::EC::ECPoint::*)(Org::BouncyCastle::Math::EC::ECFieldElement)>(&Org::BouncyCastle::Math::EC::ECPoint::ScaleY)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xf42fb4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.ScaleYNegateX
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (Org::BouncyCastle::Math::EC::ECPoint::*)(Org::BouncyCastle::Math::EC::ECFieldElement)>(&Org::BouncyCastle::Math::EC::ECPoint::ScaleYNegateX)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xf43058;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::ECPoint::*)(::bs_hook::Il2CppWrapperType)>(&Org::BouncyCastle::Math::EC::ECPoint::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xf43114;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::ECPoint::*)(Org::BouncyCastle::Math::EC::ECPoint)>(&Org::BouncyCastle::Math::EC::ECPoint::Equals)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0xf431a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::GetHashCode)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xf43450;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::ToString)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xf43514;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.GetEncoded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::GetEncoded)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xf4365c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.GetEncoded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Math::EC::ECPoint::*)(bool)>(&Org::BouncyCastle::Math::EC::ECPoint::GetEncoded)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.get_CompressionYTilde
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::get_CompressionYTilde)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (Org::BouncyCastle::Math::EC::ECPoint::*)(Org::BouncyCastle::Math::EC::ECPoint)>(&Org::BouncyCastle::Math::EC::ECPoint::Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.Subtract
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (Org::BouncyCastle::Math::EC::ECPoint::*)(Org::BouncyCastle::Math::EC::ECPoint)>(&Org::BouncyCastle::Math::EC::ECPoint::Subtract)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.Negate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::Negate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.TimesPow2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (Org::BouncyCastle::Math::EC::ECPoint::*)(int32_t)>(&Org::BouncyCastle::Math::EC::ECPoint::TimesPow2)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xf43670;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.Twice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::Twice)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.Multiply
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (Org::BouncyCastle::Math::EC::ECPoint::*)(Org::BouncyCastle::Math::BigInteger)>(&Org::BouncyCastle::Math::EC::ECPoint::Multiply)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.TwicePlus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (Org::BouncyCastle::Math::EC::ECPoint::*)(Org::BouncyCastle::Math::EC::ECPoint)>(&Org::BouncyCastle::Math::EC::ECPoint::TwicePlus)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xf43710;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::ECPoint.ThreeTimes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (Org::BouncyCastle::Math::EC::ECPoint::*)()>(&Org::BouncyCastle::Math::EC::ECPoint::ThreeTimes)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xf4374c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::ECPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Math::EC::ECPoint::__set_Random(Org::BouncyCastle::Security::SecureRandom value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Security::SecureRandom, "Random", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get>(std::forward<Org::BouncyCastle::Security::SecureRandom>(value));
}
 Org::BouncyCastle::Security::SecureRandom Org::BouncyCastle::Math::EC::ECPoint::__get_Random()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Security::SecureRandom, "Random", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get>();
}
 void Org::BouncyCastle::Math::EC::ECPoint::__set_EMPTY_ZS(::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> value)  {
::cordl_internals::setStaticField<::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement>, "EMPTY_ZS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get>(std::forward<::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement>>(value));
}
 ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> Org::BouncyCastle::Math::EC::ECPoint::__get_EMPTY_ZS()  {
return ::cordl_internals::getStaticField<::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement>, "EMPTY_ZS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get>();
}
constexpr void Org::BouncyCastle::Math::EC::ECPoint::__set_m_curve(Org::BouncyCastle::Math::EC::ECCurve value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::EC::ECCurve, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::EC::ECCurve>(value));
}
constexpr Org::BouncyCastle::Math::EC::ECCurve Org::BouncyCastle::Math::EC::ECPoint::__get_m_curve() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::EC::ECCurve, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::ECPoint::__set_m_x(Org::BouncyCastle::Math::EC::ECFieldElement value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::EC::ECFieldElement, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::EC::ECFieldElement>(value));
}
constexpr Org::BouncyCastle::Math::EC::ECFieldElement Org::BouncyCastle::Math::EC::ECPoint::__get_m_x() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::EC::ECFieldElement, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::ECPoint::__set_m_y(Org::BouncyCastle::Math::EC::ECFieldElement value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::EC::ECFieldElement, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::EC::ECFieldElement>(value));
}
constexpr Org::BouncyCastle::Math::EC::ECFieldElement Org::BouncyCastle::Math::EC::ECPoint::__get_m_y() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::EC::ECFieldElement, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::ECPoint::__set_m_zs(::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> value)  {
::cordl_internals::setInstanceField<::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement>>(value));
}
constexpr ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> Org::BouncyCastle::Math::EC::ECPoint::__get_m_zs() const {
return ::cordl_internals::getInstanceField<::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::ECPoint::__set_m_withCompression(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Org::BouncyCastle::Math::EC::ECPoint::__get_m_withCompression() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::ECPoint::__set_m_preCompTable(System::Collections::IDictionary value)  {
::cordl_internals::setInstanceField<System::Collections::IDictionary, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::IDictionary>(value));
}
constexpr System::Collections::IDictionary Org::BouncyCastle::Math::EC::ECPoint::__get_m_preCompTable() const {
return ::cordl_internals::getInstanceField<System::Collections::IDictionary, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> Org::BouncyCastle::Math::EC::ECPoint::GetInitialZCoords(Org::BouncyCastle::Math::EC::ECCurve curve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "GetInitialZCoords",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECCurve>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement>, false>(nullptr, ___internal_method, curve);
}
// Ctor Parameters [CppParam { name: "curve", ty: "Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "x", ty: "Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "y", ty: "Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "withCompression", ty: "bool", modifiers: "", def_value: None }]
 Org::BouncyCastle::Math::EC::ECPoint::ECPoint(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, bool withCompression)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ECPoint>(curve, x, y, withCompression))) {}
 void Org::BouncyCastle::Math::EC::ECPoint::_ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, bool withCompression)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECCurve>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECFieldElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECFieldElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, curve, x, y, withCompression);
}
// Ctor Parameters [CppParam { name: "curve", ty: "Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "x", ty: "Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "y", ty: "Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "zs", ty: "::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement>", modifiers: "", def_value: None }, CppParam { name: "withCompression", ty: "bool", modifiers: "", def_value: None }]
 Org::BouncyCastle::Math::EC::ECPoint::ECPoint(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> zs, bool withCompression)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ECPoint>(curve, x, y, zs, withCompression))) {}
 void Org::BouncyCastle::Math::EC::ECPoint::_ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> zs, bool withCompression)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECCurve>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECFieldElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECFieldElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, curve, x, y, zs, withCompression);
}
 bool Org::BouncyCastle::Math::EC::ECPoint::SatisfiesCurveEquation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "SatisfiesCurveEquation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Org::BouncyCastle::Math::EC::ECPoint::SatisfiesOrder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "SatisfiesOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECPoint::GetDetachedPoint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "GetDetachedPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Math::EC::ECCurve Org::BouncyCastle::Math::EC::ECPoint::get_Curve()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "get_Curve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECCurve, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECPoint::Detach()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "Detach",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Org::BouncyCastle::Math::EC::ECPoint::get_CurveCoordinateSystem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "get_CurveCoordinateSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Math::EC::ECFieldElement Org::BouncyCastle::Math::EC::ECPoint::get_AffineXCoord()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "get_AffineXCoord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECFieldElement, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Math::EC::ECFieldElement Org::BouncyCastle::Math::EC::ECPoint::get_AffineYCoord()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "get_AffineYCoord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECFieldElement, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Math::EC::ECFieldElement Org::BouncyCastle::Math::EC::ECPoint::get_XCoord()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "get_XCoord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECFieldElement, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Math::EC::ECFieldElement Org::BouncyCastle::Math::EC::ECPoint::get_YCoord()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "get_YCoord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECFieldElement, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Math::EC::ECFieldElement Org::BouncyCastle::Math::EC::ECPoint::GetZCoord(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "GetZCoord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECFieldElement, false>(const_cast<void*>(instance), ___internal_method, index);
}
 ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> Org::BouncyCastle::Math::EC::ECPoint::GetZCoords()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "GetZCoords",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement>, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Math::EC::ECFieldElement Org::BouncyCastle::Math::EC::ECPoint::get_RawXCoord()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "get_RawXCoord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECFieldElement, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Math::EC::ECFieldElement Org::BouncyCastle::Math::EC::ECPoint::get_RawYCoord()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "get_RawYCoord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECFieldElement, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> Org::BouncyCastle::Math::EC::ECPoint::get_RawZCoords()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "get_RawZCoords",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement>, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Math::EC::ECPoint::CheckNormalized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "CheckNormalized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Org::BouncyCastle::Math::EC::ECPoint::IsNormalized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "IsNormalized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECPoint::Normalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "Normalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECPoint::Normalize(Org::BouncyCastle::Math::EC::ECFieldElement zInv)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "Normalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECFieldElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method, zInv);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECPoint::CreateScaledPoint(Org::BouncyCastle::Math::EC::ECFieldElement sx, Org::BouncyCastle::Math::EC::ECFieldElement sy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "CreateScaledPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECFieldElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECFieldElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method, sx, sy);
}
 bool Org::BouncyCastle::Math::EC::ECPoint::get_IsInfinity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "get_IsInfinity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Org::BouncyCastle::Math::EC::ECPoint::get_IsCompressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "get_IsCompressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Org::BouncyCastle::Math::EC::ECPoint::IsValid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "IsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Org::BouncyCastle::Math::EC::ECPoint::IsValidPartial()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "IsValidPartial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Org::BouncyCastle::Math::EC::ECPoint::ImplIsValid(bool decompressed, bool checkOrder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "ImplIsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, decompressed, checkOrder);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECPoint::ScaleX(Org::BouncyCastle::Math::EC::ECFieldElement scale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "ScaleX",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECFieldElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method, scale);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECPoint::ScaleXNegateY(Org::BouncyCastle::Math::EC::ECFieldElement scale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "ScaleXNegateY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECFieldElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method, scale);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECPoint::ScaleY(Org::BouncyCastle::Math::EC::ECFieldElement scale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "ScaleY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECFieldElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method, scale);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECPoint::ScaleYNegateX(Org::BouncyCastle::Math::EC::ECFieldElement scale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "ScaleYNegateX",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECFieldElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method, scale);
}
 bool Org::BouncyCastle::Math::EC::ECPoint::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 bool Org::BouncyCastle::Math::EC::ECPoint::Equals(Org::BouncyCastle::Math::EC::ECPoint other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
 int32_t Org::BouncyCastle::Math::EC::ECPoint::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW Org::BouncyCastle::Math::EC::ECPoint::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Math::EC::ECPoint::GetEncoded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "GetEncoded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Math::EC::ECPoint::GetEncoded(bool compressed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "GetEncoded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, compressed);
}
 bool Org::BouncyCastle::Math::EC::ECPoint::get_CompressionYTilde()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "get_CompressionYTilde",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECPoint::Add(Org::BouncyCastle::Math::EC::ECPoint b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method, b);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECPoint::Subtract(Org::BouncyCastle::Math::EC::ECPoint b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "Subtract",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method, b);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECPoint::Negate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "Negate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECPoint::TimesPow2(int32_t e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "TimesPow2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method, e);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECPoint::Twice()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "Twice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECPoint::Multiply(Org::BouncyCastle::Math::BigInteger b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "Multiply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method, b);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECPoint::TwicePlus(Org::BouncyCastle::Math::EC::ECPoint b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "TwicePlus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method, b);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::ECPoint::ThreeTimes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::ECPoint>::get(),
                            "ThreeTimes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method);
}
