#pragma once
namespace {
#include "UnityEngine/InputSystem/zzzz__IInputInteraction_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputInteraction_def.hpp"
/// @brief Convert operator to ::UnityEngine::InputSystem::IInputInteraction
constexpr  ::UnityEngine::InputSystem::IInputInteraction_1::operator ::UnityEngine::InputSystem::IInputInteraction() const noexcept {
return ::UnityEngine::InputSystem::IInputInteraction(::bs_hook::Il2CppWrapperType::instance);
}
} // end anonymous namespace
