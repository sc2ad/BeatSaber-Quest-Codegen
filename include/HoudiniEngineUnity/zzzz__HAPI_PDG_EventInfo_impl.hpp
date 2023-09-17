#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__HAPI_PDG_EventInfo_def.hpp"
// Ctor Parameters [CppParam { name: "nodeId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "workitemId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "dependencyId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "currentState", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastState", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "eventType", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "msgSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventInfo::HAPI_PDG_EventInfo(int32_t nodeId, int32_t workitemId, int32_t dependencyId, int32_t currentState, int32_t lastState, int32_t eventType, int32_t msgSH) noexcept : ::bs_hook::ValueTypeWrapper() {this->nodeId = nodeId;
this->workitemId = workitemId;
this->dependencyId = dependencyId;
this->currentState = currentState;
this->lastState = lastState;
this->eventType = eventType;
this->msgSH = msgSH;
}
constexpr void ::HoudiniEngineUnity::HAPI_PDG_EventInfo::__set_nodeId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_PDG_EventInfo::__get_nodeId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_PDG_EventInfo::__set_workitemId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_PDG_EventInfo::__get_workitemId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_PDG_EventInfo::__set_dependencyId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_PDG_EventInfo::__get_dependencyId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_PDG_EventInfo::__set_currentState(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_PDG_EventInfo::__get_currentState() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_PDG_EventInfo::__set_lastState(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_PDG_EventInfo::__get_lastState() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_PDG_EventInfo::__set_eventType(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_PDG_EventInfo::__get_eventType() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_PDG_EventInfo::__set_msgSH(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HAPI_PDG_EventInfo::__get_msgSH() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->__instance);
}
} // end anonymous namespace
