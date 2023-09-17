#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Newtonsoft/Json/Serialization/zzzz__JsonContractType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Serialization::JsonContractType::JsonContractType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Newtonsoft::Json::Serialization::JsonContractType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Newtonsoft::Json::Serialization::JsonContractType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Newtonsoft::Json::Serialization::JsonContractType  ::Newtonsoft::Json::Serialization::JsonContractType::None{0};
constexpr ::Newtonsoft::Json::Serialization::JsonContractType  ::Newtonsoft::Json::Serialization::JsonContractType::Object{1};
constexpr ::Newtonsoft::Json::Serialization::JsonContractType  ::Newtonsoft::Json::Serialization::JsonContractType::Array{2};
constexpr ::Newtonsoft::Json::Serialization::JsonContractType  ::Newtonsoft::Json::Serialization::JsonContractType::Primitive{3};
constexpr ::Newtonsoft::Json::Serialization::JsonContractType  ::Newtonsoft::Json::Serialization::JsonContractType::String{4};
constexpr ::Newtonsoft::Json::Serialization::JsonContractType  ::Newtonsoft::Json::Serialization::JsonContractType::Dictionary{5};
constexpr ::Newtonsoft::Json::Serialization::JsonContractType  ::Newtonsoft::Json::Serialization::JsonContractType::Dynamic{6};
constexpr ::Newtonsoft::Json::Serialization::JsonContractType  ::Newtonsoft::Json::Serialization::JsonContractType::Serializable{7};
constexpr ::Newtonsoft::Json::Serialization::JsonContractType  ::Newtonsoft::Json::Serialization::JsonContractType::Linq{8};
} // end anonymous namespace
