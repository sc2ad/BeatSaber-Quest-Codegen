#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__KeyboardNavigationOperation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::KeyboardNavigationOperation::KeyboardNavigationOperation(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::UIElements::KeyboardNavigationOperation::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::KeyboardNavigationOperation::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::UIElements::KeyboardNavigationOperation  ::UnityEngine::UIElements::KeyboardNavigationOperation::None{0};
constexpr ::UnityEngine::UIElements::KeyboardNavigationOperation  ::UnityEngine::UIElements::KeyboardNavigationOperation::SelectAll{1};
constexpr ::UnityEngine::UIElements::KeyboardNavigationOperation  ::UnityEngine::UIElements::KeyboardNavigationOperation::Cancel{2};
constexpr ::UnityEngine::UIElements::KeyboardNavigationOperation  ::UnityEngine::UIElements::KeyboardNavigationOperation::Submit{3};
constexpr ::UnityEngine::UIElements::KeyboardNavigationOperation  ::UnityEngine::UIElements::KeyboardNavigationOperation::Previous{4};
constexpr ::UnityEngine::UIElements::KeyboardNavigationOperation  ::UnityEngine::UIElements::KeyboardNavigationOperation::Next{5};
constexpr ::UnityEngine::UIElements::KeyboardNavigationOperation  ::UnityEngine::UIElements::KeyboardNavigationOperation::PageUp{6};
constexpr ::UnityEngine::UIElements::KeyboardNavigationOperation  ::UnityEngine::UIElements::KeyboardNavigationOperation::PageDown{7};
constexpr ::UnityEngine::UIElements::KeyboardNavigationOperation  ::UnityEngine::UIElements::KeyboardNavigationOperation::Begin{8};
constexpr ::UnityEngine::UIElements::KeyboardNavigationOperation  ::UnityEngine::UIElements::KeyboardNavigationOperation::End{9};
} // end anonymous namespace
