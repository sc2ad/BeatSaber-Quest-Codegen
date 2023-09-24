#pragma once
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__EndoUtilities_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__EndoUtilities_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__ScalarSplitParameters_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__ECEndomorphism_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__IPreCompCallback_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__PreCompInfo_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__EndoPreCompInfo_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Endo::Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::Endo::Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback::*)(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism, Org::BouncyCastle::Math::EC::ECPoint)>(&Org::BouncyCastle::Math::EC::Endo::Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xfa7f40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Endo::Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Endo::ECEndomorphism>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Endo::Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback.Precompute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo (Org::BouncyCastle::Math::EC::Endo::Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback::*)(Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo)>(&Org::BouncyCastle::Math::EC::Endo::Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback::Precompute)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xfa7fd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Endo::Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback>::get(),
                            "Precompute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Endo::Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback.CheckExisting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::Endo::Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback::*)(Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo, Org::BouncyCastle::Math::EC::Endo::ECEndomorphism)>(&Org::BouncyCastle::Math::EC::Endo::Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback::CheckExisting)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xfa81cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Endo::Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback>::get(),
                            "CheckExisting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Endo::ECEndomorphism>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback
constexpr  Org::BouncyCastle::Math::EC::Endo::Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback::operator Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback() const noexcept {
return Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::Endo::Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback::__set_m_endomorphism(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::EC::Endo::ECEndomorphism, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::EC::Endo::ECEndomorphism>(value));
}
constexpr Org::BouncyCastle::Math::EC::Endo::ECEndomorphism Org::BouncyCastle::Math::EC::Endo::Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback::__get_m_endomorphism() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::EC::Endo::ECEndomorphism, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::Endo::Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback::__set_m_point(Org::BouncyCastle::Math::EC::ECPoint value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::EC::ECPoint, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::EC::ECPoint>(value));
}
constexpr Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::Endo::Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback::__get_m_point() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::EC::ECPoint, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Math::EC::Endo::Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback Org::BouncyCastle::Math::EC::Endo::Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback::New_ctor(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism endomorphism, Org::BouncyCastle::Math::EC::ECPoint point)  {
Org::BouncyCastle::Math::EC::Endo::Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Math::EC::Endo::Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback>(endomorphism, point))};
return o;
}
 void Org::BouncyCastle::Math::EC::Endo::Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback::_ctor(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism endomorphism, Org::BouncyCastle::Math::EC::ECPoint point)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Endo::Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Endo::ECEndomorphism>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, endomorphism, point);
}
 Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo Org::BouncyCastle::Math::EC::Endo::Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback::Precompute(Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo existing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Endo::Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback>::get(),
                            "Precompute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo, false>(const_cast<void*>(instance), ___internal_method, existing);
}
 bool Org::BouncyCastle::Math::EC::Endo::Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback::CheckExisting(Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo existingEndo, Org::BouncyCastle::Math::EC::Endo::ECEndomorphism endomorphism)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Endo::Org__BouncyCastle__Math__EC__Endo__EndoUtilities__MapPointCallback>::get(),
                            "CheckExisting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Endo::ECEndomorphism>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, existingEndo, endomorphism);
}
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Endo::EndoUtilities.DecomposeScalar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<Org::BouncyCastle::Math::BigInteger> (*)(Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters, Org::BouncyCastle::Math::BigInteger)>(&Org::BouncyCastle::Math::EC::Endo::EndoUtilities::DecomposeScalar)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0xfa7ae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Endo::EndoUtilities>::get(),
                            "DecomposeScalar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Endo::EndoUtilities.MapPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (*)(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism, Org::BouncyCastle::Math::EC::ECPoint)>(&Org::BouncyCastle::Math::EC::Endo::EndoUtilities::MapPoint)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xfa7e18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Endo::EndoUtilities>::get(),
                            "MapPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Endo::ECEndomorphism>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Endo::EndoUtilities.CalculateB
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger (*)(Org::BouncyCastle::Math::BigInteger, Org::BouncyCastle::Math::BigInteger, int32_t)>(&Org::BouncyCastle::Math::EC::Endo::EndoUtilities::CalculateB)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xfa7d18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Endo::EndoUtilities>::get(),
                            "CalculateB",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Endo::EndoUtilities._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::Endo::EndoUtilities::*)()>(&Org::BouncyCastle::Math::EC::Endo::EndoUtilities::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfa7fcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Endo::EndoUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Math::EC::Endo::EndoUtilities::__set_PRECOMP_NAME(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "PRECOMP_NAME", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Endo::EndoUtilities>::get>(std::forward<::StringW>(value));
}
 ::StringW Org::BouncyCastle::Math::EC::Endo::EndoUtilities::__get_PRECOMP_NAME()  {
return ::cordl_internals::getStaticField<::StringW, "PRECOMP_NAME", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Endo::EndoUtilities>::get>();
}
 ::ArrayW<Org::BouncyCastle::Math::BigInteger> Org::BouncyCastle::Math::EC::Endo::EndoUtilities::DecomposeScalar(Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters p, Org::BouncyCastle::Math::BigInteger k)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Endo::EndoUtilities>::get(),
                            "DecomposeScalar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<Org::BouncyCastle::Math::BigInteger>, false>(nullptr, ___internal_method, p, k);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::Endo::EndoUtilities::MapPoint(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism endomorphism, Org::BouncyCastle::Math::EC::ECPoint p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Endo::EndoUtilities>::get(),
                            "MapPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Endo::ECEndomorphism>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(nullptr, ___internal_method, endomorphism, p);
}
 Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Math::EC::Endo::EndoUtilities::CalculateB(Org::BouncyCastle::Math::BigInteger k, Org::BouncyCastle::Math::BigInteger g, int32_t t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Endo::EndoUtilities>::get(),
                            "CalculateB",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::BigInteger, false>(nullptr, ___internal_method, k, g, t);
}
 Org::BouncyCastle::Math::EC::Endo::EndoUtilities Org::BouncyCastle::Math::EC::Endo::EndoUtilities::New_ctor()  {
Org::BouncyCastle::Math::EC::Endo::EndoUtilities o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Math::EC::Endo::EndoUtilities>())};
return o;
}
 void Org::BouncyCastle::Math::EC::Endo::EndoUtilities::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Endo::EndoUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
