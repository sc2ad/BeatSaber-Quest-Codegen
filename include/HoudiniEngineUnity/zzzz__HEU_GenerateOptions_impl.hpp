#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__HEU_GenerateOptions_def.hpp"
// Ctor Parameters [CppParam { name: "_generateUVs", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_generateTangents", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_generateNormals", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_useLODGroups", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_splitPoints", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HEU_GenerateOptions::HEU_GenerateOptions(bool _generateUVs, bool _generateTangents, bool _generateNormals, bool _useLODGroups, bool _splitPoints) noexcept : ::bs_hook::ValueTypeWrapper() {this->_generateUVs = _generateUVs;
this->_generateTangents = _generateTangents;
this->_generateNormals = _generateNormals;
this->_useLODGroups = _useLODGroups;
this->_splitPoints = _splitPoints;
}
constexpr void ::HoudiniEngineUnity::HEU_GenerateOptions::__set__generateUVs(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_GenerateOptions::__get__generateUVs() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HEU_GenerateOptions::__set__generateTangents(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_GenerateOptions::__get__generateTangents() const {
return ::cordl_internals::getInstanceField<bool, 0x1>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HEU_GenerateOptions::__set__generateNormals(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_GenerateOptions::__get__generateNormals() const {
return ::cordl_internals::getInstanceField<bool, 0x2>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HEU_GenerateOptions::__set__useLODGroups(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_GenerateOptions::__get__useLODGroups() const {
return ::cordl_internals::getInstanceField<bool, 0x3>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HEU_GenerateOptions::__set__splitPoints(bool value)  {
::cordl_internals::setInstanceField<bool, 0x4>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HEU_GenerateOptions::__get__splitPoints() const {
return ::cordl_internals::getInstanceField<bool, 0x4>(this->__instance);
}
} // end anonymous namespace
