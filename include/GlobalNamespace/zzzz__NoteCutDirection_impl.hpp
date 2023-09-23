#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::NoteCutDirection::NoteCutDirection(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::NoteCutDirection::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::NoteCutDirection::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::NoteCutDirection  GlobalNamespace::NoteCutDirection::Up{0};
constexpr GlobalNamespace::NoteCutDirection  GlobalNamespace::NoteCutDirection::Down{1};
constexpr GlobalNamespace::NoteCutDirection  GlobalNamespace::NoteCutDirection::Left{2};
constexpr GlobalNamespace::NoteCutDirection  GlobalNamespace::NoteCutDirection::Right{3};
constexpr GlobalNamespace::NoteCutDirection  GlobalNamespace::NoteCutDirection::UpLeft{4};
constexpr GlobalNamespace::NoteCutDirection  GlobalNamespace::NoteCutDirection::UpRight{5};
constexpr GlobalNamespace::NoteCutDirection  GlobalNamespace::NoteCutDirection::DownLeft{6};
constexpr GlobalNamespace::NoteCutDirection  GlobalNamespace::NoteCutDirection::DownRight{7};
constexpr GlobalNamespace::NoteCutDirection  GlobalNamespace::NoteCutDirection::Any{8};
constexpr GlobalNamespace::NoteCutDirection  GlobalNamespace::NoteCutDirection::None{9};
