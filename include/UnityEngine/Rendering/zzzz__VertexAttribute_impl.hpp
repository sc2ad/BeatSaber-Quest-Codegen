#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VertexAttribute_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Rendering::VertexAttribute::VertexAttribute(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Rendering::VertexAttribute::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Rendering::VertexAttribute::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Rendering::VertexAttribute  UnityEngine::Rendering::VertexAttribute::Position{0};
constexpr UnityEngine::Rendering::VertexAttribute  UnityEngine::Rendering::VertexAttribute::Normal{1};
constexpr UnityEngine::Rendering::VertexAttribute  UnityEngine::Rendering::VertexAttribute::Tangent{2};
constexpr UnityEngine::Rendering::VertexAttribute  UnityEngine::Rendering::VertexAttribute::Color{3};
constexpr UnityEngine::Rendering::VertexAttribute  UnityEngine::Rendering::VertexAttribute::TexCoord0{4};
constexpr UnityEngine::Rendering::VertexAttribute  UnityEngine::Rendering::VertexAttribute::TexCoord1{5};
constexpr UnityEngine::Rendering::VertexAttribute  UnityEngine::Rendering::VertexAttribute::TexCoord2{6};
constexpr UnityEngine::Rendering::VertexAttribute  UnityEngine::Rendering::VertexAttribute::TexCoord3{7};
constexpr UnityEngine::Rendering::VertexAttribute  UnityEngine::Rendering::VertexAttribute::TexCoord4{8};
constexpr UnityEngine::Rendering::VertexAttribute  UnityEngine::Rendering::VertexAttribute::TexCoord5{9};
constexpr UnityEngine::Rendering::VertexAttribute  UnityEngine::Rendering::VertexAttribute::TexCoord6{10};
constexpr UnityEngine::Rendering::VertexAttribute  UnityEngine::Rendering::VertexAttribute::TexCoord7{11};
constexpr UnityEngine::Rendering::VertexAttribute  UnityEngine::Rendering::VertexAttribute::BlendWeight{12};
constexpr UnityEngine::Rendering::VertexAttribute  UnityEngine::Rendering::VertexAttribute::BlendIndices{13};
