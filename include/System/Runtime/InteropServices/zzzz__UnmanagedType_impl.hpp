#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__UnmanagedType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Runtime::InteropServices::UnmanagedType::UnmanagedType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Runtime::InteropServices::UnmanagedType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Runtime::InteropServices::UnmanagedType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::Bool{2};
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::I1{3};
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::U1{4};
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::I2{5};
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::U2{6};
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::I4{7};
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::U4{8};
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::I8{9};
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::U8{10};
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::R4{11};
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::R8{12};
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::Currency{15};
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::BStr{19};
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::LPStr{20};
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::LPWStr{21};
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::LPTStr{22};
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::ByValTStr{23};
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::IUnknown{25};
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::IDispatch{26};
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::Struct{27};
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::Interface{28};
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::SafeArray{29};
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::ByValArray{30};
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::SysInt{31};
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::SysUInt{32};
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::VBByRefStr{34};
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::AnsiBStr{35};
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::TBStr{36};
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::VariantBool{37};
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::FunctionPtr{38};
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::AsAny{40};
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::LPArray{42};
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::LPStruct{43};
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::CustomMarshaler{44};
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::Error{45};
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::IInspectable{46};
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::HString{47};
constexpr System::Runtime::InteropServices::UnmanagedType  System::Runtime::InteropServices::UnmanagedType::LPUTF8Str{48};
