#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::StyleKeyword::StyleKeyword(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UIElements::StyleKeyword::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::StyleKeyword::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UIElements::StyleKeyword  UnityEngine::UIElements::StyleKeyword::Undefined{0};
constexpr UnityEngine::UIElements::StyleKeyword  UnityEngine::UIElements::StyleKeyword::Null{1};
constexpr UnityEngine::UIElements::StyleKeyword  UnityEngine::UIElements::StyleKeyword::Auto{2};
constexpr UnityEngine::UIElements::StyleKeyword  UnityEngine::UIElements::StyleKeyword::None{3};
constexpr UnityEngine::UIElements::StyleKeyword  UnityEngine::UIElements::StyleKeyword::Initial{4};
