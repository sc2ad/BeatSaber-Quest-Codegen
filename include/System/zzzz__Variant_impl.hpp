#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/zzzz__Variant_def.hpp"
#include "System/zzzz__BRECORD_def.hpp"
//  Writing Method size for method: ::System::Variant.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Variant::*)()>(&::System::Variant::Clear)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x249bc2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Variant>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "vt", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "wReserved1", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "wReserved2", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "wReserved3", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "llVal", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lVal", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bVal", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "iVal", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fltVal", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "dblVal", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "boolVal", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bstrVal", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cVal", ty: "int8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uiVal", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ulVal", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ullVal", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "intVal", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uintVal", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pdispVal", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bRecord", ty: "::System::BRECORD", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Variant::Variant(int16_t vt, uint16_t wReserved1, uint16_t wReserved2, uint16_t wReserved3, int64_t llVal, int32_t lVal, uint8_t bVal, int16_t iVal, float_t fltVal, double_t dblVal, int16_t boolVal, ::cordl_internals::intptr_t bstrVal, int8_t cVal, uint16_t uiVal, uint32_t ulVal, uint64_t ullVal, int32_t intVal, uint32_t uintVal, ::cordl_internals::intptr_t pdispVal, ::System::BRECORD bRecord) noexcept : ::bs_hook::ValueTypeWrapper() {this->vt = vt;
this->wReserved1 = wReserved1;
this->wReserved2 = wReserved2;
this->wReserved3 = wReserved3;
this->llVal = llVal;
this->lVal = lVal;
this->bVal = bVal;
this->iVal = iVal;
this->fltVal = fltVal;
this->dblVal = dblVal;
this->boolVal = boolVal;
this->bstrVal = bstrVal;
this->cVal = cVal;
this->uiVal = uiVal;
this->ulVal = ulVal;
this->ullVal = ullVal;
this->intVal = intVal;
this->uintVal = uintVal;
this->pdispVal = pdispVal;
this->bRecord = bRecord;
}
constexpr void ::System::Variant::__set_vt(int16_t value)  {
::cordl_internals::setInstanceField<int16_t, 0x0>(this->__instance, std::forward<int16_t>(value));
}
constexpr int16_t ::System::Variant::__get_vt() const {
return ::cordl_internals::getInstanceField<int16_t, 0x0>(this->__instance);
}
constexpr void ::System::Variant::__set_wReserved1(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x2>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t ::System::Variant::__get_wReserved1() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x2>(this->__instance);
}
constexpr void ::System::Variant::__set_wReserved2(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x4>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t ::System::Variant::__get_wReserved2() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x4>(this->__instance);
}
constexpr void ::System::Variant::__set_wReserved3(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x6>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t ::System::Variant::__get_wReserved3() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x6>(this->__instance);
}
constexpr void ::System::Variant::__set_llVal(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x8>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t ::System::Variant::__get_llVal() const {
return ::cordl_internals::getInstanceField<int64_t, 0x8>(this->__instance);
}
constexpr void ::System::Variant::__set_lVal(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Variant::__get_lVal() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void ::System::Variant::__set_bVal(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x8>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::System::Variant::__get_bVal() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x8>(this->__instance);
}
constexpr void ::System::Variant::__set_iVal(int16_t value)  {
::cordl_internals::setInstanceField<int16_t, 0x8>(this->__instance, std::forward<int16_t>(value));
}
constexpr int16_t ::System::Variant::__get_iVal() const {
return ::cordl_internals::getInstanceField<int16_t, 0x8>(this->__instance);
}
constexpr void ::System::Variant::__set_fltVal(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::System::Variant::__get_fltVal() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->__instance);
}
constexpr void ::System::Variant::__set_dblVal(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x8>(this->__instance, std::forward<double_t>(value));
}
constexpr double_t ::System::Variant::__get_dblVal() const {
return ::cordl_internals::getInstanceField<double_t, 0x8>(this->__instance);
}
constexpr void ::System::Variant::__set_boolVal(int16_t value)  {
::cordl_internals::setInstanceField<int16_t, 0x8>(this->__instance, std::forward<int16_t>(value));
}
constexpr int16_t ::System::Variant::__get_boolVal() const {
return ::cordl_internals::getInstanceField<int16_t, 0x8>(this->__instance);
}
constexpr void ::System::Variant::__set_bstrVal(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::System::Variant::__get_bstrVal() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance);
}
constexpr void ::System::Variant::__set_cVal(int8_t value)  {
::cordl_internals::setInstanceField<int8_t, 0x8>(this->__instance, std::forward<int8_t>(value));
}
constexpr int8_t ::System::Variant::__get_cVal() const {
return ::cordl_internals::getInstanceField<int8_t, 0x8>(this->__instance);
}
constexpr void ::System::Variant::__set_uiVal(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x8>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t ::System::Variant::__get_uiVal() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x8>(this->__instance);
}
constexpr void ::System::Variant::__set_ulVal(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::System::Variant::__get_ulVal() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->__instance);
}
constexpr void ::System::Variant::__set_ullVal(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x8>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::System::Variant::__get_ullVal() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->__instance);
}
constexpr void ::System::Variant::__set_intVal(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Variant::__get_intVal() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void ::System::Variant::__set_uintVal(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::System::Variant::__get_uintVal() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->__instance);
}
constexpr void ::System::Variant::__set_pdispVal(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::System::Variant::__get_pdispVal() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance);
}
constexpr void ::System::Variant::__set_bRecord(::System::BRECORD value)  {
::cordl_internals::setInstanceField<::System::BRECORD, 0x8>(this->__instance, std::forward<::System::BRECORD>(value));
}
constexpr ::System::BRECORD ::System::Variant::__get_bRecord() const {
return ::cordl_internals::getInstanceField<::System::BRECORD, 0x8>(this->__instance);
}
 void ::System::Variant::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Variant>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
} // end anonymous namespace
