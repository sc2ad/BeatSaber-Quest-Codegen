#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TransformOriginOffset_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::TransformOriginOffset::TransformOriginOffset(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UIElements::TransformOriginOffset::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::TransformOriginOffset::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UIElements::TransformOriginOffset  UnityEngine::UIElements::TransformOriginOffset::Left{1};
constexpr UnityEngine::UIElements::TransformOriginOffset  UnityEngine::UIElements::TransformOriginOffset::Right{2};
constexpr UnityEngine::UIElements::TransformOriginOffset  UnityEngine::UIElements::TransformOriginOffset::Top{3};
constexpr UnityEngine::UIElements::TransformOriginOffset  UnityEngine::UIElements::TransformOriginOffset::Bottom{4};
constexpr UnityEngine::UIElements::TransformOriginOffset  UnityEngine::UIElements::TransformOriginOffset::Center{5};
