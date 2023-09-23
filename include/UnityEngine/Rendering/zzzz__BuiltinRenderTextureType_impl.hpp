#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BuiltinRenderTextureType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Rendering::BuiltinRenderTextureType::BuiltinRenderTextureType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Rendering::BuiltinRenderTextureType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Rendering::BuiltinRenderTextureType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Rendering::BuiltinRenderTextureType  UnityEngine::Rendering::BuiltinRenderTextureType::PropertyName{-4};
constexpr UnityEngine::Rendering::BuiltinRenderTextureType  UnityEngine::Rendering::BuiltinRenderTextureType::BufferPtr{-3};
constexpr UnityEngine::Rendering::BuiltinRenderTextureType  UnityEngine::Rendering::BuiltinRenderTextureType::RenderTexture{-2};
constexpr UnityEngine::Rendering::BuiltinRenderTextureType  UnityEngine::Rendering::BuiltinRenderTextureType::BindableTexture{-1};
constexpr UnityEngine::Rendering::BuiltinRenderTextureType  UnityEngine::Rendering::BuiltinRenderTextureType::None{0};
constexpr UnityEngine::Rendering::BuiltinRenderTextureType  UnityEngine::Rendering::BuiltinRenderTextureType::CurrentActive{1};
constexpr UnityEngine::Rendering::BuiltinRenderTextureType  UnityEngine::Rendering::BuiltinRenderTextureType::CameraTarget{2};
constexpr UnityEngine::Rendering::BuiltinRenderTextureType  UnityEngine::Rendering::BuiltinRenderTextureType::Depth{3};
constexpr UnityEngine::Rendering::BuiltinRenderTextureType  UnityEngine::Rendering::BuiltinRenderTextureType::DepthNormals{4};
constexpr UnityEngine::Rendering::BuiltinRenderTextureType  UnityEngine::Rendering::BuiltinRenderTextureType::ResolvedDepth{5};
constexpr UnityEngine::Rendering::BuiltinRenderTextureType  UnityEngine::Rendering::BuiltinRenderTextureType::PrepassNormalsSpec{7};
constexpr UnityEngine::Rendering::BuiltinRenderTextureType  UnityEngine::Rendering::BuiltinRenderTextureType::PrepassLight{8};
constexpr UnityEngine::Rendering::BuiltinRenderTextureType  UnityEngine::Rendering::BuiltinRenderTextureType::PrepassLightSpec{9};
constexpr UnityEngine::Rendering::BuiltinRenderTextureType  UnityEngine::Rendering::BuiltinRenderTextureType::GBuffer0{10};
constexpr UnityEngine::Rendering::BuiltinRenderTextureType  UnityEngine::Rendering::BuiltinRenderTextureType::GBuffer1{11};
constexpr UnityEngine::Rendering::BuiltinRenderTextureType  UnityEngine::Rendering::BuiltinRenderTextureType::GBuffer2{12};
constexpr UnityEngine::Rendering::BuiltinRenderTextureType  UnityEngine::Rendering::BuiltinRenderTextureType::GBuffer3{13};
constexpr UnityEngine::Rendering::BuiltinRenderTextureType  UnityEngine::Rendering::BuiltinRenderTextureType::Reflections{14};
constexpr UnityEngine::Rendering::BuiltinRenderTextureType  UnityEngine::Rendering::BuiltinRenderTextureType::MotionVectors{15};
constexpr UnityEngine::Rendering::BuiltinRenderTextureType  UnityEngine::Rendering::BuiltinRenderTextureType::GBuffer4{16};
constexpr UnityEngine::Rendering::BuiltinRenderTextureType  UnityEngine::Rendering::BuiltinRenderTextureType::GBuffer5{17};
constexpr UnityEngine::Rendering::BuiltinRenderTextureType  UnityEngine::Rendering::BuiltinRenderTextureType::GBuffer6{18};
constexpr UnityEngine::Rendering::BuiltinRenderTextureType  UnityEngine::Rendering::BuiltinRenderTextureType::GBuffer7{19};
