#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_MaterialInfo_def.hpp"
// Ctor Parameters [CppParam { name: "nodeId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "exists", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasChanged", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HAPI_MaterialInfo::HAPI_MaterialInfo(int32_t nodeId, bool exists, bool hasChanged) noexcept : ::bs_hook::ValueTypeWrapper() {this->nodeId = nodeId;
this->exists = exists;
this->hasChanged = hasChanged;
}
constexpr void HoudiniEngineUnity::HAPI_MaterialInfo::__set_nodeId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_MaterialInfo::__get_nodeId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_MaterialInfo::__set_exists(bool value)  {
::cordl_internals::setInstanceField<bool, 0x4>(this->__instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HAPI_MaterialInfo::__get_exists() const {
return ::cordl_internals::getInstanceField<bool, 0x4>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_MaterialInfo::__set_hasChanged(bool value)  {
::cordl_internals::setInstanceField<bool, 0x5>(this->__instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HAPI_MaterialInfo::__get_hasChanged() const {
return ::cordl_internals::getInstanceField<bool, 0x5>(this->__instance);
}
