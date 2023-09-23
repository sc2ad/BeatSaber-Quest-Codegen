#pragma once
#include "System/Runtime/Serialization/zzzz__FormatterServices_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Reflection/zzzz__Binder_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Runtime/Serialization/zzzz__MemberHolder_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
//  Writing Method size for method: System::Runtime::Serialization::System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0::*)()>(&System::Runtime::Serialization::System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234ac34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0._GetSerializableMembers_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::MemberInfo> (System::Runtime::Serialization::System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0::*)(System::Runtime::Serialization::MemberHolder)>(&System::Runtime::Serialization::System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0::_GetSerializableMembers_b__0)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x234c050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0>::get(),
                            "<GetSerializableMembers>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::MemberHolder>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Serialization::System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0::__set_type(System::Type value)  {
::cordl_internals::setInstanceField<System::Type, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Type>(value));
}
constexpr System::Type System::Runtime::Serialization::System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0::__get_type() const {
return ::cordl_internals::getInstanceField<System::Type, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 System::Runtime::Serialization::System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0::System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0>())) {}
 void System::Runtime::Serialization::System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<System::Reflection::MemberInfo> System::Runtime::Serialization::System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0::_GetSerializableMembers_b__0(System::Runtime::Serialization::MemberHolder _)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::System__Runtime__Serialization__FormatterServices____c__DisplayClass9_0>::get(),
                            "<GetSerializableMembers>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::MemberHolder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::MemberInfo>, false>(const_cast<void*>(instance), ___internal_method, _);
}
//  Writing Method size for method: System::Runtime::Serialization::FormatterServices.GetSerializableMembers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::MemberInfo> (*)(System::RuntimeType)>(&System::Runtime::Serialization::FormatterServices::GetSerializableMembers)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x2349c4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "GetSerializableMembers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::FormatterServices.CheckSerializable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::RuntimeType)>(&System::Runtime::Serialization::FormatterServices::CheckSerializable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2349de4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "CheckSerializable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::FormatterServices.InternalGetSerializableMembers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::MemberInfo> (*)(System::RuntimeType)>(&System::Runtime::Serialization::FormatterServices::InternalGetSerializableMembers)> {
  constexpr static std::size_t size = 0x700;
  constexpr static std::size_t addrs = 0x2349e04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "InternalGetSerializableMembers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::FormatterServices.GetParentTypes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::RuntimeType, ByRef<::ArrayW<System::RuntimeType>>, ByRef<int32_t>)>(&System::Runtime::Serialization::FormatterServices::GetParentTypes)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x234a504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "GetParentTypes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<System::RuntimeType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::FormatterServices.GetSerializableMembers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::MemberInfo> (*)(System::Type, System::Runtime::Serialization::StreamingContext)>(&System::Runtime::Serialization::FormatterServices::GetSerializableMembers)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x234a99c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "GetSerializableMembers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::FormatterServices.GetUninitializedObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(System::Type)>(&System::Runtime::Serialization::FormatterServices::GetUninitializedObject)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x234ac3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "GetUninitializedObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::FormatterServices.nativeGetUninitializedObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(System::RuntimeType)>(&System::Runtime::Serialization::FormatterServices::nativeGetUninitializedObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234ae08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "nativeGetUninitializedObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::FormatterServices.GetEnableUnsafeTypeForwarders
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Runtime::Serialization::FormatterServices::GetEnableUnsafeTypeForwarders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234ae10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "GetEnableUnsafeTypeForwarders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::FormatterServices.UnsafeTypeForwardersIsEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Runtime::Serialization::FormatterServices::UnsafeTypeForwardersIsEnabled)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x234ae18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "UnsafeTypeForwardersIsEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::FormatterServices.SerializationSetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Reflection::MemberInfo, ::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType)>(&System::Runtime::Serialization::FormatterServices::SerializationSetValue)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x234aec0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "SerializationSetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MemberInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::FormatterServices.PopulateObjectMembers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::bs_hook::Il2CppWrapperType, ::ArrayW<System::Reflection::MemberInfo>, ::ArrayW<::bs_hook::Il2CppWrapperType>)>(&System::Runtime::Serialization::FormatterServices::PopulateObjectMembers)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x234b154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "PopulateObjectMembers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Reflection::MemberInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::FormatterServices.GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::bs_hook::Il2CppWrapperType> (*)(::bs_hook::Il2CppWrapperType, ::ArrayW<System::Reflection::MemberInfo>)>(&System::Runtime::Serialization::FormatterServices::GetObjectData)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x234b468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Reflection::MemberInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::FormatterServices.GetTypeFromAssembly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (*)(System::Reflection::Assembly, ::StringW)>(&System::Runtime::Serialization::FormatterServices::GetTypeFromAssembly)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x234b854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "GetTypeFromAssembly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Assembly>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::FormatterServices.LoadAssemblyFromString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Assembly (*)(::StringW)>(&System::Runtime::Serialization::FormatterServices::LoadAssemblyFromString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234b8f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "LoadAssemblyFromString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::FormatterServices.LoadAssemblyFromStringNoThrow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Assembly (*)(::StringW)>(&System::Runtime::Serialization::FormatterServices::LoadAssemblyFromStringNoThrow)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x234b8f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "LoadAssemblyFromStringNoThrow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::FormatterServices.GetClrAssemblyName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::Type, ByRef<bool>)>(&System::Runtime::Serialization::FormatterServices::GetClrAssemblyName)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x234b9cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "GetClrAssemblyName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::FormatterServices.GetClrTypeFullName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::Type)>(&System::Runtime::Serialization::FormatterServices::GetClrTypeFullName)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x234bb38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "GetClrTypeFullName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::FormatterServices.GetClrTypeFullNameForArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::Type)>(&System::Runtime::Serialization::FormatterServices::GetClrTypeFullNameForArray)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x234bbb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "GetClrTypeFullNameForArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::FormatterServices.GetClrTypeFullNameForNonArrayTypes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::Type)>(&System::Runtime::Serialization::FormatterServices::GetClrTypeFullNameForNonArrayTypes)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x234bddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "GetClrTypeFullNameForNonArrayTypes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::Runtime::Serialization::FormatterServices::__set_m_MemberInfoTable(System::Collections::Concurrent::ConcurrentDictionary_2<System::Runtime::Serialization::MemberHolder,::ArrayW<System::Reflection::MemberInfo>> value)  {
::cordl_internals::setStaticField<System::Collections::Concurrent::ConcurrentDictionary_2<System::Runtime::Serialization::MemberHolder,::ArrayW<System::Reflection::MemberInfo>>, "m_MemberInfoTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get>(std::forward<System::Collections::Concurrent::ConcurrentDictionary_2<System::Runtime::Serialization::MemberHolder,::ArrayW<System::Reflection::MemberInfo>>>(value));
}
 System::Collections::Concurrent::ConcurrentDictionary_2<System::Runtime::Serialization::MemberHolder,::ArrayW<System::Reflection::MemberInfo>> System::Runtime::Serialization::FormatterServices::__get_m_MemberInfoTable()  {
return ::cordl_internals::getStaticField<System::Collections::Concurrent::ConcurrentDictionary_2<System::Runtime::Serialization::MemberHolder,::ArrayW<System::Reflection::MemberInfo>>, "m_MemberInfoTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get>();
}
 void System::Runtime::Serialization::FormatterServices::__set_unsafeTypeForwardersIsEnabled(bool value)  {
::cordl_internals::setStaticField<bool, "unsafeTypeForwardersIsEnabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get>(std::forward<bool>(value));
}
 bool System::Runtime::Serialization::FormatterServices::__get_unsafeTypeForwardersIsEnabled()  {
return ::cordl_internals::getStaticField<bool, "unsafeTypeForwardersIsEnabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get>();
}
 void System::Runtime::Serialization::FormatterServices::__set_unsafeTypeForwardersIsEnabledInitialized(bool value)  {
::cordl_internals::setStaticField<bool, "unsafeTypeForwardersIsEnabledInitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get>(std::forward<bool>(value));
}
 bool System::Runtime::Serialization::FormatterServices::__get_unsafeTypeForwardersIsEnabledInitialized()  {
return ::cordl_internals::getStaticField<bool, "unsafeTypeForwardersIsEnabledInitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get>();
}
 void System::Runtime::Serialization::FormatterServices::__set_advancedTypes(::ArrayW<System::Type> value)  {
::cordl_internals::setStaticField<::ArrayW<System::Type>, "advancedTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get>(std::forward<::ArrayW<System::Type>>(value));
}
 ::ArrayW<System::Type> System::Runtime::Serialization::FormatterServices::__get_advancedTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<System::Type>, "advancedTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get>();
}
 void System::Runtime::Serialization::FormatterServices::__set_s_binder(System::Reflection::Binder value)  {
::cordl_internals::setStaticField<System::Reflection::Binder, "s_binder", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get>(std::forward<System::Reflection::Binder>(value));
}
 System::Reflection::Binder System::Runtime::Serialization::FormatterServices::__get_s_binder()  {
return ::cordl_internals::getStaticField<System::Reflection::Binder, "s_binder", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get>();
}
 ::ArrayW<System::Reflection::MemberInfo> System::Runtime::Serialization::FormatterServices::GetSerializableMembers(System::RuntimeType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "GetSerializableMembers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::MemberInfo>, false>(nullptr, ___internal_method, type);
}
 bool System::Runtime::Serialization::FormatterServices::CheckSerializable(System::RuntimeType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "CheckSerializable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type);
}
 ::ArrayW<System::Reflection::MemberInfo> System::Runtime::Serialization::FormatterServices::InternalGetSerializableMembers(System::RuntimeType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "InternalGetSerializableMembers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::MemberInfo>, false>(nullptr, ___internal_method, type);
}
 bool System::Runtime::Serialization::FormatterServices::GetParentTypes(System::RuntimeType parentType, ByRef<::ArrayW<System::RuntimeType>> parentTypes, ByRef<int32_t> parentTypeCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "GetParentTypes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<System::RuntimeType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, parentType, parentTypes, parentTypeCount);
}
 ::ArrayW<System::Reflection::MemberInfo> System::Runtime::Serialization::FormatterServices::GetSerializableMembers(System::Type type, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "GetSerializableMembers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::MemberInfo>, false>(nullptr, ___internal_method, type, context);
}
 ::bs_hook::Il2CppWrapperType System::Runtime::Serialization::FormatterServices::GetUninitializedObject(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "GetUninitializedObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, type);
}
 ::bs_hook::Il2CppWrapperType System::Runtime::Serialization::FormatterServices::nativeGetUninitializedObject(System::RuntimeType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "nativeGetUninitializedObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, type);
}
 bool System::Runtime::Serialization::FormatterServices::GetEnableUnsafeTypeForwarders()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "GetEnableUnsafeTypeForwarders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool System::Runtime::Serialization::FormatterServices::UnsafeTypeForwardersIsEnabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "UnsafeTypeForwardersIsEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 void System::Runtime::Serialization::FormatterServices::SerializationSetValue(System::Reflection::MemberInfo fi, ::bs_hook::Il2CppWrapperType target, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "SerializationSetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MemberInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fi, target, value);
}
 ::bs_hook::Il2CppWrapperType System::Runtime::Serialization::FormatterServices::PopulateObjectMembers(::bs_hook::Il2CppWrapperType obj, ::ArrayW<System::Reflection::MemberInfo> members, ::ArrayW<::bs_hook::Il2CppWrapperType> data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "PopulateObjectMembers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Reflection::MemberInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, obj, members, data);
}
 ::ArrayW<::bs_hook::Il2CppWrapperType> System::Runtime::Serialization::FormatterServices::GetObjectData(::bs_hook::Il2CppWrapperType obj, ::ArrayW<System::Reflection::MemberInfo> members)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Reflection::MemberInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::bs_hook::Il2CppWrapperType>, false>(nullptr, ___internal_method, obj, members);
}
 System::Type System::Runtime::Serialization::FormatterServices::GetTypeFromAssembly(System::Reflection::Assembly assem, ::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "GetTypeFromAssembly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Assembly>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(nullptr, ___internal_method, assem, name);
}
 System::Reflection::Assembly System::Runtime::Serialization::FormatterServices::LoadAssemblyFromString(::StringW assemblyName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "LoadAssemblyFromString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::Assembly, false>(nullptr, ___internal_method, assemblyName);
}
 System::Reflection::Assembly System::Runtime::Serialization::FormatterServices::LoadAssemblyFromStringNoThrow(::StringW assemblyName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "LoadAssemblyFromStringNoThrow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::Assembly, false>(nullptr, ___internal_method, assemblyName);
}
 ::StringW System::Runtime::Serialization::FormatterServices::GetClrAssemblyName(System::Type type, ByRef<bool> hasTypeForwardedFrom)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "GetClrAssemblyName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, type, hasTypeForwardedFrom);
}
 ::StringW System::Runtime::Serialization::FormatterServices::GetClrTypeFullName(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "GetClrTypeFullName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, type);
}
 ::StringW System::Runtime::Serialization::FormatterServices::GetClrTypeFullNameForArray(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "GetClrTypeFullNameForArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, type);
}
 ::StringW System::Runtime::Serialization::FormatterServices::GetClrTypeFullNameForNonArrayTypes(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::FormatterServices>::get(),
                            "GetClrTypeFullNameForNonArrayTypes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, type);
}
