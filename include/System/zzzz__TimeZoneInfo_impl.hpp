#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/zzzz__TimeZoneInfo_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__DayOfWeek_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "GlobalNamespace/zzzz__Interop_def.hpp"
#include "System/zzzz__TimeZoneInfoOptions_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Globalization/zzzz__DaylightTimeStruct_def.hpp"
#include "System/zzzz__DateTimeKind_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
//  Writing Method size for method: ::System::____System__TimeZoneInfo__TZifType._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::____System__TimeZoneInfo__TZifType::*)(::ArrayW<uint8_t>, int32_t)>(&::System::____System__TimeZoneInfo__TZifType::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x23abb8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TZifType>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "UtcOffset", ty: "::System::TimeSpan", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsDst", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "AbbreviationIndex", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::____System__TimeZoneInfo__TZifType::____System__TimeZoneInfo__TZifType(::System::TimeSpan UtcOffset, bool IsDst, uint8_t AbbreviationIndex) noexcept : ::bs_hook::ValueTypeWrapper() {this->UtcOffset = UtcOffset;
this->IsDst = IsDst;
this->AbbreviationIndex = AbbreviationIndex;
}
constexpr void ::System::____System__TimeZoneInfo__TZifType::__set_UtcOffset(::System::TimeSpan value)  {
::cordl_internals::setInstanceField<::System::TimeSpan, 0x0>(this->__instance, std::forward<::System::TimeSpan>(value));
}
constexpr ::System::TimeSpan ::System::____System__TimeZoneInfo__TZifType::__get_UtcOffset() const {
return ::cordl_internals::getInstanceField<::System::TimeSpan, 0x0>(this->__instance);
}
constexpr void ::System::____System__TimeZoneInfo__TZifType::__set_IsDst(bool value)  {
::cordl_internals::setInstanceField<bool, 0x8>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::System::____System__TimeZoneInfo__TZifType::__get_IsDst() const {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->__instance);
}
constexpr void ::System::____System__TimeZoneInfo__TZifType::__set_AbbreviationIndex(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x9>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::System::____System__TimeZoneInfo__TZifType::__get_AbbreviationIndex() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x9>(this->__instance);
}
 void ::System::____System__TimeZoneInfo__TZifType::_ctor(::ArrayW<uint8_t> data, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TZifType>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, data, index);
}
//  Writing Method size for method: ::System::____System__TimeZoneInfo__TZifHead._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::____System__TimeZoneInfo__TZifHead::*)(::ArrayW<uint8_t>, int32_t)>(&::System::____System__TimeZoneInfo__TZifHead::_ctor)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x23ab9d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TZifHead>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "Magic", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Version", ty: "::System::____System__TimeZoneInfo__TZVersion", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsGmtCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsStdCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "LeapCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "TimeCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "TypeCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "CharCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::____System__TimeZoneInfo__TZifHead::____System__TimeZoneInfo__TZifHead(uint32_t Magic, ::System::____System__TimeZoneInfo__TZVersion Version, uint32_t IsGmtCount, uint32_t IsStdCount, uint32_t LeapCount, uint32_t TimeCount, uint32_t TypeCount, uint32_t CharCount) noexcept : ::bs_hook::ValueTypeWrapper() {this->Magic = Magic;
this->Version = Version;
this->IsGmtCount = IsGmtCount;
this->IsStdCount = IsStdCount;
this->LeapCount = LeapCount;
this->TimeCount = TimeCount;
this->TypeCount = TypeCount;
this->CharCount = CharCount;
}
constexpr void ::System::____System__TimeZoneInfo__TZifHead::__set_Magic(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::System::____System__TimeZoneInfo__TZifHead::__get_Magic() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr void ::System::____System__TimeZoneInfo__TZifHead::__set_Version(::System::____System__TimeZoneInfo__TZVersion value)  {
::cordl_internals::setInstanceField<::System::____System__TimeZoneInfo__TZVersion, 0x4>(this->__instance, std::forward<::System::____System__TimeZoneInfo__TZVersion>(value));
}
constexpr ::System::____System__TimeZoneInfo__TZVersion ::System::____System__TimeZoneInfo__TZifHead::__get_Version() const {
return ::cordl_internals::getInstanceField<::System::____System__TimeZoneInfo__TZVersion, 0x4>(this->__instance);
}
constexpr void ::System::____System__TimeZoneInfo__TZifHead::__set_IsGmtCount(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::System::____System__TimeZoneInfo__TZifHead::__get_IsGmtCount() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->__instance);
}
constexpr void ::System::____System__TimeZoneInfo__TZifHead::__set_IsStdCount(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0xc>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::System::____System__TimeZoneInfo__TZifHead::__get_IsStdCount() const {
return ::cordl_internals::getInstanceField<uint32_t, 0xc>(this->__instance);
}
constexpr void ::System::____System__TimeZoneInfo__TZifHead::__set_LeapCount(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x10>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::System::____System__TimeZoneInfo__TZifHead::__get_LeapCount() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this->__instance);
}
constexpr void ::System::____System__TimeZoneInfo__TZifHead::__set_TimeCount(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x14>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::System::____System__TimeZoneInfo__TZifHead::__get_TimeCount() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x14>(this->__instance);
}
constexpr void ::System::____System__TimeZoneInfo__TZifHead::__set_TypeCount(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x18>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::System::____System__TimeZoneInfo__TZifHead::__get_TypeCount() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x18>(this->__instance);
}
constexpr void ::System::____System__TimeZoneInfo__TZifHead::__set_CharCount(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x1c>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::System::____System__TimeZoneInfo__TZifHead::__get_CharCount() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x1c>(this->__instance);
}
 void ::System::____System__TimeZoneInfo__TZifHead::_ctor(::ArrayW<uint8_t> data, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TZifHead>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, data, index);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::____System__TimeZoneInfo__TZVersion::____System__TimeZoneInfo__TZVersion(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::____System__TimeZoneInfo__TZVersion::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::System::____System__TimeZoneInfo__TZVersion::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr ::System::____System__TimeZoneInfo__TZVersion  ::System::____System__TimeZoneInfo__TZVersion::V1{0u};
constexpr ::System::____System__TimeZoneInfo__TZVersion  ::System::____System__TimeZoneInfo__TZVersion::V2{1u};
constexpr ::System::____System__TimeZoneInfo__TZVersion  ::System::____System__TimeZoneInfo__TZVersion::V3{2u};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__AdjustmentRule.get_DateStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::____System__TimeZoneInfo__AdjustmentRule::*)()>(&::System::____System__TimeZoneInfo__AdjustmentRule::get_DateStart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b0890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            "get_DateStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__AdjustmentRule.get_DateEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::____System__TimeZoneInfo__AdjustmentRule::*)()>(&::System::____System__TimeZoneInfo__AdjustmentRule::get_DateEnd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b0898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            "get_DateEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__AdjustmentRule.get_DaylightDelta
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::____System__TimeZoneInfo__AdjustmentRule::*)()>(&::System::____System__TimeZoneInfo__AdjustmentRule::get_DaylightDelta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b08a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            "get_DaylightDelta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__AdjustmentRule.get_DaylightTransitionStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::____System__TimeZoneInfo__TransitionTime (::System::____System__TimeZoneInfo__AdjustmentRule::*)()>(&::System::____System__TimeZoneInfo__AdjustmentRule::get_DaylightTransitionStart)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x23b08a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            "get_DaylightTransitionStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__AdjustmentRule.get_DaylightTransitionEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::____System__TimeZoneInfo__TransitionTime (::System::____System__TimeZoneInfo__AdjustmentRule::*)()>(&::System::____System__TimeZoneInfo__AdjustmentRule::get_DaylightTransitionEnd)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x23b08bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            "get_DaylightTransitionEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__AdjustmentRule.get_BaseUtcOffsetDelta
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::____System__TimeZoneInfo__AdjustmentRule::*)()>(&::System::____System__TimeZoneInfo__AdjustmentRule::get_BaseUtcOffsetDelta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b08d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            "get_BaseUtcOffsetDelta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__AdjustmentRule.get_NoDaylightTransitions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::____System__TimeZoneInfo__AdjustmentRule::*)()>(&::System::____System__TimeZoneInfo__AdjustmentRule::get_NoDaylightTransitions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b08d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            "get_NoDaylightTransitions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__AdjustmentRule.get_HasDaylightSaving
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::____System__TimeZoneInfo__AdjustmentRule::*)()>(&::System::____System__TimeZoneInfo__AdjustmentRule::get_HasDaylightSaving)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x23ac9bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            "get_HasDaylightSaving",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__AdjustmentRule.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::____System__TimeZoneInfo__AdjustmentRule::*)(::System::____System__TimeZoneInfo__AdjustmentRule)>(&::System::____System__TimeZoneInfo__AdjustmentRule::Equals)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x23ad8f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__AdjustmentRule>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__AdjustmentRule.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::____System__TimeZoneInfo__AdjustmentRule::*)()>(&::System::____System__TimeZoneInfo__AdjustmentRule::GetHashCode)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23b09ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::____System__TimeZoneInfo__AdjustmentRule),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__AdjustmentRule._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::____System__TimeZoneInfo__AdjustmentRule::*)(::System::DateTime, ::System::DateTime, ::System::TimeSpan, ::System::____System__TimeZoneInfo__TransitionTime, ::System::____System__TimeZoneInfo__TransitionTime, ::System::TimeSpan, bool)>(&::System::____System__TimeZoneInfo__AdjustmentRule::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x23b09f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__TransitionTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__TransitionTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__AdjustmentRule.CreateAdjustmentRule
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::____System__TimeZoneInfo__AdjustmentRule (*)(::System::DateTime, ::System::DateTime, ::System::TimeSpan, ::System::____System__TimeZoneInfo__TransitionTime, ::System::____System__TimeZoneInfo__TransitionTime)>(&::System::____System__TimeZoneInfo__AdjustmentRule::CreateAdjustmentRule)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x23a7470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            "CreateAdjustmentRule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__TransitionTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__TransitionTime>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__AdjustmentRule.CreateAdjustmentRule
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::____System__TimeZoneInfo__AdjustmentRule (*)(::System::DateTime, ::System::DateTime, ::System::TimeSpan, ::System::____System__TimeZoneInfo__TransitionTime, ::System::____System__TimeZoneInfo__TransitionTime, ::System::TimeSpan, bool)>(&::System::____System__TimeZoneInfo__AdjustmentRule::CreateAdjustmentRule)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x23a9dac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            "CreateAdjustmentRule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__TransitionTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__TransitionTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__AdjustmentRule.IsStartDateMarkerForBeginningOfYear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::____System__TimeZoneInfo__AdjustmentRule::*)()>(&::System::____System__TimeZoneInfo__AdjustmentRule::IsStartDateMarkerForBeginningOfYear)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23aed50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            "IsStartDateMarkerForBeginningOfYear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__AdjustmentRule.IsEndDateMarkerForEndOfYear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::____System__TimeZoneInfo__AdjustmentRule::*)()>(&::System::____System__TimeZoneInfo__AdjustmentRule::IsEndDateMarkerForEndOfYear)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23aee00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            "IsEndDateMarkerForEndOfYear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__AdjustmentRule.ValidateAdjustmentRule
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::DateTime, ::System::DateTime, ::System::TimeSpan, ::System::____System__TimeZoneInfo__TransitionTime, ::System::____System__TimeZoneInfo__TransitionTime, bool)>(&::System::____System__TimeZoneInfo__AdjustmentRule::ValidateAdjustmentRule)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x23b0ac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            "ValidateAdjustmentRule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__TransitionTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__TransitionTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__AdjustmentRule.System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::____System__TimeZoneInfo__AdjustmentRule::*)(::bs_hook::Il2CppWrapperType)>(&::System::____System__TimeZoneInfo__AdjustmentRule::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x23b0f48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__AdjustmentRule.System_Runtime_Serialization_ISerializable_GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::____System__TimeZoneInfo__AdjustmentRule::*)(::System::Runtime::Serialization::SerializationInfo, ::System::Runtime::Serialization::StreamingContext)>(&::System::____System__TimeZoneInfo__AdjustmentRule::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x23b1060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__AdjustmentRule._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::____System__TimeZoneInfo__AdjustmentRule::*)(::System::Runtime::Serialization::SerializationInfo, ::System::Runtime::Serialization::StreamingContext)>(&::System::____System__TimeZoneInfo__AdjustmentRule::_ctor)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x23b12a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__AdjustmentRule._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::____System__TimeZoneInfo__AdjustmentRule::*)()>(&::System::____System__TimeZoneInfo__AdjustmentRule::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x23b16bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IEquatable_1<::System::____System__TimeZoneInfo__AdjustmentRule>
constexpr  ::System::____System__TimeZoneInfo__AdjustmentRule::operator ::System::IEquatable_1<::System::____System__TimeZoneInfo__AdjustmentRule>() const noexcept {
return ::System::IEquatable_1<::System::____System__TimeZoneInfo__AdjustmentRule>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr  ::System::____System__TimeZoneInfo__AdjustmentRule::operator ::System::Runtime::Serialization::ISerializable() const noexcept {
return ::System::Runtime::Serialization::ISerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Runtime::Serialization::IDeserializationCallback
constexpr  ::System::____System__TimeZoneInfo__AdjustmentRule::operator ::System::Runtime::Serialization::IDeserializationCallback() const noexcept {
return ::System::Runtime::Serialization::IDeserializationCallback(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::____System__TimeZoneInfo__AdjustmentRule::__set__dateStart(::System::DateTime value)  {
::cordl_internals::setInstanceField<::System::DateTime, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::DateTime>(value));
}
constexpr ::System::DateTime ::System::____System__TimeZoneInfo__AdjustmentRule::__get__dateStart() const {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::____System__TimeZoneInfo__AdjustmentRule::__set__dateEnd(::System::DateTime value)  {
::cordl_internals::setInstanceField<::System::DateTime, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::DateTime>(value));
}
constexpr ::System::DateTime ::System::____System__TimeZoneInfo__AdjustmentRule::__get__dateEnd() const {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::____System__TimeZoneInfo__AdjustmentRule::__set__daylightDelta(::System::TimeSpan value)  {
::cordl_internals::setInstanceField<::System::TimeSpan, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::TimeSpan>(value));
}
constexpr ::System::TimeSpan ::System::____System__TimeZoneInfo__AdjustmentRule::__get__daylightDelta() const {
return ::cordl_internals::getInstanceField<::System::TimeSpan, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::____System__TimeZoneInfo__AdjustmentRule::__set__daylightTransitionStart(::System::____System__TimeZoneInfo__TransitionTime value)  {
::cordl_internals::setInstanceField<::System::____System__TimeZoneInfo__TransitionTime, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::____System__TimeZoneInfo__TransitionTime>(value));
}
constexpr ::System::____System__TimeZoneInfo__TransitionTime ::System::____System__TimeZoneInfo__AdjustmentRule::__get__daylightTransitionStart() const {
return ::cordl_internals::getInstanceField<::System::____System__TimeZoneInfo__TransitionTime, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::____System__TimeZoneInfo__AdjustmentRule::__set__daylightTransitionEnd(::System::____System__TimeZoneInfo__TransitionTime value)  {
::cordl_internals::setInstanceField<::System::____System__TimeZoneInfo__TransitionTime, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::____System__TimeZoneInfo__TransitionTime>(value));
}
constexpr ::System::____System__TimeZoneInfo__TransitionTime ::System::____System__TimeZoneInfo__AdjustmentRule::__get__daylightTransitionEnd() const {
return ::cordl_internals::getInstanceField<::System::____System__TimeZoneInfo__TransitionTime, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::____System__TimeZoneInfo__AdjustmentRule::__set__baseUtcOffsetDelta(::System::TimeSpan value)  {
::cordl_internals::setInstanceField<::System::TimeSpan, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::TimeSpan>(value));
}
constexpr ::System::TimeSpan ::System::____System__TimeZoneInfo__AdjustmentRule::__get__baseUtcOffsetDelta() const {
return ::cordl_internals::getInstanceField<::System::TimeSpan, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::____System__TimeZoneInfo__AdjustmentRule::__set__noDaylightTransitions(bool value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::____System__TimeZoneInfo__AdjustmentRule::__get__noDaylightTransitions() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::DateTime ::System::____System__TimeZoneInfo__AdjustmentRule::get_DateStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            "get_DateStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::DateTime ::System::____System__TimeZoneInfo__AdjustmentRule::get_DateEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            "get_DateEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::TimeSpan ::System::____System__TimeZoneInfo__AdjustmentRule::get_DaylightDelta()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            "get_DaylightDelta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::____System__TimeZoneInfo__TransitionTime ::System::____System__TimeZoneInfo__AdjustmentRule::get_DaylightTransitionStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            "get_DaylightTransitionStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::____System__TimeZoneInfo__TransitionTime, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::____System__TimeZoneInfo__TransitionTime ::System::____System__TimeZoneInfo__AdjustmentRule::get_DaylightTransitionEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            "get_DaylightTransitionEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::____System__TimeZoneInfo__TransitionTime, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::TimeSpan ::System::____System__TimeZoneInfo__AdjustmentRule::get_BaseUtcOffsetDelta()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            "get_BaseUtcOffsetDelta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::____System__TimeZoneInfo__AdjustmentRule::get_NoDaylightTransitions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            "get_NoDaylightTransitions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::____System__TimeZoneInfo__AdjustmentRule::get_HasDaylightSaving()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            "get_HasDaylightSaving",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::____System__TimeZoneInfo__AdjustmentRule::Equals(::System::____System__TimeZoneInfo__AdjustmentRule other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__AdjustmentRule>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
 int32_t ::System::____System__TimeZoneInfo__AdjustmentRule::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "dateStart", ty: "::System::DateTime", modifiers: "", def_value: None }, CppParam { name: "dateEnd", ty: "::System::DateTime", modifiers: "", def_value: None }, CppParam { name: "daylightDelta", ty: "::System::TimeSpan", modifiers: "", def_value: None }, CppParam { name: "daylightTransitionStart", ty: "::System::____System__TimeZoneInfo__TransitionTime", modifiers: "", def_value: None }, CppParam { name: "daylightTransitionEnd", ty: "::System::____System__TimeZoneInfo__TransitionTime", modifiers: "", def_value: None }, CppParam { name: "baseUtcOffsetDelta", ty: "::System::TimeSpan", modifiers: "", def_value: None }, CppParam { name: "noDaylightTransitions", ty: "bool", modifiers: "", def_value: None }]
 ::System::____System__TimeZoneInfo__AdjustmentRule::____System__TimeZoneInfo__AdjustmentRule(::System::DateTime dateStart, ::System::DateTime dateEnd, ::System::TimeSpan daylightDelta, ::System::____System__TimeZoneInfo__TransitionTime daylightTransitionStart, ::System::____System__TimeZoneInfo__TransitionTime daylightTransitionEnd, ::System::TimeSpan baseUtcOffsetDelta, bool noDaylightTransitions)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__TimeZoneInfo__AdjustmentRule>(dateStart, dateEnd, daylightDelta, daylightTransitionStart, daylightTransitionEnd, baseUtcOffsetDelta, noDaylightTransitions))) {}
 void ::System::____System__TimeZoneInfo__AdjustmentRule::_ctor(::System::DateTime dateStart, ::System::DateTime dateEnd, ::System::TimeSpan daylightDelta, ::System::____System__TimeZoneInfo__TransitionTime daylightTransitionStart, ::System::____System__TimeZoneInfo__TransitionTime daylightTransitionEnd, ::System::TimeSpan baseUtcOffsetDelta, bool noDaylightTransitions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__TransitionTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__TransitionTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dateStart, dateEnd, daylightDelta, daylightTransitionStart, daylightTransitionEnd, baseUtcOffsetDelta, noDaylightTransitions);
}
 ::System::____System__TimeZoneInfo__AdjustmentRule ::System::____System__TimeZoneInfo__AdjustmentRule::CreateAdjustmentRule(::System::DateTime dateStart, ::System::DateTime dateEnd, ::System::TimeSpan daylightDelta, ::System::____System__TimeZoneInfo__TransitionTime daylightTransitionStart, ::System::____System__TimeZoneInfo__TransitionTime daylightTransitionEnd)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            "CreateAdjustmentRule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__TransitionTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__TransitionTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::____System__TimeZoneInfo__AdjustmentRule, false>(nullptr, ___internal_method, dateStart, dateEnd, daylightDelta, daylightTransitionStart, daylightTransitionEnd);
}
 ::System::____System__TimeZoneInfo__AdjustmentRule ::System::____System__TimeZoneInfo__AdjustmentRule::CreateAdjustmentRule(::System::DateTime dateStart, ::System::DateTime dateEnd, ::System::TimeSpan daylightDelta, ::System::____System__TimeZoneInfo__TransitionTime daylightTransitionStart, ::System::____System__TimeZoneInfo__TransitionTime daylightTransitionEnd, ::System::TimeSpan baseUtcOffsetDelta, bool noDaylightTransitions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            "CreateAdjustmentRule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__TransitionTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__TransitionTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::____System__TimeZoneInfo__AdjustmentRule, false>(nullptr, ___internal_method, dateStart, dateEnd, daylightDelta, daylightTransitionStart, daylightTransitionEnd, baseUtcOffsetDelta, noDaylightTransitions);
}
 bool ::System::____System__TimeZoneInfo__AdjustmentRule::IsStartDateMarkerForBeginningOfYear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            "IsStartDateMarkerForBeginningOfYear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::____System__TimeZoneInfo__AdjustmentRule::IsEndDateMarkerForEndOfYear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            "IsEndDateMarkerForEndOfYear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::____System__TimeZoneInfo__AdjustmentRule::ValidateAdjustmentRule(::System::DateTime dateStart, ::System::DateTime dateEnd, ::System::TimeSpan daylightDelta, ::System::____System__TimeZoneInfo__TransitionTime daylightTransitionStart, ::System::____System__TimeZoneInfo__TransitionTime daylightTransitionEnd, bool noDaylightTransitions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            "ValidateAdjustmentRule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__TransitionTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__TransitionTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dateStart, dateEnd, daylightDelta, daylightTransitionStart, daylightTransitionEnd, noDaylightTransitions);
}
 void ::System::____System__TimeZoneInfo__AdjustmentRule::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::bs_hook::Il2CppWrapperType sender)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sender);
}
 void ::System::____System__TimeZoneInfo__AdjustmentRule::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
 ::System::____System__TimeZoneInfo__AdjustmentRule::____System__TimeZoneInfo__AdjustmentRule(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__TimeZoneInfo__AdjustmentRule>(info, context))) {}
 void ::System::____System__TimeZoneInfo__AdjustmentRule::_ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
