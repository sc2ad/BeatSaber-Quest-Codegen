#pragma once
#include "System/Reflection/zzzz__RtFieldInfo_impl.hpp"
namespace {
#include "System/Reflection/zzzz__RuntimeFieldInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Reflection/zzzz__FieldAttributes_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__RuntimeModule_def.hpp"
#include "System/Reflection/zzzz__Module_def.hpp"
#include "System/zzzz__RuntimeFieldHandle_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__Binder_def.hpp"
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.get_BindingFlags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::BindingFlags (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::get_BindingFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2385a88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "get_BindingFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.get_Module
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Module (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::get_Module)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2385a90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::RuntimeFieldInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.GetDeclaringTypeInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeType (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::GetDeclaringTypeInternal)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2385ab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "GetDeclaringTypeInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.get_ReflectedTypeInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeType (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::get_ReflectedTypeInternal)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2385b34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "get_ReflectedTypeInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.GetRuntimeModule
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::RuntimeModule (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::GetRuntimeModule)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2385a94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "GetRuntimeModule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::RuntimeFieldInfo::*)(::System::Runtime::Serialization::SerializationInfo, ::System::Runtime::Serialization::StreamingContext)>(&::System::Reflection::RuntimeFieldInfo::GetObjectData)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2385bb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.UnsafeGetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::Reflection::RuntimeFieldInfo::*)(::bs_hook::Il2CppWrapperType)>(&::System::Reflection::RuntimeFieldInfo::UnsafeGetValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2385c74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::RuntimeFieldInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.CheckConsistency
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::RuntimeFieldInfo::*)(::bs_hook::Il2CppWrapperType)>(&::System::Reflection::RuntimeFieldInfo::CheckConsistency)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2385c78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::RuntimeFieldInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.UnsafeSetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::RuntimeFieldInfo::*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType, ::System::Reflection::BindingFlags, ::System::Reflection::Binder, ::System::Globalization::CultureInfo)>(&::System::Reflection::RuntimeFieldInfo::UnsafeSetValue)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2385df8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::RuntimeFieldInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.SetValueDirect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::RuntimeFieldInfo::*)(/* UNKNOWN TYPE! Il2CppType { data: TypeDefinitionIndex(TypeDefinitionIndex(2571)), attrs: 0, ty: Typedbyref, byref: true, pinned: true, valuetype: true } */, ::bs_hook::Il2CppWrapperType)>(&::System::Reflection::RuntimeFieldInfo::SetValueDirect)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2385e5c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::RuntimeFieldInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.get_Attributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::FieldAttributes (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::get_Attributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2385fc0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::RuntimeFieldInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.get_FieldHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeFieldHandle (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::get_FieldHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2385fc8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::RuntimeFieldInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.ResolveType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::ResolveType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2385fd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "ResolveType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.get_FieldType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::get_FieldType)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2385fd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::RuntimeFieldInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.GetParentType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type (::System::Reflection::RuntimeFieldInfo::*)(bool)>(&::System::Reflection::RuntimeFieldInfo::GetParentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2386050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "GetParentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.get_ReflectedType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::get_ReflectedType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2386058;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::RuntimeFieldInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.get_DeclaringType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::get_DeclaringType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2386060;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::RuntimeFieldInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.get_Name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2386068;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::RuntimeFieldInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.IsDefined
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::RuntimeFieldInfo::*)(::System::Type, bool)>(&::System::Reflection::RuntimeFieldInfo::IsDefined)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2386070;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::RuntimeFieldInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.GetCustomAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::bs_hook::Il2CppWrapperType> (::System::Reflection::RuntimeFieldInfo::*)(bool)>(&::System::Reflection::RuntimeFieldInfo::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x23860e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::RuntimeFieldInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.GetCustomAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::bs_hook::Il2CppWrapperType> (::System::Reflection::RuntimeFieldInfo::*)(::System::Type, bool)>(&::System::Reflection::RuntimeFieldInfo::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2386148;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::RuntimeFieldInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.GetFieldOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::GetFieldOffset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23861b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::RuntimeFieldInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.GetValueInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::Reflection::RuntimeFieldInfo::*)(::bs_hook::Il2CppWrapperType)>(&::System::Reflection::RuntimeFieldInfo::GetValueInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23861bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "GetValueInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.GetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::Reflection::RuntimeFieldInfo::*)(::bs_hook::Il2CppWrapperType)>(&::System::Reflection::RuntimeFieldInfo::GetValue)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x23861c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::RuntimeFieldInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::ToString)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x23863e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::RuntimeFieldInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.SetValueInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Reflection::FieldInfo, ::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType)>(&::System::Reflection::RuntimeFieldInfo::SetValueInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2386448;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "SetValueInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.SetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::RuntimeFieldInfo::*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType, ::System::Reflection::BindingFlags, ::System::Reflection::Binder, ::System::Globalization::CultureInfo)>(&::System::Reflection::RuntimeFieldInfo::SetValue)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x238644c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::RuntimeFieldInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.GetRawConstantValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::GetRawConstantValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2386710;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::RuntimeFieldInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.CheckGeneric
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::CheckGeneric)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2386360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "CheckGeneric",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.get_MetadataToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::get_MetadataToken)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2386714;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::RuntimeFieldInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.get_metadata_token
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Reflection::RuntimeFieldInfo)>(&::System::Reflection::RuntimeFieldInfo::get_metadata_token)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2386718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "get_metadata_token",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::RuntimeFieldInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x238671c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr  ::System::Reflection::RuntimeFieldInfo::operator ::System::Runtime::Serialization::ISerializable() const noexcept {
return ::System::Runtime::Serialization::ISerializable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Reflection::RuntimeFieldInfo::__set_klass(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::System::Reflection::RuntimeFieldInfo::__get_klass() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Reflection::RuntimeFieldInfo::__set_fhandle(::System::RuntimeFieldHandle value)  {
::cordl_internals::setInstanceField<::System::RuntimeFieldHandle, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::RuntimeFieldHandle>(value));
}
constexpr ::System::RuntimeFieldHandle ::System::Reflection::RuntimeFieldInfo::__get_fhandle() const {
return ::cordl_internals::getInstanceField<::System::RuntimeFieldHandle, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Reflection::RuntimeFieldInfo::__set_name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Reflection::RuntimeFieldInfo::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Reflection::RuntimeFieldInfo::__set_type(::System::Type value)  {
::cordl_internals::setInstanceField<::System::Type, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Type>(value));
}
constexpr ::System::Type ::System::Reflection::RuntimeFieldInfo::__get_type() const {
return ::cordl_internals::getInstanceField<::System::Type, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Reflection::RuntimeFieldInfo::__set_attrs(::System::Reflection::FieldAttributes value)  {
::cordl_internals::setInstanceField<::System::Reflection::FieldAttributes, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Reflection::FieldAttributes>(value));
}
constexpr ::System::Reflection::FieldAttributes ::System::Reflection::RuntimeFieldInfo::__get_attrs() const {
return ::cordl_internals::getInstanceField<::System::Reflection::FieldAttributes, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Reflection::BindingFlags ::System::Reflection::RuntimeFieldInfo::get_BindingFlags()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "get_BindingFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::BindingFlags, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Reflection::Module ::System::Reflection::RuntimeFieldInfo::get_Module()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "get_Module",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::Module, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::RuntimeType ::System::Reflection::RuntimeFieldInfo::GetDeclaringTypeInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "GetDeclaringTypeInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::RuntimeType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::RuntimeType ::System::Reflection::RuntimeFieldInfo::get_ReflectedTypeInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "get_ReflectedTypeInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::RuntimeType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Reflection::RuntimeModule ::System::Reflection::RuntimeFieldInfo::GetRuntimeModule()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "GetRuntimeModule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::RuntimeModule, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Reflection::RuntimeFieldInfo::GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 ::bs_hook::Il2CppWrapperType ::System::Reflection::RuntimeFieldInfo::UnsafeGetValue(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "UnsafeGetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 void ::System::Reflection::RuntimeFieldInfo::CheckConsistency(::bs_hook::Il2CppWrapperType target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "CheckConsistency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, target);
}
 void ::System::Reflection::RuntimeFieldInfo::UnsafeSetValue(::bs_hook::Il2CppWrapperType obj, ::bs_hook::Il2CppWrapperType value, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder binder, ::System::Globalization::CultureInfo culture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "UnsafeSetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Binder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj, value, invokeAttr, binder, culture);
}
 void ::System::Reflection::RuntimeFieldInfo::SetValueDirect(/* UNKNOWN TYPE! Il2CppType { data: TypeDefinitionIndex(TypeDefinitionIndex(2571)), attrs: 0, ty: Typedbyref, byref: true, pinned: true, valuetype: true } */ obj, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "SetValueDirect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type</* UNKNOWN TYPE! Il2CppType { data: TypeDefinitionIndex(TypeDefinitionIndex(2571)), attrs: 0, ty: Typedbyref, byref: true, pinned: true, valuetype: true } */>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj, value);
}
 ::System::Reflection::FieldAttributes ::System::Reflection::RuntimeFieldInfo::get_Attributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "get_Attributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::FieldAttributes, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::RuntimeFieldHandle ::System::Reflection::RuntimeFieldInfo::get_FieldHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "get_FieldHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::RuntimeFieldHandle, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Type ::System::Reflection::RuntimeFieldInfo::ResolveType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "ResolveType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Type ::System::Reflection::RuntimeFieldInfo::get_FieldType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "get_FieldType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Type ::System::Reflection::RuntimeFieldInfo::GetParentType(bool declaring)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "GetParentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type, false>(const_cast<void*>(instance), ___internal_method, declaring);
}
 ::System::Type ::System::Reflection::RuntimeFieldInfo::get_ReflectedType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "get_ReflectedType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Type ::System::Reflection::RuntimeFieldInfo::get_DeclaringType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "get_DeclaringType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::System::Reflection::RuntimeFieldInfo::get_Name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "get_Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Reflection::RuntimeFieldInfo::IsDefined(::System::Type attributeType, bool inherit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "IsDefined",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, attributeType, inherit);
}
 ::ArrayW<::bs_hook::Il2CppWrapperType> ::System::Reflection::RuntimeFieldInfo::GetCustomAttributes(bool inherit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "GetCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(instance), ___internal_method, inherit);
}
 ::ArrayW<::bs_hook::Il2CppWrapperType> ::System::Reflection::RuntimeFieldInfo::GetCustomAttributes(::System::Type attributeType, bool inherit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "GetCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(instance), ___internal_method, attributeType, inherit);
}
 int32_t ::System::Reflection::RuntimeFieldInfo::GetFieldOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "GetFieldOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::System::Reflection::RuntimeFieldInfo::GetValueInternal(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "GetValueInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 ::bs_hook::Il2CppWrapperType ::System::Reflection::RuntimeFieldInfo::GetValue(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 ::StringW ::System::Reflection::RuntimeFieldInfo::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Reflection::RuntimeFieldInfo::SetValueInternal(::System::Reflection::FieldInfo fi, ::bs_hook::Il2CppWrapperType obj, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "SetValueInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fi, obj, value);
}
 void ::System::Reflection::RuntimeFieldInfo::SetValue(::bs_hook::Il2CppWrapperType obj, ::bs_hook::Il2CppWrapperType val, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder binder, ::System::Globalization::CultureInfo culture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "SetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Binder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj, val, invokeAttr, binder, culture);
}
 ::bs_hook::Il2CppWrapperType ::System::Reflection::RuntimeFieldInfo::GetRawConstantValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "GetRawConstantValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Reflection::RuntimeFieldInfo::CheckGeneric()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "CheckGeneric",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::System::Reflection::RuntimeFieldInfo::get_MetadataToken()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "get_MetadataToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::System::Reflection::RuntimeFieldInfo::get_metadata_token(::System::Reflection::RuntimeFieldInfo monoField)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            "get_metadata_token",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::RuntimeFieldInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, monoField);
}
// Ctor Parameters []
 ::System::Reflection::RuntimeFieldInfo::RuntimeFieldInfo()  : ::System::Reflection::RtFieldInfo(THROW_UNLESS(::il2cpp_utils::New<RuntimeFieldInfo>())) {}
 void ::System::Reflection::RuntimeFieldInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
