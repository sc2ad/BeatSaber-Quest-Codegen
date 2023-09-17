#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__LightType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::GlobalIllumination::LightType::LightType(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::Experimental::GlobalIllumination::LightType::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::UnityEngine::Experimental::GlobalIllumination::LightType::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::Experimental::GlobalIllumination::LightType  ::UnityEngine::Experimental::GlobalIllumination::LightType::Directional{0u};
constexpr ::UnityEngine::Experimental::GlobalIllumination::LightType  ::UnityEngine::Experimental::GlobalIllumination::LightType::Point{1u};
constexpr ::UnityEngine::Experimental::GlobalIllumination::LightType  ::UnityEngine::Experimental::GlobalIllumination::LightType::Spot{2u};
constexpr ::UnityEngine::Experimental::GlobalIllumination::LightType  ::UnityEngine::Experimental::GlobalIllumination::LightType::Rectangle{3u};
constexpr ::UnityEngine::Experimental::GlobalIllumination::LightType  ::UnityEngine::Experimental::GlobalIllumination::LightType::Disc{4u};
constexpr ::UnityEngine::Experimental::GlobalIllumination::LightType  ::UnityEngine::Experimental::GlobalIllumination::LightType::SpotPyramidShape{5u};
constexpr ::UnityEngine::Experimental::GlobalIllumination::LightType  ::UnityEngine::Experimental::GlobalIllumination::LightType::SpotBoxShape{6u};
} // end anonymous namespace
