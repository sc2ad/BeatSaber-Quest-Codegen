#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Newtonsoft/Json/Linq/zzzz__CommentHandling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Linq::CommentHandling::CommentHandling(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Newtonsoft::Json::Linq::CommentHandling::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Newtonsoft::Json::Linq::CommentHandling::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Newtonsoft::Json::Linq::CommentHandling  ::Newtonsoft::Json::Linq::CommentHandling::Ignore{0};
constexpr ::Newtonsoft::Json::Linq::CommentHandling  ::Newtonsoft::Json::Linq::CommentHandling::Load{1};
} // end anonymous namespace
