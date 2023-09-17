#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__HAPI_AssetInfo_def.hpp"
// Ctor Parameters [CppParam { name: "nodeId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "objectNodeId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasEverCooked", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "labelSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "filePathSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "versionSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fullOpNameSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "helpTextSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "helpURLSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "objectCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "handleCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "transformInputCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "geoInputCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "geoOutputCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "haveObjectsChanged", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "haveMaterialsChanged", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_AssetInfo::HAPI_AssetInfo(int32_t nodeId, int32_t objectNodeId, bool hasEverCooked, int32_t nameSH, int32_t labelSH, int32_t filePathSH, int32_t versionSH, int32_t fullOpNameSH, int32_t helpTextSH, int32_t helpURLSH, int32_t objectCount, int32_t handleCount, int32_t transformInputCount, int32_t geoInputCount, int32_t geoOutputCount, bool haveObjectsChanged, bool haveMaterialsChanged) noexcept : ::bs_hook::ValueTypeWrapper() {this->nodeId = nodeId;
this->objectNodeId = objectNodeId;
this->hasEverCooked = hasEverCooked;
this->nameSH = nameSH;
this->labelSH = labelSH;
this->filePathSH = filePathSH;
this->versionSH = versionSH;
this->fullOpNameSH = fullOpNameSH;
this->helpTextSH = helpTextSH;
this->helpURLSH = helpURLSH;
this->objectCount = objectCount;
this->handleCount = handleCount;
this->transformInputCount = transformInputCount;
this->geoInputCount = geoInputCount;
this->geoOutputCount = geoOutputCount;
this->haveObjectsChanged = haveObjectsChanged;
this->haveMaterialsChanged = haveMaterialsChanged;
}
constexpr void ::HoudiniEngineUnity::HAPI_AssetInfo::__set_nodeId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_AssetInfo::__get_nodeId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_AssetInfo::__set_objectNodeId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_AssetInfo::__get_objectNodeId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_AssetInfo::__set_hasEverCooked(bool value)  {
::cordl_internals::setInstanceField<bool, 0x8>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HAPI_AssetInfo::__get_hasEverCooked() const {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_AssetInfo::__set_nameSH(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_AssetInfo::__get_nameSH() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_AssetInfo::__set_labelSH(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_AssetInfo::__get_labelSH() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_AssetInfo::__set_filePathSH(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_AssetInfo::__get_filePathSH() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_AssetInfo::__set_versionSH(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_AssetInfo::__get_versionSH() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_AssetInfo::__set_fullOpNameSH(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_AssetInfo::__get_fullOpNameSH() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_AssetInfo::__set_helpTextSH(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_AssetInfo::__get_helpTextSH() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_AssetInfo::__set_helpURLSH(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_AssetInfo::__get_helpURLSH() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_AssetInfo::__set_objectCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_AssetInfo::__get_objectCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_AssetInfo::__set_handleCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_AssetInfo::__get_handleCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_AssetInfo::__set_transformInputCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_AssetInfo::__get_transformInputCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_AssetInfo::__set_geoInputCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_AssetInfo::__get_geoInputCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_AssetInfo::__set_geoOutputCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_AssetInfo::__get_geoOutputCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_AssetInfo::__set_haveObjectsChanged(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3c>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HAPI_AssetInfo::__get_haveObjectsChanged() const {
return ::cordl_internals::getInstanceField<bool, 0x3c>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_AssetInfo::__set_haveMaterialsChanged(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3d>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HAPI_AssetInfo::__get_haveMaterialsChanged() const {
return ::cordl_internals::getInstanceField<bool, 0x3d>(this->__instance);
}
} // end anonymous namespace
