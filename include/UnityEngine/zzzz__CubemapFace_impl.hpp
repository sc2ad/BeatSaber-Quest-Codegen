#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__CubemapFace_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::CubemapFace::CubemapFace(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::CubemapFace::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::CubemapFace::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::CubemapFace  UnityEngine::CubemapFace::Unknown{-1};
constexpr UnityEngine::CubemapFace  UnityEngine::CubemapFace::PositiveX{0};
constexpr UnityEngine::CubemapFace  UnityEngine::CubemapFace::NegativeX{1};
constexpr UnityEngine::CubemapFace  UnityEngine::CubemapFace::PositiveY{2};
constexpr UnityEngine::CubemapFace  UnityEngine::CubemapFace::NegativeY{3};
constexpr UnityEngine::CubemapFace  UnityEngine::CubemapFace::PositiveZ{4};
constexpr UnityEngine::CubemapFace  UnityEngine::CubemapFace::NegativeZ{5};
