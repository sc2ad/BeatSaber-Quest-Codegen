#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__OVRFaceExpressions_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRPermissionsRequester_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceRegionConfidence::____GlobalNamespace__OVRFaceExpressions__FaceRegionConfidence(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceRegionConfidence::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceRegionConfidence::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceRegionConfidence  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceRegionConfidence::Lower{0};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceRegionConfidence  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceRegionConfidence::Upper{1};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceRegionConfidence  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceRegionConfidence::Max{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::____GlobalNamespace__OVRFaceExpressions__FaceExpression(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::BrowLowererL{0};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::BrowLowererR{1};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::CheekPuffL{2};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::CheekPuffR{3};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::CheekRaiserL{4};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::CheekRaiserR{5};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::CheekSuckL{6};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::CheekSuckR{7};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::ChinRaiserB{8};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::ChinRaiserT{9};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::DimplerL{10};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::DimplerR{11};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::EyesClosedL{12};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::EyesClosedR{13};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::EyesLookDownL{14};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::EyesLookDownR{15};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::EyesLookLeftL{16};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::EyesLookLeftR{17};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::EyesLookRightL{18};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::EyesLookRightR{19};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::EyesLookUpL{20};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::EyesLookUpR{21};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::InnerBrowRaiserL{22};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::InnerBrowRaiserR{23};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::JawDrop{24};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::JawSidewaysLeft{25};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::JawSidewaysRight{26};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::JawThrust{27};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::LidTightenerL{28};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::LidTightenerR{29};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::LipCornerDepressorL{30};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::LipCornerDepressorR{31};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::LipCornerPullerL{32};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::LipCornerPullerR{33};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::LipFunnelerLB{34};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::LipFunnelerLT{35};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::LipFunnelerRB{36};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::LipFunnelerRT{37};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::LipPressorL{38};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::LipPressorR{39};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::LipPuckerL{40};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::LipPuckerR{41};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::LipStretcherL{42};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::LipStretcherR{43};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::LipSuckLB{44};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::LipSuckLT{45};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::LipSuckRB{46};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::LipSuckRT{47};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::LipTightenerL{48};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::LipTightenerR{49};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::LipsToward{50};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::LowerLipDepressorL{51};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::LowerLipDepressorR{52};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::MouthLeft{53};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::MouthRight{54};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::NoseWrinklerL{55};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::NoseWrinklerR{56};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::OuterBrowRaiserL{57};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::OuterBrowRaiserR{58};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::UpperLidRaiserL{59};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::UpperLidRaiserR{60};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::UpperLipRaiserL{61};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::UpperLipRaiserR{62};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression::Max{63};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator::*)(::ArrayW<float_t>)>(&::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x25b069c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator::*)()>(&::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25b07c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator.get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator::*)()>(&::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x25b07e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator::*)()>(&::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x25b0818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator::*)()>(&::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25b0878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator::*)()>(&::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25b0884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<float_t>
constexpr  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator::operator ::System::Collections::Generic::IEnumerator_1<float_t>() const {
return ::System::Collections::Generic::IEnumerator_1<float_t>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator::operator ::System::Collections::IEnumerator() const {
return ::System::Collections::IEnumerator(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to ::System::IDisposable
constexpr  ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator::operator ::System::IDisposable() const {
return ::System::IDisposable(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "_faceExpressions", ty: "::ArrayW<float_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator(::ArrayW<float_t> _faceExpressions, int32_t _index, int32_t _count) noexcept : ::bs_hook::ValueTypeWrapper() {this->_faceExpressions = _faceExpressions;
this->_index = _index;
this->_count = _count;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator::__set__faceExpressions(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x0>(this->__instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator::__get__faceExpressions() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator::__set__index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator::__get__index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator::__set__count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator::__get__count() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator::_ctor(::ArrayW<float_t> array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, array);
}
 bool ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 float_t ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.get_FaceTrackingEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::get_FaceTrackingEnabled)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25afdf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "get_FaceTrackingEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.get_ValidExpressions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::get_ValidExpressions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25afe44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "get_ValidExpressions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.set_ValidExpressions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRFaceExpressions::*)(bool)>(&::GlobalNamespace::OVRFaceExpressions::set_ValidExpressions)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25afe4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "set_ValidExpressions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.get_EyeFollowingBlendshapesValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::get_EyeFollowingBlendshapesValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25afe58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "get_EyeFollowingBlendshapesValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.set_EyeFollowingBlendshapesValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRFaceExpressions::*)(bool)>(&::GlobalNamespace::OVRFaceExpressions::set_EyeFollowingBlendshapesValid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25afe60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "set_EyeFollowingBlendshapesValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::Awake)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x25afe6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::OnEnable)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x25afee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.OnPermissionGranted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRFaceExpressions::*)(::StringW)>(&::GlobalNamespace::OVRFaceExpressions::OnPermissionGranted)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x25b0038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "OnPermissionGranted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.StartFaceTracking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::StartFaceTracking)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x25aff60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "StartFaceTracking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::OnDisable)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x25b0098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::OnDestroy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25b0120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::Update)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x25b012c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRFaceExpressions::*)(::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression)>(&::GlobalNamespace::OVRFaceExpressions::get_Item)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x25b01c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.TryGetFaceExpressionWeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRFaceExpressions::*)(::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression, ByRef<float_t>)>(&::GlobalNamespace::OVRFaceExpressions::TryGetFaceExpressionWeight)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x25b0320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "TryGetFaceExpressionWeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.TryGetWeightConfidence
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRFaceExpressions::*)(::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceRegionConfidence, ByRef<float_t>)>(&::GlobalNamespace::OVRFaceExpressions::TryGetWeightConfidence)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x25b0374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "TryGetWeightConfidence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceRegionConfidence>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.CheckValidity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::CheckValidity)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x25b02c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "CheckValidity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.CopyTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRFaceExpressions::*)(::ArrayW<float_t>, int32_t)>(&::GlobalNamespace::OVRFaceExpressions::CopyTo)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x25b03c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.ToArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float_t> (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::ToArray)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x25b0618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::GetEnumerator)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x25b067c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.System_Collections_Generic_IEnumerable_System_Single__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<float_t> (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::System_Collections_Generic_IEnumerable_System_Single__GetEnumerator)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x25b06c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "System.Collections.Generic.IEnumerable<System.Single>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x25b0734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::get_Count)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x25b07a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFaceExpressions._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRFaceExpressions::*)()>(&::GlobalNamespace::OVRFaceExpressions::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25b07c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::Generic::IReadOnlyCollection_1<float_t>
constexpr  ::GlobalNamespace::OVRFaceExpressions::operator ::System::Collections::Generic::IReadOnlyCollection_1<float_t>() const noexcept {
return ::System::Collections::Generic::IReadOnlyCollection_1<float_t>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<float_t>
constexpr  ::GlobalNamespace::OVRFaceExpressions::operator ::System::Collections::Generic::IEnumerable_1<float_t>() const noexcept {
return ::System::Collections::Generic::IEnumerable_1<float_t>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr  ::GlobalNamespace::OVRFaceExpressions::operator ::System::Collections::IEnumerable() const noexcept {
return ::System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRFaceExpressions::__set__ValidExpressions_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::OVRFaceExpressions::__get__ValidExpressions_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRFaceExpressions::__set__EyeFollowingBlendshapesValid_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x19>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::OVRFaceExpressions::__get__EyeFollowingBlendshapesValid_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x19>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRFaceExpressions::__set__currentFaceState(::GlobalNamespace::____GlobalNamespace__OVRPlugin__FaceState value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__OVRPlugin__FaceState, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__OVRPlugin__FaceState>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__OVRPlugin__FaceState ::GlobalNamespace::OVRFaceExpressions::__get__currentFaceState() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__OVRPlugin__FaceState, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__OVRPermissionsRequester__Permission  ::GlobalNamespace::OVRFaceExpressions::FaceTrackingPermission{0};
constexpr void ::GlobalNamespace::OVRFaceExpressions::__set__onPermissionGranted(::System::Action_1<::StringW> value)  {
::cordl_internals::setInstanceField<::System::Action_1<::StringW>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<::StringW>>(value));
}
constexpr ::System::Action_1<::StringW> ::GlobalNamespace::OVRFaceExpressions::__get__onPermissionGranted() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::StringW>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::OVRFaceExpressions::__set__trackingInstanceCount(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_trackingInstanceCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get>(std::forward<int32_t>(value));
}
 int32_t ::GlobalNamespace::OVRFaceExpressions::__get__trackingInstanceCount()  {
return ::cordl_internals::getStaticField<int32_t, "_trackingInstanceCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get>();
}
 bool ::GlobalNamespace::OVRFaceExpressions::get_FaceTrackingEnabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "get_FaceTrackingEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::OVRFaceExpressions::get_ValidExpressions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "get_ValidExpressions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRFaceExpressions::set_ValidExpressions(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "set_ValidExpressions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::GlobalNamespace::OVRFaceExpressions::get_EyeFollowingBlendshapesValid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "get_EyeFollowingBlendshapesValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRFaceExpressions::set_EyeFollowingBlendshapesValid(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "set_EyeFollowingBlendshapesValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::OVRFaceExpressions::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRFaceExpressions::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRFaceExpressions::OnPermissionGranted(::StringW permissionId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "OnPermissionGranted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, permissionId);
}
 bool ::GlobalNamespace::OVRFaceExpressions::StartFaceTracking()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "StartFaceTracking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRFaceExpressions::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRFaceExpressions::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRFaceExpressions::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::OVRFaceExpressions::get_Item(::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression expression)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, expression);
}
 bool ::GlobalNamespace::OVRFaceExpressions::TryGetFaceExpressionWeight(::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression expression, ByRef<float_t> weight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "TryGetFaceExpressionWeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpression>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, expression, weight);
}
 bool ::GlobalNamespace::OVRFaceExpressions::TryGetWeightConfidence(::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceRegionConfidence region, ByRef<float_t> weightConfidence)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "TryGetWeightConfidence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceRegionConfidence>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, region, weightConfidence);
}
 void ::GlobalNamespace::OVRFaceExpressions::CheckValidity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "CheckValidity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param startIndex: int32_t (default: 0)
 void ::GlobalNamespace::OVRFaceExpressions::CopyTo(::ArrayW<float_t> array, int32_t startIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, startIndex);
}
 ::ArrayW<float_t> ::GlobalNamespace::OVRFaceExpressions::ToArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator ::GlobalNamespace::OVRFaceExpressions::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IEnumerator_1<float_t> ::GlobalNamespace::OVRFaceExpressions::System_Collections_Generic_IEnumerable_System_Single__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "System.Collections.Generic.IEnumerable<System.Single>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<float_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::IEnumerator ::GlobalNamespace::OVRFaceExpressions::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::GlobalNamespace::OVRFaceExpressions::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::OVRFaceExpressions::OVRFaceExpressions()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<OVRFaceExpressions>())) {}
 void ::GlobalNamespace::OVRFaceExpressions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRFaceExpressions>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
