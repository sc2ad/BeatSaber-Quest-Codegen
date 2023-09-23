#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/TerrainUtils/zzzz__TerrainMapStatusCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::TerrainUtils::TerrainMapStatusCode::TerrainMapStatusCode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::TerrainUtils::TerrainMapStatusCode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TerrainUtils::TerrainMapStatusCode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::TerrainUtils::TerrainMapStatusCode  UnityEngine::TerrainUtils::TerrainMapStatusCode::OK{0};
constexpr UnityEngine::TerrainUtils::TerrainMapStatusCode  UnityEngine::TerrainUtils::TerrainMapStatusCode::Overlapping{1};
constexpr UnityEngine::TerrainUtils::TerrainMapStatusCode  UnityEngine::TerrainUtils::TerrainMapStatusCode::SizeMismatch{4};
constexpr UnityEngine::TerrainUtils::TerrainMapStatusCode  UnityEngine::TerrainUtils::TerrainMapStatusCode::EdgeAlignmentMismatch{8};
