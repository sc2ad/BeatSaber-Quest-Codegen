#pragma once
namespace {
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__WNafUtilities_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__PreCompInfo_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPointMap_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__WNafPreCompInfo_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__IPreCompCallback_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback::*)(::Org::BouncyCastle::Math::EC::ECCurve, int32_t)>(&::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xfaafe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECCurve>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback.Precompute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo (::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback::*)(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo)>(&::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback::Precompute)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xfac030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback>::get(),
                            "Precompute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback
constexpr  ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback::operator ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback() const noexcept {
return ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback::__set_m_curve(::Org::BouncyCastle::Math::EC::ECCurve value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Math::EC::ECCurve, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Math::EC::ECCurve>(value));
}
constexpr ::Org::BouncyCastle::Math::EC::ECCurve ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback::__get_m_curve() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Math::EC::ECCurve, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback::__set_m_confWidth(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback::__get_m_confWidth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "curve", ty: "::Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "confWidth", ty: "int32_t", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback(::Org::BouncyCastle::Math::EC::ECCurve curve, int32_t confWidth)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback>(curve, confWidth))) {}
 void ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback::_ctor(::Org::BouncyCastle::Math::EC::ECCurve curve, int32_t confWidth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECCurve>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, curve, confWidth);
}
 ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback::Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo existing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__ConfigureBasepointCallback>::get(),
                            "Precompute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo, false>(const_cast<void*>(instance), ___internal_method, existing);
}
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback::*)(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo, bool, ::Org::BouncyCastle::Math::EC::ECPointMap)>(&::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xfabcac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPointMap>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback.Precompute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo (::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback::*)(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo)>(&::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback::Precompute)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0xfac1e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback>::get(),
                            "Precompute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback
constexpr  ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback::operator ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback() const noexcept {
return ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback::__set_m_infoP(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo>(value));
}
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback::__get_m_infoP() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback::__set_m_includeNegated(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback::__get_m_includeNegated() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback::__set_m_pointMap(::Org::BouncyCastle::Math::EC::ECPointMap value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Math::EC::ECPointMap, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Math::EC::ECPointMap>(value));
}
constexpr ::Org::BouncyCastle::Math::EC::ECPointMap ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback::__get_m_pointMap() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Math::EC::ECPointMap, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "infoP", ty: "::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo", modifiers: "", def_value: None }, CppParam { name: "includeNegated", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "pointMap", ty: "::Org::BouncyCastle::Math::EC::ECPointMap", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo infoP, bool includeNegated, ::Org::BouncyCastle::Math::EC::ECPointMap pointMap)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback>(infoP, includeNegated, pointMap))) {}
 void ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback::_ctor(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo infoP, bool includeNegated, ::Org::BouncyCastle::Math::EC::ECPointMap pointMap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPointMap>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, infoP, includeNegated, pointMap);
}
 ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback::Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo existing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__MapPointCallback>::get(),
                            "Precompute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo, false>(const_cast<void*>(instance), ___internal_method, existing);
}
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback::*)(::Org::BouncyCastle::Math::EC::ECPoint, int32_t, bool)>(&::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xfabcec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback.Precompute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo (::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback::*)(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo)>(&::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback::Precompute)> {
  constexpr static std::size_t size = 0x7e4;
  constexpr static std::size_t addrs = 0xfac560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback>::get(),
                            "Precompute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback.CheckExisting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback::*)(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo, int32_t, int32_t, bool)>(&::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback::CheckExisting)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xfacd44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback>::get(),
                            "CheckExisting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback.CheckTable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback::*)(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint>, int32_t)>(&::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback::CheckTable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xface4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback>::get(),
                            "CheckTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback
constexpr  ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback::operator ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback() const noexcept {
return ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback::__set_m_p(::Org::BouncyCastle::Math::EC::ECPoint value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Math::EC::ECPoint, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Math::EC::ECPoint>(value));
}
constexpr ::Org::BouncyCastle::Math::EC::ECPoint ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback::__get_m_p() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Math::EC::ECPoint, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback::__set_m_minWidth(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback::__get_m_minWidth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback::__set_m_includeNegated(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback::__get_m_includeNegated() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "p", ty: "::Org::BouncyCastle::Math::EC::ECPoint", modifiers: "", def_value: None }, CppParam { name: "minWidth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "includeNegated", ty: "bool", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback(::Org::BouncyCastle::Math::EC::ECPoint p, int32_t minWidth, bool includeNegated)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback>(p, minWidth, includeNegated))) {}
 void ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback::_ctor(::Org::BouncyCastle::Math::EC::ECPoint p, int32_t minWidth, bool includeNegated)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, p, minWidth, includeNegated);
}
 ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback::Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo existing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback>::get(),
                            "Precompute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo, false>(const_cast<void*>(instance), ___internal_method, existing);
}
 bool ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback::CheckExisting(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo existingWNaf, int32_t width, int32_t reqPreCompLen, bool includeNegated)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback>::get(),
                            "CheckExisting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, existingWNaf, width, reqPreCompLen, includeNegated);
}
 bool ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback::CheckTable(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint> table, int32_t reqLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeCallback>::get(),
                            "CheckTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, table, reqLen);
}
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback::*)(::Org::BouncyCastle::Math::EC::ECPoint, ::Org::BouncyCastle::Math::EC::ECPointMap, ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo, bool)>(&::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xfabe6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPointMap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback.Precompute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo (::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback::*)(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo)>(&::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback::Precompute)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0xface68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback>::get(),
                            "Precompute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback.CheckExisting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback::*)(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo, int32_t, int32_t, bool)>(&::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback::CheckExisting)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xfad270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback>::get(),
                            "CheckExisting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback.CheckTable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback::*)(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint>, int32_t)>(&::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback::CheckTable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xfad30c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback>::get(),
                            "CheckTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback
constexpr  ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback::operator ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback() const noexcept {
return ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback::__set_m_point(::Org::BouncyCastle::Math::EC::ECPoint value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Math::EC::ECPoint, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Math::EC::ECPoint>(value));
}
constexpr ::Org::BouncyCastle::Math::EC::ECPoint ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback::__get_m_point() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Math::EC::ECPoint, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback::__set_m_pointMap(::Org::BouncyCastle::Math::EC::ECPointMap value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Math::EC::ECPointMap, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Math::EC::ECPointMap>(value));
}
constexpr ::Org::BouncyCastle::Math::EC::ECPointMap ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback::__get_m_pointMap() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Math::EC::ECPointMap, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback::__set_m_fromWNaf(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo>(value));
}
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback::__get_m_fromWNaf() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback::__set_m_includeNegated(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback::__get_m_includeNegated() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "point", ty: "::Org::BouncyCastle::Math::EC::ECPoint", modifiers: "", def_value: None }, CppParam { name: "pointMap", ty: "::Org::BouncyCastle::Math::EC::ECPointMap", modifiers: "", def_value: None }, CppParam { name: "fromWNaf", ty: "::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo", modifiers: "", def_value: None }, CppParam { name: "includeNegated", ty: "bool", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback(::Org::BouncyCastle::Math::EC::ECPoint point, ::Org::BouncyCastle::Math::EC::ECPointMap pointMap, ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo fromWNaf, bool includeNegated)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback>(point, pointMap, fromWNaf, includeNegated))) {}
 void ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback::_ctor(::Org::BouncyCastle::Math::EC::ECPoint point, ::Org::BouncyCastle::Math::EC::ECPointMap pointMap, ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo fromWNaf, bool includeNegated)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPointMap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, point, pointMap, fromWNaf, includeNegated);
}
 ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback::Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo existing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback>::get(),
                            "Precompute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo, false>(const_cast<void*>(instance), ___internal_method, existing);
}
 bool ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback::CheckExisting(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo existingWNaf, int32_t width, int32_t reqPreCompLen, bool includeNegated)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback>::get(),
                            "CheckExisting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, existingWNaf, width, reqPreCompLen, includeNegated);
}
 bool ::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback::CheckTable(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint> table, int32_t reqLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::____Org__BouncyCastle__Math__EC__Multiplier__WNafUtilities__PrecomputeWithPointMapCallback>::get(),
                            "CheckTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, table, reqLen);
}
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.ConfigureBasepoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Math::EC::ECPoint)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::ConfigureBasepoint)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xfaae64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "ConfigureBasepoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.GenerateCompactNaf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (*)(::Org::BouncyCastle::Math::BigInteger)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateCompactNaf)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0xfa9c80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "GenerateCompactNaf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.GenerateCompactWindowNaf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (*)(int32_t, ::Org::BouncyCastle::Math::BigInteger)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateCompactWindowNaf)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0xfaaa38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "GenerateCompactWindowNaf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.GenerateJsf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Math::BigInteger, ::Org::BouncyCastle::Math::BigInteger)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateJsf)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0xfab098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "GenerateJsf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.GenerateNaf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Math::BigInteger)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateNaf)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xfab3b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "GenerateNaf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.GenerateWindowNaf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(int32_t, ::Org::BouncyCastle::Math::BigInteger)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateWindowNaf)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0xfab53c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "GenerateWindowNaf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.GetNafWeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Org::BouncyCastle::Math::BigInteger)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetNafWeight)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xfab814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "GetNafWeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.GetWNafPreCompInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo (*)(::Org::BouncyCastle::Math::EC::ECPoint)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWNafPreCompInfo)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xfab878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "GetWNafPreCompInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.GetWNafPreCompInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo (*)(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWNafPreCompInfo)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xfab910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "GetWNafPreCompInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.GetWindowSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWindowSize)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xfaa898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "GetWindowSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.GetWindowSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWindowSize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xfaba40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "GetWindowSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.GetWindowSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, ::ArrayW<int32_t>)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWindowSize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xfabab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "GetWindowSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.GetWindowSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, ::ArrayW<int32_t>, int32_t)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWindowSize)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xfab988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "GetWindowSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.MapPointWithPrecomp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint (*)(::Org::BouncyCastle::Math::EC::ECPoint, int32_t, bool, ::Org::BouncyCastle::Math::EC::ECPointMap)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::MapPointWithPrecomp)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xfabb20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "MapPointWithPrecomp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPointMap>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.Precompute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo (*)(::Org::BouncyCastle::Math::EC::ECPoint, int32_t, bool)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::Precompute)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xfaa8fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "Precompute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.PrecomputeWithPointMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo (*)(::Org::BouncyCastle::Math::EC::ECPoint, ::Org::BouncyCastle::Math::EC::ECPointMap, ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo, bool)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeWithPointMap)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xfabd2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "PrecomputeWithPointMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPointMap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.Trim
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::Trim)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xfab330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.Trim
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (*)(::ArrayW<int32_t>, int32_t)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::Trim)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xfab014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities.ResizeTable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint> (*)(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint>, int32_t)>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::ResizeTable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xfabeb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "ResizeTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::*)()>(&::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfac028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::__set_PRECOMP_NAME(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "PRECOMP_NAME", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get>(std::forward<::StringW>(value));
}
 ::StringW ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::__get_PRECOMP_NAME()  {
return ::cordl_internals::getStaticField<::StringW, "PRECOMP_NAME", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get>();
}
 void ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::__set_DEFAULT_WINDOW_SIZE_CUTOFFS(::ArrayW<int32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "DEFAULT_WINDOW_SIZE_CUTOFFS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get>(std::forward<::ArrayW<int32_t>>(value));
}
 ::ArrayW<int32_t> ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::__get_DEFAULT_WINDOW_SIZE_CUTOFFS()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "DEFAULT_WINDOW_SIZE_CUTOFFS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get>();
}
 void ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::__set_MAX_WIDTH(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "MAX_WIDTH", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get>(std::forward<int32_t>(value));
}
 int32_t ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::__get_MAX_WIDTH()  {
return ::cordl_internals::getStaticField<int32_t, "MAX_WIDTH", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get>();
}
 void ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::__set_EMPTY_POINTS(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint> value)  {
::cordl_internals::setStaticField<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint>, "EMPTY_POINTS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get>(std::forward<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint>>(value));
}
 ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint> ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::__get_EMPTY_POINTS()  {
return ::cordl_internals::getStaticField<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint>, "EMPTY_POINTS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get>();
}
 void ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::ConfigureBasepoint(::Org::BouncyCastle::Math::EC::ECPoint p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "ConfigureBasepoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, p);
}
 ::ArrayW<int32_t> ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateCompactNaf(::Org::BouncyCastle::Math::BigInteger k)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "GenerateCompactNaf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(nullptr, ___internal_method, k);
}
 ::ArrayW<int32_t> ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateCompactWindowNaf(int32_t width, ::Org::BouncyCastle::Math::BigInteger k)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "GenerateCompactWindowNaf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(nullptr, ___internal_method, width, k);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateJsf(::Org::BouncyCastle::Math::BigInteger g, ::Org::BouncyCastle::Math::BigInteger h)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "GenerateJsf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, g, h);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateNaf(::Org::BouncyCastle::Math::BigInteger k)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "GenerateNaf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, k);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GenerateWindowNaf(int32_t width, ::Org::BouncyCastle::Math::BigInteger k)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "GenerateWindowNaf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, width, k);
}
 int32_t ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetNafWeight(::Org::BouncyCastle::Math::BigInteger k)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "GetNafWeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, k);
}
 ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWNafPreCompInfo(::Org::BouncyCastle::Math::EC::ECPoint p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "GetWNafPreCompInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo, false>(nullptr, ___internal_method, p);
}
 ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWNafPreCompInfo(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo preCompInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "GetWNafPreCompInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo, false>(nullptr, ___internal_method, preCompInfo);
}
 int32_t ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWindowSize(int32_t bits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "GetWindowSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, bits);
}
 int32_t ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWindowSize(int32_t bits, int32_t maxWidth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "GetWindowSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, bits, maxWidth);
}
 int32_t ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWindowSize(int32_t bits, ::ArrayW<int32_t> windowSizeCutoffs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "GetWindowSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, bits, windowSizeCutoffs);
}
 int32_t ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::GetWindowSize(int32_t bits, ::ArrayW<int32_t> windowSizeCutoffs, int32_t maxWidth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "GetWindowSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, bits, windowSizeCutoffs, maxWidth);
}
 ::Org::BouncyCastle::Math::EC::ECPoint ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::MapPointWithPrecomp(::Org::BouncyCastle::Math::EC::ECPoint p, int32_t minWidth, bool includeNegated, ::Org::BouncyCastle::Math::EC::ECPointMap pointMap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "MapPointWithPrecomp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPointMap>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint, false>(nullptr, ___internal_method, p, minWidth, includeNegated, pointMap);
}
 ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::Precompute(::Org::BouncyCastle::Math::EC::ECPoint p, int32_t minWidth, bool includeNegated)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "Precompute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo, false>(nullptr, ___internal_method, p, minWidth, includeNegated);
}
 ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeWithPointMap(::Org::BouncyCastle::Math::EC::ECPoint p, ::Org::BouncyCastle::Math::EC::ECPointMap pointMap, ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo fromWNaf, bool includeNegated)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "PrecomputeWithPointMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPointMap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo, false>(nullptr, ___internal_method, p, pointMap, fromWNaf, includeNegated);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::Trim(::ArrayW<uint8_t> a, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, a, length);
}
 ::ArrayW<int32_t> ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::Trim(::ArrayW<int32_t> a, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(nullptr, ___internal_method, a, length);
}
 ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint> ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::ResizeTable(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint> a, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            "ResizeTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint>, false>(nullptr, ___internal_method, a, length);
}
// Ctor Parameters []
 ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::WNafUtilities()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<WNafUtilities>())) {}
 void ::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