// Ctor Parameters []
 ::System::____System__TimeZoneInfo__AdjustmentRule::____System__TimeZoneInfo__AdjustmentRule()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__TimeZoneInfo__AdjustmentRule>())) {}
 void ::System::____System__TimeZoneInfo__AdjustmentRule::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__AdjustmentRule>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::System::____System__TimeZoneInfo__TransitionTime.get_TimeOfDay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::____System__TimeZoneInfo__TransitionTime::*)()>(&::System::____System__TimeZoneInfo__TransitionTime::get_TimeOfDay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b16f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TransitionTime>::get(),
                            "get_TimeOfDay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__TransitionTime.get_Month
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::____System__TimeZoneInfo__TransitionTime::*)()>(&::System::____System__TimeZoneInfo__TransitionTime::get_Month)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b16fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TransitionTime>::get(),
                            "get_Month",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__TransitionTime.get_Week
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::____System__TimeZoneInfo__TransitionTime::*)()>(&::System::____System__TimeZoneInfo__TransitionTime::get_Week)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b1704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TransitionTime>::get(),
                            "get_Week",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__TransitionTime.get_Day
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::____System__TimeZoneInfo__TransitionTime::*)()>(&::System::____System__TimeZoneInfo__TransitionTime::get_Day)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b170c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TransitionTime>::get(),
                            "get_Day",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__TransitionTime.get_DayOfWeek
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DayOfWeek (::System::____System__TimeZoneInfo__TransitionTime::*)()>(&::System::____System__TimeZoneInfo__TransitionTime::get_DayOfWeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b1714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TransitionTime>::get(),
                            "get_DayOfWeek",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__TransitionTime.get_IsFixedDateRule
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::____System__TimeZoneInfo__TransitionTime::*)()>(&::System::____System__TimeZoneInfo__TransitionTime::get_IsFixedDateRule)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b171c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TransitionTime>::get(),
                            "get_IsFixedDateRule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__TransitionTime.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::____System__TimeZoneInfo__TransitionTime::*)(::bs_hook::Il2CppWrapperType)>(&::System::____System__TimeZoneInfo__TransitionTime::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x23b1724;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::____System__TimeZoneInfo__TransitionTime),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TransitionTime>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__TransitionTime.op_Inequality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::____System__TimeZoneInfo__TransitionTime, ::System::____System__TimeZoneInfo__TransitionTime)>(&::System::____System__TimeZoneInfo__TransitionTime::op_Inequality)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x23b08e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TransitionTime>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__TransitionTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__TransitionTime>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__TransitionTime.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::____System__TimeZoneInfo__TransitionTime::*)(::System::____System__TimeZoneInfo__TransitionTime)>(&::System::____System__TimeZoneInfo__TransitionTime::Equals)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x23b0914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TransitionTime>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__TransitionTime>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__TransitionTime.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::____System__TimeZoneInfo__TransitionTime::*)()>(&::System::____System__TimeZoneInfo__TransitionTime::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x23b17b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::____System__TimeZoneInfo__TransitionTime),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TransitionTime>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__TransitionTime._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::____System__TimeZoneInfo__TransitionTime::*)(::System::DateTime, int32_t, int32_t, int32_t, ::System::DayOfWeek, bool)>(&::System::____System__TimeZoneInfo__TransitionTime::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x23b17c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TransitionTime>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DayOfWeek>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__TransitionTime.CreateFixedDateRule
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::____System__TimeZoneInfo__TransitionTime (*)(::System::DateTime, int32_t, int32_t)>(&::System::____System__TimeZoneInfo__TransitionTime::CreateFixedDateRule)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x23a7410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TransitionTime>::get(),
                            "CreateFixedDateRule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__TransitionTime.CreateFloatingDateRule
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::____System__TimeZoneInfo__TransitionTime (*)(::System::DateTime, int32_t, int32_t, ::System::DayOfWeek)>(&::System::____System__TimeZoneInfo__TransitionTime::CreateFloatingDateRule)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x23aaefc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TransitionTime>::get(),
                            "CreateFloatingDateRule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DayOfWeek>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__TransitionTime.ValidateTransitionTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::DateTime, int32_t, int32_t, int32_t, ::System::DayOfWeek)>(&::System::____System__TimeZoneInfo__TransitionTime::ValidateTransitionTime)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x23b1838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TransitionTime>::get(),
                            "ValidateTransitionTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DayOfWeek>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__TransitionTime.System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::____System__TimeZoneInfo__TransitionTime::*)(::bs_hook::Il2CppWrapperType)>(&::System::____System__TimeZoneInfo__TransitionTime::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x23b1a84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TransitionTime>::get(),
                            "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__TransitionTime.System_Runtime_Serialization_ISerializable_GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::____System__TimeZoneInfo__TransitionTime::*)(::System::Runtime::Serialization::SerializationInfo, ::System::Runtime::Serialization::StreamingContext)>(&::System::____System__TimeZoneInfo__TransitionTime::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x23b1b74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TransitionTime>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__TransitionTime._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::____System__TimeZoneInfo__TransitionTime::*)(::System::Runtime::Serialization::SerializationInfo, ::System::Runtime::Serialization::StreamingContext)>(&::System::____System__TimeZoneInfo__TransitionTime::_ctor)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x23b1d20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TransitionTime>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IEquatable_1<::System::____System__TimeZoneInfo__TransitionTime>
