#pragma once
#include "UnityEngine/UIElements/zzzz__IGroupBox_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGroupBox_def.hpp"
/// @brief Convert operator to UnityEngine::UIElements::IGroupBox
constexpr  UnityEngine::UIElements::IGroupBox_1::operator UnityEngine::UIElements::IGroupBox() const noexcept {
return UnityEngine::UIElements::IGroupBox(::bs_hook::Il2CppWrapperType::instance);
}
