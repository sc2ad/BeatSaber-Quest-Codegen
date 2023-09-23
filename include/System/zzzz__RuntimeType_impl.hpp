#pragma once
#include "System/Reflection/zzzz__TypeInfo_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__EventInfo_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/Reflection/zzzz__RuntimeMethodInfo_def.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
#include "System/Threading/zzzz__StackCrawlMark_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__RuntimeAssembly_def.hpp"
#include "System/Reflection/zzzz__MemberTypes_def.hpp"
#include "System/zzzz__MonoTypeInfo_def.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
#include "System/Reflection/zzzz__RuntimeEventInfo_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__Module_def.hpp"
#include "System/Reflection/zzzz__RuntimeConstructorInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__ParameterModifier_def.hpp"
#include "System/Reflection/zzzz__RuntimeModule_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/Reflection/zzzz__Binder_def.hpp"
#include "System/Reflection/zzzz__RuntimeFieldInfo_def.hpp"
#include "System/Reflection/zzzz__GenericParameterAttributes_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
#include "System/zzzz__TypeNameKind_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/Reflection/zzzz__CallingConventions_def.hpp"
#include "System/Reflection/zzzz__RuntimePropertyInfo_def.hpp"
#include "System/Reflection/zzzz__TypeAttributes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::System__RuntimeType__MemberListType::System__RuntimeType__MemberListType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::System__RuntimeType__MemberListType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::System__RuntimeType__MemberListType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::System__RuntimeType__MemberListType  System::System__RuntimeType__MemberListType::All{0};
constexpr System::System__RuntimeType__MemberListType  System::System__RuntimeType__MemberListType::CaseSensitive{1};
constexpr System::System__RuntimeType__MemberListType  System::System__RuntimeType__MemberListType::CaseInsensitive{2};
constexpr System::System__RuntimeType__MemberListType  System::System__RuntimeType__MemberListType::HandleToInfo{3};
//  Writing Method size for method: System::RuntimeType.GetType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::RuntimeType (*)(::StringW, bool, bool, bool, ByRef<System::Threading::StackCrawlMark>)>(&System::RuntimeType::GetType)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2479b70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::StackCrawlMark>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.ThrowIfTypeNeverValidGenericArgument
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::RuntimeType)>(&System::RuntimeType::ThrowIfTypeNeverValidGenericArgument)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2479bdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "ThrowIfTypeNeverValidGenericArgument",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.SanityCheckGenericArguments
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<System::RuntimeType>, ::ArrayW<System::RuntimeType>)>(&System::RuntimeType::SanityCheckGenericArguments)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2479d40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "SanityCheckGenericArguments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::RuntimeType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::RuntimeType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.SplitName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ByRef<::StringW>, ByRef<::StringW>)>(&System::RuntimeType::SplitName)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2479f64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "SplitName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.FilterPreCalculate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::BindingFlags (*)(bool, bool, bool)>(&System::RuntimeType::FilterPreCalculate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x247a050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "FilterPreCalculate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.FilterHelper
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Reflection::BindingFlags, ByRef<::StringW>, bool, ByRef<bool>, ByRef<bool>, ByRef<System::System__RuntimeType__MemberListType>)>(&System::RuntimeType::FilterHelper)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x247a08c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "FilterHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__RuntimeType__MemberListType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.FilterHelper
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Reflection::BindingFlags, ByRef<::StringW>, ByRef<bool>, ByRef<System::System__RuntimeType__MemberListType>)>(&System::RuntimeType::FilterHelper)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x247a1ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "FilterHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__RuntimeType__MemberListType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.FilterApplyPrefixLookup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Reflection::MemberInfo, ::StringW, bool)>(&System::RuntimeType::FilterApplyPrefixLookup)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x247a238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "FilterApplyPrefixLookup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MemberInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.FilterApplyBase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Reflection::MemberInfo, System::Reflection::BindingFlags, bool, bool, bool, ::StringW, bool)>(&System::RuntimeType::FilterApplyBase)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x247a298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "FilterApplyBase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MemberInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.FilterApplyType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type, System::Reflection::BindingFlags, ::StringW, bool, ::StringW)>(&System::RuntimeType::FilterApplyType)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x247a474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "FilterApplyType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.FilterApplyMethodInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Reflection::RuntimeMethodInfo, System::Reflection::BindingFlags, System::Reflection::CallingConventions, ::ArrayW<System::Type>)>(&System::RuntimeType::FilterApplyMethodInfo)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x247a58c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "FilterApplyMethodInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::RuntimeMethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::CallingConventions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.FilterApplyConstructorInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Reflection::RuntimeConstructorInfo, System::Reflection::BindingFlags, System::Reflection::CallingConventions, ::ArrayW<System::Type>)>(&System::RuntimeType::FilterApplyConstructorInfo)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x247a86c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "FilterApplyConstructorInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::RuntimeConstructorInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::CallingConventions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.FilterApplyMethodBase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Reflection::MethodBase, System::Reflection::BindingFlags, System::Reflection::BindingFlags, System::Reflection::CallingConventions, ::ArrayW<System::Type>)>(&System::RuntimeType::FilterApplyMethodBase)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x247a614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "FilterApplyMethodBase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::CallingConventions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::RuntimeType::*)()>(&System::RuntimeType::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x247a8f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetMethodCandidates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::System__RuntimeType__ListBuilder_1<System::Reflection::MethodInfo> (System::RuntimeType::*)(::StringW, System::Reflection::BindingFlags, System::Reflection::CallingConventions, ::ArrayW<System::Type>, int32_t, bool)>(&System::RuntimeType::GetMethodCandidates)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x247a93c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetMethodCandidates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::CallingConventions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetConstructorCandidates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::System__RuntimeType__ListBuilder_1<System::Reflection::ConstructorInfo> (System::RuntimeType::*)(::StringW, System::Reflection::BindingFlags, System::Reflection::CallingConventions, ::ArrayW<System::Type>, bool)>(&System::RuntimeType::GetConstructorCandidates)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x247ae80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetConstructorCandidates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::CallingConventions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetPropertyCandidates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::System__RuntimeType__ListBuilder_1<System::Reflection::PropertyInfo> (System::RuntimeType::*)(::StringW, System::Reflection::BindingFlags, ::ArrayW<System::Type>, bool)>(&System::RuntimeType::GetPropertyCandidates)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x247b334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetPropertyCandidates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetEventCandidates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::System__RuntimeType__ListBuilder_1<System::Reflection::EventInfo> (System::RuntimeType::*)(::StringW, System::Reflection::BindingFlags, bool)>(&System::RuntimeType::GetEventCandidates)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x247b82c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetEventCandidates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetFieldCandidates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::System__RuntimeType__ListBuilder_1<System::Reflection::FieldInfo> (System::RuntimeType::*)(::StringW, System::Reflection::BindingFlags, bool)>(&System::RuntimeType::GetFieldCandidates)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x247bca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetFieldCandidates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetNestedTypeCandidates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::System__RuntimeType__ListBuilder_1<System::Type> (System::RuntimeType::*)(::StringW, System::Reflection::BindingFlags, bool)>(&System::RuntimeType::GetNestedTypeCandidates)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x247c168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetNestedTypeCandidates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetMethods
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::MethodInfo> (System::RuntimeType::*)(System::Reflection::BindingFlags)>(&System::RuntimeType::GetMethods)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x247c6b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  100
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetConstructors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::ConstructorInfo> (System::RuntimeType::*)(System::Reflection::BindingFlags)>(&System::RuntimeType::GetConstructors)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x247c740;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  81
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::PropertyInfo> (System::RuntimeType::*)(System::Reflection::BindingFlags)>(&System::RuntimeType::GetProperties)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x247c7d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  109
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::EventInfo> (System::RuntimeType::*)(System::Reflection::BindingFlags)>(&System::RuntimeType::GetEvents)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x247c85c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  84
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetFields
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::FieldInfo> (System::RuntimeType::*)(System::Reflection::BindingFlags)>(&System::RuntimeType::GetFields)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x247c8dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  88
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetConstructorImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::ConstructorInfo (System::RuntimeType::*)(System::Reflection::BindingFlags, System::Reflection::Binder, System::Reflection::CallingConventions, ::ArrayW<System::Type>, ::ArrayW<System::Reflection::ParameterModifier>)>(&System::RuntimeType::GetConstructorImpl)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x247c95c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  79
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetPropertyImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::PropertyInfo (System::RuntimeType::*)(::StringW, System::Reflection::BindingFlags, System::Reflection::Binder, System::Type, ::ArrayW<System::Type>, ::ArrayW<System::Reflection::ParameterModifier>)>(&System::RuntimeType::GetPropertyImpl)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x247cb80;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  108
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::EventInfo (System::RuntimeType::*)(::StringW, System::Reflection::BindingFlags)>(&System::RuntimeType::GetEvent)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x247ce1c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  83
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::FieldInfo (System::RuntimeType::*)(::StringW, System::Reflection::BindingFlags)>(&System::RuntimeType::GetField)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x247cfec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  86
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetNestedType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::RuntimeType::*)(::StringW, System::Reflection::BindingFlags)>(&System::RuntimeType::GetNestedType)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x247d2e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  101
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetMember
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::MemberInfo> (System::RuntimeType::*)(::StringW, System::Reflection::MemberTypes, System::Reflection::BindingFlags)>(&System::RuntimeType::GetMember)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x247d4e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  91
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.get_Module
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Module (System::RuntimeType::*)()>(&System::RuntimeType::get_Module)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x247d9d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetRuntimeModule
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::RuntimeModule (System::RuntimeType::*)()>(&System::RuntimeType::GetRuntimeModule)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x247d9d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetRuntimeModule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.get_Assembly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Assembly (System::RuntimeType::*)()>(&System::RuntimeType::get_Assembly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x247d9e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetRuntimeAssembly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::RuntimeAssembly (System::RuntimeType::*)()>(&System::RuntimeType::GetRuntimeAssembly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x247d9e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetRuntimeAssembly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.get_TypeHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::RuntimeTypeHandle (System::RuntimeType::*)()>(&System::RuntimeType::get_TypeHandle)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x247d9f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  110
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.IsInstanceOfType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::RuntimeType::*)(::bs_hook::Il2CppWrapperType)>(&System::RuntimeType::IsInstanceOfType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x247da14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  116
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.IsAssignableFrom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::RuntimeType::*)(System::Type)>(&System::RuntimeType::IsAssignableFrom)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x247da1c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::RuntimeType::*)(System::Type)>(&System::RuntimeType::IsEquivalentTo)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x247daf4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  117
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.get_BaseType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::RuntimeType::*)()>(&System::RuntimeType::get_BaseType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x247dba4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  113
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetBaseType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::RuntimeType (System::RuntimeType::*)()>(&System::RuntimeType::GetBaseType)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x247dba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetBaseType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.get_UnderlyingSystemType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::RuntimeType::*)()>(&System::RuntimeType::get_UnderlyingSystemType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x247dd88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetAttributeFlagsImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::TypeAttributes (System::RuntimeType::*)()>(&System::RuntimeType::GetAttributeFlagsImpl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x247dd8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  55
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.IsContextfulImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::RuntimeType::*)()>(&System::RuntimeType::IsContextfulImpl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x247dd94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  67
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.IsByRefImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::RuntimeType::*)()>(&System::RuntimeType::IsByRefImpl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x247dd9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.IsPrimitiveImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::RuntimeType::*)()>(&System::RuntimeType::IsPrimitiveImpl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x247dda4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  72
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.IsPointerImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::RuntimeType::*)()>(&System::RuntimeType::IsPointerImpl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x247ddac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.IsCOMObjectImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::RuntimeType::*)()>(&System::RuntimeType::IsCOMObjectImpl)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x247ddb4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  65
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.IsValueTypeImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::RuntimeType::*)()>(&System::RuntimeType::IsValueTypeImpl)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x247ddc0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  74
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.get_IsEnum
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::RuntimeType::*)()>(&System::RuntimeType::get_IsEnum)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x247dee0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  68
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.HasElementTypeImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::RuntimeType::*)()>(&System::RuntimeType::HasElementTypeImpl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x247df54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  45
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.get_GenericParameterAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::GenericParameterAttributes (System::RuntimeType::*)()>(&System::RuntimeType::get_GenericParameterAttributes)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x247df5c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  52
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.get_IsSzArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::RuntimeType::*)()>(&System::RuntimeType::get_IsSzArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x247e028;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  126
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.IsArrayImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::RuntimeType::*)()>(&System::RuntimeType::IsArrayImpl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x247e030;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetArrayRank
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::RuntimeType::*)()>(&System::RuntimeType::GetArrayRank)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x247e038;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  47
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetElementType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::RuntimeType::*)()>(&System::RuntimeType::GetElementType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x247e0c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  46
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetEnumNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::RuntimeType::*)()>(&System::RuntimeType::GetEnumNames)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x247e0cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetEnumValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Array (System::RuntimeType::*)()>(&System::RuntimeType::GetEnumValues)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x247e1ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  119
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetEnumUnderlyingType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::RuntimeType::*)()>(&System::RuntimeType::GetEnumUnderlyingType)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x247e364;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  118
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.IsEnumDefined
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::RuntimeType::*)(::bs_hook::Il2CppWrapperType)>(&System::RuntimeType::IsEnumDefined)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0x247e438;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetEnumName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::RuntimeType::*)(::bs_hook::Il2CppWrapperType)>(&System::RuntimeType::GetEnumName)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x247e964;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetGenericArgumentsInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::RuntimeType> (System::RuntimeType::*)()>(&System::RuntimeType::GetGenericArgumentsInternal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x247eb54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetGenericArgumentsInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetGenericArguments
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Type> (System::RuntimeType::*)()>(&System::RuntimeType::GetGenericArguments)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x247ebcc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  50
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.MakeGenericType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::RuntimeType::*)(::ArrayW<System::Type>)>(&System::RuntimeType::MakeGenericType)> {
  constexpr static std::size_t size = 0x508;
  constexpr static std::size_t addrs = 0x247ec5c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  123
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.get_IsGenericTypeDefinition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::RuntimeType::*)()>(&System::RuntimeType::get_IsGenericTypeDefinition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x247f168;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  41
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.get_IsGenericParameter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::RuntimeType::*)()>(&System::RuntimeType::get_IsGenericParameter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x247f170;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.get_GenericParameterPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::RuntimeType::*)()>(&System::RuntimeType::get_GenericParameterPosition)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x247f178;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  51
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetGenericTypeDefinition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::RuntimeType::*)()>(&System::RuntimeType::GetGenericTypeDefinition)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x247f204;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  48
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.get_IsGenericType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::RuntimeType::*)()>(&System::RuntimeType::get_IsGenericType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x247f290;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  40
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.get_IsConstructedGenericType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::RuntimeType::*)()>(&System::RuntimeType::get_IsConstructedGenericType)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x247f298;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  37
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.InvokeMember
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::RuntimeType::*)(::StringW, System::Reflection::BindingFlags, System::Reflection::Binder, ::bs_hook::Il2CppWrapperType, ::ArrayW<::bs_hook::Il2CppWrapperType>, ::ArrayW<System::Reflection::ParameterModifier>, System::Globalization::CultureInfo, ::ArrayW<::StringW>)>(&System::RuntimeType::InvokeMember)> {
  constexpr static std::size_t size = 0x11cc;
  constexpr static std::size_t addrs = 0x247f2e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  114
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::RuntimeType::*)(::bs_hook::Il2CppWrapperType)>(&System::RuntimeType::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2480598;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.op_Equality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::RuntimeType, System::RuntimeType)>(&System::RuntimeType::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x246abe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.op_Inequality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::RuntimeType, System::RuntimeType)>(&System::RuntimeType::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x246d794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.Clone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::RuntimeType::*)()>(&System::RuntimeType::Clone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24805a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::RuntimeType::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::RuntimeType::GetObjectData)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x24805a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetCustomAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::bs_hook::Il2CppWrapperType> (System::RuntimeType::*)(bool)>(&System::RuntimeType::GetCustomAttributes)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2480610;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetCustomAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::bs_hook::Il2CppWrapperType> (System::RuntimeType::*)(System::Type, bool)>(&System::RuntimeType::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x24806b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.IsDefined
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::RuntimeType::*)(System::Type, bool)>(&System::RuntimeType::IsDefined)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x248084c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.FormatTypeName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::RuntimeType::*)(bool)>(&System::RuntimeType::FormatTypeName)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x24809e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  127
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.get_MemberType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MemberTypes (System::RuntimeType::*)()>(&System::RuntimeType::get_MemberType)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2480bcc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.get_ReflectedType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::RuntimeType::*)()>(&System::RuntimeType::get_ReflectedType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2480c10;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.get_MetadataToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::RuntimeType::*)()>(&System::RuntimeType::get_MetadataToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2480c1c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.CreateInstanceCheckThis
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::RuntimeType::*)()>(&System::RuntimeType::CreateInstanceCheckThis)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x2480c24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "CreateInstanceCheckThis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.CreateInstanceImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::RuntimeType::*)(System::Reflection::BindingFlags, System::Reflection::Binder, ::ArrayW<::bs_hook::Il2CppWrapperType>, System::Globalization::CultureInfo, ::ArrayW<::bs_hook::Il2CppWrapperType>, ByRef<System::Threading::StackCrawlMark>)>(&System::RuntimeType::CreateInstanceImpl)> {
  constexpr static std::size_t size = 0x98c;
  constexpr static std::size_t addrs = 0x246abec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "CreateInstanceImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Binder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::StackCrawlMark>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.CreateInstanceDefaultCtor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::RuntimeType::*)(bool, bool, bool, bool, ByRef<System::Threading::StackCrawlMark>)>(&System::RuntimeType::CreateInstanceDefaultCtor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x246b740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "CreateInstanceDefaultCtor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::StackCrawlMark>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetDefaultConstructor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::RuntimeConstructorInfo (System::RuntimeType::*)()>(&System::RuntimeType::GetDefaultConstructor)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x2480e88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetDefaultConstructor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetDefaultMemberName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::RuntimeType::*)()>(&System::RuntimeType::GetDefaultMemberName)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x24804ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetDefaultMemberName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetSerializationCtor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::RuntimeConstructorInfo (System::RuntimeType::*)()>(&System::RuntimeType::GetSerializationCtor)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2481020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetSerializationCtor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.CreateInstanceSlow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::RuntimeType::*)(bool, bool, bool, bool)>(&System::RuntimeType::CreateInstanceSlow)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2480e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "CreateInstanceSlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.CreateInstanceMono
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::RuntimeType::*)(bool, bool)>(&System::RuntimeType::CreateInstanceMono)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x2481204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "CreateInstanceMono",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.CheckValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::RuntimeType::*)(::bs_hook::Il2CppWrapperType, System::Reflection::Binder, System::Globalization::CultureInfo, System::Reflection::BindingFlags)>(&System::RuntimeType::CheckValue)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x24814e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "CheckValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Binder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.TryConvertToType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::RuntimeType::*)(::bs_hook::Il2CppWrapperType, ByRef<bool>)>(&System::RuntimeType::TryConvertToType)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x248164c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "TryConvertToType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.IsConvertibleToPrimitiveType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::bs_hook::Il2CppWrapperType, System::Type)>(&System::RuntimeType::IsConvertibleToPrimitiveType)> {
  constexpr static std::size_t size = 0x994;
  constexpr static std::size_t addrs = 0x24818a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "IsConvertibleToPrimitiveType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetCachedName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::RuntimeType::*)(System::TypeNameKind)>(&System::RuntimeType::GetCachedName)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2480b74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetCachedName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TypeNameKind>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.make_array_type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::RuntimeType::*)(int32_t)>(&System::RuntimeType::make_array_type)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x248223c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "make_array_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.MakeArrayType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::RuntimeType::*)()>(&System::RuntimeType::MakeArrayType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2482240;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  120
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.MakeArrayType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::RuntimeType::*)(int32_t)>(&System::RuntimeType::MakeArrayType)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2482248;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  121
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.make_byref_type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::RuntimeType::*)()>(&System::RuntimeType::make_byref_type)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2482298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "make_byref_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.MakeByRefType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::RuntimeType::*)()>(&System::RuntimeType::MakeByRefType)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x248229c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  122
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.MakePointerType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (*)(System::Type)>(&System::RuntimeType::MakePointerType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2482308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "MakePointerType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.MakePointerType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::RuntimeType::*)()>(&System::RuntimeType::MakePointerType)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x248230c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  124
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.get_ContainsGenericParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::RuntimeType::*)()>(&System::RuntimeType::get_ContainsGenericParameters)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x24823f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetGenericParameterConstraints
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Type> (System::RuntimeType::*)()>(&System::RuntimeType::GetGenericParameterConstraints)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x24824f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  53
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.CreateInstanceForAnotherGenericParameter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(System::Type, System::RuntimeType)>(&System::RuntimeType::CreateInstanceForAnotherGenericParameter)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x24825f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "CreateInstanceForAnotherGenericParameter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.MakeGenericType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (*)(System::Type, ::ArrayW<System::Type>)>(&System::RuntimeType::MakeGenericType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x247f164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "MakeGenericType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetMethodsByName_native
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (System::RuntimeType::*)(::cordl_internals::intptr_t, System::Reflection::BindingFlags, System::System__RuntimeType__MemberListType)>(&System::RuntimeType::GetMethodsByName_native)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2482704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetMethodsByName_native",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__RuntimeType__MemberListType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetMethodsByName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::RuntimeMethodInfo> (System::RuntimeType::*)(::StringW, System::Reflection::BindingFlags, System::System__RuntimeType__MemberListType, System::RuntimeType)>(&System::RuntimeType::GetMethodsByName)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x247ab94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetMethodsByName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__RuntimeType__MemberListType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetPropertiesByName_native
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (System::RuntimeType::*)(::cordl_internals::intptr_t, System::Reflection::BindingFlags, System::System__RuntimeType__MemberListType)>(&System::RuntimeType::GetPropertiesByName_native)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2482708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetPropertiesByName_native",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__RuntimeType__MemberListType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetConstructors_native
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (System::RuntimeType::*)(System::Reflection::BindingFlags)>(&System::RuntimeType::GetConstructors_native)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x248270c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetConstructors_native",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetConstructors_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::RuntimeConstructorInfo> (System::RuntimeType::*)(System::Reflection::BindingFlags, System::RuntimeType)>(&System::RuntimeType::GetConstructors_internal)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x247b0fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetConstructors_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetPropertiesByName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::RuntimePropertyInfo> (System::RuntimeType::*)(::StringW, System::Reflection::BindingFlags, System::System__RuntimeType__MemberListType, System::RuntimeType)>(&System::RuntimeType::GetPropertiesByName)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x247b540;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetPropertiesByName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__RuntimeType__MemberListType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetGUID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Type, ::ArrayW<uint8_t>)>(&System::RuntimeType::GetGUID)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2482710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetGUID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.get_GUID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Guid (System::RuntimeType::*)()>(&System::RuntimeType::get_GUID)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2482714;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  112
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetTypeFromCLSIDImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (*)(System::Guid, ::StringW, bool)>(&System::RuntimeType::GetTypeFromCLSIDImpl)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x24827c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetTypeFromCLSIDImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetTypeCodeImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TypeCode (System::RuntimeType::*)()>(&System::RuntimeType::GetTypeCodeImpl)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2482810;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  111
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetTypeCodeImplInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TypeCode (*)(System::Type)>(&System::RuntimeType::GetTypeCodeImplInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2482864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetTypeCodeImplInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::RuntimeType::*)()>(&System::RuntimeType::ToString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2482868;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.IsGenericCOMObjectImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::RuntimeType::*)()>(&System::RuntimeType::IsGenericCOMObjectImpl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2480e44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "IsGenericCOMObjectImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.CreateInstanceInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(System::Type)>(&System::RuntimeType::CreateInstanceInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24814e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "CreateInstanceInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.get_DeclaringMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodBase (System::RuntimeType::*)()>(&System::RuntimeType::get_DeclaringMethod)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2482880;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.getFullName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::RuntimeType::*)(bool, bool)>(&System::RuntimeType::getFullName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2482874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "getFullName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetGenericArgumentsInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Type> (System::RuntimeType::*)(bool)>(&System::RuntimeType::GetGenericArgumentsInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x247ebc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetGenericArgumentsInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetGenericParameterAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::GenericParameterAttributes (System::RuntimeType::*)()>(&System::RuntimeType::GetGenericParameterAttributes)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x247dfe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetGenericParameterAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetGenericParameterPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::RuntimeType::*)()>(&System::RuntimeType::GetGenericParameterPosition)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x247f200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetGenericParameterPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetEvents_native
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (System::RuntimeType::*)(::cordl_internals::intptr_t, System::System__RuntimeType__MemberListType)>(&System::RuntimeType::GetEvents_native)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2482884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetEvents_native",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__RuntimeType__MemberListType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetFields_native
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (System::RuntimeType::*)(::cordl_internals::intptr_t, System::Reflection::BindingFlags, System::System__RuntimeType__MemberListType)>(&System::RuntimeType::GetFields_native)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2482888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetFields_native",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__RuntimeType__MemberListType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetFields_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::RuntimeFieldInfo> (System::RuntimeType::*)(::StringW, System::Reflection::BindingFlags, System::System__RuntimeType__MemberListType, System::RuntimeType)>(&System::RuntimeType::GetFields_internal)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x247be7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetFields_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__RuntimeType__MemberListType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetEvents_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::RuntimeEventInfo> (System::RuntimeType::*)(::StringW, System::Reflection::BindingFlags, System::System__RuntimeType__MemberListType, System::RuntimeType)>(&System::RuntimeType::GetEvents_internal)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x247b9fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetEvents_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__RuntimeType__MemberListType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetInterfaces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Type> (System::RuntimeType::*)()>(&System::RuntimeType::GetInterfaces)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x248288c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  115
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetNestedTypes_native
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (System::RuntimeType::*)(::cordl_internals::intptr_t, System::Reflection::BindingFlags, System::System__RuntimeType__MemberListType)>(&System::RuntimeType::GetNestedTypes_native)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2482890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetNestedTypes_native",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__RuntimeType__MemberListType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetNestedTypes_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::RuntimeType> (System::RuntimeType::*)(::StringW, System::Reflection::BindingFlags, System::System__RuntimeType__MemberListType)>(&System::RuntimeType::GetNestedTypes_internal)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x247c324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetNestedTypes_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__RuntimeType__MemberListType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.get_AssemblyQualifiedName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::RuntimeType::*)()>(&System::RuntimeType::get_AssemblyQualifiedName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2482894;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.get_DeclaringType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::RuntimeType::*)()>(&System::RuntimeType::get_DeclaringType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24828a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.get_Name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::RuntimeType::*)()>(&System::RuntimeType::get_Name)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24828a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.get_Namespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::RuntimeType::*)()>(&System::RuntimeType::get_Namespace)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24828a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::RuntimeType::*)()>(&System::RuntimeType::GetHashCode)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x24828ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.get_FullName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::RuntimeType::*)()>(&System::RuntimeType::get_FullName)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2482978;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.get_IsSZArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::RuntimeType::*)()>(&System::RuntimeType::get_IsSZArray)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2482a40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  42
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.IsSubclassOf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::RuntimeType::*)(System::Type)>(&System::RuntimeType::IsSubclassOf)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2482a98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetMethodImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo (System::RuntimeType::*)(::StringW, System::Reflection::BindingFlags, System::Reflection::Binder, System::Reflection::CallingConventions, ::ArrayW<System::Type>, ::ArrayW<System::Reflection::ParameterModifier>)>(&System::RuntimeType::GetMethodImpl)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2482b90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::RuntimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                                  98
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetMethodImplCommon
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo (System::RuntimeType::*)(::StringW, int32_t, System::Reflection::BindingFlags, System::Reflection::Binder, System::Reflection::CallingConventions, ::ArrayW<System::Type>, ::ArrayW<System::Reflection::ParameterModifier>)>(&System::RuntimeType::GetMethodImplCommon)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x2482bc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetMethodImplCommon",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Binder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::CallingConventions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Reflection::ParameterModifier>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::RuntimeType.GetMethodCandidates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::System__RuntimeType__ListBuilder_1<System::Reflection::MethodInfo> (System::RuntimeType::*)(::StringW, int32_t, System::Reflection::BindingFlags, System::Reflection::CallingConventions, ::ArrayW<System::Type>, bool)>(&System::RuntimeType::GetMethodCandidates)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x2482e78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetMethodCandidates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::CallingConventions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr  System::RuntimeType::operator System::Runtime::Serialization::ISerializable() const noexcept {
return System::Runtime::Serialization::ISerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::ICloneable
constexpr  System::RuntimeType::operator System::ICloneable() const noexcept {
return System::ICloneable(::bs_hook::Il2CppWrapperType::instance);
}
 void System::RuntimeType::__set_ValueType(System::RuntimeType value)  {
::cordl_internals::setStaticField<System::RuntimeType, "ValueType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get>(std::forward<System::RuntimeType>(value));
}
 System::RuntimeType System::RuntimeType::__get_ValueType()  {
return ::cordl_internals::getStaticField<System::RuntimeType, "ValueType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get>();
}
 void System::RuntimeType::__set_EnumType(System::RuntimeType value)  {
::cordl_internals::setStaticField<System::RuntimeType, "EnumType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get>(std::forward<System::RuntimeType>(value));
}
 System::RuntimeType System::RuntimeType::__get_EnumType()  {
return ::cordl_internals::getStaticField<System::RuntimeType, "EnumType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get>();
}
 void System::RuntimeType::__set_ObjectType(System::RuntimeType value)  {
::cordl_internals::setStaticField<System::RuntimeType, "ObjectType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get>(std::forward<System::RuntimeType>(value));
}
 System::RuntimeType System::RuntimeType::__get_ObjectType()  {
return ::cordl_internals::getStaticField<System::RuntimeType, "ObjectType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get>();
}
 void System::RuntimeType::__set_StringType(System::RuntimeType value)  {
::cordl_internals::setStaticField<System::RuntimeType, "StringType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get>(std::forward<System::RuntimeType>(value));
}
 System::RuntimeType System::RuntimeType::__get_StringType()  {
return ::cordl_internals::getStaticField<System::RuntimeType, "StringType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get>();
}
 void System::RuntimeType::__set_DelegateType(System::RuntimeType value)  {
::cordl_internals::setStaticField<System::RuntimeType, "DelegateType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get>(std::forward<System::RuntimeType>(value));
}
 System::RuntimeType System::RuntimeType::__get_DelegateType()  {
return ::cordl_internals::getStaticField<System::RuntimeType, "DelegateType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get>();
}
 void System::RuntimeType::__set_s_SICtorParamTypes(::ArrayW<System::Type> value)  {
::cordl_internals::setStaticField<::ArrayW<System::Type>, "s_SICtorParamTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get>(std::forward<::ArrayW<System::Type>>(value));
}
 ::ArrayW<System::Type> System::RuntimeType::__get_s_SICtorParamTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<System::Type>, "s_SICtorParamTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get>();
}
 void System::RuntimeType::__set_MakeTypeBuilderInstantiation(System::Func_3<System::Type,::ArrayW<System::Type>,System::Type> value)  {
::cordl_internals::setStaticField<System::Func_3<System::Type,::ArrayW<System::Type>,System::Type>, "MakeTypeBuilderInstantiation", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get>(std::forward<System::Func_3<System::Type,::ArrayW<System::Type>,System::Type>>(value));
}
 System::Func_3<System::Type,::ArrayW<System::Type>,System::Type> System::RuntimeType::__get_MakeTypeBuilderInstantiation()  {
return ::cordl_internals::getStaticField<System::Func_3<System::Type,::ArrayW<System::Type>,System::Type>, "MakeTypeBuilderInstantiation", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get>();
}
constexpr System::Reflection::BindingFlags  System::RuntimeType::MemberBindingMask{255};
constexpr System::Reflection::BindingFlags  System::RuntimeType::InvocationMask{65280};
constexpr System::Reflection::BindingFlags  System::RuntimeType::BinderNonCreateInstance{15616};
constexpr System::Reflection::BindingFlags  System::RuntimeType::BinderGetSetProperty{12288};
constexpr System::Reflection::BindingFlags  System::RuntimeType::BinderSetInvokeProperty{8448};
constexpr System::Reflection::BindingFlags  System::RuntimeType::BinderGetSetField{3072};
constexpr System::Reflection::BindingFlags  System::RuntimeType::BinderSetInvokeField{2304};
constexpr System::Reflection::BindingFlags  System::RuntimeType::BinderNonFieldGetSet{16773888};
constexpr System::Reflection::BindingFlags  System::RuntimeType::ClassicBindingMask{61696};
 void System::RuntimeType::__set_s_typedRef(System::RuntimeType value)  {
::cordl_internals::setStaticField<System::RuntimeType, "s_typedRef", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get>(std::forward<System::RuntimeType>(value));
}
 System::RuntimeType System::RuntimeType::__get_s_typedRef()  {
return ::cordl_internals::getStaticField<System::RuntimeType, "s_typedRef", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get>();
}
constexpr void System::RuntimeType::__set_type_info(System::MonoTypeInfo value)  {
::cordl_internals::setInstanceField<System::MonoTypeInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::MonoTypeInfo>(value));
}
constexpr System::MonoTypeInfo System::RuntimeType::__get_type_info() const {
return ::cordl_internals::getInstanceField<System::MonoTypeInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::RuntimeType::__set_GenericCache(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::RuntimeType::__get_GenericCache() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::RuntimeType::__set_m_serializationCtor(System::Reflection::RuntimeConstructorInfo value)  {
::cordl_internals::setInstanceField<System::Reflection::RuntimeConstructorInfo, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Reflection::RuntimeConstructorInfo>(value));
}
constexpr System::Reflection::RuntimeConstructorInfo System::RuntimeType::__get_m_serializationCtor() const {
return ::cordl_internals::getInstanceField<System::Reflection::RuntimeConstructorInfo, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::RuntimeType System::RuntimeType::GetType(::StringW typeName, bool throwOnError, bool ignoreCase, bool reflectionOnly, ByRef<System::Threading::StackCrawlMark> stackMark)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::StackCrawlMark>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::RuntimeType, false>(nullptr, ___internal_method, typeName, throwOnError, ignoreCase, reflectionOnly, stackMark);
}
 void System::RuntimeType::ThrowIfTypeNeverValidGenericArgument(System::RuntimeType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "ThrowIfTypeNeverValidGenericArgument",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type);
}
 void System::RuntimeType::SanityCheckGenericArguments(::ArrayW<System::RuntimeType> genericArguments, ::ArrayW<System::RuntimeType> genericParamters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "SanityCheckGenericArguments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::RuntimeType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::RuntimeType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, genericArguments, genericParamters);
}
 void System::RuntimeType::SplitName(::StringW fullname, ByRef<::StringW> name, ByRef<::StringW> ns)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "SplitName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fullname, name, ns);
}
 System::Reflection::BindingFlags System::RuntimeType::FilterPreCalculate(bool isPublic, bool isInherited, bool isStatic)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "FilterPreCalculate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::BindingFlags, false>(nullptr, ___internal_method, isPublic, isInherited, isStatic);
}
 void System::RuntimeType::FilterHelper(System::Reflection::BindingFlags bindingFlags, ByRef<::StringW> name, bool allowPrefixLookup, ByRef<bool> prefixLookup, ByRef<bool> ignoreCase, ByRef<System::System__RuntimeType__MemberListType> listType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "FilterHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__RuntimeType__MemberListType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bindingFlags, name, allowPrefixLookup, prefixLookup, ignoreCase, listType);
}
 void System::RuntimeType::FilterHelper(System::Reflection::BindingFlags bindingFlags, ByRef<::StringW> name, ByRef<bool> ignoreCase, ByRef<System::System__RuntimeType__MemberListType> listType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "FilterHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__RuntimeType__MemberListType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bindingFlags, name, ignoreCase, listType);
}
 bool System::RuntimeType::FilterApplyPrefixLookup(System::Reflection::MemberInfo memberInfo, ::StringW name, bool ignoreCase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "FilterApplyPrefixLookup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MemberInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, memberInfo, name, ignoreCase);
}
 bool System::RuntimeType::FilterApplyBase(System::Reflection::MemberInfo memberInfo, System::Reflection::BindingFlags bindingFlags, bool isPublic, bool isNonProtectedInternal, bool isStatic, ::StringW name, bool prefixLookup)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "FilterApplyBase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MemberInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, memberInfo, bindingFlags, isPublic, isNonProtectedInternal, isStatic, name, prefixLookup);
}
 bool System::RuntimeType::FilterApplyType(System::Type type, System::Reflection::BindingFlags bindingFlags, ::StringW name, bool prefixLookup, ::StringW ns)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "FilterApplyType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type, bindingFlags, name, prefixLookup, ns);
}
 bool System::RuntimeType::FilterApplyMethodInfo(System::Reflection::RuntimeMethodInfo method, System::Reflection::BindingFlags bindingFlags, System::Reflection::CallingConventions callConv, ::ArrayW<System::Type> argumentTypes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "FilterApplyMethodInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::RuntimeMethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::CallingConventions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, method, bindingFlags, callConv, argumentTypes);
}
 bool System::RuntimeType::FilterApplyConstructorInfo(System::Reflection::RuntimeConstructorInfo constructor, System::Reflection::BindingFlags bindingFlags, System::Reflection::CallingConventions callConv, ::ArrayW<System::Type> argumentTypes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "FilterApplyConstructorInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::RuntimeConstructorInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::CallingConventions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, constructor, bindingFlags, callConv, argumentTypes);
}
 bool System::RuntimeType::FilterApplyMethodBase(System::Reflection::MethodBase methodBase, System::Reflection::BindingFlags methodFlags, System::Reflection::BindingFlags bindingFlags, System::Reflection::CallingConventions callConv, ::ArrayW<System::Type> argumentTypes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "FilterApplyMethodBase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::CallingConventions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, methodBase, methodFlags, bindingFlags, callConv, argumentTypes);
}
// Ctor Parameters []
 System::RuntimeType::RuntimeType()  : System::Reflection::TypeInfo(THROW_UNLESS(::il2cpp_utils::New<RuntimeType>())) {}
 void System::RuntimeType::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::System__RuntimeType__ListBuilder_1<System::Reflection::MethodInfo> System::RuntimeType::GetMethodCandidates(::StringW name, System::Reflection::BindingFlags bindingAttr, System::Reflection::CallingConventions callConv, ::ArrayW<System::Type> types, int32_t genericParamCount, bool allowPrefixLookup)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetMethodCandidates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::CallingConventions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::System__RuntimeType__ListBuilder_1<System::Reflection::MethodInfo>, false>(const_cast<void*>(instance), ___internal_method, name, bindingAttr, callConv, types, genericParamCount, allowPrefixLookup);
}
 System::System__RuntimeType__ListBuilder_1<System::Reflection::ConstructorInfo> System::RuntimeType::GetConstructorCandidates(::StringW name, System::Reflection::BindingFlags bindingAttr, System::Reflection::CallingConventions callConv, ::ArrayW<System::Type> types, bool allowPrefixLookup)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetConstructorCandidates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::CallingConventions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::System__RuntimeType__ListBuilder_1<System::Reflection::ConstructorInfo>, false>(const_cast<void*>(instance), ___internal_method, name, bindingAttr, callConv, types, allowPrefixLookup);
}
 System::System__RuntimeType__ListBuilder_1<System::Reflection::PropertyInfo> System::RuntimeType::GetPropertyCandidates(::StringW name, System::Reflection::BindingFlags bindingAttr, ::ArrayW<System::Type> types, bool allowPrefixLookup)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetPropertyCandidates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::System__RuntimeType__ListBuilder_1<System::Reflection::PropertyInfo>, false>(const_cast<void*>(instance), ___internal_method, name, bindingAttr, types, allowPrefixLookup);
}
 System::System__RuntimeType__ListBuilder_1<System::Reflection::EventInfo> System::RuntimeType::GetEventCandidates(::StringW name, System::Reflection::BindingFlags bindingAttr, bool allowPrefixLookup)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetEventCandidates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::System__RuntimeType__ListBuilder_1<System::Reflection::EventInfo>, false>(const_cast<void*>(instance), ___internal_method, name, bindingAttr, allowPrefixLookup);
}
 System::System__RuntimeType__ListBuilder_1<System::Reflection::FieldInfo> System::RuntimeType::GetFieldCandidates(::StringW name, System::Reflection::BindingFlags bindingAttr, bool allowPrefixLookup)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetFieldCandidates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::System__RuntimeType__ListBuilder_1<System::Reflection::FieldInfo>, false>(const_cast<void*>(instance), ___internal_method, name, bindingAttr, allowPrefixLookup);
}
 System::System__RuntimeType__ListBuilder_1<System::Type> System::RuntimeType::GetNestedTypeCandidates(::StringW fullname, System::Reflection::BindingFlags bindingAttr, bool allowPrefixLookup)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetNestedTypeCandidates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::System__RuntimeType__ListBuilder_1<System::Type>, false>(const_cast<void*>(instance), ___internal_method, fullname, bindingAttr, allowPrefixLookup);
}
 ::ArrayW<System::Reflection::MethodInfo> System::RuntimeType::GetMethods(System::Reflection::BindingFlags bindingAttr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetMethods",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::MethodInfo>, false>(const_cast<void*>(instance), ___internal_method, bindingAttr);
}
 ::ArrayW<System::Reflection::ConstructorInfo> System::RuntimeType::GetConstructors(System::Reflection::BindingFlags bindingAttr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetConstructors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::ConstructorInfo>, false>(const_cast<void*>(instance), ___internal_method, bindingAttr);
}
 ::ArrayW<System::Reflection::PropertyInfo> System::RuntimeType::GetProperties(System::Reflection::BindingFlags bindingAttr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::PropertyInfo>, false>(const_cast<void*>(instance), ___internal_method, bindingAttr);
}
 ::ArrayW<System::Reflection::EventInfo> System::RuntimeType::GetEvents(System::Reflection::BindingFlags bindingAttr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::EventInfo>, false>(const_cast<void*>(instance), ___internal_method, bindingAttr);
}
 ::ArrayW<System::Reflection::FieldInfo> System::RuntimeType::GetFields(System::Reflection::BindingFlags bindingAttr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetFields",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::FieldInfo>, false>(const_cast<void*>(instance), ___internal_method, bindingAttr);
}
 System::Reflection::ConstructorInfo System::RuntimeType::GetConstructorImpl(System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder binder, System::Reflection::CallingConventions callConvention, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetConstructorImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Binder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::CallingConventions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Reflection::ParameterModifier>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::ConstructorInfo, false>(const_cast<void*>(instance), ___internal_method, bindingAttr, binder, callConvention, types, modifiers);
}
 System::Reflection::PropertyInfo System::RuntimeType::GetPropertyImpl(::StringW name, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder binder, System::Type returnType, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetPropertyImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Binder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Reflection::ParameterModifier>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::PropertyInfo, false>(const_cast<void*>(instance), ___internal_method, name, bindingAttr, binder, returnType, types, modifiers);
}
 System::Reflection::EventInfo System::RuntimeType::GetEvent(::StringW name, System::Reflection::BindingFlags bindingAttr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::EventInfo, false>(const_cast<void*>(instance), ___internal_method, name, bindingAttr);
}
 System::Reflection::FieldInfo System::RuntimeType::GetField(::StringW name, System::Reflection::BindingFlags bindingAttr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::FieldInfo, false>(const_cast<void*>(instance), ___internal_method, name, bindingAttr);
}
 System::Type System::RuntimeType::GetNestedType(::StringW fullname, System::Reflection::BindingFlags bindingAttr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetNestedType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method, fullname, bindingAttr);
}
 ::ArrayW<System::Reflection::MemberInfo> System::RuntimeType::GetMember(::StringW name, System::Reflection::MemberTypes type, System::Reflection::BindingFlags bindingAttr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetMember",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MemberTypes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::MemberInfo>, false>(const_cast<void*>(instance), ___internal_method, name, type, bindingAttr);
}
 System::Reflection::Module System::RuntimeType::get_Module()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "get_Module",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::Module, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::RuntimeModule System::RuntimeType::GetRuntimeModule()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetRuntimeModule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::RuntimeModule, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::Assembly System::RuntimeType::get_Assembly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "get_Assembly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::Assembly, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::RuntimeAssembly System::RuntimeType::GetRuntimeAssembly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetRuntimeAssembly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::RuntimeAssembly, false>(const_cast<void*>(instance), ___internal_method);
}
 System::RuntimeTypeHandle System::RuntimeType::get_TypeHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "get_TypeHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::RuntimeTypeHandle, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::RuntimeType::IsInstanceOfType(::bs_hook::Il2CppWrapperType o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "IsInstanceOfType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, o);
}
 bool System::RuntimeType::IsAssignableFrom(System::Type c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "IsAssignableFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, c);
}
 bool System::RuntimeType::IsEquivalentTo(System::Type other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
 System::Type System::RuntimeType::get_BaseType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "get_BaseType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 System::RuntimeType System::RuntimeType::GetBaseType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetBaseType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::RuntimeType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type System::RuntimeType::get_UnderlyingSystemType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "get_UnderlyingSystemType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::TypeAttributes System::RuntimeType::GetAttributeFlagsImpl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetAttributeFlagsImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::TypeAttributes, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::RuntimeType::IsContextfulImpl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "IsContextfulImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::RuntimeType::IsByRefImpl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "IsByRefImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::RuntimeType::IsPrimitiveImpl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "IsPrimitiveImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::RuntimeType::IsPointerImpl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "IsPointerImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::RuntimeType::IsCOMObjectImpl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "IsCOMObjectImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::RuntimeType::IsValueTypeImpl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "IsValueTypeImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::RuntimeType::get_IsEnum()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "get_IsEnum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::RuntimeType::HasElementTypeImpl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "HasElementTypeImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::GenericParameterAttributes System::RuntimeType::get_GenericParameterAttributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "get_GenericParameterAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::GenericParameterAttributes, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::RuntimeType::get_IsSzArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "get_IsSzArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::RuntimeType::IsArrayImpl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "IsArrayImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::RuntimeType::GetArrayRank()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetArrayRank",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type System::RuntimeType::GetElementType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetElementType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::StringW> System::RuntimeType::GetEnumNames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetEnumNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Array System::RuntimeType::GetEnumValues()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetEnumValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Array, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type System::RuntimeType::GetEnumUnderlyingType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetEnumUnderlyingType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::RuntimeType::IsEnumDefined(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "IsEnumDefined",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW System::RuntimeType::GetEnumName(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetEnumName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<System::RuntimeType> System::RuntimeType::GetGenericArgumentsInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetGenericArgumentsInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::RuntimeType>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<System::Type> System::RuntimeType::GetGenericArguments()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetGenericArguments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Type>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type System::RuntimeType::MakeGenericType(::ArrayW<System::Type> instantiation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "MakeGenericType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method, instantiation);
}
 bool System::RuntimeType::get_IsGenericTypeDefinition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "get_IsGenericTypeDefinition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::RuntimeType::get_IsGenericParameter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "get_IsGenericParameter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::RuntimeType::get_GenericParameterPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "get_GenericParameterPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type System::RuntimeType::GetGenericTypeDefinition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetGenericTypeDefinition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::RuntimeType::get_IsGenericType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "get_IsGenericType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::RuntimeType::get_IsConstructedGenericType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "get_IsConstructedGenericType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::RuntimeType::InvokeMember(::StringW name, System::Reflection::BindingFlags bindingFlags, System::Reflection::Binder binder, ::bs_hook::Il2CppWrapperType target, ::ArrayW<::bs_hook::Il2CppWrapperType> providedArgs, ::ArrayW<System::Reflection::ParameterModifier> modifiers, System::Globalization::CultureInfo culture, ::ArrayW<::StringW> namedParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "InvokeMember",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Binder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Reflection::ParameterModifier>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, name, bindingFlags, binder, target, providedArgs, modifiers, culture, namedParams);
}
 bool System::RuntimeType::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 bool System::RuntimeType::op_Equality(System::RuntimeType left, System::RuntimeType right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
 bool System::RuntimeType::op_Inequality(System::RuntimeType left, System::RuntimeType right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
 ::bs_hook::Il2CppWrapperType System::RuntimeType::Clone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::RuntimeType::GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 ::ArrayW<::bs_hook::Il2CppWrapperType> System::RuntimeType::GetCustomAttributes(bool inherit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(instance), ___internal_method, inherit);
}
 ::ArrayW<::bs_hook::Il2CppWrapperType> System::RuntimeType::GetCustomAttributes(System::Type attributeType, bool inherit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(instance), ___internal_method, attributeType, inherit);
}
 bool System::RuntimeType::IsDefined(System::Type attributeType, bool inherit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "IsDefined",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, attributeType, inherit);
}
 ::StringW System::RuntimeType::FormatTypeName(bool serialization)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "FormatTypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, serialization);
}
 System::Reflection::MemberTypes System::RuntimeType::get_MemberType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "get_MemberType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MemberTypes, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type System::RuntimeType::get_ReflectedType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "get_ReflectedType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::RuntimeType::get_MetadataToken()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "get_MetadataToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::RuntimeType::CreateInstanceCheckThis()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "CreateInstanceCheckThis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::RuntimeType::CreateInstanceImpl(System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder binder, ::ArrayW<::bs_hook::Il2CppWrapperType> args, System::Globalization::CultureInfo culture, ::ArrayW<::bs_hook::Il2CppWrapperType> activationAttributes, ByRef<System::Threading::StackCrawlMark> stackMark)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "CreateInstanceImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Binder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::StackCrawlMark>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, bindingAttr, binder, args, culture, activationAttributes, stackMark);
}
 ::bs_hook::Il2CppWrapperType System::RuntimeType::CreateInstanceDefaultCtor(bool publicOnly, bool skipCheckThis, bool fillCache, bool wrapExceptions, ByRef<System::Threading::StackCrawlMark> stackMark)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "CreateInstanceDefaultCtor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::StackCrawlMark>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, publicOnly, skipCheckThis, fillCache, wrapExceptions, stackMark);
}
 System::Reflection::RuntimeConstructorInfo System::RuntimeType::GetDefaultConstructor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetDefaultConstructor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::RuntimeConstructorInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::RuntimeType::GetDefaultMemberName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetDefaultMemberName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::RuntimeConstructorInfo System::RuntimeType::GetSerializationCtor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetSerializationCtor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::RuntimeConstructorInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::RuntimeType::CreateInstanceSlow(bool publicOnly, bool wrapExceptions, bool skipCheckThis, bool fillCache)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "CreateInstanceSlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, publicOnly, wrapExceptions, skipCheckThis, fillCache);
}
 ::bs_hook::Il2CppWrapperType System::RuntimeType::CreateInstanceMono(bool nonPublic, bool wrapExceptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "CreateInstanceMono",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, nonPublic, wrapExceptions);
}
 ::bs_hook::Il2CppWrapperType System::RuntimeType::CheckValue(::bs_hook::Il2CppWrapperType value, System::Reflection::Binder binder, System::Globalization::CultureInfo culture, System::Reflection::BindingFlags invokeAttr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "CheckValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Binder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, value, binder, culture, invokeAttr);
}
 ::bs_hook::Il2CppWrapperType System::RuntimeType::TryConvertToType(::bs_hook::Il2CppWrapperType value, ByRef<bool> failed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "TryConvertToType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, value, failed);
}
 ::bs_hook::Il2CppWrapperType System::RuntimeType::IsConvertibleToPrimitiveType(::bs_hook::Il2CppWrapperType value, System::Type targetType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "IsConvertibleToPrimitiveType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, value, targetType);
}
 ::StringW System::RuntimeType::GetCachedName(System::TypeNameKind kind)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetCachedName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TypeNameKind>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, kind);
}
 System::Type System::RuntimeType::make_array_type(int32_t rank)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "make_array_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method, rank);
}
 System::Type System::RuntimeType::MakeArrayType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "MakeArrayType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type System::RuntimeType::MakeArrayType(int32_t rank)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "MakeArrayType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method, rank);
}
 System::Type System::RuntimeType::make_byref_type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "make_byref_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type System::RuntimeType::MakeByRefType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "MakeByRefType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type System::RuntimeType::MakePointerType(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "MakePointerType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(nullptr, ___internal_method, type);
}
 System::Type System::RuntimeType::MakePointerType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "MakePointerType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::RuntimeType::get_ContainsGenericParameters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "get_ContainsGenericParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<System::Type> System::RuntimeType::GetGenericParameterConstraints()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetGenericParameterConstraints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Type>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::RuntimeType::CreateInstanceForAnotherGenericParameter(System::Type genericType, System::RuntimeType genericArgument)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "CreateInstanceForAnotherGenericParameter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, genericType, genericArgument);
}
 System::Type System::RuntimeType::MakeGenericType(System::Type gt, ::ArrayW<System::Type> types)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "MakeGenericType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(nullptr, ___internal_method, gt, types);
}
 ::cordl_internals::intptr_t System::RuntimeType::GetMethodsByName_native(::cordl_internals::intptr_t namePtr, System::Reflection::BindingFlags bindingAttr, System::System__RuntimeType__MemberListType listType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetMethodsByName_native",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__RuntimeType__MemberListType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(instance), ___internal_method, namePtr, bindingAttr, listType);
}
 ::ArrayW<System::Reflection::RuntimeMethodInfo> System::RuntimeType::GetMethodsByName(::StringW name, System::Reflection::BindingFlags bindingAttr, System::System__RuntimeType__MemberListType listType, System::RuntimeType reflectedType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetMethodsByName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__RuntimeType__MemberListType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::RuntimeMethodInfo>, false>(const_cast<void*>(instance), ___internal_method, name, bindingAttr, listType, reflectedType);
}
 ::cordl_internals::intptr_t System::RuntimeType::GetPropertiesByName_native(::cordl_internals::intptr_t name, System::Reflection::BindingFlags bindingAttr, System::System__RuntimeType__MemberListType listType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetPropertiesByName_native",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__RuntimeType__MemberListType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(instance), ___internal_method, name, bindingAttr, listType);
}
 ::cordl_internals::intptr_t System::RuntimeType::GetConstructors_native(System::Reflection::BindingFlags bindingAttr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetConstructors_native",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(instance), ___internal_method, bindingAttr);
}
 ::ArrayW<System::Reflection::RuntimeConstructorInfo> System::RuntimeType::GetConstructors_internal(System::Reflection::BindingFlags bindingAttr, System::RuntimeType reflectedType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetConstructors_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::RuntimeConstructorInfo>, false>(const_cast<void*>(instance), ___internal_method, bindingAttr, reflectedType);
}
 ::ArrayW<System::Reflection::RuntimePropertyInfo> System::RuntimeType::GetPropertiesByName(::StringW name, System::Reflection::BindingFlags bindingAttr, System::System__RuntimeType__MemberListType listType, System::RuntimeType reflectedType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetPropertiesByName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__RuntimeType__MemberListType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::RuntimePropertyInfo>, false>(const_cast<void*>(instance), ___internal_method, name, bindingAttr, listType, reflectedType);
}
 void System::RuntimeType::GetGUID(System::Type type, ::ArrayW<uint8_t> guid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetGUID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type, guid);
}
 System::Guid System::RuntimeType::get_GUID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "get_GUID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Guid, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type System::RuntimeType::GetTypeFromCLSIDImpl(System::Guid clsid, ::StringW server, bool throwOnError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetTypeFromCLSIDImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(nullptr, ___internal_method, clsid, server, throwOnError);
}
 System::TypeCode System::RuntimeType::GetTypeCodeImpl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetTypeCodeImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::TypeCode, false>(const_cast<void*>(instance), ___internal_method);
}
 System::TypeCode System::RuntimeType::GetTypeCodeImplInternal(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetTypeCodeImplInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::TypeCode, false>(nullptr, ___internal_method, type);
}
 ::StringW System::RuntimeType::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::RuntimeType::IsGenericCOMObjectImpl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "IsGenericCOMObjectImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::RuntimeType::CreateInstanceInternal(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "CreateInstanceInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, type);
}
 System::Reflection::MethodBase System::RuntimeType::get_DeclaringMethod()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "get_DeclaringMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodBase, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::RuntimeType::getFullName(bool full_name, bool assembly_qualified)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "getFullName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, full_name, assembly_qualified);
}
 ::ArrayW<System::Type> System::RuntimeType::GetGenericArgumentsInternal(bool runtimeArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetGenericArgumentsInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Type>, false>(const_cast<void*>(instance), ___internal_method, runtimeArray);
}
 System::Reflection::GenericParameterAttributes System::RuntimeType::GetGenericParameterAttributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetGenericParameterAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::GenericParameterAttributes, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::RuntimeType::GetGenericParameterPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetGenericParameterPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::cordl_internals::intptr_t System::RuntimeType::GetEvents_native(::cordl_internals::intptr_t name, System::System__RuntimeType__MemberListType listType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetEvents_native",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__RuntimeType__MemberListType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(instance), ___internal_method, name, listType);
}
 ::cordl_internals::intptr_t System::RuntimeType::GetFields_native(::cordl_internals::intptr_t name, System::Reflection::BindingFlags bindingAttr, System::System__RuntimeType__MemberListType listType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetFields_native",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__RuntimeType__MemberListType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(instance), ___internal_method, name, bindingAttr, listType);
}
 ::ArrayW<System::Reflection::RuntimeFieldInfo> System::RuntimeType::GetFields_internal(::StringW name, System::Reflection::BindingFlags bindingAttr, System::System__RuntimeType__MemberListType listType, System::RuntimeType reflectedType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetFields_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__RuntimeType__MemberListType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::RuntimeFieldInfo>, false>(const_cast<void*>(instance), ___internal_method, name, bindingAttr, listType, reflectedType);
}
 ::ArrayW<System::Reflection::RuntimeEventInfo> System::RuntimeType::GetEvents_internal(::StringW name, System::Reflection::BindingFlags bindingAttr, System::System__RuntimeType__MemberListType listType, System::RuntimeType reflectedType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetEvents_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__RuntimeType__MemberListType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::RuntimeEventInfo>, false>(const_cast<void*>(instance), ___internal_method, name, bindingAttr, listType, reflectedType);
}
 ::ArrayW<System::Type> System::RuntimeType::GetInterfaces()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetInterfaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Type>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::cordl_internals::intptr_t System::RuntimeType::GetNestedTypes_native(::cordl_internals::intptr_t name, System::Reflection::BindingFlags bindingAttr, System::System__RuntimeType__MemberListType listType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetNestedTypes_native",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__RuntimeType__MemberListType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(instance), ___internal_method, name, bindingAttr, listType);
}
 ::ArrayW<System::RuntimeType> System::RuntimeType::GetNestedTypes_internal(::StringW displayName, System::Reflection::BindingFlags bindingAttr, System::System__RuntimeType__MemberListType listType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetNestedTypes_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__RuntimeType__MemberListType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::RuntimeType>, false>(const_cast<void*>(instance), ___internal_method, displayName, bindingAttr, listType);
}
 ::StringW System::RuntimeType::get_AssemblyQualifiedName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "get_AssemblyQualifiedName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type System::RuntimeType::get_DeclaringType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "get_DeclaringType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::RuntimeType::get_Name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "get_Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::RuntimeType::get_Namespace()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "get_Namespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::RuntimeType::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::RuntimeType::get_FullName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "get_FullName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::RuntimeType::get_IsSZArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "get_IsSZArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::RuntimeType::IsSubclassOf(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "IsSubclassOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, type);
}
 System::Reflection::MethodInfo System::RuntimeType::GetMethodImpl(::StringW name, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder binder, System::Reflection::CallingConventions callConv, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetMethodImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Binder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::CallingConventions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Reflection::ParameterModifier>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodInfo, false>(const_cast<void*>(instance), ___internal_method, name, bindingAttr, binder, callConv, types, modifiers);
}
 System::Reflection::MethodInfo System::RuntimeType::GetMethodImplCommon(::StringW name, int32_t genericParameterCount, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder binder, System::Reflection::CallingConventions callConv, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetMethodImplCommon",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Binder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::CallingConventions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Reflection::ParameterModifier>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodInfo, false>(const_cast<void*>(instance), ___internal_method, name, genericParameterCount, bindingAttr, binder, callConv, types, modifiers);
}
 System::System__RuntimeType__ListBuilder_1<System::Reflection::MethodInfo> System::RuntimeType::GetMethodCandidates(::StringW name, int32_t genericParameterCount, System::Reflection::BindingFlags bindingAttr, System::Reflection::CallingConventions callConv, ::ArrayW<System::Type> types, bool allowPrefixLookup)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::RuntimeType>::get(),
                            "GetMethodCandidates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::CallingConventions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::System__RuntimeType__ListBuilder_1<System::Reflection::MethodInfo>, false>(const_cast<void*>(instance), ___internal_method, name, genericParameterCount, bindingAttr, callConv, types, allowPrefixLookup);
}
//  Writing Method size for method: System::System__RuntimeType__ListBuilder_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::System__RuntimeType__ListBuilder_1::*)(int32_t)>(&System::System__RuntimeType__ListBuilder_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__RuntimeType__ListBuilder_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::System__RuntimeType__ListBuilder_1.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<T (System::System__RuntimeType__ListBuilder_1::*)(int32_t)>(&System::System__RuntimeType__ListBuilder_1::get_Item)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__RuntimeType__ListBuilder_1>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::System__RuntimeType__ListBuilder_1.ToArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<T> (System::System__RuntimeType__ListBuilder_1::*)()>(&System::System__RuntimeType__ListBuilder_1::ToArray)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__RuntimeType__ListBuilder_1>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::System__RuntimeType__ListBuilder_1.CopyTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::System__RuntimeType__ListBuilder_1::*)(::ArrayW<::bs_hook::Il2CppWrapperType>, int32_t)>(&System::System__RuntimeType__ListBuilder_1::CopyTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__RuntimeType__ListBuilder_1>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::System__RuntimeType__ListBuilder_1.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::System__RuntimeType__ListBuilder_1::*)()>(&System::System__RuntimeType__ListBuilder_1::get_Count)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__RuntimeType__ListBuilder_1>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::System__RuntimeType__ListBuilder_1.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::System__RuntimeType__ListBuilder_1::*)(T)>(&System::System__RuntimeType__ListBuilder_1::Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__RuntimeType__ListBuilder_1>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "_items", ty: "::ArrayW<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_item", ty: "T", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_capacity", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::System__RuntimeType__ListBuilder_1::System__RuntimeType__ListBuilder_1(::ArrayW<T> _items, T _item, int32_t _count, int32_t _capacity) noexcept : ::bs_hook::ValueTypeWrapper() {this->_items = _items;
this->_item = _item;
this->_count = _count;
this->_capacity = _capacity;
}
constexpr void System::System__RuntimeType__ListBuilder_1::__set__items(::ArrayW<T> value)  {
::cordl_internals::setInstanceField<::ArrayW<T>, 0x0>(this->__instance, std::forward<::ArrayW<T>>(value));
}
constexpr ::ArrayW<T> System::System__RuntimeType__ListBuilder_1::__get__items() const {
return ::cordl_internals::getInstanceField<::ArrayW<T>, 0x0>(this->__instance);
}
constexpr void System::System__RuntimeType__ListBuilder_1::__set__item(T value)  {
::cordl_internals::setInstanceField<T, 0x8>(this->__instance, std::forward<T>(value));
}
constexpr T System::System__RuntimeType__ListBuilder_1::__get__item() const {
return ::cordl_internals::getInstanceField<T, 0x8>(this->__instance);
}
constexpr void System::System__RuntimeType__ListBuilder_1::__set__count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::System__RuntimeType__ListBuilder_1::__get__count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void System::System__RuntimeType__ListBuilder_1::__set__capacity(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::System__RuntimeType__ListBuilder_1::__get__capacity() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->__instance);
}
 void System::System__RuntimeType__ListBuilder_1::_ctor(int32_t capacity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__RuntimeType__ListBuilder_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, capacity);
}
 T System::System__RuntimeType__ListBuilder_1::get_Item(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__RuntimeType__ListBuilder_1>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index);
}
 ::ArrayW<T> System::System__RuntimeType__ListBuilder_1::ToArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__RuntimeType__ListBuilder_1>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::System__RuntimeType__ListBuilder_1::CopyTo(::ArrayW<::bs_hook::Il2CppWrapperType> array, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__RuntimeType__ListBuilder_1>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, array, index);
}
 int32_t System::System__RuntimeType__ListBuilder_1::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__RuntimeType__ListBuilder_1>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::System__RuntimeType__ListBuilder_1::Add(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__RuntimeType__ListBuilder_1>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, item);
}
