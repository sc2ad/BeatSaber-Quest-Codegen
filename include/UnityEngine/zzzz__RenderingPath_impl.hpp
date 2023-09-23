#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__RenderingPath_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::RenderingPath::RenderingPath(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::RenderingPath::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::RenderingPath::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::RenderingPath  UnityEngine::RenderingPath::UsePlayerSettings{-1};
constexpr UnityEngine::RenderingPath  UnityEngine::RenderingPath::VertexLit{0};
constexpr UnityEngine::RenderingPath  UnityEngine::RenderingPath::Forward{1};
constexpr UnityEngine::RenderingPath  UnityEngine::RenderingPath::DeferredLighting{2};
constexpr UnityEngine::RenderingPath  UnityEngine::RenderingPath::DeferredShading{3};
