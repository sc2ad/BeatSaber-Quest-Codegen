#pragma once
#include "UnityEngine/UI/zzzz__ILayoutSelfController_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutController_def.hpp"
/// @brief Convert operator to UnityEngine::UI::ILayoutController
constexpr  UnityEngine::UI::ILayoutSelfController::operator UnityEngine::UI::ILayoutController() const noexcept {
return UnityEngine::UI::ILayoutController(::bs_hook::Il2CppWrapperType::instance);
}
