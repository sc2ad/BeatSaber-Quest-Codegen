#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__MeshArrays_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::ProBuilder::MeshArrays::MeshArrays(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::ProBuilder::MeshArrays::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ProBuilder::MeshArrays::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::ProBuilder::MeshArrays  UnityEngine::ProBuilder::MeshArrays::Position{1};
constexpr UnityEngine::ProBuilder::MeshArrays  UnityEngine::ProBuilder::MeshArrays::Texture0{2};
constexpr UnityEngine::ProBuilder::MeshArrays  UnityEngine::ProBuilder::MeshArrays::Texture1{4};
constexpr UnityEngine::ProBuilder::MeshArrays  UnityEngine::ProBuilder::MeshArrays::Lightmap{4};
constexpr UnityEngine::ProBuilder::MeshArrays  UnityEngine::ProBuilder::MeshArrays::Texture2{8};
constexpr UnityEngine::ProBuilder::MeshArrays  UnityEngine::ProBuilder::MeshArrays::Texture3{16};
constexpr UnityEngine::ProBuilder::MeshArrays  UnityEngine::ProBuilder::MeshArrays::Color{32};
constexpr UnityEngine::ProBuilder::MeshArrays  UnityEngine::ProBuilder::MeshArrays::Normal{64};
constexpr UnityEngine::ProBuilder::MeshArrays  UnityEngine::ProBuilder::MeshArrays::Tangent{128};
constexpr UnityEngine::ProBuilder::MeshArrays  UnityEngine::ProBuilder::MeshArrays::All{255};
