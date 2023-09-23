#pragma once
#include "System/Reflection/zzzz__MethodInfo_impl.hpp"
#include "System/Reflection/zzzz__RuntimeMethodInfo_def.hpp"
#include "System/Reflection/zzzz__CustomAttributeData_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__MethodAttributes_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "System/Reflection/zzzz__MethodImplAttributes_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__Binder_def.hpp"
#include "System/Reflection/zzzz__RuntimeModule_def.hpp"
#include "System/Reflection/zzzz__CallingConventions_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__Module_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__RuntimeMethodHandle_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/Reflection/zzzz__PInvokeAttributes_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.get_BindingFlags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::BindingFlags (System::Reflection::RuntimeMethodInfo::*)()>(&System::Reflection::RuntimeMethodInfo::get_BindingFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23868f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "get_BindingFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.get_Module
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Module (System::Reflection::RuntimeMethodInfo::*)()>(&System::Reflection::RuntimeMethodInfo::get_Module)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23868f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeMethodInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.get_ReflectedTypeInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::RuntimeType (System::Reflection::RuntimeMethodInfo::*)()>(&System::Reflection::RuntimeMethodInfo::get_ReflectedTypeInternal)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2386988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "get_ReflectedTypeInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.FormatNameAndSig
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::RuntimeMethodInfo::*)(bool)>(&System::Reflection::RuntimeMethodInfo::FormatNameAndSig)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2386a0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeMethodInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.CreateDelegate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Delegate (System::Reflection::RuntimeMethodInfo::*)(System::Type, ::bs_hook::Il2CppWrapperType)>(&System::Reflection::RuntimeMethodInfo::CreateDelegate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2386d60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeMethodInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                                  43
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::RuntimeMethodInfo::*)()>(&System::Reflection::RuntimeMethodInfo::ToString)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2386d78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeMethodInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.GetRuntimeModule
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::RuntimeModule (System::Reflection::RuntimeMethodInfo::*)()>(&System::Reflection::RuntimeMethodInfo::GetRuntimeModule)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x23868fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "GetRuntimeModule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::RuntimeMethodInfo::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Reflection::RuntimeMethodInfo::GetObjectData)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2386e08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.SerializationToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::RuntimeMethodInfo::*)()>(&System::Reflection::RuntimeMethodInfo::SerializationToString)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2381bb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "SerializationToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.GetMethodFromHandleNoGenericCheck
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodBase (*)(System::RuntimeMethodHandle)>(&System::Reflection::RuntimeMethodInfo::GetMethodFromHandleNoGenericCheck)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2386f28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "GetMethodFromHandleNoGenericCheck",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeMethodHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.GetMethodFromHandleNoGenericCheck
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodBase (*)(System::RuntimeMethodHandle, System::RuntimeTypeHandle)>(&System::Reflection::RuntimeMethodInfo::GetMethodFromHandleNoGenericCheck)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2386f84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "GetMethodFromHandleNoGenericCheck",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeMethodHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeTypeHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.GetMethodFromHandleInternalType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodBase (*)(::cordl_internals::intptr_t, ::cordl_internals::intptr_t)>(&System::Reflection::RuntimeMethodInfo::GetMethodFromHandleInternalType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x237b6d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "GetMethodFromHandleInternalType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.GetMethodFromHandleInternalType_native
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodBase (*)(::cordl_internals::intptr_t, ::cordl_internals::intptr_t, bool)>(&System::Reflection::RuntimeMethodInfo::GetMethodFromHandleInternalType_native)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2386f7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "GetMethodFromHandleInternalType_native",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::RuntimeMethodInfo::*)()>(&System::Reflection::RuntimeMethodInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2386f8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.get_name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::Reflection::MethodBase)>(&System::Reflection::RuntimeMethodInfo::get_name)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2386f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "get_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.get_base_method
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::RuntimeMethodInfo (*)(System::Reflection::RuntimeMethodInfo, bool)>(&System::Reflection::RuntimeMethodInfo::get_base_method)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2386f98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "get_base_method",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::RuntimeMethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.get_metadata_token
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(System::Reflection::RuntimeMethodInfo)>(&System::Reflection::RuntimeMethodInfo::get_metadata_token)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2386fa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "get_metadata_token",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::RuntimeMethodInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.GetBaseDefinition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo (System::Reflection::RuntimeMethodInfo::*)()>(&System::Reflection::RuntimeMethodInfo::GetBaseDefinition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2386fa4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeMethodInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                                  42
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.GetBaseMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo (System::Reflection::RuntimeMethodInfo::*)()>(&System::Reflection::RuntimeMethodInfo::GetBaseMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2386fac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "GetBaseMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.get_ReturnParameter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::ParameterInfo (System::Reflection::RuntimeMethodInfo::*)()>(&System::Reflection::RuntimeMethodInfo::get_ReturnParameter)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2386fb4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeMethodInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.get_ReturnType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::Reflection::RuntimeMethodInfo::*)()>(&System::Reflection::RuntimeMethodInfo::get_ReturnType)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2386fb8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeMethodInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                                  39
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.get_MetadataToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Reflection::RuntimeMethodInfo::*)()>(&System::Reflection::RuntimeMethodInfo::get_MetadataToken)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2386fe4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeMethodInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.GetMethodImplementationFlags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodImplAttributes (System::Reflection::RuntimeMethodInfo::*)()>(&System::Reflection::RuntimeMethodInfo::GetMethodImplementationFlags)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2386fe8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeMethodInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.GetParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::ParameterInfo> (System::Reflection::RuntimeMethodInfo::*)()>(&System::Reflection::RuntimeMethodInfo::GetParameters)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2387014;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeMethodInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.GetParametersInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::ParameterInfo> (System::Reflection::RuntimeMethodInfo::*)()>(&System::Reflection::RuntimeMethodInfo::GetParametersInternal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23870a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeMethodInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.GetParametersCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Reflection::RuntimeMethodInfo::*)()>(&System::Reflection::RuntimeMethodInfo::GetParametersCount)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x23870b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeMethodInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.InternalInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Reflection::RuntimeMethodInfo::*)(::bs_hook::Il2CppWrapperType, ::ArrayW<::bs_hook::Il2CppWrapperType>, ByRef<System::Exception>)>(&System::Reflection::RuntimeMethodInfo::InternalInvoke)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23870d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "InternalInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Exception>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Reflection::RuntimeMethodInfo::*)(::bs_hook::Il2CppWrapperType, System::Reflection::BindingFlags, System::Reflection::Binder, ::ArrayW<::bs_hook::Il2CppWrapperType>, System::Globalization::CultureInfo)>(&System::Reflection::RuntimeMethodInfo::Invoke)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x23870d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeMethodInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.ConvertValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Reflection::Binder, ::ArrayW<::bs_hook::Il2CppWrapperType>, ::ArrayW<System::Reflection::ParameterInfo>, System::Globalization::CultureInfo, System::Reflection::BindingFlags)>(&System::Reflection::RuntimeMethodInfo::ConvertValues)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x23873cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "ConvertValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Binder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Reflection::ParameterInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.get_MethodHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::RuntimeMethodHandle (System::Reflection::RuntimeMethodInfo::*)()>(&System::Reflection::RuntimeMethodInfo::get_MethodHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2387684;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeMethodInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.get_Attributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodAttributes (System::Reflection::RuntimeMethodInfo::*)()>(&System::Reflection::RuntimeMethodInfo::get_Attributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x238768c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeMethodInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.get_CallingConvention
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::CallingConventions (System::Reflection::RuntimeMethodInfo::*)()>(&System::Reflection::RuntimeMethodInfo::get_CallingConvention)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2387694;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeMethodInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.get_ReflectedType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::Reflection::RuntimeMethodInfo::*)()>(&System::Reflection::RuntimeMethodInfo::get_ReflectedType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23876c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeMethodInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.get_DeclaringType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::Reflection::RuntimeMethodInfo::*)()>(&System::Reflection::RuntimeMethodInfo::get_DeclaringType)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23876c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeMethodInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.get_Name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::RuntimeMethodInfo::*)()>(&System::Reflection::RuntimeMethodInfo::get_Name)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x23876f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeMethodInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.IsDefined
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::RuntimeMethodInfo::*)(System::Type, bool)>(&System::Reflection::RuntimeMethodInfo::IsDefined)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2387708;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeMethodInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.GetCustomAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::bs_hook::Il2CppWrapperType> (System::Reflection::RuntimeMethodInfo::*)(bool)>(&System::Reflection::RuntimeMethodInfo::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2387778;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeMethodInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.GetCustomAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::bs_hook::Il2CppWrapperType> (System::Reflection::RuntimeMethodInfo::*)(System::Type, bool)>(&System::Reflection::RuntimeMethodInfo::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x23877e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeMethodInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.GetPInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::RuntimeMethodInfo::*)(ByRef<System::Reflection::PInvokeAttributes>, ByRef<::StringW>, ByRef<::StringW>)>(&System::Reflection::RuntimeMethodInfo::GetPInvoke)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2387850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "GetPInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Reflection::PInvokeAttributes>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.GetPseudoCustomAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::bs_hook::Il2CppWrapperType> (System::Reflection::RuntimeMethodInfo::*)()>(&System::Reflection::RuntimeMethodInfo::GetPseudoCustomAttributes)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2387854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "GetPseudoCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.GetPseudoCustomAttributesData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::CustomAttributeData> (System::Reflection::RuntimeMethodInfo::*)()>(&System::Reflection::RuntimeMethodInfo::GetPseudoCustomAttributesData)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x23879c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "GetPseudoCustomAttributesData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.GetDllImportAttributeData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::CustomAttributeData (System::Reflection::RuntimeMethodInfo::*)()>(&System::Reflection::RuntimeMethodInfo::GetDllImportAttributeData)> {
  constexpr static std::size_t size = 0x71c;
  constexpr static std::size_t addrs = 0x2387b8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "GetDllImportAttributeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.MakeGenericMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo (System::Reflection::RuntimeMethodInfo::*)(::ArrayW<System::Type>)>(&System::Reflection::RuntimeMethodInfo::MakeGenericMethod)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x23882a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeMethodInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                                  41
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.MakeGenericMethod_impl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo (System::Reflection::RuntimeMethodInfo::*)(::ArrayW<System::Type>)>(&System::Reflection::RuntimeMethodInfo::MakeGenericMethod_impl)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23885f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "MakeGenericMethod_impl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.GetGenericArguments
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Type> (System::Reflection::RuntimeMethodInfo::*)()>(&System::Reflection::RuntimeMethodInfo::GetGenericArguments)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23885f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeMethodInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.GetGenericMethodDefinition_impl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo (System::Reflection::RuntimeMethodInfo::*)()>(&System::Reflection::RuntimeMethodInfo::GetGenericMethodDefinition_impl)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23885fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "GetGenericMethodDefinition_impl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.GetGenericMethodDefinition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo (System::Reflection::RuntimeMethodInfo::*)()>(&System::Reflection::RuntimeMethodInfo::GetGenericMethodDefinition)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2388600;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeMethodInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                                  40
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.get_IsGenericMethodDefinition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::RuntimeMethodInfo::*)()>(&System::Reflection::RuntimeMethodInfo::get_IsGenericMethodDefinition)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2388650;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeMethodInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.get_IsGenericMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::RuntimeMethodInfo::*)()>(&System::Reflection::RuntimeMethodInfo::get_IsGenericMethod)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2388654;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeMethodInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.get_ContainsGenericParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::RuntimeMethodInfo::*)()>(&System::Reflection::RuntimeMethodInfo::get_ContainsGenericParameters)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2388658;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeMethodInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.get_core_clr_security_level
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&System::Reflection::RuntimeMethodInfo::get_core_clr_security_level)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2388720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "get_core_clr_security_level",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::RuntimeMethodInfo.get_IsSecurityCritical
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::RuntimeMethodInfo::*)()>(&System::Reflection::RuntimeMethodInfo::get_IsSecurityCritical)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2388728;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::RuntimeMethodInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr  System::Reflection::RuntimeMethodInfo::operator System::Runtime::Serialization::ISerializable() const noexcept {
return System::Runtime::Serialization::ISerializable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Reflection::RuntimeMethodInfo::__set_mhandle(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t System::Reflection::RuntimeMethodInfo::__get_mhandle() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Reflection::RuntimeMethodInfo::__set_name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Reflection::RuntimeMethodInfo::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Reflection::RuntimeMethodInfo::__set_reftype(System::Type value)  {
::cordl_internals::setInstanceField<System::Type, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Type>(value));
}
constexpr System::Type System::Reflection::RuntimeMethodInfo::__get_reftype() const {
return ::cordl_internals::getInstanceField<System::Type, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Reflection::BindingFlags System::Reflection::RuntimeMethodInfo::get_BindingFlags()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "get_BindingFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::BindingFlags, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::Module System::Reflection::RuntimeMethodInfo::get_Module()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "get_Module",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::Module, false>(const_cast<void*>(instance), ___internal_method);
}
 System::RuntimeType System::Reflection::RuntimeMethodInfo::get_ReflectedTypeInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "get_ReflectedTypeInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::RuntimeType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Reflection::RuntimeMethodInfo::FormatNameAndSig(bool serialization)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "FormatNameAndSig",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, serialization);
}
 System::Delegate System::Reflection::RuntimeMethodInfo::CreateDelegate(System::Type delegateType, ::bs_hook::Il2CppWrapperType target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "CreateDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Delegate, false>(const_cast<void*>(instance), ___internal_method, delegateType, target);
}
 ::StringW System::Reflection::RuntimeMethodInfo::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::RuntimeModule System::Reflection::RuntimeMethodInfo::GetRuntimeModule()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "GetRuntimeModule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::RuntimeModule, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Reflection::RuntimeMethodInfo::GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 ::StringW System::Reflection::RuntimeMethodInfo::SerializationToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "SerializationToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::MethodBase System::Reflection::RuntimeMethodInfo::GetMethodFromHandleNoGenericCheck(System::RuntimeMethodHandle handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "GetMethodFromHandleNoGenericCheck",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeMethodHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodBase, false>(nullptr, ___internal_method, handle);
}
 System::Reflection::MethodBase System::Reflection::RuntimeMethodInfo::GetMethodFromHandleNoGenericCheck(System::RuntimeMethodHandle handle, System::RuntimeTypeHandle reflectedType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "GetMethodFromHandleNoGenericCheck",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeMethodHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeTypeHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodBase, false>(nullptr, ___internal_method, handle, reflectedType);
}
 System::Reflection::MethodBase System::Reflection::RuntimeMethodInfo::GetMethodFromHandleInternalType(::cordl_internals::intptr_t method_handle, ::cordl_internals::intptr_t type_handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "GetMethodFromHandleInternalType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodBase, false>(nullptr, ___internal_method, method_handle, type_handle);
}
 System::Reflection::MethodBase System::Reflection::RuntimeMethodInfo::GetMethodFromHandleInternalType_native(::cordl_internals::intptr_t method_handle, ::cordl_internals::intptr_t type_handle, bool genericCheck)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "GetMethodFromHandleInternalType_native",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodBase, false>(nullptr, ___internal_method, method_handle, type_handle, genericCheck);
}
// Ctor Parameters []
 System::Reflection::RuntimeMethodInfo::RuntimeMethodInfo()  : System::Reflection::MethodInfo(THROW_UNLESS(::il2cpp_utils::New<RuntimeMethodInfo>())) {}
 void System::Reflection::RuntimeMethodInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Reflection::RuntimeMethodInfo::get_name(System::Reflection::MethodBase method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "get_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, method);
}
 System::Reflection::RuntimeMethodInfo System::Reflection::RuntimeMethodInfo::get_base_method(System::Reflection::RuntimeMethodInfo method, bool definition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "get_base_method",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::RuntimeMethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::RuntimeMethodInfo, false>(nullptr, ___internal_method, method, definition);
}
 int32_t System::Reflection::RuntimeMethodInfo::get_metadata_token(System::Reflection::RuntimeMethodInfo method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "get_metadata_token",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::RuntimeMethodInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, method);
}
 System::Reflection::MethodInfo System::Reflection::RuntimeMethodInfo::GetBaseDefinition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "GetBaseDefinition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::MethodInfo System::Reflection::RuntimeMethodInfo::GetBaseMethod()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "GetBaseMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::ParameterInfo System::Reflection::RuntimeMethodInfo::get_ReturnParameter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "get_ReturnParameter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::ParameterInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type System::Reflection::RuntimeMethodInfo::get_ReturnType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "get_ReturnType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Reflection::RuntimeMethodInfo::get_MetadataToken()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "get_MetadataToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::MethodImplAttributes System::Reflection::RuntimeMethodInfo::GetMethodImplementationFlags()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "GetMethodImplementationFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodImplAttributes, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<System::Reflection::ParameterInfo> System::Reflection::RuntimeMethodInfo::GetParameters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "GetParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::ParameterInfo>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<System::Reflection::ParameterInfo> System::Reflection::RuntimeMethodInfo::GetParametersInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "GetParametersInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::ParameterInfo>, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Reflection::RuntimeMethodInfo::GetParametersCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "GetParametersCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Reflection::RuntimeMethodInfo::InternalInvoke(::bs_hook::Il2CppWrapperType obj, ::ArrayW<::bs_hook::Il2CppWrapperType> parameters, ByRef<System::Exception> exc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "InternalInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Exception>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, obj, parameters, exc);
}
 ::bs_hook::Il2CppWrapperType System::Reflection::RuntimeMethodInfo::Invoke(::bs_hook::Il2CppWrapperType obj, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder binder, ::ArrayW<::bs_hook::Il2CppWrapperType> parameters, System::Globalization::CultureInfo culture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Binder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, obj, invokeAttr, binder, parameters, culture);
}
 void System::Reflection::RuntimeMethodInfo::ConvertValues(System::Reflection::Binder binder, ::ArrayW<::bs_hook::Il2CppWrapperType> args, ::ArrayW<System::Reflection::ParameterInfo> pinfo, System::Globalization::CultureInfo culture, System::Reflection::BindingFlags invokeAttr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "ConvertValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Binder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Reflection::ParameterInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, binder, args, pinfo, culture, invokeAttr);
}
 System::RuntimeMethodHandle System::Reflection::RuntimeMethodInfo::get_MethodHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "get_MethodHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::RuntimeMethodHandle, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::MethodAttributes System::Reflection::RuntimeMethodInfo::get_Attributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "get_Attributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodAttributes, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::CallingConventions System::Reflection::RuntimeMethodInfo::get_CallingConvention()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "get_CallingConvention",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::CallingConventions, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type System::Reflection::RuntimeMethodInfo::get_ReflectedType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "get_ReflectedType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type System::Reflection::RuntimeMethodInfo::get_DeclaringType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "get_DeclaringType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Reflection::RuntimeMethodInfo::get_Name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "get_Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Reflection::RuntimeMethodInfo::IsDefined(System::Type attributeType, bool inherit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "IsDefined",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, attributeType, inherit);
}
 ::ArrayW<::bs_hook::Il2CppWrapperType> System::Reflection::RuntimeMethodInfo::GetCustomAttributes(bool inherit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "GetCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(instance), ___internal_method, inherit);
}
 ::ArrayW<::bs_hook::Il2CppWrapperType> System::Reflection::RuntimeMethodInfo::GetCustomAttributes(System::Type attributeType, bool inherit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "GetCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(instance), ___internal_method, attributeType, inherit);
}
 void System::Reflection::RuntimeMethodInfo::GetPInvoke(ByRef<System::Reflection::PInvokeAttributes> flags, ByRef<::StringW> entryPoint, ByRef<::StringW> dllName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "GetPInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Reflection::PInvokeAttributes>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, flags, entryPoint, dllName);
}
 ::ArrayW<::bs_hook::Il2CppWrapperType> System::Reflection::RuntimeMethodInfo::GetPseudoCustomAttributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "GetPseudoCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<System::Reflection::CustomAttributeData> System::Reflection::RuntimeMethodInfo::GetPseudoCustomAttributesData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "GetPseudoCustomAttributesData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::CustomAttributeData>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::CustomAttributeData System::Reflection::RuntimeMethodInfo::GetDllImportAttributeData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "GetDllImportAttributeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::CustomAttributeData, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::MethodInfo System::Reflection::RuntimeMethodInfo::MakeGenericMethod(::ArrayW<System::Type> methodInstantiation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "MakeGenericMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodInfo, false>(const_cast<void*>(instance), ___internal_method, methodInstantiation);
}
 System::Reflection::MethodInfo System::Reflection::RuntimeMethodInfo::MakeGenericMethod_impl(::ArrayW<System::Type> types)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "MakeGenericMethod_impl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodInfo, false>(const_cast<void*>(instance), ___internal_method, types);
}
 ::ArrayW<System::Type> System::Reflection::RuntimeMethodInfo::GetGenericArguments()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "GetGenericArguments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Type>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::MethodInfo System::Reflection::RuntimeMethodInfo::GetGenericMethodDefinition_impl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "GetGenericMethodDefinition_impl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::MethodInfo System::Reflection::RuntimeMethodInfo::GetGenericMethodDefinition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "GetGenericMethodDefinition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Reflection::RuntimeMethodInfo::get_IsGenericMethodDefinition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "get_IsGenericMethodDefinition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Reflection::RuntimeMethodInfo::get_IsGenericMethod()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "get_IsGenericMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Reflection::RuntimeMethodInfo::get_ContainsGenericParameters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "get_ContainsGenericParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Reflection::RuntimeMethodInfo::get_core_clr_security_level()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "get_core_clr_security_level",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 bool System::Reflection::RuntimeMethodInfo::get_IsSecurityCritical()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::RuntimeMethodInfo>::get(),
                            "get_IsSecurityCritical",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
