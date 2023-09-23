#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryHeaderEnum_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::BinaryHeaderEnum(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::SerializedStreamHeader{0};
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::Object{1};
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::ObjectWithMap{2};
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::ObjectWithMapAssemId{3};
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::ObjectWithMapTyped{4};
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::ObjectWithMapTypedAssemId{5};
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::ObjectString{6};
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::Array{7};
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::MemberPrimitiveTyped{8};
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::MemberReference{9};
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::ObjectNull{10};
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::MessageEnd{11};
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::Assembly{12};
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::ObjectNullMultiple256{13};
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::ObjectNullMultiple{14};
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::ArraySinglePrimitive{15};
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::ArraySingleObject{16};
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::ArraySingleString{17};
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::CrossAppDomainMap{18};
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::CrossAppDomainString{19};
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::CrossAppDomainAssembly{20};
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::MethodCall{21};
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::MethodReturn{22};
