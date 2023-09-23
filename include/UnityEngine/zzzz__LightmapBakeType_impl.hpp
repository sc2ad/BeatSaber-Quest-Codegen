#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__LightmapBakeType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::LightmapBakeType::LightmapBakeType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::LightmapBakeType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::LightmapBakeType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::LightmapBakeType  UnityEngine::LightmapBakeType::Realtime{4};
constexpr UnityEngine::LightmapBakeType  UnityEngine::LightmapBakeType::Baked{2};
constexpr UnityEngine::LightmapBakeType  UnityEngine::LightmapBakeType::Mixed{1};
