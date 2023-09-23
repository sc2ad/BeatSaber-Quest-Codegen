#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__CommandType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::UIR::CommandType::CommandType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UIElements::UIR::CommandType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UIR::CommandType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UIElements::UIR::CommandType  UnityEngine::UIElements::UIR::CommandType::Draw{0};
constexpr UnityEngine::UIElements::UIR::CommandType  UnityEngine::UIElements::UIR::CommandType::ImmediateCull{1};
constexpr UnityEngine::UIElements::UIR::CommandType  UnityEngine::UIElements::UIR::CommandType::Immediate{2};
constexpr UnityEngine::UIElements::UIR::CommandType  UnityEngine::UIElements::UIR::CommandType::PushView{3};
constexpr UnityEngine::UIElements::UIR::CommandType  UnityEngine::UIElements::UIR::CommandType::PopView{4};
constexpr UnityEngine::UIElements::UIR::CommandType  UnityEngine::UIElements::UIR::CommandType::PushScissor{5};
constexpr UnityEngine::UIElements::UIR::CommandType  UnityEngine::UIElements::UIR::CommandType::PopScissor{6};
constexpr UnityEngine::UIElements::UIR::CommandType  UnityEngine::UIElements::UIR::CommandType::PushRenderTexture{7};
constexpr UnityEngine::UIElements::UIR::CommandType  UnityEngine::UIElements::UIR::CommandType::PopRenderTexture{8};
constexpr UnityEngine::UIElements::UIR::CommandType  UnityEngine::UIElements::UIR::CommandType::BlitToPreviousRT{9};
constexpr UnityEngine::UIElements::UIR::CommandType  UnityEngine::UIElements::UIR::CommandType::PushDefaultMaterial{10};
constexpr UnityEngine::UIElements::UIR::CommandType  UnityEngine::UIElements::UIR::CommandType::PopDefaultMaterial{11};
