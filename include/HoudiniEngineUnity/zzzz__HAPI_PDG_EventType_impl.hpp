#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_PDG_EventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EventType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::HAPI_PDG_EventType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_PDG_EventType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_NULL{0};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_WORKITEM_ADD{1};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_WORKITEM_REMOVE{2};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_WORKITEM_STATE_CHANGE{3};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_WORKITEM_ADD_DEP{4};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_WORKITEM_REMOVE_DEP{5};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_WORKITEM_ADD_PARENT{6};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_WORKITEM_REMOVE_PARENT{7};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_NODE_CLEAR{8};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_COOK_ERROR{9};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_COOK_WARNING{10};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_COOK_COMPLETE{11};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_DIRTY_START{12};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_DIRTY_STOP{13};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_DIRTY_ALL{14};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_UI_SELECT{15};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_NODE_CREATE{16};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_NODE_REMOVE{17};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_NODE_RENAME{18};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_NODE_CONNECT{19};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_NODE_DISCONNECT{20};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_WORKITEM_SET_INT{21};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_WORKITEM_SET_FLOAT{22};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_WORKITEM_SET_STRING{23};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_WORKITEM_SET_FILE{24};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_WORKITEM_SET_PYOBJECT{25};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_WORKITEM_SET_GEOMETRY{26};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_WORKITEM_MERGE{27};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_WORKITEM_RESULT{28};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_WORKITEM_PRIORITY{29};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_COOK_START{30};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_WORKITEM_ADD_STATIC_ANCESTOR{31};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_WORKITEM_REMOVE_STATIC_ANCESTOR{32};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_NODE_PROGRESS_UPDATE{33};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_BATCH_ITEM_INITIALIZED{34};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_ALL{35};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_LOG{36};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_SCHEDULER_ADDED{37};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_SCHEDULER_REMOVED{38};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_SET_SCHEDULER{39};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_SERVICE_MANAGER_ALL{40};
constexpr HoudiniEngineUnity::HAPI_PDG_EventType  HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_CONTEXT_EVENTS{41};
