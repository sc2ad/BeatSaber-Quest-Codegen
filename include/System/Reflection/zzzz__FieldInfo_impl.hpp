#pragma once
#include "System/Reflection/zzzz__MemberInfo_impl.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__Binder_def.hpp"
#include "System/Reflection/zzzz__MemberTypes_def.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
#include "System/zzzz__RuntimeFieldHandle_def.hpp"
#include "System/Runtime/InteropServices/zzzz__MarshalAsAttribute_def.hpp"
#include "System/Reflection/zzzz__FieldAttributes_def.hpp"
#include "System/Reflection/zzzz__CustomAttributeData_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
//  Writing Method size for method: System::Reflection::FieldInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::FieldInfo::*)()>(&System::Reflection::FieldInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2379560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::FieldInfo.get_MemberType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MemberTypes (System::Reflection::FieldInfo::*)()>(&System::Reflection::FieldInfo::get_MemberType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2379568;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::FieldInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::FieldInfo.get_Attributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::FieldAttributes (System::Reflection::FieldInfo::*)()>(&System::Reflection::FieldInfo::get_Attributes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::FieldInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::FieldInfo.get_FieldType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::Reflection::FieldInfo::*)()>(&System::Reflection::FieldInfo::get_FieldType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::FieldInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::FieldInfo.get_IsInitOnly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::FieldInfo::*)()>(&System::Reflection::FieldInfo::get_IsInitOnly)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2379570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "get_IsInitOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::FieldInfo.get_IsLiteral
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::FieldInfo::*)()>(&System::Reflection::FieldInfo::get_IsLiteral)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2379590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "get_IsLiteral",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::FieldInfo.get_IsNotSerialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::FieldInfo::*)()>(&System::Reflection::FieldInfo::get_IsNotSerialized)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23795b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "get_IsNotSerialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::FieldInfo.get_IsStatic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::FieldInfo::*)()>(&System::Reflection::FieldInfo::get_IsStatic)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23795d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "get_IsStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::FieldInfo.get_IsPrivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::FieldInfo::*)()>(&System::Reflection::FieldInfo::get_IsPrivate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23795f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "get_IsPrivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::FieldInfo.get_IsPublic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::FieldInfo::*)()>(&System::Reflection::FieldInfo::get_IsPublic)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2379618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "get_IsPublic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::FieldInfo.get_FieldHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::RuntimeFieldHandle (System::Reflection::FieldInfo::*)()>(&System::Reflection::FieldInfo::get_FieldHandle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::FieldInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::FieldInfo.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::FieldInfo::*)(::bs_hook::Il2CppWrapperType)>(&System::Reflection::FieldInfo::Equals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2379640;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::FieldInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::FieldInfo.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Reflection::FieldInfo::*)()>(&System::Reflection::FieldInfo::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2379648;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::FieldInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::FieldInfo.op_Equality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Reflection::FieldInfo, System::Reflection::FieldInfo)>(&System::Reflection::FieldInfo::op_Equality)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2379650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::FieldInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::FieldInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::FieldInfo.op_Inequality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Reflection::FieldInfo, System::Reflection::FieldInfo)>(&System::Reflection::FieldInfo::op_Inequality)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x237967c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::FieldInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::FieldInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::FieldInfo.GetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Reflection::FieldInfo::*)(::bs_hook::Il2CppWrapperType)>(&System::Reflection::FieldInfo::GetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::FieldInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::FieldInfo.SetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::FieldInfo::*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType)>(&System::Reflection::FieldInfo::SetValue)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x23796b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "SetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::FieldInfo.SetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::FieldInfo::*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType, System::Reflection::BindingFlags, System::Reflection::Binder, System::Globalization::CultureInfo)>(&System::Reflection::FieldInfo::SetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::FieldInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::FieldInfo.SetValueDirect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::FieldInfo::*)(/* UNKNOWN TYPE! Il2CppType { data: TypeDefinitionIndex(TypeDefinitionIndex(2571)), attrs: 0, ty: Typedbyref, byref: true, pinned: true, valuetype: true } */, ::bs_hook::Il2CppWrapperType)>(&System::Reflection::FieldInfo::SetValueDirect)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2379744;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::FieldInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::FieldInfo.GetRawConstantValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Reflection::FieldInfo::*)()>(&System::Reflection::FieldInfo::GetRawConstantValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2379794;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::FieldInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::FieldInfo.internal_from_handle_type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::FieldInfo (*)(::cordl_internals::intptr_t, ::cordl_internals::intptr_t)>(&System::Reflection::FieldInfo::internal_from_handle_type)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23797e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "internal_from_handle_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::FieldInfo.GetFieldFromHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::FieldInfo (*)(System::RuntimeFieldHandle)>(&System::Reflection::FieldInfo::GetFieldFromHandle)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x23797e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "GetFieldFromHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeFieldHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::FieldInfo.GetFieldFromHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::FieldInfo (*)(System::RuntimeFieldHandle, System::RuntimeTypeHandle)>(&System::Reflection::FieldInfo::GetFieldFromHandle)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x23798a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "GetFieldFromHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeFieldHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeTypeHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::FieldInfo.GetFieldOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Reflection::FieldInfo::*)()>(&System::Reflection::FieldInfo::GetFieldOffset)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2379988;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::FieldInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::FieldInfo.get_marshal_info
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::InteropServices::MarshalAsAttribute (System::Reflection::FieldInfo::*)()>(&System::Reflection::FieldInfo::get_marshal_info)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23799d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "get_marshal_info",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::FieldInfo.GetPseudoCustomAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::bs_hook::Il2CppWrapperType> (System::Reflection::FieldInfo::*)()>(&System::Reflection::FieldInfo::GetPseudoCustomAttributes)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x23799dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "GetPseudoCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::FieldInfo.GetPseudoCustomAttributesData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::CustomAttributeData> (System::Reflection::FieldInfo::*)()>(&System::Reflection::FieldInfo::GetPseudoCustomAttributesData)> {
  constexpr static std::size_t size = 0x58c;
  constexpr static std::size_t addrs = 0x2379bf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "GetPseudoCustomAttributesData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 System::Reflection::FieldInfo::FieldInfo()  : System::Reflection::MemberInfo(THROW_UNLESS(::il2cpp_utils::New<FieldInfo>())) {}
 void System::Reflection::FieldInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::MemberTypes System::Reflection::FieldInfo::get_MemberType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "get_MemberType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MemberTypes, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::FieldAttributes System::Reflection::FieldInfo::get_Attributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "get_Attributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::FieldAttributes, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type System::Reflection::FieldInfo::get_FieldType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "get_FieldType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Reflection::FieldInfo::get_IsInitOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "get_IsInitOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Reflection::FieldInfo::get_IsLiteral()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "get_IsLiteral",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Reflection::FieldInfo::get_IsNotSerialized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "get_IsNotSerialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Reflection::FieldInfo::get_IsStatic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "get_IsStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Reflection::FieldInfo::get_IsPrivate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "get_IsPrivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Reflection::FieldInfo::get_IsPublic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "get_IsPublic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::RuntimeFieldHandle System::Reflection::FieldInfo::get_FieldHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "get_FieldHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::RuntimeFieldHandle, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Reflection::FieldInfo::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 int32_t System::Reflection::FieldInfo::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Reflection::FieldInfo::op_Equality(System::Reflection::FieldInfo left, System::Reflection::FieldInfo right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::FieldInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::FieldInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
 bool System::Reflection::FieldInfo::op_Inequality(System::Reflection::FieldInfo left, System::Reflection::FieldInfo right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::FieldInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::FieldInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
 ::bs_hook::Il2CppWrapperType System::Reflection::FieldInfo::GetValue(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 void System::Reflection::FieldInfo::SetValue(::bs_hook::Il2CppWrapperType obj, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "SetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj, value);
}
 void System::Reflection::FieldInfo::SetValue(::bs_hook::Il2CppWrapperType obj, ::bs_hook::Il2CppWrapperType value, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder binder, System::Globalization::CultureInfo culture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "SetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Binder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj, value, invokeAttr, binder, culture);
}
 void System::Reflection::FieldInfo::SetValueDirect(/* UNKNOWN TYPE! Il2CppType { data: TypeDefinitionIndex(TypeDefinitionIndex(2571)), attrs: 0, ty: Typedbyref, byref: true, pinned: true, valuetype: true } */ obj, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "SetValueDirect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type</* UNKNOWN TYPE! Il2CppType { data: TypeDefinitionIndex(TypeDefinitionIndex(2571)), attrs: 0, ty: Typedbyref, byref: true, pinned: true, valuetype: true } */>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj, value);
}
 ::bs_hook::Il2CppWrapperType System::Reflection::FieldInfo::GetRawConstantValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "GetRawConstantValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::FieldInfo System::Reflection::FieldInfo::internal_from_handle_type(::cordl_internals::intptr_t field_handle, ::cordl_internals::intptr_t type_handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "internal_from_handle_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::FieldInfo, false>(nullptr, ___internal_method, field_handle, type_handle);
}
 System::Reflection::FieldInfo System::Reflection::FieldInfo::GetFieldFromHandle(System::RuntimeFieldHandle handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "GetFieldFromHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeFieldHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::FieldInfo, false>(nullptr, ___internal_method, handle);
}
 System::Reflection::FieldInfo System::Reflection::FieldInfo::GetFieldFromHandle(System::RuntimeFieldHandle handle, System::RuntimeTypeHandle declaringType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "GetFieldFromHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeFieldHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeTypeHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::FieldInfo, false>(nullptr, ___internal_method, handle, declaringType);
}
 int32_t System::Reflection::FieldInfo::GetFieldOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "GetFieldOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Runtime::InteropServices::MarshalAsAttribute System::Reflection::FieldInfo::get_marshal_info()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "get_marshal_info",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::InteropServices::MarshalAsAttribute, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::bs_hook::Il2CppWrapperType> System::Reflection::FieldInfo::GetPseudoCustomAttributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "GetPseudoCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<System::Reflection::CustomAttributeData> System::Reflection::FieldInfo::GetPseudoCustomAttributesData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::FieldInfo>::get(),
                            "GetPseudoCustomAttributesData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::CustomAttributeData>, false>(const_cast<void*>(instance), ___internal_method);
}
