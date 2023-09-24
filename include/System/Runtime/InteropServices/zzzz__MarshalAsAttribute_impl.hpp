#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__MarshalAsAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Runtime/InteropServices/zzzz__UnmanagedType_def.hpp"
#include "System/Runtime/InteropServices/zzzz__VarEnum_def.hpp"
//  Writing Method size for method: System::Runtime::InteropServices::MarshalAsAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::InteropServices::MarshalAsAttribute::*)(System::Runtime::InteropServices::UnmanagedType)>(&System::Runtime::InteropServices::MarshalAsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x236d764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::InteropServices::MarshalAsAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::InteropServices::UnmanagedType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::InteropServices::MarshalAsAttribute.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::InteropServices::UnmanagedType (System::Runtime::InteropServices::MarshalAsAttribute::*)()>(&System::Runtime::InteropServices::MarshalAsAttribute::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236d78c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::InteropServices::MarshalAsAttribute>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::InteropServices::MarshalAsAttribute.Copy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::InteropServices::MarshalAsAttribute (System::Runtime::InteropServices::MarshalAsAttribute::*)()>(&System::Runtime::InteropServices::MarshalAsAttribute::Copy)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x236d794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::InteropServices::MarshalAsAttribute>::get(),
                            "Copy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::InteropServices::MarshalAsAttribute::__set_MarshalCookie(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Runtime::InteropServices::MarshalAsAttribute::__get_MarshalCookie() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::InteropServices::MarshalAsAttribute::__set_MarshalType(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Runtime::InteropServices::MarshalAsAttribute::__get_MarshalType() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::InteropServices::MarshalAsAttribute::__set_MarshalTypeRef(System::Type value)  {
::cordl_internals::setInstanceField<System::Type, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Type>(value));
}
constexpr System::Type System::Runtime::InteropServices::MarshalAsAttribute::__get_MarshalTypeRef() const {
return ::cordl_internals::getInstanceField<System::Type, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::InteropServices::MarshalAsAttribute::__set_SafeArrayUserDefinedSubType(System::Type value)  {
::cordl_internals::setInstanceField<System::Type, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Type>(value));
}
constexpr System::Type System::Runtime::InteropServices::MarshalAsAttribute::__get_SafeArrayUserDefinedSubType() const {
return ::cordl_internals::getInstanceField<System::Type, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::InteropServices::MarshalAsAttribute::__set_utype(System::Runtime::InteropServices::UnmanagedType value)  {
::cordl_internals::setInstanceField<System::Runtime::InteropServices::UnmanagedType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::InteropServices::UnmanagedType>(value));
}
constexpr System::Runtime::InteropServices::UnmanagedType System::Runtime::InteropServices::MarshalAsAttribute::__get_utype() const {
return ::cordl_internals::getInstanceField<System::Runtime::InteropServices::UnmanagedType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::InteropServices::MarshalAsAttribute::__set_ArraySubType(System::Runtime::InteropServices::UnmanagedType value)  {
::cordl_internals::setInstanceField<System::Runtime::InteropServices::UnmanagedType, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::InteropServices::UnmanagedType>(value));
}
constexpr System::Runtime::InteropServices::UnmanagedType System::Runtime::InteropServices::MarshalAsAttribute::__get_ArraySubType() const {
return ::cordl_internals::getInstanceField<System::Runtime::InteropServices::UnmanagedType, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::InteropServices::MarshalAsAttribute::__set_SafeArraySubType(System::Runtime::InteropServices::VarEnum value)  {
::cordl_internals::setInstanceField<System::Runtime::InteropServices::VarEnum, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::InteropServices::VarEnum>(value));
}
constexpr System::Runtime::InteropServices::VarEnum System::Runtime::InteropServices::MarshalAsAttribute::__get_SafeArraySubType() const {
return ::cordl_internals::getInstanceField<System::Runtime::InteropServices::VarEnum, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::InteropServices::MarshalAsAttribute::__set_SizeConst(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Runtime::InteropServices::MarshalAsAttribute::__get_SizeConst() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::InteropServices::MarshalAsAttribute::__set_IidParameterIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Runtime::InteropServices::MarshalAsAttribute::__get_IidParameterIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::InteropServices::MarshalAsAttribute::__set_SizeParamIndex(int16_t value)  {
::cordl_internals::setInstanceField<int16_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int16_t>(value));
}
constexpr int16_t System::Runtime::InteropServices::MarshalAsAttribute::__get_SizeParamIndex() const {
return ::cordl_internals::getInstanceField<int16_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Runtime::InteropServices::MarshalAsAttribute System::Runtime::InteropServices::MarshalAsAttribute::New_ctor(System::Runtime::InteropServices::UnmanagedType unmanagedType)  {
System::Runtime::InteropServices::MarshalAsAttribute o{THROW_UNLESS(::il2cpp_utils::New<System::Runtime::InteropServices::MarshalAsAttribute>(unmanagedType))};
return o;
}
 void System::Runtime::InteropServices::MarshalAsAttribute::_ctor(System::Runtime::InteropServices::UnmanagedType unmanagedType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::InteropServices::MarshalAsAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::InteropServices::UnmanagedType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, unmanagedType);
}
 System::Runtime::InteropServices::UnmanagedType System::Runtime::InteropServices::MarshalAsAttribute::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::InteropServices::MarshalAsAttribute>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::InteropServices::UnmanagedType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Runtime::InteropServices::MarshalAsAttribute System::Runtime::InteropServices::MarshalAsAttribute::Copy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::InteropServices::MarshalAsAttribute>::get(),
                            "Copy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::InteropServices::MarshalAsAttribute, false>(const_cast<void*>(instance), ___internal_method);
}
