#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__HAPI_CurveType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_CurveType::HAPI_CurveType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::HoudiniEngineUnity::HAPI_CurveType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_CurveType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::HoudiniEngineUnity::HAPI_CurveType  ::HoudiniEngineUnity::HAPI_CurveType::HAPI_CURVETYPE_INVALID{-1};
constexpr ::HoudiniEngineUnity::HAPI_CurveType  ::HoudiniEngineUnity::HAPI_CurveType::HAPI_CURVETYPE_LINEAR{0};
constexpr ::HoudiniEngineUnity::HAPI_CurveType  ::HoudiniEngineUnity::HAPI_CurveType::HAPI_CURVETYPE_NURBS{1};
constexpr ::HoudiniEngineUnity::HAPI_CurveType  ::HoudiniEngineUnity::HAPI_CurveType::HAPI_CURVETYPE_BEZIER{2};
constexpr ::HoudiniEngineUnity::HAPI_CurveType  ::HoudiniEngineUnity::HAPI_CurveType::HAPI_CURVETYPE_MAX{3};
} // end anonymous namespace
