#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_CurveInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_CurveType_def.hpp"
// Ctor Parameters [CppParam { name: "curveType", ty: "HoudiniEngineUnity::HAPI_CurveType", modifiers: "", def_value: Some("{}") }, CppParam { name: "curveCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertexCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "knotCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "isPeriodic", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isRational", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "order", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasKnots", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HAPI_CurveInfo::HAPI_CurveInfo(HoudiniEngineUnity::HAPI_CurveType curveType, int32_t curveCount, int32_t vertexCount, int32_t knotCount, bool isPeriodic, bool isRational, int32_t order, bool hasKnots) noexcept : ::bs_hook::ValueTypeWrapper() {this->curveType = curveType;
this->curveCount = curveCount;
this->vertexCount = vertexCount;
this->knotCount = knotCount;
this->isPeriodic = isPeriodic;
this->isRational = isRational;
this->order = order;
this->hasKnots = hasKnots;
}
constexpr void HoudiniEngineUnity::HAPI_CurveInfo::__set_curveType(HoudiniEngineUnity::HAPI_CurveType value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_CurveType, 0x0>(this->__instance, std::forward<HoudiniEngineUnity::HAPI_CurveType>(value));
}
constexpr HoudiniEngineUnity::HAPI_CurveType HoudiniEngineUnity::HAPI_CurveInfo::__get_curveType() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_CurveType, 0x0>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_CurveInfo::__set_curveCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_CurveInfo::__get_curveCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_CurveInfo::__set_vertexCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_CurveInfo::__get_vertexCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_CurveInfo::__set_knotCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_CurveInfo::__get_knotCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_CurveInfo::__set_isPeriodic(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->__instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HAPI_CurveInfo::__get_isPeriodic() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_CurveInfo::__set_isRational(bool value)  {
::cordl_internals::setInstanceField<bool, 0x11>(this->__instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HAPI_CurveInfo::__get_isRational() const {
return ::cordl_internals::getInstanceField<bool, 0x11>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_CurveInfo::__set_order(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_CurveInfo::__get_order() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_CurveInfo::__set_hasKnots(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->__instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HAPI_CurveInfo::__get_hasKnots() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->__instance);
}
