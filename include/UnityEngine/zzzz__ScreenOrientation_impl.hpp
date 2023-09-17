#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/zzzz__ScreenOrientation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ScreenOrientation::ScreenOrientation(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::ScreenOrientation::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ScreenOrientation::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::ScreenOrientation  ::UnityEngine::ScreenOrientation::Unknown{0};
constexpr ::UnityEngine::ScreenOrientation  ::UnityEngine::ScreenOrientation::Landscape{3};
constexpr ::UnityEngine::ScreenOrientation  ::UnityEngine::ScreenOrientation::Portrait{1};
constexpr ::UnityEngine::ScreenOrientation  ::UnityEngine::ScreenOrientation::PortraitUpsideDown{2};
constexpr ::UnityEngine::ScreenOrientation  ::UnityEngine::ScreenOrientation::LandscapeLeft{3};
constexpr ::UnityEngine::ScreenOrientation  ::UnityEngine::ScreenOrientation::LandscapeRight{4};
constexpr ::UnityEngine::ScreenOrientation  ::UnityEngine::ScreenOrientation::AutoRotation{5};
} // end anonymous namespace