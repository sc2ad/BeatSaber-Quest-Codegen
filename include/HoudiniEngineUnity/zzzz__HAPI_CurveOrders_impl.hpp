#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_CurveOrders_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HAPI_CurveOrders::HAPI_CurveOrders(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::HAPI_CurveOrders::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_CurveOrders::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::HAPI_CurveOrders  HoudiniEngineUnity::HAPI_CurveOrders::HAPI_CURVE_ORDER_VARYING{0};
constexpr HoudiniEngineUnity::HAPI_CurveOrders  HoudiniEngineUnity::HAPI_CurveOrders::HAPI_CURVE_ORDER_INVALID{1};
constexpr HoudiniEngineUnity::HAPI_CurveOrders  HoudiniEngineUnity::HAPI_CurveOrders::HAPI_CURVE_ORDER_LINEAR{2};
constexpr HoudiniEngineUnity::HAPI_CurveOrders  HoudiniEngineUnity::HAPI_CurveOrders::HAPI_CURVE_ORDER_QUADRATIC{3};
constexpr HoudiniEngineUnity::HAPI_CurveOrders  HoudiniEngineUnity::HAPI_CurveOrders::HAPI_CURVE_ORDER_CUBIC{4};
