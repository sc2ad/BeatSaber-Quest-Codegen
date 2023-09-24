#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_VolumeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_StorageType_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Transform_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_VolumeType_def.hpp"
// Ctor Parameters [CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "type", ty: "HoudiniEngineUnity::HAPI_VolumeType", modifiers: "", def_value: Some("{}") }, CppParam { name: "xLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "yLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "zLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "minX", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "minY", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "minZ", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "tupleSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "storage", ty: "HoudiniEngineUnity::HAPI_StorageType", modifiers: "", def_value: Some("{}") }, CppParam { name: "tileSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "transform", ty: "HoudiniEngineUnity::HAPI_Transform", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasTaper", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "xTaper", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "yTaper", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HAPI_VolumeInfo::HAPI_VolumeInfo(int32_t nameSH, HoudiniEngineUnity::HAPI_VolumeType type, int32_t xLength, int32_t yLength, int32_t zLength, int32_t minX, int32_t minY, int32_t minZ, int32_t tupleSize, HoudiniEngineUnity::HAPI_StorageType storage, int32_t tileSize, HoudiniEngineUnity::HAPI_Transform transform, bool hasTaper, float_t xTaper, float_t yTaper) noexcept : ::bs_hook::ValueTypeWrapper() {this->nameSH = nameSH;
this->type = type;
this->xLength = xLength;
this->yLength = yLength;
this->zLength = zLength;
this->minX = minX;
this->minY = minY;
this->minZ = minZ;
this->tupleSize = tupleSize;
this->storage = storage;
this->tileSize = tileSize;
this->transform = transform;
this->hasTaper = hasTaper;
this->xTaper = xTaper;
this->yTaper = yTaper;
}
constexpr void HoudiniEngineUnity::HAPI_VolumeInfo::__set_nameSH(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_VolumeInfo::__get_nameSH() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_VolumeInfo::__set_type(HoudiniEngineUnity::HAPI_VolumeType value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_VolumeType, 0x4>(this->__instance, std::forward<HoudiniEngineUnity::HAPI_VolumeType>(value));
}
constexpr HoudiniEngineUnity::HAPI_VolumeType HoudiniEngineUnity::HAPI_VolumeInfo::__get_type() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_VolumeType, 0x4>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_VolumeInfo::__set_xLength(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_VolumeInfo::__get_xLength() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_VolumeInfo::__set_yLength(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_VolumeInfo::__get_yLength() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_VolumeInfo::__set_zLength(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_VolumeInfo::__get_zLength() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_VolumeInfo::__set_minX(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_VolumeInfo::__get_minX() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_VolumeInfo::__set_minY(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_VolumeInfo::__get_minY() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_VolumeInfo::__set_minZ(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_VolumeInfo::__get_minZ() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_VolumeInfo::__set_tupleSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_VolumeInfo::__get_tupleSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_VolumeInfo::__set_storage(HoudiniEngineUnity::HAPI_StorageType value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_StorageType, 0x24>(this->__instance, std::forward<HoudiniEngineUnity::HAPI_StorageType>(value));
}
constexpr HoudiniEngineUnity::HAPI_StorageType HoudiniEngineUnity::HAPI_VolumeInfo::__get_storage() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_StorageType, 0x24>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_VolumeInfo::__set_tileSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_VolumeInfo::__get_tileSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_VolumeInfo::__set_transform(HoudiniEngineUnity::HAPI_Transform value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_Transform, 0x30>(this->__instance, std::forward<HoudiniEngineUnity::HAPI_Transform>(value));
}
constexpr HoudiniEngineUnity::HAPI_Transform HoudiniEngineUnity::HAPI_VolumeInfo::__get_transform() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_Transform, 0x30>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_VolumeInfo::__set_hasTaper(bool value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this->__instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HAPI_VolumeInfo::__get_hasTaper() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_VolumeInfo::__set_xTaper(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x5c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t HoudiniEngineUnity::HAPI_VolumeInfo::__get_xTaper() const {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_VolumeInfo::__set_yTaper(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x60>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t HoudiniEngineUnity::HAPI_VolumeInfo::__get_yTaper() const {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this->__instance);
}
