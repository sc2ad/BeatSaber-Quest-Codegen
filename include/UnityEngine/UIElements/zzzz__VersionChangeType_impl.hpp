#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VersionChangeType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::VersionChangeType::VersionChangeType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UIElements::VersionChangeType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::VersionChangeType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UIElements::VersionChangeType  UnityEngine::UIElements::VersionChangeType::Bindings{1};
constexpr UnityEngine::UIElements::VersionChangeType  UnityEngine::UIElements::VersionChangeType::ViewData{2};
constexpr UnityEngine::UIElements::VersionChangeType  UnityEngine::UIElements::VersionChangeType::Hierarchy{4};
constexpr UnityEngine::UIElements::VersionChangeType  UnityEngine::UIElements::VersionChangeType::Layout{8};
constexpr UnityEngine::UIElements::VersionChangeType  UnityEngine::UIElements::VersionChangeType::StyleSheet{16};
constexpr UnityEngine::UIElements::VersionChangeType  UnityEngine::UIElements::VersionChangeType::Styles{32};
constexpr UnityEngine::UIElements::VersionChangeType  UnityEngine::UIElements::VersionChangeType::Overflow{64};
constexpr UnityEngine::UIElements::VersionChangeType  UnityEngine::UIElements::VersionChangeType::BorderRadius{128};
constexpr UnityEngine::UIElements::VersionChangeType  UnityEngine::UIElements::VersionChangeType::BorderWidth{256};
constexpr UnityEngine::UIElements::VersionChangeType  UnityEngine::UIElements::VersionChangeType::Transform{512};
constexpr UnityEngine::UIElements::VersionChangeType  UnityEngine::UIElements::VersionChangeType::Size{1024};
constexpr UnityEngine::UIElements::VersionChangeType  UnityEngine::UIElements::VersionChangeType::Repaint{2048};
constexpr UnityEngine::UIElements::VersionChangeType  UnityEngine::UIElements::VersionChangeType::Opacity{4096};
constexpr UnityEngine::UIElements::VersionChangeType  UnityEngine::UIElements::VersionChangeType::Color{8192};
constexpr UnityEngine::UIElements::VersionChangeType  UnityEngine::UIElements::VersionChangeType::RenderHints{16384};
constexpr UnityEngine::UIElements::VersionChangeType  UnityEngine::UIElements::VersionChangeType::TransitionProperty{32768};