constexpr  ::System::____System__TimeZoneInfo__TransitionTime::operator ::System::IEquatable_1<::System::____System__TimeZoneInfo__TransitionTime>() const {
return ::System::IEquatable_1<::System::____System__TimeZoneInfo__TransitionTime>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr  ::System::____System__TimeZoneInfo__TransitionTime::operator ::System::Runtime::Serialization::ISerializable() const {
return ::System::Runtime::Serialization::ISerializable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to ::System::Runtime::Serialization::IDeserializationCallback
constexpr  ::System::____System__TimeZoneInfo__TransitionTime::operator ::System::Runtime::Serialization::IDeserializationCallback() const {
return ::System::Runtime::Serialization::IDeserializationCallback(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "_timeOfDay", ty: "::System::DateTime", modifiers: "", def_value: Some("{}") }, CppParam { name: "_month", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_week", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_day", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_dayOfWeek", ty: "::System::DayOfWeek", modifiers: "", def_value: Some("{}") }, CppParam { name: "_isFixedDateRule", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::System::____System__TimeZoneInfo__TransitionTime::____System__TimeZoneInfo__TransitionTime(::System::DateTime _timeOfDay, uint8_t _month, uint8_t _week, uint8_t _day, ::System::DayOfWeek _dayOfWeek, bool _isFixedDateRule) noexcept : ::bs_hook::ValueTypeWrapper() {this->_timeOfDay = _timeOfDay;
this->_month = _month;
this->_week = _week;
this->_day = _day;
this->_dayOfWeek = _dayOfWeek;
this->_isFixedDateRule = _isFixedDateRule;
}
constexpr void ::System::____System__TimeZoneInfo__TransitionTime::__set__timeOfDay(::System::DateTime value)  {
::cordl_internals::setInstanceField<::System::DateTime, 0x0>(this->__instance, std::forward<::System::DateTime>(value));
}
constexpr ::System::DateTime ::System::____System__TimeZoneInfo__TransitionTime::__get__timeOfDay() const {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x0>(this->__instance);
}
constexpr void ::System::____System__TimeZoneInfo__TransitionTime::__set__month(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x8>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::System::____System__TimeZoneInfo__TransitionTime::__get__month() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x8>(this->__instance);
}
constexpr void ::System::____System__TimeZoneInfo__TransitionTime::__set__week(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x9>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::System::____System__TimeZoneInfo__TransitionTime::__get__week() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x9>(this->__instance);
}
constexpr void ::System::____System__TimeZoneInfo__TransitionTime::__set__day(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0xa>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::System::____System__TimeZoneInfo__TransitionTime::__get__day() const {
return ::cordl_internals::getInstanceField<uint8_t, 0xa>(this->__instance);
}
constexpr void ::System::____System__TimeZoneInfo__TransitionTime::__set__dayOfWeek(::System::DayOfWeek value)  {
::cordl_internals::setInstanceField<::System::DayOfWeek, 0xc>(this->__instance, std::forward<::System::DayOfWeek>(value));
}
constexpr ::System::DayOfWeek ::System::____System__TimeZoneInfo__TransitionTime::__get__dayOfWeek() const {
return ::cordl_internals::getInstanceField<::System::DayOfWeek, 0xc>(this->__instance);
}
constexpr void ::System::____System__TimeZoneInfo__TransitionTime::__set__isFixedDateRule(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::System::____System__TimeZoneInfo__TransitionTime::__get__isFixedDateRule() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->__instance);
}
 ::System::DateTime ::System::____System__TimeZoneInfo__TransitionTime::get_TimeOfDay()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TransitionTime>::get(),
                            "get_TimeOfDay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t ::System::____System__TimeZoneInfo__TransitionTime::get_Month()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TransitionTime>::get(),
                            "get_Month",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t ::System::____System__TimeZoneInfo__TransitionTime::get_Week()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TransitionTime>::get(),
                            "get_Week",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t ::System::____System__TimeZoneInfo__TransitionTime::get_Day()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TransitionTime>::get(),
                            "get_Day",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::System::DayOfWeek ::System::____System__TimeZoneInfo__TransitionTime::get_DayOfWeek()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TransitionTime>::get(),
                            "get_DayOfWeek",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DayOfWeek, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool ::System::____System__TimeZoneInfo__TransitionTime::get_IsFixedDateRule()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TransitionTime>::get(),
                            "get_IsFixedDateRule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool ::System::____System__TimeZoneInfo__TransitionTime::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TransitionTime>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 bool ::System::____System__TimeZoneInfo__TransitionTime::op_Inequality(::System::____System__TimeZoneInfo__TransitionTime t1, ::System::____System__TimeZoneInfo__TransitionTime t2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TransitionTime>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__TransitionTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__TransitionTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, t1, t2);
}
 bool ::System::____System__TimeZoneInfo__TransitionTime::Equals(::System::____System__TimeZoneInfo__TransitionTime other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TransitionTime>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__TransitionTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t ::System::____System__TimeZoneInfo__TransitionTime::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TransitionTime>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::____System__TimeZoneInfo__TransitionTime::_ctor(::System::DateTime timeOfDay, int32_t month, int32_t week, int32_t day, ::System::DayOfWeek dayOfWeek, bool isFixedDateRule)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TransitionTime>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DayOfWeek>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, timeOfDay, month, week, day, dayOfWeek, isFixedDateRule);
}
 ::System::____System__TimeZoneInfo__TransitionTime ::System::____System__TimeZoneInfo__TransitionTime::CreateFixedDateRule(::System::DateTime timeOfDay, int32_t month, int32_t day)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TransitionTime>::get(),
                            "CreateFixedDateRule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::____System__TimeZoneInfo__TransitionTime, false>(nullptr, ___internal_method, timeOfDay, month, day);
}
 ::System::____System__TimeZoneInfo__TransitionTime ::System::____System__TimeZoneInfo__TransitionTime::CreateFloatingDateRule(::System::DateTime timeOfDay, int32_t month, int32_t week, ::System::DayOfWeek dayOfWeek)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TransitionTime>::get(),
                            "CreateFloatingDateRule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DayOfWeek>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::____System__TimeZoneInfo__TransitionTime, false>(nullptr, ___internal_method, timeOfDay, month, week, dayOfWeek);
}
 void ::System::____System__TimeZoneInfo__TransitionTime::ValidateTransitionTime(::System::DateTime timeOfDay, int32_t month, int32_t week, int32_t day, ::System::DayOfWeek dayOfWeek)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TransitionTime>::get(),
                            "ValidateTransitionTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DayOfWeek>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, timeOfDay, month, week, day, dayOfWeek);
}
 void ::System::____System__TimeZoneInfo__TransitionTime::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::bs_hook::Il2CppWrapperType sender)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TransitionTime>::get(),
                            "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, sender);
}
 void ::System::____System__TimeZoneInfo__TransitionTime::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TransitionTime>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, info, context);
}
 void ::System::____System__TimeZoneInfo__TransitionTime::_ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__TransitionTime>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, info, context);
}
//  Writing Method size for method: ::System::____System__TimeZoneInfo__CachedData.CreateLocal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeZoneInfo (::System::____System__TimeZoneInfo__CachedData::*)()>(&::System::____System__TimeZoneInfo__CachedData::CreateLocal)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x23b209c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__CachedData>::get(),
                            "CreateLocal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__CachedData.get_Local
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeZoneInfo (::System::____System__TimeZoneInfo__CachedData::*)()>(&::System::____System__TimeZoneInfo__CachedData::get_Local)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x23ac160;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__CachedData>::get(),
                            "get_Local",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__CachedData.GetCorrespondingKind
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTimeKind (::System::____System__TimeZoneInfo__CachedData::*)(::System::TimeZoneInfo)>(&::System::____System__TimeZoneInfo__CachedData::GetCorrespondingKind)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x23ac210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__CachedData>::get(),
                            "GetCorrespondingKind",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo__CachedData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::____System__TimeZoneInfo__CachedData::*)()>(&::System::____System__TimeZoneInfo__CachedData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b0850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__CachedData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::____System__TimeZoneInfo__CachedData::__set__localTimeZone(::System::TimeZoneInfo value)  {
::cordl_internals::setInstanceField<::System::TimeZoneInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::TimeZoneInfo>(value));
}
constexpr ::System::TimeZoneInfo ::System::____System__TimeZoneInfo__CachedData::__get__localTimeZone() const {
return ::cordl_internals::getInstanceField<::System::TimeZoneInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::TimeZoneInfo ::System::____System__TimeZoneInfo__CachedData::CreateLocal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__CachedData>::get(),
                            "CreateLocal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::TimeZoneInfo ::System::____System__TimeZoneInfo__CachedData::get_Local()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__CachedData>::get(),
                            "get_Local",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::DateTimeKind ::System::____System__TimeZoneInfo__CachedData::GetCorrespondingKind(::System::TimeZoneInfo timeZone)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__CachedData>::get(),
                            "GetCorrespondingKind",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTimeKind, false>(const_cast<void*>(instance), ___internal_method, timeZone);
}
// Ctor Parameters []
 ::System::____System__TimeZoneInfo__CachedData::____System__TimeZoneInfo__CachedData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__TimeZoneInfo__CachedData>())) {}
 void ::System::____System__TimeZoneInfo__CachedData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo__CachedData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::System::____System__TimeZoneInfo____c__DisplayClass16_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::____System__TimeZoneInfo____c__DisplayClass16_0::*)()>(&::System::____System__TimeZoneInfo____c__DisplayClass16_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23a8750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo____c__DisplayClass16_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo____c__DisplayClass16_0._FindTimeZoneId_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::____System__TimeZoneInfo____c__DisplayClass16_0::*)(::StringW)>(&::System::____System__TimeZoneInfo____c__DisplayClass16_0::_FindTimeZoneId_b__0)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x23b222c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo____c__DisplayClass16_0>::get(),
                            "<FindTimeZoneId>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::____System__TimeZoneInfo____c__DisplayClass16_0::__set_localtimeFilePath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::____System__TimeZoneInfo____c__DisplayClass16_0::__get_localtimeFilePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::____System__TimeZoneInfo____c__DisplayClass16_0::__set_posixrulesFilePath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::____System__TimeZoneInfo____c__DisplayClass16_0::__get_posixrulesFilePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::____System__TimeZoneInfo____c__DisplayClass16_0::__set_buffer(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::System::____System__TimeZoneInfo____c__DisplayClass16_0::__get_buffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::____System__TimeZoneInfo____c__DisplayClass16_0::__set_rawData(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::System::____System__TimeZoneInfo____c__DisplayClass16_0::__get_rawData() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::____System__TimeZoneInfo____c__DisplayClass16_0::__set_id(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::____System__TimeZoneInfo____c__DisplayClass16_0::__get_id() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::____System__TimeZoneInfo____c__DisplayClass16_0::__set_timeZoneDirectory(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::____System__TimeZoneInfo____c__DisplayClass16_0::__get_timeZoneDirectory() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::____System__TimeZoneInfo____c__DisplayClass16_0::____System__TimeZoneInfo____c__DisplayClass16_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__TimeZoneInfo____c__DisplayClass16_0>())) {}
 void ::System::____System__TimeZoneInfo____c__DisplayClass16_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo____c__DisplayClass16_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::____System__TimeZoneInfo____c__DisplayClass16_0::_FindTimeZoneId_b__0(::StringW filePath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo____c__DisplayClass16_0>::get(),
                            "<FindTimeZoneId>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, filePath);
}
//  Writing Method size for method: ::System::____System__TimeZoneInfo____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::____System__TimeZoneInfo____c::*)()>(&::System::____System__TimeZoneInfo____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b2384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo____c._TZif_ParsePosixName_b__34_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::____System__TimeZoneInfo____c::*)(char16_t)>(&::System::____System__TimeZoneInfo____c::_TZif_ParsePosixName_b__34_1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23b238c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo____c>::get(),
                            "<TZif_ParsePosixName>b__34_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo____c._TZif_ParsePosixName_b__34_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::____System__TimeZoneInfo____c::*)(char16_t)>(&::System::____System__TimeZoneInfo____c::_TZif_ParsePosixName_b__34_0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x23b239c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo____c>::get(),
                            "<TZif_ParsePosixName>b__34_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo____c._TZif_ParsePosixOffset_b__35_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::____System__TimeZoneInfo____c::*)(char16_t)>(&::System::____System__TimeZoneInfo____c::_TZif_ParsePosixOffset_b__35_0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x23b24a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo____c>::get(),
                            "<TZif_ParsePosixOffset>b__35_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo____c._TZif_ParsePosixDate_b__37_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::____System__TimeZoneInfo____c::*)(char16_t)>(&::System::____System__TimeZoneInfo____c::_TZif_ParsePosixDate_b__37_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23b2528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo____c>::get(),
                            "<TZif_ParsePosixDate>b__37_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo____c._TZif_ParsePosixTime_b__38_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::____System__TimeZoneInfo____c::*)(char16_t)>(&::System::____System__TimeZoneInfo____c::_TZif_ParsePosixTime_b__38_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23b2544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo____c>::get(),
                            "<TZif_ParsePosixTime>b__38_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TimeZoneInfo____c._CreateLocalUnity_b__161_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::____System__TimeZoneInfo____c::*)(::System::____System__TimeZoneInfo__AdjustmentRule, ::System::____System__TimeZoneInfo__AdjustmentRule)>(&::System::____System__TimeZoneInfo____c::_CreateLocalUnity_b__161_0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x23b2554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo____c>::get(),
                            "<CreateLocalUnity>b__161_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__AdjustmentRule>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__AdjustmentRule>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::System::____System__TimeZoneInfo____c::__set___9(::System::____System__TimeZoneInfo____c value)  {
