#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_PDG_WorkitemInfo_def.hpp"
// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "numResults", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HAPI_PDG_WorkitemInfo::HAPI_PDG_WorkitemInfo(int32_t index, int32_t numResults, int32_t nameSH) noexcept : ::bs_hook::ValueTypeWrapper() {this->index = index;
this->numResults = numResults;
this->nameSH = nameSH;
}
constexpr void HoudiniEngineUnity::HAPI_PDG_WorkitemInfo::__set_index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_PDG_WorkitemInfo::__get_index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_PDG_WorkitemInfo::__set_numResults(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_PDG_WorkitemInfo::__get_numResults() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_PDG_WorkitemInfo::__set_nameSH(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_PDG_WorkitemInfo::__get_nameSH() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
