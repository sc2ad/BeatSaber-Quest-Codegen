#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__UriComponents_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::UriComponents::UriComponents(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::UriComponents::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::UriComponents::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::UriComponents  System::UriComponents::Scheme{1};
constexpr System::UriComponents  System::UriComponents::UserInfo{2};
constexpr System::UriComponents  System::UriComponents::Host{4};
constexpr System::UriComponents  System::UriComponents::Port{8};
constexpr System::UriComponents  System::UriComponents::Path{16};
constexpr System::UriComponents  System::UriComponents::Query{32};
constexpr System::UriComponents  System::UriComponents::Fragment{64};
constexpr System::UriComponents  System::UriComponents::StrongPort{128};
constexpr System::UriComponents  System::UriComponents::NormalizedHost{256};
constexpr System::UriComponents  System::UriComponents::KeepDelimiter{1073741824};
constexpr System::UriComponents  System::UriComponents::SerializationInfoString{-2147483648};
constexpr System::UriComponents  System::UriComponents::AbsoluteUri{127};
constexpr System::UriComponents  System::UriComponents::HostAndPort{132};
constexpr System::UriComponents  System::UriComponents::StrongAuthority{134};
constexpr System::UriComponents  System::UriComponents::SchemeAndServer{13};
constexpr System::UriComponents  System::UriComponents::HttpRequestUrl{61};
constexpr System::UriComponents  System::UriComponents::PathAndQuery{48};
