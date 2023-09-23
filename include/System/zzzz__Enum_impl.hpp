#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "System/zzzz__Enum_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__IConvertible_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
#include "System/zzzz__Exception_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::System__Enum__ParseFailureKind::System__Enum__ParseFailureKind(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::System__Enum__ParseFailureKind::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::System__Enum__ParseFailureKind::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::System__Enum__ParseFailureKind  System::System__Enum__ParseFailureKind::None{0};
constexpr System::System__Enum__ParseFailureKind  System::System__Enum__ParseFailureKind::Argument{1};
constexpr System::System__Enum__ParseFailureKind  System::System__Enum__ParseFailureKind::ArgumentNull{2};
constexpr System::System__Enum__ParseFailureKind  System::System__Enum__ParseFailureKind::ArgumentWithParameter{3};
constexpr System::System__Enum__ParseFailureKind  System::System__Enum__ParseFailureKind::UnhandledException{4};
//  Writing Method size for method: System::System__Enum__EnumResult.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::System__Enum__EnumResult::*)(bool)>(&System::System__Enum__EnumResult::Init)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2474624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__Enum__EnumResult>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::System__Enum__EnumResult.SetFailure
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::System__Enum__EnumResult::*)(System::Exception)>(&System::System__Enum__EnumResult::SetFailure)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x247547c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__Enum__EnumResult>::get(),
                            "SetFailure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::System__Enum__EnumResult.SetFailure
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::System__Enum__EnumResult::*)(System::System__Enum__ParseFailureKind, ::StringW)>(&System::System__Enum__EnumResult::SetFailure)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2474e7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__Enum__EnumResult>::get(),
                            "SetFailure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__Enum__ParseFailureKind>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::System__Enum__EnumResult.SetFailure
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::System__Enum__EnumResult::*)(System::System__Enum__ParseFailureKind, ::StringW, ::bs_hook::Il2CppWrapperType)>(&System::System__Enum__EnumResult::SetFailure)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2474eb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__Enum__EnumResult>::get(),
                            "SetFailure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__Enum__ParseFailureKind>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::System__Enum__EnumResult.GetEnumParseException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception (System::System__Enum__EnumResult::*)()>(&System::System__Enum__EnumResult::GetEnumParseException)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2474d00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__Enum__EnumResult>::get(),
                            "GetEnumParseException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "parsedEnum", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: Some("csnull") }, CppParam { name: "canThrow", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_failure", ty: "System::System__Enum__ParseFailureKind", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_failureMessageID", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_failureParameter", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_failureMessageFormatArgument", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_innerException", ty: "System::Exception", modifiers: "", def_value: Some("csnull") }]
constexpr System::System__Enum__EnumResult::System__Enum__EnumResult(::bs_hook::Il2CppWrapperType parsedEnum, bool canThrow, System::System__Enum__ParseFailureKind m_failure, ::StringW m_failureMessageID, ::StringW m_failureParameter, ::bs_hook::Il2CppWrapperType m_failureMessageFormatArgument, System::Exception m_innerException) noexcept : ::bs_hook::ValueTypeWrapper() {this->parsedEnum = parsedEnum;
this->canThrow = canThrow;
this->m_failure = m_failure;
this->m_failureMessageID = m_failureMessageID;
this->m_failureParameter = m_failureParameter;
this->m_failureMessageFormatArgument = m_failureMessageFormatArgument;
this->m_innerException = m_innerException;
}
constexpr void System::System__Enum__EnumResult::__set_parsedEnum(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x0>(this->__instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::System__Enum__EnumResult::__get_parsedEnum() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x0>(this->__instance);
}
constexpr void System::System__Enum__EnumResult::__set_canThrow(bool value)  {
::cordl_internals::setInstanceField<bool, 0x8>(this->__instance, std::forward<bool>(value));
}
constexpr bool System::System__Enum__EnumResult::__get_canThrow() const {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->__instance);
}
constexpr void System::System__Enum__EnumResult::__set_m_failure(System::System__Enum__ParseFailureKind value)  {
::cordl_internals::setInstanceField<System::System__Enum__ParseFailureKind, 0xc>(this->__instance, std::forward<System::System__Enum__ParseFailureKind>(value));
}
constexpr System::System__Enum__ParseFailureKind System::System__Enum__EnumResult::__get_m_failure() const {
return ::cordl_internals::getInstanceField<System::System__Enum__ParseFailureKind, 0xc>(this->__instance);
}
constexpr void System::System__Enum__EnumResult::__set_m_failureMessageID(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::System__Enum__EnumResult::__get_m_failureMessageID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->__instance);
}
constexpr void System::System__Enum__EnumResult::__set_m_failureParameter(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::System__Enum__EnumResult::__get_m_failureParameter() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->__instance);
}
constexpr void System::System__Enum__EnumResult::__set_m_failureMessageFormatArgument(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x20>(this->__instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::System__Enum__EnumResult::__get_m_failureMessageFormatArgument() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x20>(this->__instance);
}
constexpr void System::System__Enum__EnumResult::__set_m_innerException(System::Exception value)  {
::cordl_internals::setInstanceField<System::Exception, 0x28>(this->__instance, std::forward<System::Exception>(value));
}
constexpr System::Exception System::System__Enum__EnumResult::__get_m_innerException() const {
return ::cordl_internals::getInstanceField<System::Exception, 0x28>(this->__instance);
}
 void System::System__Enum__EnumResult::Init(bool canMethodThrow)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__Enum__EnumResult>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, canMethodThrow);
}
 void System::System__Enum__EnumResult::SetFailure(System::Exception unhandledException)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__Enum__EnumResult>::get(),
                            "SetFailure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, unhandledException);
}
 void System::System__Enum__EnumResult::SetFailure(System::System__Enum__ParseFailureKind failure, ::StringW failureParameter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__Enum__EnumResult>::get(),
                            "SetFailure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__Enum__ParseFailureKind>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, failure, failureParameter);
}
 void System::System__Enum__EnumResult::SetFailure(System::System__Enum__ParseFailureKind failure, ::StringW failureMessageID, ::bs_hook::Il2CppWrapperType failureMessageFormatArgument)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__Enum__EnumResult>::get(),
                            "SetFailure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__Enum__ParseFailureKind>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, failure, failureMessageID, failureMessageFormatArgument);
}
 System::Exception System::System__Enum__EnumResult::GetEnumParseException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__Enum__EnumResult>::get(),
                            "GetEnumParseException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Exception, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: System::System__Enum__ValuesAndNames._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::System__Enum__ValuesAndNames::*)(::ArrayW<uint64_t>, ::ArrayW<::StringW>)>(&System::System__Enum__ValuesAndNames::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2473ac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__Enum__ValuesAndNames>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::System__Enum__ValuesAndNames::__set_Values(::ArrayW<uint64_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint64_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint64_t>>(value));
}
constexpr ::ArrayW<uint64_t> System::System__Enum__ValuesAndNames::__get_Values() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint64_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::System__Enum__ValuesAndNames::__set_Names(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> System::System__Enum__ValuesAndNames::__get_Names() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "values", ty: "::ArrayW<uint64_t>", modifiers: "", def_value: None }, CppParam { name: "names", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }]
 System::System__Enum__ValuesAndNames::System__Enum__ValuesAndNames(::ArrayW<uint64_t> values, ::ArrayW<::StringW> names)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Enum__ValuesAndNames>(values, names))) {}
 void System::System__Enum__ValuesAndNames::_ctor(::ArrayW<uint64_t> values, ::ArrayW<::StringW> names)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__Enum__ValuesAndNames>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, values, names);
}
