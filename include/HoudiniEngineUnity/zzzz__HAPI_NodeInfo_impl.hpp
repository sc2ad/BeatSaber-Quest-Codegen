#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__HAPI_NodeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_NodeType_def.hpp"
// Ctor Parameters [CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "parentId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "type", ty: "::HoudiniEngineUnity::HAPI_NodeType", modifiers: "", def_value: Some("{}") }, CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "totalCookCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uniqueHoudiniNodeId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "internalNodePathSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "parmCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "parmIntValueCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "parmFloatValueCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "parmStringValueCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "parmChoiceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "childNodeCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "inputCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "outputCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "createdPostAssetLoad", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isTimeDependent", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_NodeInfo::HAPI_NodeInfo(int32_t id, int32_t parentId, int32_t nameSH, ::HoudiniEngineUnity::HAPI_NodeType type, bool isValid, int32_t totalCookCount, int32_t uniqueHoudiniNodeId, int32_t internalNodePathSH, int32_t parmCount, int32_t parmIntValueCount, int32_t parmFloatValueCount, int32_t parmStringValueCount, int32_t parmChoiceCount, int32_t childNodeCount, int32_t inputCount, int32_t outputCount, bool createdPostAssetLoad, bool isTimeDependent) noexcept : ::bs_hook::ValueTypeWrapper() {this->id = id;
this->parentId = parentId;
this->nameSH = nameSH;
this->type = type;
this->isValid = isValid;
this->totalCookCount = totalCookCount;
this->uniqueHoudiniNodeId = uniqueHoudiniNodeId;
this->internalNodePathSH = internalNodePathSH;
this->parmCount = parmCount;
this->parmIntValueCount = parmIntValueCount;
this->parmFloatValueCount = parmFloatValueCount;
this->parmStringValueCount = parmStringValueCount;
this->parmChoiceCount = parmChoiceCount;
this->childNodeCount = childNodeCount;
this->inputCount = inputCount;
this->outputCount = outputCount;
this->createdPostAssetLoad = createdPostAssetLoad;
this->isTimeDependent = isTimeDependent;
}
constexpr void ::HoudiniEngineUnity::HAPI_NodeInfo::__set_id(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_NodeInfo::__get_id() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_NodeInfo::__set_parentId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_NodeInfo::__get_parentId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_NodeInfo::__set_nameSH(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_NodeInfo::__get_nameSH() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_NodeInfo::__set_type(::HoudiniEngineUnity::HAPI_NodeType value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HAPI_NodeType, 0xc>(this->__instance, std::forward<::HoudiniEngineUnity::HAPI_NodeType>(value));
}
constexpr ::HoudiniEngineUnity::HAPI_NodeType ::HoudiniEngineUnity::HAPI_NodeInfo::__get_type() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_NodeType, 0xc>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_NodeInfo::__set_isValid(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HAPI_NodeInfo::__get_isValid() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_NodeInfo::__set_totalCookCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_NodeInfo::__get_totalCookCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_NodeInfo::__set_uniqueHoudiniNodeId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_NodeInfo::__get_uniqueHoudiniNodeId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_NodeInfo::__set_internalNodePathSH(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_NodeInfo::__get_internalNodePathSH() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_NodeInfo::__set_parmCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_NodeInfo::__get_parmCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_NodeInfo::__set_parmIntValueCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_NodeInfo::__get_parmIntValueCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_NodeInfo::__set_parmFloatValueCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_NodeInfo::__get_parmFloatValueCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_NodeInfo::__set_parmStringValueCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_NodeInfo::__get_parmStringValueCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_NodeInfo::__set_parmChoiceCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_NodeInfo::__get_parmChoiceCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_NodeInfo::__set_childNodeCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_NodeInfo::__get_childNodeCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_NodeInfo::__set_inputCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_NodeInfo::__get_inputCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_NodeInfo::__set_outputCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_NodeInfo::__get_outputCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_NodeInfo::__set_createdPostAssetLoad(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HAPI_NodeInfo::__get_createdPostAssetLoad() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_NodeInfo::__set_isTimeDependent(bool value)  {
::cordl_internals::setInstanceField<bool, 0x41>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::HoudiniEngineUnity::HAPI_NodeInfo::__get_isTimeDependent() const {
return ::cordl_internals::getInstanceField<bool, 0x41>(this->__instance);
}
} // end anonymous namespace
