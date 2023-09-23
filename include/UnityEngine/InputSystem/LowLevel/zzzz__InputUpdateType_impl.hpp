#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::LowLevel::InputUpdateType::InputUpdateType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::InputSystem::LowLevel::InputUpdateType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::LowLevel::InputUpdateType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::InputSystem::LowLevel::InputUpdateType  UnityEngine::InputSystem::LowLevel::InputUpdateType::None{0};
constexpr UnityEngine::InputSystem::LowLevel::InputUpdateType  UnityEngine::InputSystem::LowLevel::InputUpdateType::Dynamic{1};
constexpr UnityEngine::InputSystem::LowLevel::InputUpdateType  UnityEngine::InputSystem::LowLevel::InputUpdateType::Fixed{2};
constexpr UnityEngine::InputSystem::LowLevel::InputUpdateType  UnityEngine::InputSystem::LowLevel::InputUpdateType::BeforeRender{4};
constexpr UnityEngine::InputSystem::LowLevel::InputUpdateType  UnityEngine::InputSystem::LowLevel::InputUpdateType::Editor{8};
constexpr UnityEngine::InputSystem::LowLevel::InputUpdateType  UnityEngine::InputSystem::LowLevel::InputUpdateType::Manual{16};
constexpr UnityEngine::InputSystem::LowLevel::InputUpdateType  UnityEngine::InputSystem::LowLevel::InputUpdateType::Default{11};
