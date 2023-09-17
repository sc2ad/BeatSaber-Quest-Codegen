#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__HAPI_ParmChoiceInfo_def.hpp"
// Ctor Parameters [CppParam { name: "parentParmId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "labelSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "valueSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_ParmChoiceInfo::HAPI_ParmChoiceInfo(int32_t parentParmId, int32_t labelSH, int32_t valueSH) noexcept : ::bs_hook::ValueTypeWrapper() {this->parentParmId = parentParmId;
this->labelSH = labelSH;
this->valueSH = valueSH;
}
constexpr void ::HoudiniEngineUnity::HAPI_ParmChoiceInfo::__set_parentParmId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_ParmChoiceInfo::__get_parentParmId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_ParmChoiceInfo::__set_labelSH(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_ParmChoiceInfo::__get_labelSH() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_ParmChoiceInfo::__set_valueSH(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_ParmChoiceInfo::__get_valueSH() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
} // end anonymous namespace
