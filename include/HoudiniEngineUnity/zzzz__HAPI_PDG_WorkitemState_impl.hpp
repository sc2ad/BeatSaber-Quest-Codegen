#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_PDG_WorkitemState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HAPI_PDG_WorkitemState::HAPI_PDG_WorkitemState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::HAPI_PDG_WorkitemState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_PDG_WorkitemState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::HAPI_PDG_WorkitemState  HoudiniEngineUnity::HAPI_PDG_WorkitemState::HAPI_PDG_WORKITEM_UNDEFINED{0};
constexpr HoudiniEngineUnity::HAPI_PDG_WorkitemState  HoudiniEngineUnity::HAPI_PDG_WorkitemState::HAPI_PDG_WORKITEM_UNCOOKED{1};
constexpr HoudiniEngineUnity::HAPI_PDG_WorkitemState  HoudiniEngineUnity::HAPI_PDG_WorkitemState::HAPI_PDG_WORKITEM_WAITING{2};
constexpr HoudiniEngineUnity::HAPI_PDG_WorkitemState  HoudiniEngineUnity::HAPI_PDG_WorkitemState::HAPI_PDG_WORKITEM_SCHEDULED{3};
constexpr HoudiniEngineUnity::HAPI_PDG_WorkitemState  HoudiniEngineUnity::HAPI_PDG_WorkitemState::HAPI_PDG_WORKITEM_COOKING{4};
constexpr HoudiniEngineUnity::HAPI_PDG_WorkitemState  HoudiniEngineUnity::HAPI_PDG_WorkitemState::HAPI_PDG_WORKITEM_COOKED_SUCCESS{5};
constexpr HoudiniEngineUnity::HAPI_PDG_WorkitemState  HoudiniEngineUnity::HAPI_PDG_WorkitemState::HAPI_PDG_WORKITEM_COOKED_CACHE{6};
constexpr HoudiniEngineUnity::HAPI_PDG_WorkitemState  HoudiniEngineUnity::HAPI_PDG_WorkitemState::HAPI_PDG_WORKITEM_COOKED_FAIL{7};
constexpr HoudiniEngineUnity::HAPI_PDG_WorkitemState  HoudiniEngineUnity::HAPI_PDG_WorkitemState::HAPI_PDG_WORKITEM_COOKED_CANCEL{8};
constexpr HoudiniEngineUnity::HAPI_PDG_WorkitemState  HoudiniEngineUnity::HAPI_PDG_WorkitemState::HAPI_PDG_WORKITEM_DIRTY{9};
