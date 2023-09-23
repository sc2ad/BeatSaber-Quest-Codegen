#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ObjectInfo_def.hpp"
// Ctor Parameters [CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "objectInstancePathSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasTransformChanged", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "haveGeosChanged", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isVisible", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isInstancer", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isInstanced", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "geoCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nodeId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "objectToInstanceId", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HAPI_ObjectInfo::HAPI_ObjectInfo(int32_t nameSH, int32_t objectInstancePathSH, bool hasTransformChanged, bool haveGeosChanged, bool isVisible, bool isInstancer, bool isInstanced, int32_t geoCount, int32_t nodeId, int32_t objectToInstanceId) noexcept : ::bs_hook::ValueTypeWrapper() {this->nameSH = nameSH;
this->objectInstancePathSH = objectInstancePathSH;
this->hasTransformChanged = hasTransformChanged;
this->haveGeosChanged = haveGeosChanged;
this->isVisible = isVisible;
this->isInstancer = isInstancer;
this->isInstanced = isInstanced;
this->geoCount = geoCount;
this->nodeId = nodeId;
this->objectToInstanceId = objectToInstanceId;
}
constexpr void HoudiniEngineUnity::HAPI_ObjectInfo::__set_nameSH(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_ObjectInfo::__get_nameSH() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ObjectInfo::__set_objectInstancePathSH(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_ObjectInfo::__get_objectInstancePathSH() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ObjectInfo::__set_hasTransformChanged(bool value)  {
::cordl_internals::setInstanceField<bool, 0x8>(this->__instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HAPI_ObjectInfo::__get_hasTransformChanged() const {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ObjectInfo::__set_haveGeosChanged(bool value)  {
::cordl_internals::setInstanceField<bool, 0x9>(this->__instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HAPI_ObjectInfo::__get_haveGeosChanged() const {
return ::cordl_internals::getInstanceField<bool, 0x9>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ObjectInfo::__set_isVisible(bool value)  {
::cordl_internals::setInstanceField<bool, 0xa>(this->__instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HAPI_ObjectInfo::__get_isVisible() const {
return ::cordl_internals::getInstanceField<bool, 0xa>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ObjectInfo::__set_isInstancer(bool value)  {
::cordl_internals::setInstanceField<bool, 0xb>(this->__instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HAPI_ObjectInfo::__get_isInstancer() const {
return ::cordl_internals::getInstanceField<bool, 0xb>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ObjectInfo::__set_isInstanced(bool value)  {
::cordl_internals::setInstanceField<bool, 0xc>(this->__instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HAPI_ObjectInfo::__get_isInstanced() const {
return ::cordl_internals::getInstanceField<bool, 0xc>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ObjectInfo::__set_geoCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_ObjectInfo::__get_geoCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ObjectInfo::__set_nodeId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_ObjectInfo::__get_nodeId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ObjectInfo::__set_objectToInstanceId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_ObjectInfo::__get_objectToInstanceId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->__instance);
}
