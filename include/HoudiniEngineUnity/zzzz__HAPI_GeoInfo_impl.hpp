#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_GeoInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_GeoType_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_GroupType_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::HAPI_GeoInfo.getGroupCountByType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (HoudiniEngineUnity::HAPI_GeoInfo::*)(HoudiniEngineUnity::HAPI_GroupType)>(&HoudiniEngineUnity::HAPI_GeoInfo::getGroupCountByType)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x201f39c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HAPI_GeoInfo>::get(),
                            "getGroupCountByType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HAPI_GroupType>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "type", ty: "HoudiniEngineUnity::HAPI_GeoType", modifiers: "", def_value: Some("{}") }, CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nodeId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "isEditable", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isTemplated", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isDisplayGeo", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasGeoChanged", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasMaterialChanged", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "pointGroupCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "primitiveGroupCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "edgeGroupCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "partCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HAPI_GeoInfo::HAPI_GeoInfo(HoudiniEngineUnity::HAPI_GeoType type, int32_t nameSH, int32_t nodeId, bool isEditable, bool isTemplated, bool isDisplayGeo, bool hasGeoChanged, bool hasMaterialChanged, int32_t pointGroupCount, int32_t primitiveGroupCount, int32_t edgeGroupCount, int32_t partCount) noexcept : ::bs_hook::ValueTypeWrapper() {this->type = type;
this->nameSH = nameSH;
this->nodeId = nodeId;
this->isEditable = isEditable;
this->isTemplated = isTemplated;
this->isDisplayGeo = isDisplayGeo;
this->hasGeoChanged = hasGeoChanged;
this->hasMaterialChanged = hasMaterialChanged;
this->pointGroupCount = pointGroupCount;
this->primitiveGroupCount = primitiveGroupCount;
this->edgeGroupCount = edgeGroupCount;
this->partCount = partCount;
}
constexpr void HoudiniEngineUnity::HAPI_GeoInfo::__set_type(HoudiniEngineUnity::HAPI_GeoType value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_GeoType, 0x0>(this->__instance, std::forward<HoudiniEngineUnity::HAPI_GeoType>(value));
}
constexpr HoudiniEngineUnity::HAPI_GeoType HoudiniEngineUnity::HAPI_GeoInfo::__get_type() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_GeoType, 0x0>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_GeoInfo::__set_nameSH(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_GeoInfo::__get_nameSH() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_GeoInfo::__set_nodeId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_GeoInfo::__get_nodeId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_GeoInfo::__set_isEditable(bool value)  {
::cordl_internals::setInstanceField<bool, 0xc>(this->__instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HAPI_GeoInfo::__get_isEditable() const {
return ::cordl_internals::getInstanceField<bool, 0xc>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_GeoInfo::__set_isTemplated(bool value)  {
::cordl_internals::setInstanceField<bool, 0xd>(this->__instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HAPI_GeoInfo::__get_isTemplated() const {
return ::cordl_internals::getInstanceField<bool, 0xd>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_GeoInfo::__set_isDisplayGeo(bool value)  {
::cordl_internals::setInstanceField<bool, 0xe>(this->__instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HAPI_GeoInfo::__get_isDisplayGeo() const {
return ::cordl_internals::getInstanceField<bool, 0xe>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_GeoInfo::__set_hasGeoChanged(bool value)  {
::cordl_internals::setInstanceField<bool, 0xf>(this->__instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HAPI_GeoInfo::__get_hasGeoChanged() const {
return ::cordl_internals::getInstanceField<bool, 0xf>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_GeoInfo::__set_hasMaterialChanged(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->__instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HAPI_GeoInfo::__get_hasMaterialChanged() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_GeoInfo::__set_pointGroupCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_GeoInfo::__get_pointGroupCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_GeoInfo::__set_primitiveGroupCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_GeoInfo::__get_primitiveGroupCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_GeoInfo::__set_edgeGroupCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_GeoInfo::__get_edgeGroupCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_GeoInfo::__set_partCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_GeoInfo::__get_partCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->__instance);
}
 int32_t HoudiniEngineUnity::HAPI_GeoInfo::getGroupCountByType(HoudiniEngineUnity::HAPI_GroupType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HAPI_GeoInfo>::get(),
                            "getGroupCountByType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HAPI_GroupType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, type);
}
