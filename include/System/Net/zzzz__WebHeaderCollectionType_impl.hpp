#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Net/zzzz__WebHeaderCollectionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::WebHeaderCollectionType::WebHeaderCollectionType(uint16_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Net::WebHeaderCollectionType::__set_value__(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x0>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t ::System::Net::WebHeaderCollectionType::__get_value__() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x0>(this->__instance);
}
constexpr ::System::Net::WebHeaderCollectionType  ::System::Net::WebHeaderCollectionType::Unknown{0u};
constexpr ::System::Net::WebHeaderCollectionType  ::System::Net::WebHeaderCollectionType::WebRequest{1u};
constexpr ::System::Net::WebHeaderCollectionType  ::System::Net::WebHeaderCollectionType::WebResponse{2u};
constexpr ::System::Net::WebHeaderCollectionType  ::System::Net::WebHeaderCollectionType::HttpWebRequest{3u};
constexpr ::System::Net::WebHeaderCollectionType  ::System::Net::WebHeaderCollectionType::HttpWebResponse{4u};
constexpr ::System::Net::WebHeaderCollectionType  ::System::Net::WebHeaderCollectionType::HttpListenerRequest{5u};
constexpr ::System::Net::WebHeaderCollectionType  ::System::Net::WebHeaderCollectionType::HttpListenerResponse{6u};
constexpr ::System::Net::WebHeaderCollectionType  ::System::Net::WebHeaderCollectionType::FtpWebRequest{7u};
constexpr ::System::Net::WebHeaderCollectionType  ::System::Net::WebHeaderCollectionType::FtpWebResponse{8u};
constexpr ::System::Net::WebHeaderCollectionType  ::System::Net::WebHeaderCollectionType::FileWebRequest{9u};
constexpr ::System::Net::WebHeaderCollectionType  ::System::Net::WebHeaderCollectionType::FileWebResponse{10u};
} // end anonymous namespace
