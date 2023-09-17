#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/zzzz__AttributeTargets_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::AttributeTargets::AttributeTargets(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::AttributeTargets::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::AttributeTargets::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::AttributeTargets  ::System::AttributeTargets::Assembly{1};
constexpr ::System::AttributeTargets  ::System::AttributeTargets::Module{2};
constexpr ::System::AttributeTargets  ::System::AttributeTargets::Class{4};
constexpr ::System::AttributeTargets  ::System::AttributeTargets::Struct{8};
constexpr ::System::AttributeTargets  ::System::AttributeTargets::Enum{16};
constexpr ::System::AttributeTargets  ::System::AttributeTargets::Constructor{32};
constexpr ::System::AttributeTargets  ::System::AttributeTargets::Method{64};
constexpr ::System::AttributeTargets  ::System::AttributeTargets::Property{128};
constexpr ::System::AttributeTargets  ::System::AttributeTargets::Field{256};
constexpr ::System::AttributeTargets  ::System::AttributeTargets::Event{512};
constexpr ::System::AttributeTargets  ::System::AttributeTargets::Interface{1024};
constexpr ::System::AttributeTargets  ::System::AttributeTargets::Parameter{2048};
constexpr ::System::AttributeTargets  ::System::AttributeTargets::Delegate{4096};
constexpr ::System::AttributeTargets  ::System::AttributeTargets::ReturnValue{8192};
constexpr ::System::AttributeTargets  ::System::AttributeTargets::GenericParameter{16384};
constexpr ::System::AttributeTargets  ::System::AttributeTargets::All{32767};
} // end anonymous namespace
