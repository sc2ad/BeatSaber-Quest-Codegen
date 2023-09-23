#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
#include "System/Reflection/zzzz__RuntimeAssembly_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Reflection/zzzz__RuntimeModule_def.hpp"
#include "System/Threading/zzzz__StackCrawlMark_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
#include "System/Reflection/zzzz__TypeAttributes_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Reflection/zzzz__CorElementType_def.hpp"
//  Writing Method size for method: System::RuntimeTypeHandle._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::RuntimeTypeHandle::*)(::cordl_internals::intptr_t)>(&System::RuntimeTypeHandle::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x249141c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::RuntimeTypeHandle::*)(System::RuntimeType)>(&System::RuntimeTypeHandle::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2491424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::RuntimeTypeHandle::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::RuntimeTypeHandle::_ctor)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x2491440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (System::RuntimeTypeHandle::*)()>(&System::RuntimeTypeHandle::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24915f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::RuntimeTypeHandle::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::RuntimeTypeHandle::GetObjectData)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x24915fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::RuntimeTypeHandle::*)(::bs_hook::Il2CppWrapperType)>(&System::RuntimeTypeHandle::Equals)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x24917b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeTypeHandle),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::RuntimeTypeHandle::*)()>(&System::RuntimeTypeHandle::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24918b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeTypeHandle),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.GetAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::TypeAttributes (*)(System::RuntimeType)>(&System::RuntimeTypeHandle::GetAttributes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24918b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "GetAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.GetMetadataToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(System::RuntimeType)>(&System::RuntimeTypeHandle::GetMetadataToken)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24918bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "GetMetadataToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.GetToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(System::RuntimeType)>(&System::RuntimeTypeHandle::GetToken)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24918c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "GetToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.GetGenericTypeDefinition_impl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (*)(System::RuntimeType)>(&System::RuntimeTypeHandle::GetGenericTypeDefinition_impl)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24918c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "GetGenericTypeDefinition_impl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.GetGenericTypeDefinition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (*)(System::RuntimeType)>(&System::RuntimeTypeHandle::GetGenericTypeDefinition)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24918c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "GetGenericTypeDefinition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.IsPrimitive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::RuntimeType)>(&System::RuntimeTypeHandle::IsPrimitive)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x24918cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "IsPrimitive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.IsByRef
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::RuntimeType)>(&System::RuntimeTypeHandle::IsByRef)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x249190c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "IsByRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.IsPointer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::RuntimeType)>(&System::RuntimeTypeHandle::IsPointer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2491928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "IsPointer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.IsArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::RuntimeType)>(&System::RuntimeTypeHandle::IsArray)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2491944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "IsArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.IsSzArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::RuntimeType)>(&System::RuntimeTypeHandle::IsSzArray)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x249196c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "IsSzArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.HasElementType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::RuntimeType)>(&System::RuntimeTypeHandle::HasElementType)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2491988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "HasElementType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.GetCorElementType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::CorElementType (*)(System::RuntimeType)>(&System::RuntimeTypeHandle::GetCorElementType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2491908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "GetCorElementType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.HasInstantiation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::RuntimeType)>(&System::RuntimeTypeHandle::HasInstantiation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24919c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "HasInstantiation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.IsComObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::RuntimeType)>(&System::RuntimeTypeHandle::IsComObject)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24919c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "IsComObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.IsInstanceOfType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::RuntimeType, ::bs_hook::Il2CppWrapperType)>(&System::RuntimeTypeHandle::IsInstanceOfType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24919cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "IsInstanceOfType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.HasReferences
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::RuntimeType)>(&System::RuntimeTypeHandle::HasReferences)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24919d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "HasReferences",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.IsComObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::RuntimeType, bool)>(&System::RuntimeTypeHandle::IsComObject)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x24919d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "IsComObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.IsContextful
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::RuntimeType)>(&System::RuntimeTypeHandle::IsContextful)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x24919e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "IsContextful",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::RuntimeType, System::RuntimeType)>(&System::RuntimeTypeHandle::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2491a78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.IsInterface
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::RuntimeType)>(&System::RuntimeTypeHandle::IsInterface)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2491a80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "IsInterface",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.GetArrayRank
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(System::RuntimeType)>(&System::RuntimeTypeHandle::GetArrayRank)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2491aa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "GetArrayRank",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.GetAssembly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::RuntimeAssembly (*)(System::RuntimeType)>(&System::RuntimeTypeHandle::GetAssembly)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2491aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "GetAssembly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.GetElementType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::RuntimeType (*)(System::RuntimeType)>(&System::RuntimeTypeHandle::GetElementType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2491aa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "GetElementType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.GetModule
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::RuntimeModule (*)(System::RuntimeType)>(&System::RuntimeTypeHandle::GetModule)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2491aac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "GetModule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.IsGenericVariable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::RuntimeType)>(&System::RuntimeTypeHandle::IsGenericVariable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2491ab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "IsGenericVariable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.GetBaseType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::RuntimeType (*)(System::RuntimeType)>(&System::RuntimeTypeHandle::GetBaseType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2491ab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "GetBaseType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.CanCastTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::RuntimeType, System::RuntimeType)>(&System::RuntimeTypeHandle::CanCastTo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2491ab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "CanCastTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.type_is_assignable_from
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type, System::Type)>(&System::RuntimeTypeHandle::type_is_assignable_from)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2491ac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "type_is_assignable_from",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.IsGenericTypeDefinition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::RuntimeType)>(&System::RuntimeTypeHandle::IsGenericTypeDefinition)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2491acc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "IsGenericTypeDefinition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.GetGenericParameterInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (*)(System::RuntimeType)>(&System::RuntimeTypeHandle::GetGenericParameterInfo)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2491ad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "GetGenericParameterInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.IsSubclassOf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::RuntimeType, System::RuntimeType)>(&System::RuntimeTypeHandle::IsSubclassOf)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2491ad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "IsSubclassOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.is_subclass_of
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::cordl_internals::intptr_t, ::cordl_internals::intptr_t)>(&System::RuntimeTypeHandle::is_subclass_of)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2491af4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "is_subclass_of",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.internal_from_name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::RuntimeType (*)(::StringW, ByRef<System::Threading::StackCrawlMark>, System::Reflection::Assembly, bool, bool, bool)>(&System::RuntimeTypeHandle::internal_from_name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2491af8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "internal_from_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::StackCrawlMark>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Assembly>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeTypeHandle.GetTypeByName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::RuntimeType (*)(::StringW, bool, bool, bool, ByRef<System::Threading::StackCrawlMark>, bool)>(&System::RuntimeTypeHandle::GetTypeByName)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x2491b08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "GetTypeByName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::StackCrawlMark>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr  System::RuntimeTypeHandle::operator System::Runtime::Serialization::ISerializable() const {
return System::Runtime::Serialization::ISerializable(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "value", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }]
constexpr System::RuntimeTypeHandle::RuntimeTypeHandle(::cordl_internals::intptr_t value) noexcept : ::bs_hook::ValueTypeWrapper() {this->value = value;
}
constexpr void System::RuntimeTypeHandle::__set_value(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t System::RuntimeTypeHandle::__get_value() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance);
}
 void System::RuntimeTypeHandle::_ctor(::cordl_internals::intptr_t val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, val);
}
 void System::RuntimeTypeHandle::_ctor(System::RuntimeType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, type);
}
 void System::RuntimeTypeHandle::_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, info, context);
}
 ::cordl_internals::intptr_t System::RuntimeTypeHandle::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::RuntimeTypeHandle::GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, info, context);
}
 bool System::RuntimeTypeHandle::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 int32_t System::RuntimeTypeHandle::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 System::Reflection::TypeAttributes System::RuntimeTypeHandle::GetAttributes(System::RuntimeType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "GetAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::TypeAttributes, false>(nullptr, ___internal_method, type);
}
 int32_t System::RuntimeTypeHandle::GetMetadataToken(System::RuntimeType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "GetMetadataToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, type);
}
 int32_t System::RuntimeTypeHandle::GetToken(System::RuntimeType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "GetToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, type);
}
 System::Type System::RuntimeTypeHandle::GetGenericTypeDefinition_impl(System::RuntimeType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "GetGenericTypeDefinition_impl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(nullptr, ___internal_method, type);
}
 System::Type System::RuntimeTypeHandle::GetGenericTypeDefinition(System::RuntimeType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "GetGenericTypeDefinition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(nullptr, ___internal_method, type);
}
 bool System::RuntimeTypeHandle::IsPrimitive(System::RuntimeType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "IsPrimitive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type);
}
 bool System::RuntimeTypeHandle::IsByRef(System::RuntimeType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "IsByRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type);
}
 bool System::RuntimeTypeHandle::IsPointer(System::RuntimeType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "IsPointer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type);
}
 bool System::RuntimeTypeHandle::IsArray(System::RuntimeType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "IsArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type);
}
 bool System::RuntimeTypeHandle::IsSzArray(System::RuntimeType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "IsSzArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type);
}
 bool System::RuntimeTypeHandle::HasElementType(System::RuntimeType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "HasElementType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type);
}
 System::Reflection::CorElementType System::RuntimeTypeHandle::GetCorElementType(System::RuntimeType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "GetCorElementType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::CorElementType, false>(nullptr, ___internal_method, type);
}
 bool System::RuntimeTypeHandle::HasInstantiation(System::RuntimeType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "HasInstantiation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type);
}
 bool System::RuntimeTypeHandle::IsComObject(System::RuntimeType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "IsComObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type);
}
 bool System::RuntimeTypeHandle::IsInstanceOfType(System::RuntimeType type, ::bs_hook::Il2CppWrapperType o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "IsInstanceOfType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type, o);
}
 bool System::RuntimeTypeHandle::HasReferences(System::RuntimeType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "HasReferences",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type);
}
 bool System::RuntimeTypeHandle::IsComObject(System::RuntimeType type, bool isGenericCOM)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "IsComObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type, isGenericCOM);
}
 bool System::RuntimeTypeHandle::IsContextful(System::RuntimeType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "IsContextful",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type);
}
 bool System::RuntimeTypeHandle::IsEquivalentTo(System::RuntimeType rtType1, System::RuntimeType rtType2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rtType1, rtType2);
}
 bool System::RuntimeTypeHandle::IsInterface(System::RuntimeType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "IsInterface",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type);
}
 int32_t System::RuntimeTypeHandle::GetArrayRank(System::RuntimeType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "GetArrayRank",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, type);
}
 System::Reflection::RuntimeAssembly System::RuntimeTypeHandle::GetAssembly(System::RuntimeType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "GetAssembly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::RuntimeAssembly, false>(nullptr, ___internal_method, type);
}
 System::RuntimeType System::RuntimeTypeHandle::GetElementType(System::RuntimeType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "GetElementType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::RuntimeType, false>(nullptr, ___internal_method, type);
}
 System::Reflection::RuntimeModule System::RuntimeTypeHandle::GetModule(System::RuntimeType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "GetModule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::RuntimeModule, false>(nullptr, ___internal_method, type);
}
 bool System::RuntimeTypeHandle::IsGenericVariable(System::RuntimeType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "IsGenericVariable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type);
}
 System::RuntimeType System::RuntimeTypeHandle::GetBaseType(System::RuntimeType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "GetBaseType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::RuntimeType, false>(nullptr, ___internal_method, type);
}
 bool System::RuntimeTypeHandle::CanCastTo(System::RuntimeType type, System::RuntimeType target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "CanCastTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type, target);
}
 bool System::RuntimeTypeHandle::type_is_assignable_from(System::Type a, System::Type b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "type_is_assignable_from",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
 bool System::RuntimeTypeHandle::IsGenericTypeDefinition(System::RuntimeType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "IsGenericTypeDefinition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type);
}
 ::cordl_internals::intptr_t System::RuntimeTypeHandle::GetGenericParameterInfo(System::RuntimeType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "GetGenericParameterInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(nullptr, ___internal_method, type);
}
 bool System::RuntimeTypeHandle::IsSubclassOf(System::RuntimeType childType, System::RuntimeType baseType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "IsSubclassOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, childType, baseType);
}
 bool System::RuntimeTypeHandle::is_subclass_of(::cordl_internals::intptr_t childType, ::cordl_internals::intptr_t baseType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "is_subclass_of",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, childType, baseType);
}
 System::RuntimeType System::RuntimeTypeHandle::internal_from_name(::StringW name, ByRef<System::Threading::StackCrawlMark> stackMark, System::Reflection::Assembly callerAssembly, bool throwOnError, bool ignoreCase, bool reflectionOnly)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "internal_from_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::StackCrawlMark>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Assembly>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::RuntimeType, false>(nullptr, ___internal_method, name, stackMark, callerAssembly, throwOnError, ignoreCase, reflectionOnly);
}
 System::RuntimeType System::RuntimeTypeHandle::GetTypeByName(::StringW typeName, bool throwOnError, bool ignoreCase, bool reflectionOnly, ByRef<System::Threading::StackCrawlMark> stackMark, bool loadTypeFromPartialName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeTypeHandle>::get(),
                            "GetTypeByName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::StackCrawlMark>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::RuntimeType, false>(nullptr, ___internal_method, typeName, throwOnError, ignoreCase, reflectionOnly, stackMark, loadTypeFromPartialName);
}