::cordl_internals::setStaticField<::System::____System__TimeZoneInfo____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo____c>::get>(std::forward<::System::____System__TimeZoneInfo____c>(value));
}
 ::System::____System__TimeZoneInfo____c ::System::____System__TimeZoneInfo____c::__get___9()  {
return ::cordl_internals::getStaticField<::System::____System__TimeZoneInfo____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo____c>::get>();
}
 void ::System::____System__TimeZoneInfo____c::__set___9__34_1(::System::Func_2<char16_t,bool> value)  {
::cordl_internals::setStaticField<::System::Func_2<char16_t,bool>, "<>9__34_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo____c>::get>(std::forward<::System::Func_2<char16_t,bool>>(value));
}
 ::System::Func_2<char16_t,bool> ::System::____System__TimeZoneInfo____c::__get___9__34_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<char16_t,bool>, "<>9__34_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo____c>::get>();
}
 void ::System::____System__TimeZoneInfo____c::__set___9__34_0(::System::Func_2<char16_t,bool> value)  {
::cordl_internals::setStaticField<::System::Func_2<char16_t,bool>, "<>9__34_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo____c>::get>(std::forward<::System::Func_2<char16_t,bool>>(value));
}
 ::System::Func_2<char16_t,bool> ::System::____System__TimeZoneInfo____c::__get___9__34_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<char16_t,bool>, "<>9__34_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo____c>::get>();
}
 void ::System::____System__TimeZoneInfo____c::__set___9__35_0(::System::Func_2<char16_t,bool> value)  {
::cordl_internals::setStaticField<::System::Func_2<char16_t,bool>, "<>9__35_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo____c>::get>(std::forward<::System::Func_2<char16_t,bool>>(value));
}
 ::System::Func_2<char16_t,bool> ::System::____System__TimeZoneInfo____c::__get___9__35_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<char16_t,bool>, "<>9__35_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo____c>::get>();
}
 void ::System::____System__TimeZoneInfo____c::__set___9__37_0(::System::Func_2<char16_t,bool> value)  {
::cordl_internals::setStaticField<::System::Func_2<char16_t,bool>, "<>9__37_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo____c>::get>(std::forward<::System::Func_2<char16_t,bool>>(value));
}
 ::System::Func_2<char16_t,bool> ::System::____System__TimeZoneInfo____c::__get___9__37_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<char16_t,bool>, "<>9__37_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo____c>::get>();
}
 void ::System::____System__TimeZoneInfo____c::__set___9__38_0(::System::Func_2<char16_t,bool> value)  {
::cordl_internals::setStaticField<::System::Func_2<char16_t,bool>, "<>9__38_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo____c>::get>(std::forward<::System::Func_2<char16_t,bool>>(value));
}
 ::System::Func_2<char16_t,bool> ::System::____System__TimeZoneInfo____c::__get___9__38_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<char16_t,bool>, "<>9__38_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo____c>::get>();
}
 void ::System::____System__TimeZoneInfo____c::__set___9__161_0(::System::Comparison_1<::System::____System__TimeZoneInfo__AdjustmentRule> value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::System::____System__TimeZoneInfo__AdjustmentRule>, "<>9__161_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo____c>::get>(std::forward<::System::Comparison_1<::System::____System__TimeZoneInfo__AdjustmentRule>>(value));
}
 ::System::Comparison_1<::System::____System__TimeZoneInfo__AdjustmentRule> ::System::____System__TimeZoneInfo____c::__get___9__161_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::System::____System__TimeZoneInfo__AdjustmentRule>, "<>9__161_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo____c>::get>();
}
// Ctor Parameters []
 ::System::____System__TimeZoneInfo____c::____System__TimeZoneInfo____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__TimeZoneInfo____c>())) {}
 void ::System::____System__TimeZoneInfo____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::____System__TimeZoneInfo____c::_TZif_ParsePosixName_b__34_1(char16_t c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo____c>::get(),
                            "<TZif_ParsePosixName>b__34_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, c);
}
 bool ::System::____System__TimeZoneInfo____c::_TZif_ParsePosixName_b__34_0(char16_t c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo____c>::get(),
                            "<TZif_ParsePosixName>b__34_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, c);
}
 bool ::System::____System__TimeZoneInfo____c::_TZif_ParsePosixOffset_b__35_0(char16_t c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo____c>::get(),
                            "<TZif_ParsePosixOffset>b__35_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, c);
}
 bool ::System::____System__TimeZoneInfo____c::_TZif_ParsePosixDate_b__37_0(char16_t c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo____c>::get(),
                            "<TZif_ParsePosixDate>b__37_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, c);
}
 bool ::System::____System__TimeZoneInfo____c::_TZif_ParsePosixTime_b__38_0(char16_t c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo____c>::get(),
                            "<TZif_ParsePosixTime>b__38_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, c);
}
 int32_t ::System::____System__TimeZoneInfo____c::_CreateLocalUnity_b__161_0(::System::____System__TimeZoneInfo__AdjustmentRule rule1, ::System::____System__TimeZoneInfo__AdjustmentRule rule2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TimeZoneInfo____c>::get(),
                            "<CreateLocalUnity>b__161_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__AdjustmentRule>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__AdjustmentRule>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, rule1, rule2);
}
//  Writing Method size for method: ::System::TimeZoneInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::TimeZoneInfo::*)(::ArrayW<uint8_t>, ::StringW, bool)>(&::System::TimeZoneInfo::_ctor)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x23a6210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetAdjustmentRules
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::____System__TimeZoneInfo__AdjustmentRule> (::System::TimeZoneInfo::*)()>(&::System::TimeZoneInfo::GetAdjustmentRules)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x23a7040;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetAdjustmentRules",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetLocalTimeZone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeZoneInfo (*)(::System::____System__TimeZoneInfo__CachedData)>(&::System::TimeZoneInfo::GetLocalTimeZone)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x23a7580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetLocalTimeZone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__CachedData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TryGetLocalTzFile
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::ArrayW<uint8_t>>, ByRef<::StringW>)>(&::System::TimeZoneInfo::TryGetLocalTzFile)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x23a7730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TryGetLocalTzFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetTzEnvironmentVariable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::System::TimeZoneInfo::GetTzEnvironmentVariable)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x23a78e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetTzEnvironmentVariable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TryLoadTzFile
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::ArrayW<uint8_t>>, ByRef<::StringW>)>(&::System::TimeZoneInfo::TryLoadTzFile)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x23a7978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TryLoadTzFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.FindTimeZoneIdUsingReadLink
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::TimeZoneInfo::FindTimeZoneIdUsingReadLink)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x23a7c54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "FindTimeZoneIdUsingReadLink",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetDirectoryEntryFullPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(ByRef<::GlobalNamespace::______GlobalNamespace__Interop__Sys__DirectoryEntry>, ::StringW)>(&::System::TimeZoneInfo::GetDirectoryEntryFullPath)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x23a7fd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetDirectoryEntryFullPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::______GlobalNamespace__Interop__Sys__DirectoryEntry>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.EnumerateFilesRecursively
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::Predicate_1<::StringW>)>(&::System::TimeZoneInfo::EnumerateFilesRecursively)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x23a8160;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "EnumerateFilesRecursively",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Predicate_1<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.FindTimeZoneId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&::System::TimeZoneInfo::FindTimeZoneId)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x23a7d60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "FindTimeZoneId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.CompareTimeZoneFile
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::System::TimeZoneInfo::CompareTimeZoneFile)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x23a8758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "CompareTimeZoneFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetLocalTimeZoneFromTzFile
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeZoneInfo (*)()>(&::System::TimeZoneInfo::GetLocalTimeZoneFromTzFile)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x23a75cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetLocalTimeZoneFromTzFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetTimeZoneFromTzData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeZoneInfo (*)(::ArrayW<uint8_t>, ::StringW)>(&::System::TimeZoneInfo::GetTimeZoneFromTzData)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x23a8ae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetTimeZoneFromTzData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetTimeZoneDirectory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::System::TimeZoneInfo::GetTimeZoneDirectory)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x23a7b08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetTimeZoneDirectory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetDateTimeNowUtcOffsetFromUtc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (*)(::System::DateTime, ByRef<bool>)>(&::System::TimeZoneInfo::GetDateTimeNowUtcOffsetFromUtc)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x23a91a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetDateTimeNowUtcOffsetFromUtc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_GenerateAdjustmentRules
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::ArrayW<::System::____System__TimeZoneInfo__AdjustmentRule>>, ::System::TimeSpan, ::ArrayW<::System::DateTime>, ::ArrayW<uint8_t>, ::ArrayW<::System::____System__TimeZoneInfo__TZifType>, ::ArrayW<bool>, ::ArrayW<bool>, ::StringW)>(&::System::TimeZoneInfo::TZif_GenerateAdjustmentRules)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x23a6bc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_GenerateAdjustmentRules",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::System::____System__TimeZoneInfo__AdjustmentRule>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::DateTime>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::____System__TimeZoneInfo__TZifType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_GenerateAdjustmentRule
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<int32_t>, ::System::TimeSpan, ::System::Collections::Generic::List_1<::System::____System__TimeZoneInfo__AdjustmentRule>, ::ArrayW<::System::DateTime>, ::ArrayW<uint8_t>, ::ArrayW<::System::____System__TimeZoneInfo__TZifType>, ::ArrayW<bool>, ::ArrayW<bool>, ::StringW)>(&::System::TimeZoneInfo::TZif_GenerateAdjustmentRule)> {
  constexpr static std::size_t size = 0x6c8;
  constexpr static std::size_t addrs = 0x23a9568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_GenerateAdjustmentRule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::____System__TimeZoneInfo__AdjustmentRule>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::DateTime>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::____System__TimeZoneInfo__TZifType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_CalculateTransitionOffsetFromBase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (*)(::System::TimeSpan, ::System::TimeSpan)>(&::System::TimeZoneInfo::TZif_CalculateTransitionOffsetFromBase)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x23a9cd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_CalculateTransitionOffsetFromBase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_GetEarlyDateTransitionType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::____System__TimeZoneInfo__TZifType (*)(::ArrayW<::System::____System__TimeZoneInfo__TZifType>)>(&::System::TimeZoneInfo::TZif_GetEarlyDateTransitionType)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x23a9c30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_GetEarlyDateTransitionType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::____System__TimeZoneInfo__TZifType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_CreateAdjustmentRuleForPosixFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::____System__TimeZoneInfo__AdjustmentRule (*)(::StringW, ::System::DateTime, ::System::TimeSpan)>(&::System::TimeZoneInfo::TZif_CreateAdjustmentRuleForPosixFormat)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x23aa150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_CreateAdjustmentRuleForPosixFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ParseOffsetString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::TimeSpan> (*)(::StringW)>(&::System::TimeZoneInfo::TZif_ParseOffsetString)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x23aa670;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_ParseOffsetString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ParseTimeOfDay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(::StringW)>(&::System::TimeZoneInfo::ParseTimeOfDay)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x23aaac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "ParseTimeOfDay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_CreateTransitionTimeFromPosixRule
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::____System__TimeZoneInfo__TransitionTime (*)(::StringW, ::StringW)>(&::System::TimeZoneInfo::TZif_CreateTransitionTimeFromPosixRule)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x23aa868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_CreateTransitionTimeFromPosixRule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ParseJulianDay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ByRef<int32_t>, ByRef<int32_t>)>(&::System::TimeZoneInfo::TZif_ParseJulianDay)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x23aaf64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_ParseJulianDay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ParseMDateRule
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<int32_t>, ByRef<int32_t>, ByRef<::System::DayOfWeek>)>(&::System::TimeZoneInfo::TZif_ParseMDateRule)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x23aad00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_ParseMDateRule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DayOfWeek>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ParsePosixFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::StringW>, ByRef<::StringW>, ByRef<::StringW>, ByRef<::StringW>, ByRef<::StringW>, ByRef<::StringW>, ByRef<::StringW>, ByRef<::StringW>)>(&::System::TimeZoneInfo::TZif_ParsePosixFormat)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x23aa474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_ParsePosixFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ParsePosixName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ByRef<int32_t>)>(&::System::TimeZoneInfo::TZif_ParsePosixName)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x23ab130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_ParsePosixName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ParsePosixOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ByRef<int32_t>)>(&::System::TimeZoneInfo::TZif_ParsePosixOffset)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x23ab364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_ParsePosixOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ParsePosixDateTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ByRef<int32_t>, ByRef<::StringW>, ByRef<::StringW>)>(&::System::TimeZoneInfo::TZif_ParsePosixDateTime)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x23ab470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_ParsePosixDateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ParsePosixDate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ByRef<int32_t>)>(&::System::TimeZoneInfo::TZif_ParsePosixDate)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x23ab5e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_ParsePosixDate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ParsePosixTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ByRef<int32_t>)>(&::System::TimeZoneInfo::TZif_ParsePosixTime)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x23ab6f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_ParsePosixTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ParsePosixString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ByRef<int32_t>, ::System::Func_2<char16_t,bool>)>(&::System::TimeZoneInfo::TZif_ParsePosixString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x23ab54c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_ParsePosixString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<char16_t,bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_GetZoneAbbreviation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, int32_t)>(&::System::TimeZoneInfo::TZif_GetZoneAbbreviation)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x23a6b5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_GetZoneAbbreviation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ToInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t)>(&::System::TimeZoneInfo::TZif_ToInt32)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x23ab7fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ToInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::ArrayW<uint8_t>, int32_t)>(&::System::TimeZoneInfo::TZif_ToInt64)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x23ab82c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ToUnixTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::ArrayW<uint8_t>, int32_t, ::System::____System__TimeZoneInfo__TZVersion)>(&::System::TimeZoneInfo::TZif_ToUnixTime)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x23ab85c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_ToUnixTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__TZVersion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_UnixTimeToDateTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(int64_t)>(&::System::TimeZoneInfo::TZif_UnixTimeToDateTime)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x23ab8e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_UnixTimeToDateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ParseRaw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, ByRef<::System::____System__TimeZoneInfo__TZifHead>, ByRef<::ArrayW<::System::DateTime>>, ByRef<::ArrayW<uint8_t>>, ByRef<::ArrayW<::System::____System__TimeZoneInfo__TZifType>>, ByRef<::StringW>, ByRef<::ArrayW<bool>>, ByRef<::ArrayW<bool>>, ByRef<::StringW>)>(&::System::TimeZoneInfo::TZif_ParseRaw)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0x23a6644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_ParseRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::____System__TimeZoneInfo__TZifHead>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::System::DateTime>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::System::____System__TimeZoneInfo__TZifType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<bool>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<bool>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.get_DisplayName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::TimeZoneInfo::*)()>(&::System::TimeZoneInfo::get_DisplayName)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x23abccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "get_DisplayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.get_StandardName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::TimeZoneInfo::*)()>(&::System::TimeZoneInfo::get_StandardName)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x23abd20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "get_StandardName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.get_DaylightName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::TimeZoneInfo::*)()>(&::System::TimeZoneInfo::get_DaylightName)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x23abd74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "get_DaylightName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.get_BaseUtcOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::TimeZoneInfo::*)()>(&::System::TimeZoneInfo::get_BaseUtcOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23abdc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "get_BaseUtcOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.get_SupportsDaylightSavingTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::TimeZoneInfo::*)()>(&::System::TimeZoneInfo::get_SupportsDaylightSavingTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23abdd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "get_SupportsDaylightSavingTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetPreviousAdjustmentRule
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::____System__TimeZoneInfo__AdjustmentRule (::System::TimeZoneInfo::*)(::System::____System__TimeZoneInfo__AdjustmentRule, ::System::Nullable_1<int32_t>)>(&::System::TimeZoneInfo::GetPreviousAdjustmentRule)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x23abdd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetPreviousAdjustmentRule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__AdjustmentRule>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetUtcOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::TimeZoneInfo::*)(::System::DateTime)>(&::System::TimeZoneInfo::GetUtcOffset)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23abefc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetUtcOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetLocalUtcOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (*)(::System::DateTime, ::System::TimeZoneInfoOptions)>(&::System::TimeZoneInfo::GetLocalUtcOffset)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23ac0c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetLocalUtcOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfoOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetUtcOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::TimeZoneInfo::*)(::System::DateTime, ::System::TimeZoneInfoOptions)>(&::System::TimeZoneInfo::GetUtcOffset)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x23ac198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetUtcOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfoOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetUtcOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::TimeZoneInfo::*)(::System::DateTime, ::System::TimeZoneInfoOptions, ::System::____System__TimeZoneInfo__CachedData)>(&::System::TimeZoneInfo::GetUtcOffset)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x23abf70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetUtcOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfoOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__CachedData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ConvertTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(::System::DateTime, ::System::TimeZoneInfo, ::System::TimeZoneInfo, ::System::TimeZoneInfoOptions)>(&::System::TimeZoneInfo::ConvertTime)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x23ac29c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "ConvertTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfoOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ConvertTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(::System::DateTime, ::System::TimeZoneInfo, ::System::TimeZoneInfo, ::System::TimeZoneInfoOptions, ::System::____System__TimeZoneInfo__CachedData)>(&::System::TimeZoneInfo::ConvertTime)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x23ac528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "ConvertTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfoOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__CachedData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ConvertTimeToUtc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(::System::DateTime, ::System::TimeZoneInfoOptions)>(&::System::TimeZoneInfo::ConvertTimeToUtc)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x23ad560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "ConvertTimeToUtc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfoOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::TimeZoneInfo::*)(::System::TimeZoneInfo)>(&::System::TimeZoneInfo::Equals)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x23ad630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::TimeZoneInfo::*)(::bs_hook::Il2CppWrapperType)>(&::System::TimeZoneInfo::Equals)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x23ad7f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::TimeZoneInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::TimeZoneInfo::*)()>(&::System::TimeZoneInfo::GetHashCode)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x23ad858;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::TimeZoneInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.HasSameRules
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::TimeZoneInfo::*)(::System::TimeZoneInfo)>(&::System::TimeZoneInfo::HasSameRules)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x23ad680;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "HasSameRules",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.get_Local
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeZoneInfo (*)()>(&::System::TimeZoneInfo::get_Local)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x23a9218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "get_Local",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::TimeZoneInfo::*)()>(&::System::TimeZoneInfo::ToString)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x23ada5c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::TimeZoneInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.get_Utc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeZoneInfo (*)()>(&::System::TimeZoneInfo::get_Utc)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23adab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "get_Utc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::TimeZoneInfo::*)(::StringW, ::System::TimeSpan, ::StringW, ::StringW, ::StringW, ::ArrayW<::System::____System__TimeZoneInfo__AdjustmentRule>, bool)>(&::System::TimeZoneInfo::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x23adb08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::____System__TimeZoneInfo__AdjustmentRule>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.CreateCustomTimeZone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeZoneInfo (*)(::StringW, ::System::TimeSpan, ::StringW, ::StringW)>(&::System::TimeZoneInfo::CreateCustomTimeZone)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23adbf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "CreateCustomTimeZone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.CreateCustomTimeZone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeZoneInfo (*)(::StringW, ::System::TimeSpan, ::StringW, ::StringW, ::StringW, ::ArrayW<::System::____System__TimeZoneInfo__AdjustmentRule>, bool)>(&::System::TimeZoneInfo::CreateCustomTimeZone)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x23adc90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "CreateCustomTimeZone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::____System__TimeZoneInfo__AdjustmentRule>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::TimeZoneInfo::*)(::bs_hook::Il2CppWrapperType)>(&::System::TimeZoneInfo::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x23add9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.System_Runtime_Serialization_ISerializable_GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::TimeZoneInfo::*)(::System::Runtime::Serialization::SerializationInfo, ::System::Runtime::Serialization::StreamingContext)>(&::System::TimeZoneInfo::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x23adf80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::TimeZoneInfo::*)(::System::Runtime::Serialization::SerializationInfo, ::System::Runtime::Serialization::StreamingContext)>(&::System::TimeZoneInfo::_ctor)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x23ae15c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetAdjustmentRuleForTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::____System__TimeZoneInfo__AdjustmentRule (::System::TimeZoneInfo::*)(::System::DateTime, ByRef<::System::Nullable_1<int32_t>>)>(&::System::TimeZoneInfo::GetAdjustmentRuleForTime)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23ac9b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetAdjustmentRuleForTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Nullable_1<int32_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetAdjustmentRuleForTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::____System__TimeZoneInfo__AdjustmentRule (::System::TimeZoneInfo::*)(::System::DateTime, bool, ByRef<::System::Nullable_1<int32_t>>)>(&::System::TimeZoneInfo::GetAdjustmentRuleForTime)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x23ae570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetAdjustmentRuleForTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Nullable_1<int32_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.CompareAdjustmentRuleToDateTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::TimeZoneInfo::*)(::System::____System__TimeZoneInfo__AdjustmentRule, ::System::____System__TimeZoneInfo__AdjustmentRule, ::System::DateTime, ::System::DateTime, bool)>(&::System::TimeZoneInfo::CompareAdjustmentRuleToDateTime)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x23ae720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "CompareAdjustmentRuleToDateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__AdjustmentRule>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__AdjustmentRule>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ConvertToUtc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::TimeZoneInfo::*)(::System::DateTime, ::System::TimeSpan, ::System::TimeSpan)>(&::System::TimeZoneInfo::ConvertToUtc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ae8b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "ConvertToUtc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ConvertFromUtc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::TimeZoneInfo::*)(::System::DateTime, ::System::TimeSpan, ::System::TimeSpan)>(&::System::TimeZoneInfo::ConvertFromUtc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23aea3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "ConvertFromUtc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ConvertToFromUtc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::TimeZoneInfo::*)(::System::DateTime, ::System::TimeSpan, ::System::TimeSpan, bool)>(&::System::TimeZoneInfo::ConvertToFromUtc)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x23ae8b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "ConvertToFromUtc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ConvertUtcToTimeZone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(int64_t, ::System::TimeZoneInfo, ByRef<bool>)>(&::System::TimeZoneInfo::ConvertUtcToTimeZone)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x23ad37c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "ConvertUtcToTimeZone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetDaylightTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::DaylightTimeStruct (::System::TimeZoneInfo::*)(int32_t, ::System::____System__TimeZoneInfo__AdjustmentRule, ::System::Nullable_1<int32_t>)>(&::System::TimeZoneInfo::GetDaylightTime)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x23acb18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetDaylightTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__AdjustmentRule>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetIsDaylightSavings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::DateTime, ::System::____System__TimeZoneInfo__AdjustmentRule, ::System::Globalization::DaylightTimeStruct, ::System::TimeZoneInfoOptions)>(&::System::TimeZoneInfo::GetIsDaylightSavings)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x23ad000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetIsDaylightSavings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__AdjustmentRule>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DaylightTimeStruct>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfoOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetDaylightSavingsStartOffsetFromUtc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::TimeZoneInfo::*)(::System::TimeSpan, ::System::____System__TimeZoneInfo__AdjustmentRule, ::System::Nullable_1<int32_t>)>(&::System::TimeZoneInfo::GetDaylightSavingsStartOffsetFromUtc)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x23af43c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetDaylightSavingsStartOffsetFromUtc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__AdjustmentRule>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetDaylightSavingsEndOffsetFromUtc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::TimeZoneInfo::*)(::System::TimeSpan, ::System::____System__TimeZoneInfo__AdjustmentRule)>(&::System::TimeZoneInfo::GetDaylightSavingsEndOffsetFromUtc)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x23af504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetDaylightSavingsEndOffsetFromUtc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__AdjustmentRule>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetIsDaylightSavingsFromUtc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::DateTime, int32_t, ::System::TimeSpan, ::System::____System__TimeZoneInfo__AdjustmentRule, ::System::Nullable_1<int32_t>, ByRef<bool>, ::System::TimeZoneInfo)>(&::System::TimeZoneInfo::GetIsDaylightSavingsFromUtc)> {
  constexpr static std::size_t size = 0x780;
  constexpr static std::size_t addrs = 0x23af57c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetIsDaylightSavingsFromUtc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__AdjustmentRule>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.CheckIsDst
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::DateTime, ::System::DateTime, ::System::DateTime, bool, ::System::____System__TimeZoneInfo__AdjustmentRule)>(&::System::TimeZoneInfo::CheckIsDst)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x23aeeb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "CheckIsDst",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__AdjustmentRule>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetIsAmbiguousTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::DateTime, ::System::____System__TimeZoneInfo__AdjustmentRule, ::System::Globalization::DaylightTimeStruct)>(&::System::TimeZoneInfo::GetIsAmbiguousTime)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x23af090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetIsAmbiguousTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__AdjustmentRule>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DaylightTimeStruct>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetIsInvalidTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::DateTime, ::System::____System__TimeZoneInfo__AdjustmentRule, ::System::Globalization::DaylightTimeStruct)>(&::System::TimeZoneInfo::GetIsInvalidTime)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x23acc54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetIsInvalidTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__AdjustmentRule>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DaylightTimeStruct>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetUtcOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (*)(::System::DateTime, ::System::TimeZoneInfo, ::System::TimeZoneInfoOptions)>(&::System::TimeZoneInfo::GetUtcOffset)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x23ac394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetUtcOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfoOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetUtcOffsetFromUtc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (*)(::System::DateTime, ::System::TimeZoneInfo)>(&::System::TimeZoneInfo::GetUtcOffsetFromUtc)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x23ac324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetUtcOffsetFromUtc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetUtcOffsetFromUtc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (*)(::System::DateTime, ::System::TimeZoneInfo, ByRef<bool>)>(&::System::TimeZoneInfo::GetUtcOffsetFromUtc)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x23aea44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetUtcOffsetFromUtc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetUtcOffsetFromUtc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (*)(::System::DateTime, ::System::TimeZoneInfo, ByRef<bool>, ByRef<bool>)>(&::System::TimeZoneInfo::GetUtcOffsetFromUtc)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x23a9298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetUtcOffsetFromUtc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TransitionTimeToDateTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(int32_t, ::System::____System__TimeZoneInfo__TransitionTime)>(&::System::TimeZoneInfo::TransitionTimeToDateTime)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x23aeac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TransitionTimeToDateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__TransitionTime>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ValidateTimeZoneInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::TimeSpan, ::ArrayW<::System::____System__TimeZoneInfo__AdjustmentRule>, ByRef<bool>)>(&::System::TimeZoneInfo::ValidateTimeZoneInfo)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x23a6d0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "ValidateTimeZoneInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::____System__TimeZoneInfo__AdjustmentRule>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.UtcOffsetOutOfRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::TimeSpan)>(&::System::TimeZoneInfo::UtcOffsetOutOfRange)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x23afcfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "UtcOffsetOutOfRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetUtcOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (*)(::System::TimeSpan, ::System::____System__TimeZoneInfo__AdjustmentRule)>(&::System::TimeZoneInfo::GetUtcOffset)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x23afe24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetUtcOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__AdjustmentRule>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.IsValidAdjustmentRuleOffest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::TimeSpan, ::System::____System__TimeZoneInfo__AdjustmentRule)>(&::System::TimeZoneInfo::IsValidAdjustmentRuleOffest)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23a9e9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "IsValidAdjustmentRuleOffest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__AdjustmentRule>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.NormalizeAdjustmentRuleOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::TimeSpan, ByRef<::System::____System__TimeZoneInfo__AdjustmentRule>)>(&::System::TimeZoneInfo::NormalizeAdjustmentRuleOffset)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x23a9f10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "NormalizeAdjustmentRuleOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::____System__TimeZoneInfo__AdjustmentRule>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetTimeZoneDirectoryUnity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::System::TimeZoneInfo::GetTimeZoneDirectoryUnity)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x23afeec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetTimeZoneDirectoryUnity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.CreateAdjustmentRule
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::____System__TimeZoneInfo__AdjustmentRule> (*)(int32_t, ByRef<::ArrayW<int64_t>>, ByRef<::ArrayW<::StringW>>, ::StringW, ::StringW)>(&::System::TimeZoneInfo::CreateAdjustmentRule)> {
  constexpr static std::size_t size = 0x7a8;
  constexpr static std::size_t addrs = 0x23aff34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "CreateAdjustmentRule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int64_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::StringW>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.CreateLocalUnity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeZoneInfo (*)()>(&::System::TimeZoneInfo::CreateLocalUnity)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x23a8ca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "CreateLocalUnity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::TimeZoneInfo::*)()>(&::System::TimeZoneInfo::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x23b0858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IEquatable_1<::System::TimeZoneInfo>
constexpr  ::System::TimeZoneInfo::operator ::System::IEquatable_1<::System::TimeZoneInfo>() const noexcept {
return ::System::IEquatable_1<::System::TimeZoneInfo>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr  ::System::TimeZoneInfo::operator ::System::Runtime::Serialization::ISerializable() const noexcept {
return ::System::Runtime::Serialization::ISerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Runtime::Serialization::IDeserializationCallback
constexpr  ::System::TimeZoneInfo::operator ::System::Runtime::Serialization::IDeserializationCallback() const noexcept {
return ::System::Runtime::Serialization::IDeserializationCallback(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::TimeZoneInfo::__set__id(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::TimeZoneInfo::__get__id() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::TimeZoneInfo::__set__displayName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::TimeZoneInfo::__get__displayName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::TimeZoneInfo::__set__standardDisplayName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::TimeZoneInfo::__get__standardDisplayName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::TimeZoneInfo::__set__daylightDisplayName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::TimeZoneInfo::__get__daylightDisplayName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::TimeZoneInfo::__set__baseUtcOffset(::System::TimeSpan value)  {
::cordl_internals::setInstanceField<::System::TimeSpan, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::TimeSpan>(value));
}
constexpr ::System::TimeSpan ::System::TimeZoneInfo::__get__baseUtcOffset() const {
return ::cordl_internals::getInstanceField<::System::TimeSpan, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::TimeZoneInfo::__set__supportsDaylightSavingTime(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::TimeZoneInfo::__get__supportsDaylightSavingTime() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::TimeZoneInfo::__set__adjustmentRules(::ArrayW<::System::____System__TimeZoneInfo__AdjustmentRule> value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::____System__TimeZoneInfo__AdjustmentRule>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::System::____System__TimeZoneInfo__AdjustmentRule>>(value));
}
constexpr ::ArrayW<::System::____System__TimeZoneInfo__AdjustmentRule> ::System::TimeZoneInfo::__get__adjustmentRules() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::____System__TimeZoneInfo__AdjustmentRule>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::System::TimeZoneInfo::__set_s_utcTimeZone(::System::TimeZoneInfo value)  {
::cordl_internals::setStaticField<::System::TimeZoneInfo, "s_utcTimeZone", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get>(std::forward<::System::TimeZoneInfo>(value));
}
 ::System::TimeZoneInfo ::System::TimeZoneInfo::__get_s_utcTimeZone()  {
return ::cordl_internals::getStaticField<::System::TimeZoneInfo, "s_utcTimeZone", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get>();
}
 void ::System::TimeZoneInfo::__set_s_cachedData(::System::____System__TimeZoneInfo__CachedData value)  {
::cordl_internals::setStaticField<::System::____System__TimeZoneInfo__CachedData, "s_cachedData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get>(std::forward<::System::____System__TimeZoneInfo__CachedData>(value));
}
 ::System::____System__TimeZoneInfo__CachedData ::System::TimeZoneInfo::__get_s_cachedData()  {
return ::cordl_internals::getStaticField<::System::____System__TimeZoneInfo__CachedData, "s_cachedData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get>();
}
 void ::System::TimeZoneInfo::__set_s_maxDateOnly(::System::DateTime value)  {
::cordl_internals::setStaticField<::System::DateTime, "s_maxDateOnly", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get>(std::forward<::System::DateTime>(value));
}
 ::System::DateTime ::System::TimeZoneInfo::__get_s_maxDateOnly()  {
return ::cordl_internals::getStaticField<::System::DateTime, "s_maxDateOnly", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get>();
}
 void ::System::TimeZoneInfo::__set_s_minDateOnly(::System::DateTime value)  {
::cordl_internals::setStaticField<::System::DateTime, "s_minDateOnly", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get>(std::forward<::System::DateTime>(value));
}
 ::System::DateTime ::System::TimeZoneInfo::__get_s_minDateOnly()  {
return ::cordl_internals::getStaticField<::System::DateTime, "s_minDateOnly", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get>();
}
 void ::System::TimeZoneInfo::__set_MaxOffset(::System::TimeSpan value)  {
::cordl_internals::setStaticField<::System::TimeSpan, "MaxOffset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get>(std::forward<::System::TimeSpan>(value));
}
 ::System::TimeSpan ::System::TimeZoneInfo::__get_MaxOffset()  {
return ::cordl_internals::getStaticField<::System::TimeSpan, "MaxOffset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get>();
}
 void ::System::TimeZoneInfo::__set_MinOffset(::System::TimeSpan value)  {
::cordl_internals::setStaticField<::System::TimeSpan, "MinOffset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get>(std::forward<::System::TimeSpan>(value));
}
 ::System::TimeSpan ::System::TimeZoneInfo::__get_MinOffset()  {
return ::cordl_internals::getStaticField<::System::TimeSpan, "MinOffset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get>();
}
// Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "dstDisabled", ty: "bool", modifiers: "", def_value: None }]
 ::System::TimeZoneInfo::TimeZoneInfo(::ArrayW<uint8_t> data, ::StringW id, bool dstDisabled)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<TimeZoneInfo>(data, id, dstDisabled))) {}
 void ::System::TimeZoneInfo::_ctor(::ArrayW<uint8_t> data, ::StringW id, bool dstDisabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data, id, dstDisabled);
}
 ::ArrayW<::System::____System__TimeZoneInfo__AdjustmentRule> ::System::TimeZoneInfo::GetAdjustmentRules()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetAdjustmentRules",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::____System__TimeZoneInfo__AdjustmentRule>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::TimeZoneInfo ::System::TimeZoneInfo::GetLocalTimeZone(::System::____System__TimeZoneInfo__CachedData cachedData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetLocalTimeZone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__CachedData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo, false>(nullptr, ___internal_method, cachedData);
}
 bool ::System::TimeZoneInfo::TryGetLocalTzFile(ByRef<::ArrayW<uint8_t>> rawData, ByRef<::StringW> id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TryGetLocalTzFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rawData, id);
}
 ::StringW ::System::TimeZoneInfo::GetTzEnvironmentVariable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetTzEnvironmentVariable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 bool ::System::TimeZoneInfo::TryLoadTzFile(::StringW tzFilePath, ByRef<::ArrayW<uint8_t>> rawData, ByRef<::StringW> id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TryLoadTzFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, tzFilePath, rawData, id);
}
 ::StringW ::System::TimeZoneInfo::FindTimeZoneIdUsingReadLink(::StringW tzFilePath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "FindTimeZoneIdUsingReadLink",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, tzFilePath);
}
 ::StringW ::System::TimeZoneInfo::GetDirectoryEntryFullPath(ByRef<::GlobalNamespace::______GlobalNamespace__Interop__Sys__DirectoryEntry> dirent, ::StringW currentPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetDirectoryEntryFullPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::______GlobalNamespace__Interop__Sys__DirectoryEntry>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, dirent, currentPath);
}
 void ::System::TimeZoneInfo::EnumerateFilesRecursively(::StringW path, ::System::Predicate_1<::StringW> condition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "EnumerateFilesRecursively",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Predicate_1<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, path, condition);
}
 ::StringW ::System::TimeZoneInfo::FindTimeZoneId(::ArrayW<uint8_t> rawData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "FindTimeZoneId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, rawData);
}
 bool ::System::TimeZoneInfo::CompareTimeZoneFile(::StringW filePath, ::ArrayW<uint8_t> buffer, ::ArrayW<uint8_t> rawData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "CompareTimeZoneFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, filePath, buffer, rawData);
}
 ::System::TimeZoneInfo ::System::TimeZoneInfo::GetLocalTimeZoneFromTzFile()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetLocalTimeZoneFromTzFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo, false>(nullptr, ___internal_method);
}
 ::System::TimeZoneInfo ::System::TimeZoneInfo::GetTimeZoneFromTzData(::ArrayW<uint8_t> rawData, ::StringW id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetTimeZoneFromTzData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo, false>(nullptr, ___internal_method, rawData, id);
}
 ::StringW ::System::TimeZoneInfo::GetTimeZoneDirectory()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetTimeZoneDirectory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 ::System::TimeSpan ::System::TimeZoneInfo::GetDateTimeNowUtcOffsetFromUtc(::System::DateTime time, ByRef<bool> isAmbiguousLocalDst)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetDateTimeNowUtcOffsetFromUtc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(nullptr, ___internal_method, time, isAmbiguousLocalDst);
}
 void ::System::TimeZoneInfo::TZif_GenerateAdjustmentRules(ByRef<::ArrayW<::System::____System__TimeZoneInfo__AdjustmentRule>> rules, ::System::TimeSpan baseUtcOffset, ::ArrayW<::System::DateTime> dts, ::ArrayW<uint8_t> typeOfLocalTime, ::ArrayW<::System::____System__TimeZoneInfo__TZifType> transitionType, ::ArrayW<bool> StandardTime, ::ArrayW<bool> GmtTime, ::StringW futureTransitionsPosixFormat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_GenerateAdjustmentRules",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::System::____System__TimeZoneInfo__AdjustmentRule>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::DateTime>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::____System__TimeZoneInfo__TZifType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rules, baseUtcOffset, dts, typeOfLocalTime, transitionType, StandardTime, GmtTime, futureTransitionsPosixFormat);
}
 void ::System::TimeZoneInfo::TZif_GenerateAdjustmentRule(ByRef<int32_t> index, ::System::TimeSpan timeZoneBaseUtcOffset, ::System::Collections::Generic::List_1<::System::____System__TimeZoneInfo__AdjustmentRule> rulesList, ::ArrayW<::System::DateTime> dts, ::ArrayW<uint8_t> typeOfLocalTime, ::ArrayW<::System::____System__TimeZoneInfo__TZifType> transitionTypes, ::ArrayW<bool> StandardTime, ::ArrayW<bool> GmtTime, ::StringW futureTransitionsPosixFormat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_GenerateAdjustmentRule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::____System__TimeZoneInfo__AdjustmentRule>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::DateTime>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::____System__TimeZoneInfo__TZifType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, index, timeZoneBaseUtcOffset, rulesList, dts, typeOfLocalTime, transitionTypes, StandardTime, GmtTime, futureTransitionsPosixFormat);
}
 ::System::TimeSpan ::System::TimeZoneInfo::TZif_CalculateTransitionOffsetFromBase(::System::TimeSpan transitionOffset, ::System::TimeSpan timeZoneBaseUtcOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_CalculateTransitionOffsetFromBase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(nullptr, ___internal_method, transitionOffset, timeZoneBaseUtcOffset);
}
 ::System::____System__TimeZoneInfo__TZifType ::System::TimeZoneInfo::TZif_GetEarlyDateTransitionType(::ArrayW<::System::____System__TimeZoneInfo__TZifType> transitionTypes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_GetEarlyDateTransitionType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::____System__TimeZoneInfo__TZifType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::____System__TimeZoneInfo__TZifType, false>(nullptr, ___internal_method, transitionTypes);
}
 ::System::____System__TimeZoneInfo__AdjustmentRule ::System::TimeZoneInfo::TZif_CreateAdjustmentRuleForPosixFormat(::StringW posixFormat, ::System::DateTime startTransitionDate, ::System::TimeSpan timeZoneBaseUtcOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_CreateAdjustmentRuleForPosixFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::____System__TimeZoneInfo__AdjustmentRule, false>(nullptr, ___internal_method, posixFormat, startTransitionDate, timeZoneBaseUtcOffset);
}
 ::System::Nullable_1<::System::TimeSpan> ::System::TimeZoneInfo::TZif_ParseOffsetString(::StringW offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_ParseOffsetString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::TimeSpan>, false>(nullptr, ___internal_method, offset);
}
 ::System::DateTime ::System::TimeZoneInfo::ParseTimeOfDay(::StringW time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "ParseTimeOfDay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(nullptr, ___internal_method, time);
}
 ::System::____System__TimeZoneInfo__TransitionTime ::System::TimeZoneInfo::TZif_CreateTransitionTimeFromPosixRule(::StringW date, ::StringW time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_CreateTransitionTimeFromPosixRule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::____System__TimeZoneInfo__TransitionTime, false>(nullptr, ___internal_method, date, time);
}
 void ::System::TimeZoneInfo::TZif_ParseJulianDay(::StringW date, ByRef<int32_t> month, ByRef<int32_t> day)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_ParseJulianDay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, date, month, day);
}
 bool ::System::TimeZoneInfo::TZif_ParseMDateRule(::StringW dateRule, ByRef<int32_t> month, ByRef<int32_t> week, ByRef<::System::DayOfWeek> dayOfWeek)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_ParseMDateRule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DayOfWeek>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, dateRule, month, week, dayOfWeek);
}
 bool ::System::TimeZoneInfo::TZif_ParsePosixFormat(::StringW posixFormat, ByRef<::StringW> standardName, ByRef<::StringW> standardOffset, ByRef<::StringW> daylightSavingsName, ByRef<::StringW> daylightSavingsOffset, ByRef<::StringW> start, ByRef<::StringW> startTime, ByRef<::StringW> end, ByRef<::StringW> endTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_ParsePosixFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, posixFormat, standardName, standardOffset, daylightSavingsName, daylightSavingsOffset, start, startTime, end, endTime);
}
 ::StringW ::System::TimeZoneInfo::TZif_ParsePosixName(::StringW posixFormat, ByRef<int32_t> index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_ParsePosixName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, posixFormat, index);
}
 ::StringW ::System::TimeZoneInfo::TZif_ParsePosixOffset(::StringW posixFormat, ByRef<int32_t> index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_ParsePosixOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, posixFormat, index);
}
 void ::System::TimeZoneInfo::TZif_ParsePosixDateTime(::StringW posixFormat, ByRef<int32_t> index, ByRef<::StringW> date, ByRef<::StringW> time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_ParsePosixDateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, posixFormat, index, date, time);
}
 ::StringW ::System::TimeZoneInfo::TZif_ParsePosixDate(::StringW posixFormat, ByRef<int32_t> index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_ParsePosixDate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, posixFormat, index);
}
 ::StringW ::System::TimeZoneInfo::TZif_ParsePosixTime(::StringW posixFormat, ByRef<int32_t> index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_ParsePosixTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, posixFormat, index);
}
 ::StringW ::System::TimeZoneInfo::TZif_ParsePosixString(::StringW posixFormat, ByRef<int32_t> index, ::System::Func_2<char16_t,bool> breakCondition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_ParsePosixString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<char16_t,bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, posixFormat, index, breakCondition);
}
 ::StringW ::System::TimeZoneInfo::TZif_GetZoneAbbreviation(::StringW zoneAbbreviations, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_GetZoneAbbreviation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, zoneAbbreviations, index);
}
 int32_t ::System::TimeZoneInfo::TZif_ToInt32(::ArrayW<uint8_t> value, int32_t startIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value, startIndex);
}
 int64_t ::System::TimeZoneInfo::TZif_ToInt64(::ArrayW<uint8_t> value, int32_t startIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, value, startIndex);
}
 int64_t ::System::TimeZoneInfo::TZif_ToUnixTime(::ArrayW<uint8_t> value, int32_t startIndex, ::System::____System__TimeZoneInfo__TZVersion version)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_ToUnixTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__TZVersion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, value, startIndex, version);
}
 ::System::DateTime ::System::TimeZoneInfo::TZif_UnixTimeToDateTime(int64_t unixTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_UnixTimeToDateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(nullptr, ___internal_method, unixTime);
}
 void ::System::TimeZoneInfo::TZif_ParseRaw(::ArrayW<uint8_t> data, ByRef<::System::____System__TimeZoneInfo__TZifHead> t, ByRef<::ArrayW<::System::DateTime>> dts, ByRef<::ArrayW<uint8_t>> typeOfLocalTime, ByRef<::ArrayW<::System::____System__TimeZoneInfo__TZifType>> transitionType, ByRef<::StringW> zoneAbbreviations, ByRef<::ArrayW<bool>> StandardTime, ByRef<::ArrayW<bool>> GmtTime, ByRef<::StringW> futureTransitionsPosixFormat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TZif_ParseRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::____System__TimeZoneInfo__TZifHead>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::System::DateTime>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::System::____System__TimeZoneInfo__TZifType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<bool>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<bool>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, t, dts, typeOfLocalTime, transitionType, zoneAbbreviations, StandardTime, GmtTime, futureTransitionsPosixFormat);
}
 ::StringW ::System::TimeZoneInfo::get_DisplayName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "get_DisplayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::System::TimeZoneInfo::get_StandardName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "get_StandardName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::System::TimeZoneInfo::get_DaylightName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "get_DaylightName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::TimeSpan ::System::TimeZoneInfo::get_BaseUtcOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "get_BaseUtcOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::TimeZoneInfo::get_SupportsDaylightSavingTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "get_SupportsDaylightSavingTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::____System__TimeZoneInfo__AdjustmentRule ::System::TimeZoneInfo::GetPreviousAdjustmentRule(::System::____System__TimeZoneInfo__AdjustmentRule rule, ::System::Nullable_1<int32_t> ruleIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetPreviousAdjustmentRule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__AdjustmentRule>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::____System__TimeZoneInfo__AdjustmentRule, false>(const_cast<void*>(instance), ___internal_method, rule, ruleIndex);
}
 ::System::TimeSpan ::System::TimeZoneInfo::GetUtcOffset(::System::DateTime dateTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetUtcOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(const_cast<void*>(instance), ___internal_method, dateTime);
}
 ::System::TimeSpan ::System::TimeZoneInfo::GetLocalUtcOffset(::System::DateTime dateTime, ::System::TimeZoneInfoOptions flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetLocalUtcOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfoOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(nullptr, ___internal_method, dateTime, flags);
}
 ::System::TimeSpan ::System::TimeZoneInfo::GetUtcOffset(::System::DateTime dateTime, ::System::TimeZoneInfoOptions flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetUtcOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfoOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(const_cast<void*>(instance), ___internal_method, dateTime, flags);
}
 ::System::TimeSpan ::System::TimeZoneInfo::GetUtcOffset(::System::DateTime dateTime, ::System::TimeZoneInfoOptions flags, ::System::____System__TimeZoneInfo__CachedData cachedData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetUtcOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfoOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__CachedData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(const_cast<void*>(instance), ___internal_method, dateTime, flags, cachedData);
}
 ::System::DateTime ::System::TimeZoneInfo::ConvertTime(::System::DateTime dateTime, ::System::TimeZoneInfo sourceTimeZone, ::System::TimeZoneInfo destinationTimeZone, ::System::TimeZoneInfoOptions flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "ConvertTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfoOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(nullptr, ___internal_method, dateTime, sourceTimeZone, destinationTimeZone, flags);
}
 ::System::DateTime ::System::TimeZoneInfo::ConvertTime(::System::DateTime dateTime, ::System::TimeZoneInfo sourceTimeZone, ::System::TimeZoneInfo destinationTimeZone, ::System::TimeZoneInfoOptions flags, ::System::____System__TimeZoneInfo__CachedData cachedData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "ConvertTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfoOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__CachedData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(nullptr, ___internal_method, dateTime, sourceTimeZone, destinationTimeZone, flags, cachedData);
}
 ::System::DateTime ::System::TimeZoneInfo::ConvertTimeToUtc(::System::DateTime dateTime, ::System::TimeZoneInfoOptions flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "ConvertTimeToUtc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfoOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(nullptr, ___internal_method, dateTime, flags);
}
 bool ::System::TimeZoneInfo::Equals(::System::TimeZoneInfo other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
 bool ::System::TimeZoneInfo::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 int32_t ::System::TimeZoneInfo::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::TimeZoneInfo::HasSameRules(::System::TimeZoneInfo other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "HasSameRules",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
 ::System::TimeZoneInfo ::System::TimeZoneInfo::get_Local()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "get_Local",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo, false>(nullptr, ___internal_method);
}
 ::StringW ::System::TimeZoneInfo::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::TimeZoneInfo ::System::TimeZoneInfo::get_Utc()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "get_Utc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo, false>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "baseUtcOffset", ty: "::System::TimeSpan", modifiers: "", def_value: None }, CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "standardDisplayName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "daylightDisplayName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "adjustmentRules", ty: "::ArrayW<::System::____System__TimeZoneInfo__AdjustmentRule>", modifiers: "", def_value: None }, CppParam { name: "disableDaylightSavingTime", ty: "bool", modifiers: "", def_value: None }]
 ::System::TimeZoneInfo::TimeZoneInfo(::StringW id, ::System::TimeSpan baseUtcOffset, ::StringW displayName, ::StringW standardDisplayName, ::StringW daylightDisplayName, ::ArrayW<::System::____System__TimeZoneInfo__AdjustmentRule> adjustmentRules, bool disableDaylightSavingTime)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<TimeZoneInfo>(id, baseUtcOffset, displayName, standardDisplayName, daylightDisplayName, adjustmentRules, disableDaylightSavingTime))) {}
 void ::System::TimeZoneInfo::_ctor(::StringW id, ::System::TimeSpan baseUtcOffset, ::StringW displayName, ::StringW standardDisplayName, ::StringW daylightDisplayName, ::ArrayW<::System::____System__TimeZoneInfo__AdjustmentRule> adjustmentRules, bool disableDaylightSavingTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::____System__TimeZoneInfo__AdjustmentRule>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, id, baseUtcOffset, displayName, standardDisplayName, daylightDisplayName, adjustmentRules, disableDaylightSavingTime);
}
 ::System::TimeZoneInfo ::System::TimeZoneInfo::CreateCustomTimeZone(::StringW id, ::System::TimeSpan baseUtcOffset, ::StringW displayName, ::StringW standardDisplayName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "CreateCustomTimeZone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo, false>(nullptr, ___internal_method, id, baseUtcOffset, displayName, standardDisplayName);
}
 ::System::TimeZoneInfo ::System::TimeZoneInfo::CreateCustomTimeZone(::StringW id, ::System::TimeSpan baseUtcOffset, ::StringW displayName, ::StringW standardDisplayName, ::StringW daylightDisplayName, ::ArrayW<::System::____System__TimeZoneInfo__AdjustmentRule> adjustmentRules, bool disableDaylightSavingTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "CreateCustomTimeZone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::____System__TimeZoneInfo__AdjustmentRule>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo, false>(nullptr, ___internal_method, id, baseUtcOffset, displayName, standardDisplayName, daylightDisplayName, adjustmentRules, disableDaylightSavingTime);
}
 void ::System::TimeZoneInfo::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::bs_hook::Il2CppWrapperType sender)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sender);
}
 void ::System::TimeZoneInfo::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
 ::System::TimeZoneInfo::TimeZoneInfo(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<TimeZoneInfo>(info, context))) {}
 void ::System::TimeZoneInfo::_ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 ::System::____System__TimeZoneInfo__AdjustmentRule ::System::TimeZoneInfo::GetAdjustmentRuleForTime(::System::DateTime dateTime, ByRef<::System::Nullable_1<int32_t>> ruleIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetAdjustmentRuleForTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Nullable_1<int32_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::____System__TimeZoneInfo__AdjustmentRule, false>(const_cast<void*>(instance), ___internal_method, dateTime, ruleIndex);
}
 ::System::____System__TimeZoneInfo__AdjustmentRule ::System::TimeZoneInfo::GetAdjustmentRuleForTime(::System::DateTime dateTime, bool dateTimeisUtc, ByRef<::System::Nullable_1<int32_t>> ruleIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetAdjustmentRuleForTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Nullable_1<int32_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::____System__TimeZoneInfo__AdjustmentRule, false>(const_cast<void*>(instance), ___internal_method, dateTime, dateTimeisUtc, ruleIndex);
}
 int32_t ::System::TimeZoneInfo::CompareAdjustmentRuleToDateTime(::System::____System__TimeZoneInfo__AdjustmentRule rule, ::System::____System__TimeZoneInfo__AdjustmentRule previousRule, ::System::DateTime dateTime, ::System::DateTime dateOnly, bool dateTimeisUtc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "CompareAdjustmentRuleToDateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__AdjustmentRule>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__AdjustmentRule>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, rule, previousRule, dateTime, dateOnly, dateTimeisUtc);
}
 ::System::DateTime ::System::TimeZoneInfo::ConvertToUtc(::System::DateTime dateTime, ::System::TimeSpan daylightDelta, ::System::TimeSpan baseUtcOffsetDelta)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "ConvertToUtc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(const_cast<void*>(instance), ___internal_method, dateTime, daylightDelta, baseUtcOffsetDelta);
}
 ::System::DateTime ::System::TimeZoneInfo::ConvertFromUtc(::System::DateTime dateTime, ::System::TimeSpan daylightDelta, ::System::TimeSpan baseUtcOffsetDelta)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "ConvertFromUtc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(const_cast<void*>(instance), ___internal_method, dateTime, daylightDelta, baseUtcOffsetDelta);
}
 ::System::DateTime ::System::TimeZoneInfo::ConvertToFromUtc(::System::DateTime dateTime, ::System::TimeSpan daylightDelta, ::System::TimeSpan baseUtcOffsetDelta, bool convertToUtc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "ConvertToFromUtc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(const_cast<void*>(instance), ___internal_method, dateTime, daylightDelta, baseUtcOffsetDelta, convertToUtc);
}
 ::System::DateTime ::System::TimeZoneInfo::ConvertUtcToTimeZone(int64_t ticks, ::System::TimeZoneInfo destinationTimeZone, ByRef<bool> isAmbiguousLocalDst)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "ConvertUtcToTimeZone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(nullptr, ___internal_method, ticks, destinationTimeZone, isAmbiguousLocalDst);
}
 ::System::Globalization::DaylightTimeStruct ::System::TimeZoneInfo::GetDaylightTime(int32_t year, ::System::____System__TimeZoneInfo__AdjustmentRule rule, ::System::Nullable_1<int32_t> ruleIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetDaylightTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__AdjustmentRule>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::DaylightTimeStruct, false>(const_cast<void*>(instance), ___internal_method, year, rule, ruleIndex);
}
 bool ::System::TimeZoneInfo::GetIsDaylightSavings(::System::DateTime time, ::System::____System__TimeZoneInfo__AdjustmentRule rule, ::System::Globalization::DaylightTimeStruct daylightTime, ::System::TimeZoneInfoOptions flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetIsDaylightSavings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__AdjustmentRule>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DaylightTimeStruct>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfoOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, time, rule, daylightTime, flags);
}
 ::System::TimeSpan ::System::TimeZoneInfo::GetDaylightSavingsStartOffsetFromUtc(::System::TimeSpan baseUtcOffset, ::System::____System__TimeZoneInfo__AdjustmentRule rule, ::System::Nullable_1<int32_t> ruleIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetDaylightSavingsStartOffsetFromUtc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__AdjustmentRule>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(const_cast<void*>(instance), ___internal_method, baseUtcOffset, rule, ruleIndex);
}
 ::System::TimeSpan ::System::TimeZoneInfo::GetDaylightSavingsEndOffsetFromUtc(::System::TimeSpan baseUtcOffset, ::System::____System__TimeZoneInfo__AdjustmentRule rule)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetDaylightSavingsEndOffsetFromUtc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__AdjustmentRule>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(const_cast<void*>(instance), ___internal_method, baseUtcOffset, rule);
}
 bool ::System::TimeZoneInfo::GetIsDaylightSavingsFromUtc(::System::DateTime time, int32_t year, ::System::TimeSpan utc, ::System::____System__TimeZoneInfo__AdjustmentRule rule, ::System::Nullable_1<int32_t> ruleIndex, ByRef<bool> isAmbiguousLocalDst, ::System::TimeZoneInfo zone)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetIsDaylightSavingsFromUtc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__AdjustmentRule>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, time, year, utc, rule, ruleIndex, isAmbiguousLocalDst, zone);
}
 bool ::System::TimeZoneInfo::CheckIsDst(::System::DateTime startTime, ::System::DateTime time, ::System::DateTime endTime, bool ignoreYearAdjustment, ::System::____System__TimeZoneInfo__AdjustmentRule rule)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "CheckIsDst",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__AdjustmentRule>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, startTime, time, endTime, ignoreYearAdjustment, rule);
}
 bool ::System::TimeZoneInfo::GetIsAmbiguousTime(::System::DateTime time, ::System::____System__TimeZoneInfo__AdjustmentRule rule, ::System::Globalization::DaylightTimeStruct daylightTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetIsAmbiguousTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__AdjustmentRule>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DaylightTimeStruct>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, time, rule, daylightTime);
}
 bool ::System::TimeZoneInfo::GetIsInvalidTime(::System::DateTime time, ::System::____System__TimeZoneInfo__AdjustmentRule rule, ::System::Globalization::DaylightTimeStruct daylightTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetIsInvalidTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__AdjustmentRule>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DaylightTimeStruct>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, time, rule, daylightTime);
}
 ::System::TimeSpan ::System::TimeZoneInfo::GetUtcOffset(::System::DateTime time, ::System::TimeZoneInfo zone, ::System::TimeZoneInfoOptions flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetUtcOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfoOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(nullptr, ___internal_method, time, zone, flags);
}
 ::System::TimeSpan ::System::TimeZoneInfo::GetUtcOffsetFromUtc(::System::DateTime time, ::System::TimeZoneInfo zone)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetUtcOffsetFromUtc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(nullptr, ___internal_method, time, zone);
}
 ::System::TimeSpan ::System::TimeZoneInfo::GetUtcOffsetFromUtc(::System::DateTime time, ::System::TimeZoneInfo zone, ByRef<bool> isDaylightSavings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetUtcOffsetFromUtc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(nullptr, ___internal_method, time, zone, isDaylightSavings);
}
 ::System::TimeSpan ::System::TimeZoneInfo::GetUtcOffsetFromUtc(::System::DateTime time, ::System::TimeZoneInfo zone, ByRef<bool> isDaylightSavings, ByRef<bool> isAmbiguousLocalDst)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetUtcOffsetFromUtc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(nullptr, ___internal_method, time, zone, isDaylightSavings, isAmbiguousLocalDst);
}
 ::System::DateTime ::System::TimeZoneInfo::TransitionTimeToDateTime(int32_t year, ::System::____System__TimeZoneInfo__TransitionTime transitionTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "TransitionTimeToDateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__TransitionTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(nullptr, ___internal_method, year, transitionTime);
}
 void ::System::TimeZoneInfo::ValidateTimeZoneInfo(::StringW id, ::System::TimeSpan baseUtcOffset, ::ArrayW<::System::____System__TimeZoneInfo__AdjustmentRule> adjustmentRules, ByRef<bool> adjustmentRulesSupportDst)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "ValidateTimeZoneInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::____System__TimeZoneInfo__AdjustmentRule>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, id, baseUtcOffset, adjustmentRules, adjustmentRulesSupportDst);
}
 bool ::System::TimeZoneInfo::UtcOffsetOutOfRange(::System::TimeSpan offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "UtcOffsetOutOfRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, offset);
}
 ::System::TimeSpan ::System::TimeZoneInfo::GetUtcOffset(::System::TimeSpan baseUtcOffset, ::System::____System__TimeZoneInfo__AdjustmentRule adjustmentRule)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetUtcOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__AdjustmentRule>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(nullptr, ___internal_method, baseUtcOffset, adjustmentRule);
}
 bool ::System::TimeZoneInfo::IsValidAdjustmentRuleOffest(::System::TimeSpan baseUtcOffset, ::System::____System__TimeZoneInfo__AdjustmentRule adjustmentRule)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "IsValidAdjustmentRuleOffest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::____System__TimeZoneInfo__AdjustmentRule>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, baseUtcOffset, adjustmentRule);
}
 void ::System::TimeZoneInfo::NormalizeAdjustmentRuleOffset(::System::TimeSpan baseUtcOffset, ByRef<::System::____System__TimeZoneInfo__AdjustmentRule> adjustmentRule)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "NormalizeAdjustmentRuleOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::____System__TimeZoneInfo__AdjustmentRule>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, baseUtcOffset, adjustmentRule);
}
 ::StringW ::System::TimeZoneInfo::GetTimeZoneDirectoryUnity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "GetTimeZoneDirectoryUnity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 ::System::Collections::Generic::List_1<::System::____System__TimeZoneInfo__AdjustmentRule> ::System::TimeZoneInfo::CreateAdjustmentRule(int32_t year, ByRef<::ArrayW<int64_t>> data, ByRef<::ArrayW<::StringW>> names, ::StringW standardNameCurrentYear, ::StringW daylightNameCurrentYear)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "CreateAdjustmentRule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int64_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::StringW>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::____System__TimeZoneInfo__AdjustmentRule>, false>(nullptr, ___internal_method, year, data, names, standardNameCurrentYear, daylightNameCurrentYear);
}
 ::System::TimeZoneInfo ::System::TimeZoneInfo::CreateLocalUnity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            "CreateLocalUnity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
 ::System::TimeZoneInfo::TimeZoneInfo()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<TimeZoneInfo>())) {}
 void ::System::TimeZoneInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
