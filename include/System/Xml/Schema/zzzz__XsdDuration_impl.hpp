#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/Xml/Schema/zzzz__XsdDuration_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::____System__Xml__Schema__XsdDuration__Parts::____System__Xml__Schema__XsdDuration__Parts(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Xml::Schema::____System__Xml__Schema__XsdDuration__Parts::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Xml::Schema::____System__Xml__Schema__XsdDuration__Parts::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Xml::Schema::____System__Xml__Schema__XsdDuration__Parts  ::System::Xml::Schema::____System__Xml__Schema__XsdDuration__Parts::HasNone{0};
constexpr ::System::Xml::Schema::____System__Xml__Schema__XsdDuration__Parts  ::System::Xml::Schema::____System__Xml__Schema__XsdDuration__Parts::HasYears{1};
constexpr ::System::Xml::Schema::____System__Xml__Schema__XsdDuration__Parts  ::System::Xml::Schema::____System__Xml__Schema__XsdDuration__Parts::HasMonths{2};
constexpr ::System::Xml::Schema::____System__Xml__Schema__XsdDuration__Parts  ::System::Xml::Schema::____System__Xml__Schema__XsdDuration__Parts::HasDays{4};
constexpr ::System::Xml::Schema::____System__Xml__Schema__XsdDuration__Parts  ::System::Xml::Schema::____System__Xml__Schema__XsdDuration__Parts::HasHours{8};
constexpr ::System::Xml::Schema::____System__Xml__Schema__XsdDuration__Parts  ::System::Xml::Schema::____System__Xml__Schema__XsdDuration__Parts::HasMinutes{16};
constexpr ::System::Xml::Schema::____System__Xml__Schema__XsdDuration__Parts  ::System::Xml::Schema::____System__Xml__Schema__XsdDuration__Parts::HasSeconds{32};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::____System__Xml__Schema__XsdDuration__DurationType::____System__Xml__Schema__XsdDuration__DurationType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Xml::Schema::____System__Xml__Schema__XsdDuration__DurationType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Xml::Schema::____System__Xml__Schema__XsdDuration__DurationType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Xml::Schema::____System__Xml__Schema__XsdDuration__DurationType  ::System::Xml::Schema::____System__Xml__Schema__XsdDuration__DurationType::Duration{0};
constexpr ::System::Xml::Schema::____System__Xml__Schema__XsdDuration__DurationType  ::System::Xml::Schema::____System__Xml__Schema__XsdDuration__DurationType::YearMonthDuration{1};
constexpr ::System::Xml::Schema::____System__Xml__Schema__XsdDuration__DurationType  ::System::Xml::Schema::____System__Xml__Schema__XsdDuration__DurationType::DayTimeDuration{2};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdDuration::*)(bool, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::System::Xml::Schema::XsdDuration::_ctor)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2755b40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdDuration::*)(::System::TimeSpan)>(&::System::Xml::Schema::XsdDuration::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2755cb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdDuration::*)(::System::TimeSpan, ::System::Xml::Schema::____System__Xml__Schema__XsdDuration__DurationType)>(&::System::Xml::Schema::XsdDuration::_ctor)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2755d90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::____System__Xml__Schema__XsdDuration__DurationType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdDuration::*)(::StringW, ::System::Xml::Schema::____System__Xml__Schema__XsdDuration__DurationType)>(&::System::Xml::Schema::XsdDuration::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2755f10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::____System__Xml__Schema__XsdDuration__DurationType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration.get_IsNegative
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::XsdDuration::*)()>(&::System::Xml::Schema::XsdDuration::get_IsNegative)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2756694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            "get_IsNegative",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration.get_Years
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::XsdDuration::*)()>(&::System::Xml::Schema::XsdDuration::get_Years)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27566a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            "get_Years",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration.get_Months
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::XsdDuration::*)()>(&::System::Xml::Schema::XsdDuration::get_Months)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27566a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            "get_Months",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration.get_Days
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::XsdDuration::*)()>(&::System::Xml::Schema::XsdDuration::get_Days)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27566b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            "get_Days",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration.get_Hours
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::XsdDuration::*)()>(&::System::Xml::Schema::XsdDuration::get_Hours)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27566b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            "get_Hours",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration.get_Minutes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::XsdDuration::*)()>(&::System::Xml::Schema::XsdDuration::get_Minutes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27566c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            "get_Minutes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration.get_Seconds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::XsdDuration::*)()>(&::System::Xml::Schema::XsdDuration::get_Seconds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27566c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            "get_Seconds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration.get_Nanoseconds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::XsdDuration::*)()>(&::System::Xml::Schema::XsdDuration::get_Nanoseconds)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2756688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            "get_Nanoseconds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration.ToTimeSpan
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::Xml::Schema::XsdDuration::*)(::System::Xml::Schema::____System__Xml__Schema__XsdDuration__DurationType)>(&::System::Xml::Schema::XsdDuration::ToTimeSpan)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x27566d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            "ToTimeSpan",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::____System__Xml__Schema__XsdDuration__DurationType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration.TryToTimeSpan
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception (::System::Xml::Schema::XsdDuration::*)(ByRef<::System::TimeSpan>)>(&::System::Xml::Schema::XsdDuration::TryToTimeSpan)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2756bf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            "TryToTimeSpan",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::TimeSpan>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration.TryToTimeSpan
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception (::System::Xml::Schema::XsdDuration::*)(::System::Xml::Schema::____System__Xml__Schema__XsdDuration__DurationType, ByRef<::System::TimeSpan>)>(&::System::Xml::Schema::XsdDuration::TryToTimeSpan)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x2756718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            "TryToTimeSpan",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::____System__Xml__Schema__XsdDuration__DurationType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::TimeSpan>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::XsdDuration::*)()>(&::System::Xml::Schema::XsdDuration::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2756c04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::Schema::XsdDuration),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::XsdDuration::*)(::System::Xml::Schema::____System__Xml__Schema__XsdDuration__DurationType)>(&::System::Xml::Schema::XsdDuration::ToString)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x2756c0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::____System__Xml__Schema__XsdDuration__DurationType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration.TryParse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception (*)(::StringW, ByRef<::System::Xml::Schema::XsdDuration>)>(&::System::Xml::Schema::XsdDuration::TryParse)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2757008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            "TryParse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Xml::Schema::XsdDuration>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration.TryParse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception (*)(::StringW, ::System::Xml::Schema::____System__Xml__Schema__XsdDuration__DurationType, ByRef<::System::Xml::Schema::XsdDuration>)>(&::System::Xml::Schema::XsdDuration::TryParse)> {
  constexpr static std::size_t size = 0x6ec;
  constexpr static std::size_t addrs = 0x2755f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            "TryParse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::____System__Xml__Schema__XsdDuration__DurationType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Xml::Schema::XsdDuration>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration.TryParseDigits
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ByRef<int32_t>, bool, ByRef<int32_t>, ByRef<int32_t>)>(&::System::Xml::Schema::XsdDuration::TryParseDigits)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2757014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            "TryParseDigits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "years", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "months", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "days", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "hours", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "minutes", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "seconds", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nanoseconds", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::XsdDuration::XsdDuration(int32_t years, int32_t months, int32_t days, int32_t hours, int32_t minutes, int32_t seconds, uint32_t nanoseconds) noexcept : ::bs_hook::ValueTypeWrapper() {this->years = years;
this->months = months;
this->days = days;
this->hours = hours;
this->minutes = minutes;
this->seconds = seconds;
this->nanoseconds = nanoseconds;
}
constexpr void ::System::Xml::Schema::XsdDuration::__set_years(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Xml::Schema::XsdDuration::__get_years() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::System::Xml::Schema::XsdDuration::__set_months(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Xml::Schema::XsdDuration::__get_months() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void ::System::Xml::Schema::XsdDuration::__set_days(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Xml::Schema::XsdDuration::__get_days() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void ::System::Xml::Schema::XsdDuration::__set_hours(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Xml::Schema::XsdDuration::__get_hours() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
constexpr void ::System::Xml::Schema::XsdDuration::__set_minutes(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Xml::Schema::XsdDuration::__get_minutes() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void ::System::Xml::Schema::XsdDuration::__set_seconds(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Xml::Schema::XsdDuration::__get_seconds() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->__instance);
}
constexpr void ::System::Xml::Schema::XsdDuration::__set_nanoseconds(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x18>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::System::Xml::Schema::XsdDuration::__get_nanoseconds() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x18>(this->__instance);
}
 void ::System::Xml::Schema::XsdDuration::_ctor(bool isNegative, int32_t years, int32_t months, int32_t days, int32_t hours, int32_t minutes, int32_t seconds, int32_t nanoseconds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, isNegative, years, months, days, hours, minutes, seconds, nanoseconds);
}
 void ::System::Xml::Schema::XsdDuration::_ctor(::System::TimeSpan timeSpan)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, timeSpan);
}
 void ::System::Xml::Schema::XsdDuration::_ctor(::System::TimeSpan timeSpan, ::System::Xml::Schema::____System__Xml__Schema__XsdDuration__DurationType durationType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::____System__Xml__Schema__XsdDuration__DurationType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, timeSpan, durationType);
}
 void ::System::Xml::Schema::XsdDuration::_ctor(::StringW s, ::System::Xml::Schema::____System__Xml__Schema__XsdDuration__DurationType durationType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::____System__Xml__Schema__XsdDuration__DurationType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, s, durationType);
}
 bool ::System::Xml::Schema::XsdDuration::get_IsNegative()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            "get_IsNegative",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t ::System::Xml::Schema::XsdDuration::get_Years()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            "get_Years",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t ::System::Xml::Schema::XsdDuration::get_Months()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            "get_Months",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t ::System::Xml::Schema::XsdDuration::get_Days()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            "get_Days",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t ::System::Xml::Schema::XsdDuration::get_Hours()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            "get_Hours",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t ::System::Xml::Schema::XsdDuration::get_Minutes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            "get_Minutes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t ::System::Xml::Schema::XsdDuration::get_Seconds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            "get_Seconds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t ::System::Xml::Schema::XsdDuration::get_Nanoseconds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            "get_Nanoseconds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::System::TimeSpan ::System::Xml::Schema::XsdDuration::ToTimeSpan(::System::Xml::Schema::____System__Xml__Schema__XsdDuration__DurationType durationType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            "ToTimeSpan",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::____System__Xml__Schema__XsdDuration__DurationType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, durationType);
}
 ::System::Exception ::System::Xml::Schema::XsdDuration::TryToTimeSpan(ByRef<::System::TimeSpan> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            "TryToTimeSpan",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::TimeSpan>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Exception, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, result);
}
 ::System::Exception ::System::Xml::Schema::XsdDuration::TryToTimeSpan(::System::Xml::Schema::____System__Xml__Schema__XsdDuration__DurationType durationType, ByRef<::System::TimeSpan> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            "TryToTimeSpan",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::____System__Xml__Schema__XsdDuration__DurationType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::TimeSpan>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Exception, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, durationType, result);
}
 ::StringW ::System::Xml::Schema::XsdDuration::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW ::System::Xml::Schema::XsdDuration::ToString(::System::Xml::Schema::____System__Xml__Schema__XsdDuration__DurationType durationType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::____System__Xml__Schema__XsdDuration__DurationType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, durationType);
}
 ::System::Exception ::System::Xml::Schema::XsdDuration::TryParse(::StringW s, ByRef<::System::Xml::Schema::XsdDuration> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            "TryParse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Xml::Schema::XsdDuration>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Exception, false>(nullptr, ___internal_method, s, result);
}
 ::System::Exception ::System::Xml::Schema::XsdDuration::TryParse(::StringW s, ::System::Xml::Schema::____System__Xml__Schema__XsdDuration__DurationType durationType, ByRef<::System::Xml::Schema::XsdDuration> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            "TryParse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::____System__Xml__Schema__XsdDuration__DurationType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Xml::Schema::XsdDuration>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Exception, false>(nullptr, ___internal_method, s, durationType, result);
}
 ::StringW ::System::Xml::Schema::XsdDuration::TryParseDigits(::StringW s, ByRef<int32_t> offset, bool eatDigits, ByRef<int32_t> result, ByRef<int32_t> numDigits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDuration>::get(),
                            "TryParseDigits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, s, offset, eatDigits, result, numDigits);
}
} // end anonymous namespace
