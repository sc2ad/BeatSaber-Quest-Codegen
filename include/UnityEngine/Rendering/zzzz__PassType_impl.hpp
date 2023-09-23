#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Rendering/zzzz__PassType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Rendering::PassType::PassType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Rendering::PassType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Rendering::PassType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Rendering::PassType  UnityEngine::Rendering::PassType::Normal{0};
constexpr UnityEngine::Rendering::PassType  UnityEngine::Rendering::PassType::Vertex{1};
constexpr UnityEngine::Rendering::PassType  UnityEngine::Rendering::PassType::VertexLM{2};
constexpr UnityEngine::Rendering::PassType  UnityEngine::Rendering::PassType::VertexLMRGBM{3};
constexpr UnityEngine::Rendering::PassType  UnityEngine::Rendering::PassType::ForwardBase{4};
constexpr UnityEngine::Rendering::PassType  UnityEngine::Rendering::PassType::ForwardAdd{5};
constexpr UnityEngine::Rendering::PassType  UnityEngine::Rendering::PassType::LightPrePassBase{6};
constexpr UnityEngine::Rendering::PassType  UnityEngine::Rendering::PassType::LightPrePassFinal{7};
constexpr UnityEngine::Rendering::PassType  UnityEngine::Rendering::PassType::ShadowCaster{8};
constexpr UnityEngine::Rendering::PassType  UnityEngine::Rendering::PassType::Deferred{10};
constexpr UnityEngine::Rendering::PassType  UnityEngine::Rendering::PassType::Meta{11};
constexpr UnityEngine::Rendering::PassType  UnityEngine::Rendering::PassType::MotionVectors{12};
constexpr UnityEngine::Rendering::PassType  UnityEngine::Rendering::PassType::ScriptableRenderPipeline{13};
constexpr UnityEngine::Rendering::PassType  UnityEngine::Rendering::PassType::ScriptableRenderPipelineDefaultUnlit{14};
constexpr UnityEngine::Rendering::PassType  UnityEngine::Rendering::PassType::GrabPass{15};
