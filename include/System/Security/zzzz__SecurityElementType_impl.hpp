#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Security/zzzz__SecurityElementType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::SecurityElementType::SecurityElementType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Security::SecurityElementType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Security::SecurityElementType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Security::SecurityElementType  ::System::Security::SecurityElementType::Regular{0};
constexpr ::System::Security::SecurityElementType  ::System::Security::SecurityElementType::Format{1};
constexpr ::System::Security::SecurityElementType  ::System::Security::SecurityElementType::Comment{2};
} // end anonymous namespace
