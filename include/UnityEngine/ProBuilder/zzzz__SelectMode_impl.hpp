#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__SelectMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::ProBuilder::SelectMode::SelectMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::ProBuilder::SelectMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ProBuilder::SelectMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::ProBuilder::SelectMode  UnityEngine::ProBuilder::SelectMode::None{0};
constexpr UnityEngine::ProBuilder::SelectMode  UnityEngine::ProBuilder::SelectMode::Object{1};
constexpr UnityEngine::ProBuilder::SelectMode  UnityEngine::ProBuilder::SelectMode::Vertex{2};
constexpr UnityEngine::ProBuilder::SelectMode  UnityEngine::ProBuilder::SelectMode::Edge{4};
constexpr UnityEngine::ProBuilder::SelectMode  UnityEngine::ProBuilder::SelectMode::Face{8};
constexpr UnityEngine::ProBuilder::SelectMode  UnityEngine::ProBuilder::SelectMode::TextureFace{16};
constexpr UnityEngine::ProBuilder::SelectMode  UnityEngine::ProBuilder::SelectMode::TextureEdge{32};
constexpr UnityEngine::ProBuilder::SelectMode  UnityEngine::ProBuilder::SelectMode::TextureVertex{64};
constexpr UnityEngine::ProBuilder::SelectMode  UnityEngine::ProBuilder::SelectMode::InputTool{128};
constexpr UnityEngine::ProBuilder::SelectMode  UnityEngine::ProBuilder::SelectMode::Any{65535};
