#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/zzzz__AdditionalCanvasShaderChannels_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AdditionalCanvasShaderChannels::AdditionalCanvasShaderChannels(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::AdditionalCanvasShaderChannels::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::AdditionalCanvasShaderChannels::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::AdditionalCanvasShaderChannels  ::UnityEngine::AdditionalCanvasShaderChannels::None{0};
constexpr ::UnityEngine::AdditionalCanvasShaderChannels  ::UnityEngine::AdditionalCanvasShaderChannels::TexCoord1{1};
constexpr ::UnityEngine::AdditionalCanvasShaderChannels  ::UnityEngine::AdditionalCanvasShaderChannels::TexCoord2{2};
constexpr ::UnityEngine::AdditionalCanvasShaderChannels  ::UnityEngine::AdditionalCanvasShaderChannels::TexCoord3{4};
constexpr ::UnityEngine::AdditionalCanvasShaderChannels  ::UnityEngine::AdditionalCanvasShaderChannels::Normal{8};
constexpr ::UnityEngine::AdditionalCanvasShaderChannels  ::UnityEngine::AdditionalCanvasShaderChannels::Tangent{16};
} // end anonymous namespace
