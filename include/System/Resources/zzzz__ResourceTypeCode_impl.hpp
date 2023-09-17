#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Resources/zzzz__ResourceTypeCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Resources::ResourceTypeCode::ResourceTypeCode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Resources::ResourceTypeCode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Resources::ResourceTypeCode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Resources::ResourceTypeCode  ::System::Resources::ResourceTypeCode::Null{0};
constexpr ::System::Resources::ResourceTypeCode  ::System::Resources::ResourceTypeCode::String{1};
constexpr ::System::Resources::ResourceTypeCode  ::System::Resources::ResourceTypeCode::Boolean{2};
constexpr ::System::Resources::ResourceTypeCode  ::System::Resources::ResourceTypeCode::Char{3};
constexpr ::System::Resources::ResourceTypeCode  ::System::Resources::ResourceTypeCode::Byte{4};
constexpr ::System::Resources::ResourceTypeCode  ::System::Resources::ResourceTypeCode::SByte{5};
constexpr ::System::Resources::ResourceTypeCode  ::System::Resources::ResourceTypeCode::Int16{6};
constexpr ::System::Resources::ResourceTypeCode  ::System::Resources::ResourceTypeCode::UInt16{7};
constexpr ::System::Resources::ResourceTypeCode  ::System::Resources::ResourceTypeCode::Int32{8};
constexpr ::System::Resources::ResourceTypeCode  ::System::Resources::ResourceTypeCode::UInt32{9};
constexpr ::System::Resources::ResourceTypeCode  ::System::Resources::ResourceTypeCode::Int64{10};
constexpr ::System::Resources::ResourceTypeCode  ::System::Resources::ResourceTypeCode::UInt64{11};
constexpr ::System::Resources::ResourceTypeCode  ::System::Resources::ResourceTypeCode::Single{12};
constexpr ::System::Resources::ResourceTypeCode  ::System::Resources::ResourceTypeCode::Double{13};
constexpr ::System::Resources::ResourceTypeCode  ::System::Resources::ResourceTypeCode::Decimal{14};
constexpr ::System::Resources::ResourceTypeCode  ::System::Resources::ResourceTypeCode::DateTime{15};
constexpr ::System::Resources::ResourceTypeCode  ::System::Resources::ResourceTypeCode::TimeSpan{16};
constexpr ::System::Resources::ResourceTypeCode  ::System::Resources::ResourceTypeCode::LastPrimitive{16};
constexpr ::System::Resources::ResourceTypeCode  ::System::Resources::ResourceTypeCode::ByteArray{32};
constexpr ::System::Resources::ResourceTypeCode  ::System::Resources::ResourceTypeCode::Stream{33};
constexpr ::System::Resources::ResourceTypeCode  ::System::Resources::ResourceTypeCode::StartOfUserTypes{64};
} // end anonymous namespace
