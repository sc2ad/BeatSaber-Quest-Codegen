#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_RSTOrder_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HAPI_RSTOrder::HAPI_RSTOrder(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::HAPI_RSTOrder::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_RSTOrder::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::HAPI_RSTOrder  HoudiniEngineUnity::HAPI_RSTOrder::HAPI_TRS{0};
constexpr HoudiniEngineUnity::HAPI_RSTOrder  HoudiniEngineUnity::HAPI_RSTOrder::HAPI_TSR{1};
constexpr HoudiniEngineUnity::HAPI_RSTOrder  HoudiniEngineUnity::HAPI_RSTOrder::HAPI_RTS{2};
constexpr HoudiniEngineUnity::HAPI_RSTOrder  HoudiniEngineUnity::HAPI_RSTOrder::HAPI_RST{3};
constexpr HoudiniEngineUnity::HAPI_RSTOrder  HoudiniEngineUnity::HAPI_RSTOrder::HAPI_STR{4};
constexpr HoudiniEngineUnity::HAPI_RSTOrder  HoudiniEngineUnity::HAPI_RSTOrder::HAPI_SRT{5};
constexpr HoudiniEngineUnity::HAPI_RSTOrder  HoudiniEngineUnity::HAPI_RSTOrder::HAPI_RSTORDER_DEFAULT{5};
