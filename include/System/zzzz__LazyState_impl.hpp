#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__LazyState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::LazyState::LazyState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::LazyState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::LazyState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::LazyState  System::LazyState::NoneViaConstructor{0};
constexpr System::LazyState  System::LazyState::NoneViaFactory{1};
constexpr System::LazyState  System::LazyState::NoneException{2};
constexpr System::LazyState  System::LazyState::PublicationOnlyViaConstructor{3};
constexpr System::LazyState  System::LazyState::PublicationOnlyViaFactory{4};
constexpr System::LazyState  System::LazyState::PublicationOnlyWait{5};
constexpr System::LazyState  System::LazyState::PublicationOnlyException{6};
constexpr System::LazyState  System::LazyState::ExecutionAndPublicationViaConstructor{7};
constexpr System::LazyState  System::LazyState::ExecutionAndPublicationViaFactory{8};
constexpr System::LazyState  System::LazyState::ExecutionAndPublicationException{9};
