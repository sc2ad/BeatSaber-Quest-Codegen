#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CameraEvent_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Rendering::CameraEvent::CameraEvent(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Rendering::CameraEvent::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Rendering::CameraEvent::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::BeforeDepthTexture{0};
constexpr UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::AfterDepthTexture{1};
constexpr UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::BeforeDepthNormalsTexture{2};
constexpr UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::AfterDepthNormalsTexture{3};
constexpr UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::BeforeGBuffer{4};
constexpr UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::AfterGBuffer{5};
constexpr UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::BeforeLighting{6};
constexpr UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::AfterLighting{7};
constexpr UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::BeforeFinalPass{8};
constexpr UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::AfterFinalPass{9};
constexpr UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::BeforeForwardOpaque{10};
constexpr UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::AfterForwardOpaque{11};
constexpr UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::BeforeImageEffectsOpaque{12};
constexpr UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::AfterImageEffectsOpaque{13};
constexpr UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::BeforeSkybox{14};
constexpr UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::AfterSkybox{15};
constexpr UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::BeforeForwardAlpha{16};
constexpr UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::AfterForwardAlpha{17};
constexpr UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::BeforeImageEffects{18};
constexpr UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::AfterImageEffects{19};
constexpr UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::AfterEverything{20};
constexpr UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::BeforeReflections{21};
constexpr UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::AfterReflections{22};
constexpr UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::BeforeHaloAndLensFlares{23};
constexpr UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::AfterHaloAndLensFlares{24};
