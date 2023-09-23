#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HFLayerType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HFLayerType::HFLayerType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::HFLayerType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HFLayerType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::HFLayerType  HoudiniEngineUnity::HFLayerType::DEFAULT{0};
constexpr HoudiniEngineUnity::HFLayerType  HoudiniEngineUnity::HFLayerType::HEIGHT{1};
constexpr HoudiniEngineUnity::HFLayerType  HoudiniEngineUnity::HFLayerType::MASK{2};
constexpr HoudiniEngineUnity::HFLayerType  HoudiniEngineUnity::HFLayerType::DETAIL{3};
