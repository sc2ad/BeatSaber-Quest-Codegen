#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Runtime/Serialization/zzzz__StreamingContextStates_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Serialization::StreamingContextStates::StreamingContextStates(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Runtime::Serialization::StreamingContextStates::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Runtime::Serialization::StreamingContextStates::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Runtime::Serialization::StreamingContextStates  ::System::Runtime::Serialization::StreamingContextStates::CrossProcess{1};
constexpr ::System::Runtime::Serialization::StreamingContextStates  ::System::Runtime::Serialization::StreamingContextStates::CrossMachine{2};
constexpr ::System::Runtime::Serialization::StreamingContextStates  ::System::Runtime::Serialization::StreamingContextStates::File{4};
constexpr ::System::Runtime::Serialization::StreamingContextStates  ::System::Runtime::Serialization::StreamingContextStates::Persistence{8};
constexpr ::System::Runtime::Serialization::StreamingContextStates  ::System::Runtime::Serialization::StreamingContextStates::Remoting{16};
constexpr ::System::Runtime::Serialization::StreamingContextStates  ::System::Runtime::Serialization::StreamingContextStates::Other{32};
constexpr ::System::Runtime::Serialization::StreamingContextStates  ::System::Runtime::Serialization::StreamingContextStates::Clone{64};
constexpr ::System::Runtime::Serialization::StreamingContextStates  ::System::Runtime::Serialization::StreamingContextStates::CrossAppDomain{128};
constexpr ::System::Runtime::Serialization::StreamingContextStates  ::System::Runtime::Serialization::StreamingContextStates::All{255};
} // end anonymous namespace
