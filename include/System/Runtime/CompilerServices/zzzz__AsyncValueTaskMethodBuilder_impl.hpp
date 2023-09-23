#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncValueTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
// Ctor Parameters [CppParam { name: "_methodBuilder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "_haveResult", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_useBuilder", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::AsyncValueTaskMethodBuilder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder _methodBuilder, bool _haveResult, bool _useBuilder) noexcept : ::bs_hook::ValueTypeWrapper() {this->_methodBuilder = _methodBuilder;
this->_haveResult = _haveResult;
this->_useBuilder = _useBuilder;
}
constexpr void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::__set__methodBuilder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x0>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::__get__methodBuilder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x0>(this->__instance);
}
constexpr void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::__set__haveResult(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->__instance, std::forward<bool>(value));
}
constexpr bool System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::__get__haveResult() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->__instance);
}
constexpr void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::__set__useBuilder(bool value)  {
::cordl_internals::setInstanceField<bool, 0x19>(this->__instance, std::forward<bool>(value));
}
constexpr bool System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::__get__useBuilder() const {
return ::cordl_internals::getInstanceField<bool, 0x19>(this->__instance);
}
