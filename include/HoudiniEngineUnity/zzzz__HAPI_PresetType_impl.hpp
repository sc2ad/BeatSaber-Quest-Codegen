#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__HAPI_PresetType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_PresetType::HAPI_PresetType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::HoudiniEngineUnity::HAPI_PresetType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_PresetType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::HoudiniEngineUnity::HAPI_PresetType  ::HoudiniEngineUnity::HAPI_PresetType::HAPI_PRESETTYPE_INVALID{-1};
constexpr ::HoudiniEngineUnity::HAPI_PresetType  ::HoudiniEngineUnity::HAPI_PresetType::HAPI_PRESETTYPE_BINARY{0};
constexpr ::HoudiniEngineUnity::HAPI_PresetType  ::HoudiniEngineUnity::HAPI_PresetType::HAPI_PRESETTYPE_IDX{1};
constexpr ::HoudiniEngineUnity::HAPI_PresetType  ::HoudiniEngineUnity::HAPI_PresetType::HAPI_PRESETTYPE_MAX{2};
} // end anonymous namespace
