#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__UsageHint_def.hpp"
// Ctor Parameters [CppParam { name: "content", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::InputSystem::XR::UsageHint::UsageHint(::StringW content) noexcept : ::bs_hook::ValueTypeWrapper() {this->content = content;
}
constexpr void UnityEngine::InputSystem::XR::UsageHint::__set_content(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::XR::UsageHint::__get_content() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
