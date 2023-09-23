#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Reflection/zzzz__CorElementType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Reflection::CorElementType::CorElementType(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Reflection::CorElementType::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t System::Reflection::CorElementType::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::End{0u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::Void{1u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::Boolean{2u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::Char{3u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::I1{4u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::U1{5u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::I2{6u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::U2{7u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::I4{8u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::U4{9u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::I8{10u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::U8{11u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::R4{12u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::R8{13u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::String{14u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::Ptr{15u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ByRef{16u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ValueType{17u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::Class{18u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::Var{19u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::Array{20u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::GenericInst{21u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::TypedByRef{22u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::I{24u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::U{25u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::FnPtr{27u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::Object{28u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::SzArray{29u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::MVar{30u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::CModReqd{31u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::CModOpt{32u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::Internal{33u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::Max{34u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::Modifier{64u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::Sentinel{65u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::Pinned{69u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_END{0u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_VOID{1u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_BOOLEAN{2u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_CHAR{3u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_I1{4u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_U1{5u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_I2{6u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_U2{7u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_I4{8u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_U4{9u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_I8{10u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_U8{11u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_R4{12u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_R8{13u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_STRING{14u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_PTR{15u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_BYREF{16u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_VALUETYPE{17u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_CLASS{18u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_VAR{19u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_ARRAY{20u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_GENERICINST{21u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_TYPEDBYREF{22u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_I{24u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_U{25u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_FNPTR{27u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_OBJECT{28u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_SZARRAY{29u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_MVAR{30u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_CMOD_REQD{31u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_CMOD_OPT{32u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_INTERNAL{33u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_MAX{34u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_MODIFIER{64u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_SENTINEL{65u};
constexpr System::Reflection::CorElementType  System::Reflection::CorElementType::ELEMENT_TYPE_PINNED{69u};
