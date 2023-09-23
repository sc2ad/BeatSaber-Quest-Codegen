#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Net/Http/Headers/zzzz__HttpHeaderKind_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::Http::Headers::HttpHeaderKind::HttpHeaderKind(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Net::Http::Headers::HttpHeaderKind::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::Http::Headers::HttpHeaderKind::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Net::Http::Headers::HttpHeaderKind  System::Net::Http::Headers::HttpHeaderKind::None{0};
constexpr System::Net::Http::Headers::HttpHeaderKind  System::Net::Http::Headers::HttpHeaderKind::Request{1};
constexpr System::Net::Http::Headers::HttpHeaderKind  System::Net::Http::Headers::HttpHeaderKind::Response{2};
constexpr System::Net::Http::Headers::HttpHeaderKind  System::Net::Http::Headers::HttpHeaderKind::Content{4};
