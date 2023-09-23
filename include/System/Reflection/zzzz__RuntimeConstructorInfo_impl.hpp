#pragma once
#include "System/Reflection/zzzz__ConstructorInfo_impl.hpp"
#include "System/Reflection/zzzz__RuntimeConstructorInfo_def.hpp"
#include "System/zzzz__RuntimeMethodHandle_def.hpp"
#include "System/Reflection/zzzz__MethodImplAttributes_def.hpp"
#include "System/Reflection/zzzz__MethodAttributes_def.hpp"
#include "System/Reflection/zzzz__Binder_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/Reflection/zzzz__Module_def.hpp"
#include "System/Reflection/zzzz__CallingConventions_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
#include "System/Reflection/zzzz__RuntimeModule_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: System::Reflection::RuntimeConstructorInfo.get_Module
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Module (System::Reflection::RuntimeConstructorInfo::*)()>(&System::Reflection::RuntimeConstructorInfo::get_Module)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2388730;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeConstructorInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeConstructorInfo.GetRuntimeModule
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::RuntimeModule (System::Reflection::RuntimeConstructorInfo::*)()>(&System::Reflection::RuntimeConstructorInfo::GetRuntimeModule)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2388734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "GetRuntimeModule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeConstructorInfo.get_BindingFlags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::BindingFlags (System::Reflection::RuntimeConstructorInfo::*)()>(&System::Reflection::RuntimeConstructorInfo::get_BindingFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23887bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "get_BindingFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeConstructorInfo.get_ReflectedTypeInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::RuntimeType (System::Reflection::RuntimeConstructorInfo::*)()>(&System::Reflection::RuntimeConstructorInfo::get_ReflectedTypeInternal)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x23887c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "get_ReflectedTypeInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeConstructorInfo.GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::RuntimeConstructorInfo::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Reflection::RuntimeConstructorInfo::GetObjectData)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2388848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeConstructorInfo.SerializationToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::RuntimeConstructorInfo::*)()>(&System::Reflection::RuntimeConstructorInfo::SerializationToString)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2381ba4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "SerializationToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeConstructorInfo.SerializationInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::RuntimeConstructorInfo::*)(::bs_hook::Il2CppWrapperType, System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Reflection::RuntimeConstructorInfo::SerializationInvoke)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2388920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "SerializationInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeConstructorInfo.GetMethodImplementationFlags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodImplAttributes (System::Reflection::RuntimeConstructorInfo::*)()>(&System::Reflection::RuntimeConstructorInfo::GetMethodImplementationFlags)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2388a4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeConstructorInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeConstructorInfo.GetParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::ParameterInfo> (System::Reflection::RuntimeConstructorInfo::*)()>(&System::Reflection::RuntimeConstructorInfo::GetParameters)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2388a78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeConstructorInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeConstructorInfo.GetParametersInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::ParameterInfo> (System::Reflection::RuntimeConstructorInfo::*)()>(&System::Reflection::RuntimeConstructorInfo::GetParametersInternal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2388a84;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeConstructorInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeConstructorInfo.GetParametersCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Reflection::RuntimeConstructorInfo::*)()>(&System::Reflection::RuntimeConstructorInfo::GetParametersCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2388a90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeConstructorInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeConstructorInfo.InternalInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Reflection::RuntimeConstructorInfo::*)(::bs_hook::Il2CppWrapperType, ::ArrayW<::bs_hook::Il2CppWrapperType>, ByRef<System::Exception>)>(&System::Reflection::RuntimeConstructorInfo::InternalInvoke)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2388ab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "InternalInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Exception>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeConstructorInfo.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Reflection::RuntimeConstructorInfo::*)(::bs_hook::Il2CppWrapperType, System::Reflection::BindingFlags, System::Reflection::Binder, ::ArrayW<::bs_hook::Il2CppWrapperType>, System::Globalization::CultureInfo)>(&System::Reflection::RuntimeConstructorInfo::Invoke)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2388ab4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeConstructorInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeConstructorInfo.DoInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Reflection::RuntimeConstructorInfo::*)(::bs_hook::Il2CppWrapperType, System::Reflection::BindingFlags, System::Reflection::Binder, ::ArrayW<::bs_hook::Il2CppWrapperType>, System::Globalization::CultureInfo)>(&System::Reflection::RuntimeConstructorInfo::DoInvoke)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x2388bbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "DoInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Binder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeConstructorInfo.InternalInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Reflection::RuntimeConstructorInfo::*)(::bs_hook::Il2CppWrapperType, ::ArrayW<::bs_hook::Il2CppWrapperType>, bool)>(&System::Reflection::RuntimeConstructorInfo::InternalInvoke)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2388db0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "InternalInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeConstructorInfo.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Reflection::RuntimeConstructorInfo::*)(System::Reflection::BindingFlags, System::Reflection::Binder, ::ArrayW<::bs_hook::Il2CppWrapperType>, System::Globalization::CultureInfo)>(&System::Reflection::RuntimeConstructorInfo::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2388f0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeConstructorInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeConstructorInfo.get_MethodHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::RuntimeMethodHandle (System::Reflection::RuntimeConstructorInfo::*)()>(&System::Reflection::RuntimeConstructorInfo::get_MethodHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2388f24;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeConstructorInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeConstructorInfo.get_Attributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodAttributes (System::Reflection::RuntimeConstructorInfo::*)()>(&System::Reflection::RuntimeConstructorInfo::get_Attributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2388f2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeConstructorInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeConstructorInfo.get_CallingConvention
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::CallingConventions (System::Reflection::RuntimeConstructorInfo::*)()>(&System::Reflection::RuntimeConstructorInfo::get_CallingConvention)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2388f34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeConstructorInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeConstructorInfo.get_ContainsGenericParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::RuntimeConstructorInfo::*)()>(&System::Reflection::RuntimeConstructorInfo::get_ContainsGenericParameters)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2388f60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeConstructorInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeConstructorInfo.get_ReflectedType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::Reflection::RuntimeConstructorInfo::*)()>(&System::Reflection::RuntimeConstructorInfo::get_ReflectedType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2388f8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeConstructorInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeConstructorInfo.get_DeclaringType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::Reflection::RuntimeConstructorInfo::*)()>(&System::Reflection::RuntimeConstructorInfo::get_DeclaringType)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2388f94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeConstructorInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeConstructorInfo.get_Name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::RuntimeConstructorInfo::*)()>(&System::Reflection::RuntimeConstructorInfo::get_Name)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2388fc0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeConstructorInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeConstructorInfo.IsDefined
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::RuntimeConstructorInfo::*)(System::Type, bool)>(&System::Reflection::RuntimeConstructorInfo::IsDefined)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2388fd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeConstructorInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeConstructorInfo.GetCustomAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::bs_hook::Il2CppWrapperType> (System::Reflection::RuntimeConstructorInfo::*)(bool)>(&System::Reflection::RuntimeConstructorInfo::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2389044;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeConstructorInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeConstructorInfo.GetCustomAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::bs_hook::Il2CppWrapperType> (System::Reflection::RuntimeConstructorInfo::*)(System::Type, bool)>(&System::Reflection::RuntimeConstructorInfo::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x23890ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeConstructorInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeConstructorInfo.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::RuntimeConstructorInfo::*)()>(&System::Reflection::RuntimeConstructorInfo::ToString)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x238911c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeConstructorInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeConstructorInfo.get_core_clr_security_level
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&System::Reflection::RuntimeConstructorInfo::get_core_clr_security_level)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2389184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "get_core_clr_security_level",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeConstructorInfo.get_IsSecurityCritical
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::RuntimeConstructorInfo::*)()>(&System::Reflection::RuntimeConstructorInfo::get_IsSecurityCritical)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x238918c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeConstructorInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeConstructorInfo.get_MetadataToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Reflection::RuntimeConstructorInfo::*)()>(&System::Reflection::RuntimeConstructorInfo::get_MetadataToken)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2389194;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeConstructorInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeConstructorInfo.get_metadata_token
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(System::Reflection::RuntimeConstructorInfo)>(&System::Reflection::RuntimeConstructorInfo::get_metadata_token)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2389198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "get_metadata_token",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::RuntimeConstructorInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeConstructorInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::RuntimeConstructorInfo::*)()>(&System::Reflection::RuntimeConstructorInfo::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x238919c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr  System::Reflection::RuntimeConstructorInfo::operator System::Runtime::Serialization::ISerializable() const noexcept {
return System::Runtime::Serialization::ISerializable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Reflection::RuntimeConstructorInfo::__set_mhandle(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t System::Reflection::RuntimeConstructorInfo::__get_mhandle() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Reflection::RuntimeConstructorInfo::__set_name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Reflection::RuntimeConstructorInfo::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Reflection::RuntimeConstructorInfo::__set_reftype(System::Type value)  {
::cordl_internals::setInstanceField<System::Type, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Type>(value));
}
constexpr System::Type System::Reflection::RuntimeConstructorInfo::__get_reftype() const {
return ::cordl_internals::getInstanceField<System::Type, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Reflection::Module System::Reflection::RuntimeConstructorInfo::get_Module()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "get_Module",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::Module, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::RuntimeModule System::Reflection::RuntimeConstructorInfo::GetRuntimeModule()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "GetRuntimeModule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::RuntimeModule, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::BindingFlags System::Reflection::RuntimeConstructorInfo::get_BindingFlags()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "get_BindingFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::BindingFlags, false>(const_cast<void*>(instance), ___internal_method);
}
 System::RuntimeType System::Reflection::RuntimeConstructorInfo::get_ReflectedTypeInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "get_ReflectedTypeInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::RuntimeType, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Reflection::RuntimeConstructorInfo::GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 ::StringW System::Reflection::RuntimeConstructorInfo::SerializationToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "SerializationToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Reflection::RuntimeConstructorInfo::SerializationInvoke(::bs_hook::Il2CppWrapperType target, System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "SerializationInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, target, info, context);
}
 System::Reflection::MethodImplAttributes System::Reflection::RuntimeConstructorInfo::GetMethodImplementationFlags()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "GetMethodImplementationFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodImplAttributes, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<System::Reflection::ParameterInfo> System::Reflection::RuntimeConstructorInfo::GetParameters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "GetParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::ParameterInfo>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<System::Reflection::ParameterInfo> System::Reflection::RuntimeConstructorInfo::GetParametersInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "GetParametersInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::ParameterInfo>, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Reflection::RuntimeConstructorInfo::GetParametersCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "GetParametersCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Reflection::RuntimeConstructorInfo::InternalInvoke(::bs_hook::Il2CppWrapperType obj, ::ArrayW<::bs_hook::Il2CppWrapperType> parameters, ByRef<System::Exception> exc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "InternalInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Exception>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, obj, parameters, exc);
}
 ::bs_hook::Il2CppWrapperType System::Reflection::RuntimeConstructorInfo::Invoke(::bs_hook::Il2CppWrapperType obj, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder binder, ::ArrayW<::bs_hook::Il2CppWrapperType> parameters, System::Globalization::CultureInfo culture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Binder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, obj, invokeAttr, binder, parameters, culture);
}
 ::bs_hook::Il2CppWrapperType System::Reflection::RuntimeConstructorInfo::DoInvoke(::bs_hook::Il2CppWrapperType obj, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder binder, ::ArrayW<::bs_hook::Il2CppWrapperType> parameters, System::Globalization::CultureInfo culture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "DoInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Binder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, obj, invokeAttr, binder, parameters, culture);
}
 ::bs_hook::Il2CppWrapperType System::Reflection::RuntimeConstructorInfo::InternalInvoke(::bs_hook::Il2CppWrapperType obj, ::ArrayW<::bs_hook::Il2CppWrapperType> parameters, bool wrapExceptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "InternalInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, obj, parameters, wrapExceptions);
}
 ::bs_hook::Il2CppWrapperType System::Reflection::RuntimeConstructorInfo::Invoke(System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder binder, ::ArrayW<::bs_hook::Il2CppWrapperType> parameters, System::Globalization::CultureInfo culture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Binder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, invokeAttr, binder, parameters, culture);
}
 System::RuntimeMethodHandle System::Reflection::RuntimeConstructorInfo::get_MethodHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "get_MethodHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::RuntimeMethodHandle, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::MethodAttributes System::Reflection::RuntimeConstructorInfo::get_Attributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "get_Attributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodAttributes, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::CallingConventions System::Reflection::RuntimeConstructorInfo::get_CallingConvention()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "get_CallingConvention",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::CallingConventions, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Reflection::RuntimeConstructorInfo::get_ContainsGenericParameters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "get_ContainsGenericParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type System::Reflection::RuntimeConstructorInfo::get_ReflectedType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "get_ReflectedType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type System::Reflection::RuntimeConstructorInfo::get_DeclaringType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "get_DeclaringType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Reflection::RuntimeConstructorInfo::get_Name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "get_Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Reflection::RuntimeConstructorInfo::IsDefined(System::Type attributeType, bool inherit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "IsDefined",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, attributeType, inherit);
}
 ::ArrayW<::bs_hook::Il2CppWrapperType> System::Reflection::RuntimeConstructorInfo::GetCustomAttributes(bool inherit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "GetCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(instance), ___internal_method, inherit);
}
 ::ArrayW<::bs_hook::Il2CppWrapperType> System::Reflection::RuntimeConstructorInfo::GetCustomAttributes(System::Type attributeType, bool inherit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "GetCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(instance), ___internal_method, attributeType, inherit);
}
 ::StringW System::Reflection::RuntimeConstructorInfo::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Reflection::RuntimeConstructorInfo::get_core_clr_security_level()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "get_core_clr_security_level",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 bool System::Reflection::RuntimeConstructorInfo::get_IsSecurityCritical()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "get_IsSecurityCritical",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Reflection::RuntimeConstructorInfo::get_MetadataToken()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "get_MetadataToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Reflection::RuntimeConstructorInfo::get_metadata_token(System::Reflection::RuntimeConstructorInfo method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            "get_metadata_token",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::RuntimeConstructorInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, method);
}
// Ctor Parameters []
 System::Reflection::RuntimeConstructorInfo::RuntimeConstructorInfo()  : System::Reflection::ConstructorInfo(THROW_UNLESS(::il2cpp_utils::New<RuntimeConstructorInfo>())) {}
 void System::Reflection::RuntimeConstructorInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeConstructorInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
