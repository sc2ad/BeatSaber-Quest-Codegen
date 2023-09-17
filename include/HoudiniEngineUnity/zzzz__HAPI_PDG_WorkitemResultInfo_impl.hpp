#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__HAPI_PDG_WorkitemResultInfo_def.hpp"
// Ctor Parameters [CppParam { name: "resultSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "resultTagSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "resultHash", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo::HAPI_PDG_WorkitemResultInfo(int32_t resultSH, int32_t resultTagSH, int64_t resultHash) noexcept : ::bs_hook::ValueTypeWrapper() {this->resultSH = resultSH;
this->resultTagSH = resultTagSH;
this->resultHash = resultHash;
}
constexpr void ::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo::__set_resultSH(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo::__get_resultSH() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo::__set_resultTagSH(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo::__get_resultTagSH() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo::__set_resultHash(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x8>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t ::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo::__get_resultHash() const {
return ::cordl_internals::getInstanceField<int64_t, 0x8>(this->__instance);
}
} // end anonymous namespace
