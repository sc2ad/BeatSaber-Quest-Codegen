#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__HAPI_CookOptions_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_PackedPrimInstancingMode_def.hpp"
// Ctor Parameters [CppParam { name: "splitGeosByGroup", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "splitGeosByAttribute", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "splitAttrSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxVerticesPerPrimitive", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "refineCurveToLinear", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "curveRefineLOD", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "clearErrorsAndWarnings", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "cookTemplatedGeos", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "splitPointsByVertexAttributes", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "packedPrimInstancingMode", ty: "::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "handleBoxPartTypes", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "handleSpherePartTypes", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "checkPartChanges", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "cacheMeshTopology", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "extraFlags", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_CookOptions::HAPI_CookOptions(bool splitGeosByGroup, bool splitGeosByAttribute, int32_t splitAttrSH, int32_t maxVerticesPerPrimitive, bool refineCurveToLinear, float_t curveRefineLOD, bool clearErrorsAndWarnings, bool cookTemplatedGeos, bool splitPointsByVertexAttributes, ::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode packedPrimInstancingMode, bool handleBoxPartTypes, bool handleSpherePartTypes, bool checkPartChanges, bool cacheMeshTopology, int32_t extraFlags) noexcept : ::bs_hook::ValueTypeWrapper() {this->splitGeosByGroup = splitGeosByGroup;
this->splitGeosByAttribute = splitGeosByAttribute;
this->splitAttrSH = splitAttrSH;
this->maxVerticesPerPrimitive = maxVerticesPerPrimitive;
this->refineCurveToLinear = refineCurveToLinear;
this->curveRefineLOD = curveRefineLOD;
this->clearErrorsAndWarnings = clearErrorsAndWarnings;
this->cookTemplatedGeos = cookTemplatedGeos;
this->splitPointsByVertexAttributes = splitPointsByVertexAttributes;
this->packedPrimInstancingMode = packedPrimInstancingMode;
this->handleBoxPartTypes = handleBoxPartTypes;
this->handleSpherePartTypes = handleSpherePartTypes;
this->checkPartChanges = checkPartChanges;
this->cacheMeshTopology = cacheMeshTopology;
this->extraFlags = extraFlags;
}
constexpr void ::HoudiniEngineUnity::HAPI_CookOptions::__set_splitGeosByGroup(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HAPI_CookOptions::__get_splitGeosByGroup() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_CookOptions::__set_splitGeosByAttribute(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HAPI_CookOptions::__get_splitGeosByAttribute() const {
return ::cordl_internals::getInstanceField<bool, 0x1>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_CookOptions::__set_splitAttrSH(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_CookOptions::__get_splitAttrSH() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_CookOptions::__set_maxVerticesPerPrimitive(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_CookOptions::__get_maxVerticesPerPrimitive() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_CookOptions::__set_refineCurveToLinear(bool value)  {
::cordl_internals::setInstanceField<bool, 0xc>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HAPI_CookOptions::__get_refineCurveToLinear() const {
return ::cordl_internals::getInstanceField<bool, 0xc>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_CookOptions::__set_curveRefineLOD(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::HoudiniEngineUnity::HAPI_CookOptions::__get_curveRefineLOD() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_CookOptions::__set_clearErrorsAndWarnings(bool value)  {
::cordl_internals::setInstanceField<bool, 0x14>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HAPI_CookOptions::__get_clearErrorsAndWarnings() const {
return ::cordl_internals::getInstanceField<bool, 0x14>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_CookOptions::__set_cookTemplatedGeos(bool value)  {
::cordl_internals::setInstanceField<bool, 0x15>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HAPI_CookOptions::__get_cookTemplatedGeos() const {
return ::cordl_internals::getInstanceField<bool, 0x15>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_CookOptions::__set_splitPointsByVertexAttributes(bool value)  {
::cordl_internals::setInstanceField<bool, 0x16>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HAPI_CookOptions::__get_splitPointsByVertexAttributes() const {
return ::cordl_internals::getInstanceField<bool, 0x16>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_CookOptions::__set_packedPrimInstancingMode(::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode, 0x18>(this->__instance, std::forward<::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode>(value));
}
constexpr ::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode ::HoudiniEngineUnity::HAPI_CookOptions::__get_packedPrimInstancingMode() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode, 0x18>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_CookOptions::__set_handleBoxPartTypes(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HAPI_CookOptions::__get_handleBoxPartTypes() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_CookOptions::__set_handleSpherePartTypes(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1d>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HAPI_CookOptions::__get_handleSpherePartTypes() const {
return ::cordl_internals::getInstanceField<bool, 0x1d>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_CookOptions::__set_checkPartChanges(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1e>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HAPI_CookOptions::__get_checkPartChanges() const {
return ::cordl_internals::getInstanceField<bool, 0x1e>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_CookOptions::__set_cacheMeshTopology(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1f>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HAPI_CookOptions::__get_cacheMeshTopology() const {
return ::cordl_internals::getInstanceField<bool, 0x1f>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_CookOptions::__set_extraFlags(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_CookOptions::__get_extraFlags() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->__instance);
}
} // end anonymous namespace
