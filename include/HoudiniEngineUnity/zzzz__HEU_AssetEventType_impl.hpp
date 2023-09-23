#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AssetEventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HEU_AssetEventType::HEU_AssetEventType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::HEU_AssetEventType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HEU_AssetEventType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::HEU_AssetEventType  HoudiniEngineUnity::HEU_AssetEventType::UNKNOWN{0};
constexpr HoudiniEngineUnity::HEU_AssetEventType  HoudiniEngineUnity::HEU_AssetEventType::RELOAD{1};
constexpr HoudiniEngineUnity::HEU_AssetEventType  HoudiniEngineUnity::HEU_AssetEventType::COOK{2};
constexpr HoudiniEngineUnity::HEU_AssetEventType  HoudiniEngineUnity::HEU_AssetEventType::BAKE_NEW{3};
constexpr HoudiniEngineUnity::HEU_AssetEventType  HoudiniEngineUnity::HEU_AssetEventType::BAKE_UPDATE{4};
