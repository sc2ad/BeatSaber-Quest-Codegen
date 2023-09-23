#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueKeyword_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::StyleValueKeyword::StyleValueKeyword(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UIElements::StyleValueKeyword::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::StyleValueKeyword::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UIElements::StyleValueKeyword  UnityEngine::UIElements::StyleValueKeyword::Inherit{0};
constexpr UnityEngine::UIElements::StyleValueKeyword  UnityEngine::UIElements::StyleValueKeyword::Initial{1};
constexpr UnityEngine::UIElements::StyleValueKeyword  UnityEngine::UIElements::StyleValueKeyword::Auto{2};
constexpr UnityEngine::UIElements::StyleValueKeyword  UnityEngine::UIElements::StyleValueKeyword::Unset{3};
constexpr UnityEngine::UIElements::StyleValueKeyword  UnityEngine::UIElements::StyleValueKeyword::True{4};
constexpr UnityEngine::UIElements::StyleValueKeyword  UnityEngine::UIElements::StyleValueKeyword::False{5};
constexpr UnityEngine::UIElements::StyleValueKeyword  UnityEngine::UIElements::StyleValueKeyword::None{6};
