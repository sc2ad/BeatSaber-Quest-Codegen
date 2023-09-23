#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__UIPointerBehavior_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::UI::UIPointerBehavior::UIPointerBehavior(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::InputSystem::UI::UIPointerBehavior::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UI::UIPointerBehavior::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::InputSystem::UI::UIPointerBehavior  UnityEngine::InputSystem::UI::UIPointerBehavior::SingleMouseOrPenButMultiTouchAndTrack{0};
constexpr UnityEngine::InputSystem::UI::UIPointerBehavior  UnityEngine::InputSystem::UI::UIPointerBehavior::SingleUnifiedPointer{1};
constexpr UnityEngine::InputSystem::UI::UIPointerBehavior  UnityEngine::InputSystem::UI::UIPointerBehavior::AllPointersAsIs{2};
