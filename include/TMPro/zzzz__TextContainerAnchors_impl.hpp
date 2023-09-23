#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "TMPro/zzzz__TextContainerAnchors_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr TMPro::TextContainerAnchors::TextContainerAnchors(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void TMPro::TextContainerAnchors::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::TextContainerAnchors::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr TMPro::TextContainerAnchors  TMPro::TextContainerAnchors::TopLeft{0};
constexpr TMPro::TextContainerAnchors  TMPro::TextContainerAnchors::Top{1};
constexpr TMPro::TextContainerAnchors  TMPro::TextContainerAnchors::TopRight{2};
constexpr TMPro::TextContainerAnchors  TMPro::TextContainerAnchors::Left{3};
constexpr TMPro::TextContainerAnchors  TMPro::TextContainerAnchors::Middle{4};
constexpr TMPro::TextContainerAnchors  TMPro::TextContainerAnchors::Right{5};
constexpr TMPro::TextContainerAnchors  TMPro::TextContainerAnchors::BottomLeft{6};
constexpr TMPro::TextContainerAnchors  TMPro::TextContainerAnchors::Bottom{7};
constexpr TMPro::TextContainerAnchors  TMPro::TextContainerAnchors::BottomRight{8};
constexpr TMPro::TextContainerAnchors  TMPro::TextContainerAnchors::Custom{9};
