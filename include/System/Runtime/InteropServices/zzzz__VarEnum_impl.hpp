#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Runtime/InteropServices/zzzz__VarEnum_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::InteropServices::VarEnum::VarEnum(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Runtime::InteropServices::VarEnum::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Runtime::InteropServices::VarEnum::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_EMPTY{0};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_NULL{1};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_I2{2};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_I4{3};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_R4{4};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_R8{5};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_CY{6};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_DATE{7};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_BSTR{8};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_DISPATCH{9};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_ERROR{10};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_BOOL{11};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_VARIANT{12};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_UNKNOWN{13};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_DECIMAL{14};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_I1{16};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_UI1{17};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_UI2{18};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_UI4{19};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_I8{20};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_UI8{21};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_INT{22};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_UINT{23};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_VOID{24};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_HRESULT{25};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_PTR{26};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_SAFEARRAY{27};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_CARRAY{28};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_USERDEFINED{29};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_LPSTR{30};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_LPWSTR{31};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_RECORD{36};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_FILETIME{64};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_BLOB{65};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_STREAM{66};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_STORAGE{67};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_STREAMED_OBJECT{68};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_STORED_OBJECT{69};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_BLOB_OBJECT{70};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_CF{71};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_CLSID{72};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_VECTOR{4096};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_ARRAY{8192};
constexpr ::System::Runtime::InteropServices::VarEnum  ::System::Runtime::InteropServices::VarEnum::VT_BYREF{16384};
} // end anonymous namespace
