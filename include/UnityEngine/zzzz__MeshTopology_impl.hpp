#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MeshTopology_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::MeshTopology::MeshTopology(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::MeshTopology::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::MeshTopology::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::MeshTopology  UnityEngine::MeshTopology::Triangles{0};
constexpr UnityEngine::MeshTopology  UnityEngine::MeshTopology::Quads{2};
constexpr UnityEngine::MeshTopology  UnityEngine::MeshTopology::Lines{3};
constexpr UnityEngine::MeshTopology  UnityEngine::MeshTopology::LineStrip{4};
constexpr UnityEngine::MeshTopology  UnityEngine::MeshTopology::Points{5};
