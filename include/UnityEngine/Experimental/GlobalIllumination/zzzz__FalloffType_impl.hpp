#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__FalloffType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Experimental::GlobalIllumination::FalloffType::FalloffType(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Experimental::GlobalIllumination::FalloffType::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t UnityEngine::Experimental::GlobalIllumination::FalloffType::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Experimental::GlobalIllumination::FalloffType  UnityEngine::Experimental::GlobalIllumination::FalloffType::InverseSquared{0u};
constexpr UnityEngine::Experimental::GlobalIllumination::FalloffType  UnityEngine::Experimental::GlobalIllumination::FalloffType::InverseSquaredNoRangeAttenuation{1u};
constexpr UnityEngine::Experimental::GlobalIllumination::FalloffType  UnityEngine::Experimental::GlobalIllumination::FalloffType::Linear{2u};
constexpr UnityEngine::Experimental::GlobalIllumination::FalloffType  UnityEngine::Experimental::GlobalIllumination::FalloffType::Legacy{3u};
constexpr UnityEngine::Experimental::GlobalIllumination::FalloffType  UnityEngine::Experimental::GlobalIllumination::FalloffType::Undefined{4u};
