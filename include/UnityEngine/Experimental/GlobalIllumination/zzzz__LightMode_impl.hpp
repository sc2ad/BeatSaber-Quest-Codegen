#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__LightMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Experimental::GlobalIllumination::LightMode::LightMode(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Experimental::GlobalIllumination::LightMode::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t UnityEngine::Experimental::GlobalIllumination::LightMode::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Experimental::GlobalIllumination::LightMode  UnityEngine::Experimental::GlobalIllumination::LightMode::Realtime{0u};
constexpr UnityEngine::Experimental::GlobalIllumination::LightMode  UnityEngine::Experimental::GlobalIllumination::LightMode::Mixed{1u};
constexpr UnityEngine::Experimental::GlobalIllumination::LightMode  UnityEngine::Experimental::GlobalIllumination::LightMode::Baked{2u};
constexpr UnityEngine::Experimental::GlobalIllumination::LightMode  UnityEngine::Experimental::GlobalIllumination::LightMode::Unknown{3u};
