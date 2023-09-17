#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalParseTypeE_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE::InternalParseTypeE(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE  ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE::Empty{0};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE  ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE::SerializedStreamHeader{1};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE  ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE::Object{2};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE  ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE::Member{3};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE  ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE::ObjectEnd{4};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE  ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE::MemberEnd{5};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE  ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE::Headers{6};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE  ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE::HeadersEnd{7};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE  ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE::SerializedStreamHeaderEnd{8};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE  ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE::Envelope{9};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE  ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE::EnvelopeEnd{10};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE  ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE::Body{11};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE  ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE::BodyEnd{12};
} // end anonymous namespace
