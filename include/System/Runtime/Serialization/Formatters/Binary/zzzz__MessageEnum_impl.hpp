#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__MessageEnum_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum::MessageEnum(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Runtime::Serialization::Formatters::Binary::MessageEnum::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Runtime::Serialization::Formatters::Binary::MessageEnum::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum  ::System::Runtime::Serialization::Formatters::Binary::MessageEnum::NoArgs{1};
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum  ::System::Runtime::Serialization::Formatters::Binary::MessageEnum::ArgsInline{2};
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum  ::System::Runtime::Serialization::Formatters::Binary::MessageEnum::ArgsIsArray{4};
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum  ::System::Runtime::Serialization::Formatters::Binary::MessageEnum::ArgsInArray{8};
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum  ::System::Runtime::Serialization::Formatters::Binary::MessageEnum::NoContext{16};
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum  ::System::Runtime::Serialization::Formatters::Binary::MessageEnum::ContextInline{32};
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum  ::System::Runtime::Serialization::Formatters::Binary::MessageEnum::ContextInArray{64};
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum  ::System::Runtime::Serialization::Formatters::Binary::MessageEnum::MethodSignatureInArray{128};
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum  ::System::Runtime::Serialization::Formatters::Binary::MessageEnum::PropertyInArray{256};
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum  ::System::Runtime::Serialization::Formatters::Binary::MessageEnum::NoReturnValue{512};
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum  ::System::Runtime::Serialization::Formatters::Binary::MessageEnum::ReturnValueVoid{1024};
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum  ::System::Runtime::Serialization::Formatters::Binary::MessageEnum::ReturnValueInline{2048};
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum  ::System::Runtime::Serialization::Formatters::Binary::MessageEnum::ReturnValueInArray{4096};
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum  ::System::Runtime::Serialization::Formatters::Binary::MessageEnum::ExceptionInArray{8192};
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum  ::System::Runtime::Serialization::Formatters::Binary::MessageEnum::GenericMethod{32768};
} // end anonymous namespace
