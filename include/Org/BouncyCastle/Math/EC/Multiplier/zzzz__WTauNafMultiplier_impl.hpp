#pragma once
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__AbstractECMultiplier_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__WTauNafMultiplier_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractF2mPoint_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__IPreCompCallback_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__PreCompInfo_def.hpp"
#include "Org/BouncyCastle/Math/EC/Abc/zzzz__ZTauElement_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__WTauNafMultiplier_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Multiplier::Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::Multiplier::Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback::*)(Org::BouncyCastle::Math::EC::AbstractF2mPoint, int8_t)>(&Org::BouncyCastle::Math::EC::Multiplier::Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xfadabc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Multiplier::Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::AbstractF2mPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Multiplier::Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback.Precompute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo (Org::BouncyCastle::Math::EC::Multiplier::Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback::*)(Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo)>(&Org::BouncyCastle::Math::EC::Multiplier::Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback::Precompute)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xfadb54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Multiplier::Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback>::get(),
                            "Precompute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback
constexpr  Org::BouncyCastle::Math::EC::Multiplier::Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback::operator Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback() const noexcept {
return Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::Multiplier::Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback::__set_m_p(Org::BouncyCastle::Math::EC::AbstractF2mPoint value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::EC::AbstractF2mPoint, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::EC::AbstractF2mPoint>(value));
}
constexpr Org::BouncyCastle::Math::EC::AbstractF2mPoint Org::BouncyCastle::Math::EC::Multiplier::Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback::__get_m_p() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::EC::AbstractF2mPoint, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::Multiplier::Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback::__set_m_a(int8_t value)  {
::cordl_internals::setInstanceField<int8_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int8_t>(value));
}
constexpr int8_t Org::BouncyCastle::Math::EC::Multiplier::Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback::__get_m_a() const {
return ::cordl_internals::getInstanceField<int8_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Math::EC::Multiplier::Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback Org::BouncyCastle::Math::EC::Multiplier::Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback::New_ctor(Org::BouncyCastle::Math::EC::AbstractF2mPoint p, int8_t a)  {
Org::BouncyCastle::Math::EC::Multiplier::Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Math::EC::Multiplier::Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback>(p, a))};
return o;
}
 void Org::BouncyCastle::Math::EC::Multiplier::Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback::_ctor(Org::BouncyCastle::Math::EC::AbstractF2mPoint p, int8_t a)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Multiplier::Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::AbstractF2mPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, p, a);
}
 Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo Org::BouncyCastle::Math::EC::Multiplier::Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback::Precompute(Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo existing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Multiplier::Org__BouncyCastle__Math__EC__Multiplier__WTauNafMultiplier__WTauNafCallback>::get(),
                            "Precompute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo, false>(const_cast<void*>(instance), ___internal_method, existing);
}
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier.MultiplyPositive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::*)(Org::BouncyCastle::Math::EC::ECPoint, Org::BouncyCastle::Math::BigInteger)>(&Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::MultiplyPositive)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xfad328;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier.MultiplyWTnaf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::AbstractF2mPoint (Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::*)(Org::BouncyCastle::Math::EC::AbstractF2mPoint, Org::BouncyCastle::Math::EC::Abc::ZTauElement, int8_t, int8_t)>(&Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::MultiplyWTnaf)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xfad51c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier>::get(),
                            "MultiplyWTnaf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::AbstractF2mPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Abc::ZTauElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier.MultiplyFromWTnaf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::AbstractF2mPoint (*)(Org::BouncyCastle::Math::EC::AbstractF2mPoint, ::ArrayW<int8_t>)>(&Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::MultiplyFromWTnaf)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0xfad668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier>::get(),
                            "MultiplyFromWTnaf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::AbstractF2mPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::*)()>(&Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfadb4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::__set_PRECOMP_NAME(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "PRECOMP_NAME", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier>::get>(std::forward<::StringW>(value));
}
 ::StringW Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::__get_PRECOMP_NAME()  {
return ::cordl_internals::getStaticField<::StringW, "PRECOMP_NAME", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier>::get>();
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::MultiplyPositive(Org::BouncyCastle::Math::EC::ECPoint point, Org::BouncyCastle::Math::BigInteger k)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier>::get(),
                            "MultiplyPositive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method, point, k);
}
 Org::BouncyCastle::Math::EC::AbstractF2mPoint Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::MultiplyWTnaf(Org::BouncyCastle::Math::EC::AbstractF2mPoint p, Org::BouncyCastle::Math::EC::Abc::ZTauElement lambda, int8_t a, int8_t mu)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier>::get(),
                            "MultiplyWTnaf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::AbstractF2mPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Abc::ZTauElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::AbstractF2mPoint, false>(const_cast<void*>(instance), ___internal_method, p, lambda, a, mu);
}
 Org::BouncyCastle::Math::EC::AbstractF2mPoint Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::MultiplyFromWTnaf(Org::BouncyCastle::Math::EC::AbstractF2mPoint p, ::ArrayW<int8_t> u)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier>::get(),
                            "MultiplyFromWTnaf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::AbstractF2mPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::AbstractF2mPoint, false>(nullptr, ___internal_method, p, u);
}
 Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::New_ctor()  {
Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier>())};
return o;
}
 void Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
