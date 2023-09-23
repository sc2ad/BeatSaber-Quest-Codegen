#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__MoveDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::EventSystems::MoveDirection::MoveDirection(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::EventSystems::MoveDirection::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::EventSystems::MoveDirection::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::EventSystems::MoveDirection  UnityEngine::EventSystems::MoveDirection::Left{0};
constexpr UnityEngine::EventSystems::MoveDirection  UnityEngine::EventSystems::MoveDirection::Up{1};
constexpr UnityEngine::EventSystems::MoveDirection  UnityEngine::EventSystems::MoveDirection::Right{2};
constexpr UnityEngine::EventSystems::MoveDirection  UnityEngine::EventSystems::MoveDirection::Down{3};
constexpr UnityEngine::EventSystems::MoveDirection  UnityEngine::EventSystems::MoveDirection::None{4};
