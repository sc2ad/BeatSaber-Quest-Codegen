#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/EventSystems/zzzz__EventTriggerType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::EventSystems::EventTriggerType::EventTriggerType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::EventSystems::EventTriggerType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::EventSystems::EventTriggerType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::EventSystems::EventTriggerType  ::UnityEngine::EventSystems::EventTriggerType::PointerEnter{0};
constexpr ::UnityEngine::EventSystems::EventTriggerType  ::UnityEngine::EventSystems::EventTriggerType::PointerExit{1};
constexpr ::UnityEngine::EventSystems::EventTriggerType  ::UnityEngine::EventSystems::EventTriggerType::PointerDown{2};
constexpr ::UnityEngine::EventSystems::EventTriggerType  ::UnityEngine::EventSystems::EventTriggerType::PointerUp{3};
constexpr ::UnityEngine::EventSystems::EventTriggerType  ::UnityEngine::EventSystems::EventTriggerType::PointerClick{4};
constexpr ::UnityEngine::EventSystems::EventTriggerType  ::UnityEngine::EventSystems::EventTriggerType::Drag{5};
constexpr ::UnityEngine::EventSystems::EventTriggerType  ::UnityEngine::EventSystems::EventTriggerType::Drop{6};
constexpr ::UnityEngine::EventSystems::EventTriggerType  ::UnityEngine::EventSystems::EventTriggerType::Scroll{7};
constexpr ::UnityEngine::EventSystems::EventTriggerType  ::UnityEngine::EventSystems::EventTriggerType::UpdateSelected{8};
constexpr ::UnityEngine::EventSystems::EventTriggerType  ::UnityEngine::EventSystems::EventTriggerType::Select{9};
constexpr ::UnityEngine::EventSystems::EventTriggerType  ::UnityEngine::EventSystems::EventTriggerType::Deselect{10};
constexpr ::UnityEngine::EventSystems::EventTriggerType  ::UnityEngine::EventSystems::EventTriggerType::Move{11};
constexpr ::UnityEngine::EventSystems::EventTriggerType  ::UnityEngine::EventSystems::EventTriggerType::InitializePotentialDrag{12};
constexpr ::UnityEngine::EventSystems::EventTriggerType  ::UnityEngine::EventSystems::EventTriggerType::BeginDrag{13};
constexpr ::UnityEngine::EventSystems::EventTriggerType  ::UnityEngine::EventSystems::EventTriggerType::EndDrag{14};
constexpr ::UnityEngine::EventSystems::EventTriggerType  ::UnityEngine::EventSystems::EventTriggerType::Submit{15};
constexpr ::UnityEngine::EventSystems::EventTriggerType  ::UnityEngine::EventSystems::EventTriggerType::Cancel{16};
} // end anonymous namespace
