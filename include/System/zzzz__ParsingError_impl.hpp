#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/zzzz__ParsingError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ParsingError::ParsingError(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::ParsingError::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::ParsingError::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::ParsingError  ::System::ParsingError::None{0};
constexpr ::System::ParsingError  ::System::ParsingError::BadFormat{1};
constexpr ::System::ParsingError  ::System::ParsingError::BadScheme{2};
constexpr ::System::ParsingError  ::System::ParsingError::BadAuthority{3};
constexpr ::System::ParsingError  ::System::ParsingError::EmptyUriString{4};
constexpr ::System::ParsingError  ::System::ParsingError::LastRelativeUriOkErrIndex{4};
constexpr ::System::ParsingError  ::System::ParsingError::SchemeLimit{5};
constexpr ::System::ParsingError  ::System::ParsingError::SizeLimit{6};
constexpr ::System::ParsingError  ::System::ParsingError::MustRootedPath{7};
constexpr ::System::ParsingError  ::System::ParsingError::BadHostName{8};
constexpr ::System::ParsingError  ::System::ParsingError::NonEmptyHost{9};
constexpr ::System::ParsingError  ::System::ParsingError::BadPort{10};
constexpr ::System::ParsingError  ::System::ParsingError::BadAuthorityTerminator{11};
constexpr ::System::ParsingError  ::System::ParsingError::CannotCreateRelative{12};
} // end anonymous namespace
