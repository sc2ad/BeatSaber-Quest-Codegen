#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__HAPI_XYZOrder_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_XYZOrder::HAPI_XYZOrder(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::HoudiniEngineUnity::HAPI_XYZOrder::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_XYZOrder::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::HoudiniEngineUnity::HAPI_XYZOrder  ::HoudiniEngineUnity::HAPI_XYZOrder::HAPI_XYZ{0};
constexpr ::HoudiniEngineUnity::HAPI_XYZOrder  ::HoudiniEngineUnity::HAPI_XYZOrder::HAPI_XZY{1};
constexpr ::HoudiniEngineUnity::HAPI_XYZOrder  ::HoudiniEngineUnity::HAPI_XYZOrder::HAPI_YXZ{2};
constexpr ::HoudiniEngineUnity::HAPI_XYZOrder  ::HoudiniEngineUnity::HAPI_XYZOrder::HAPI_YZX{3};
constexpr ::HoudiniEngineUnity::HAPI_XYZOrder  ::HoudiniEngineUnity::HAPI_XYZOrder::HAPI_ZXY{4};
constexpr ::HoudiniEngineUnity::HAPI_XYZOrder  ::HoudiniEngineUnity::HAPI_XYZOrder::HAPI_ZYX{5};
constexpr ::HoudiniEngineUnity::HAPI_XYZOrder  ::HoudiniEngineUnity::HAPI_XYZOrder::HAPI_XYZORDER_DEFAULT{0};
} // end anonymous namespace
