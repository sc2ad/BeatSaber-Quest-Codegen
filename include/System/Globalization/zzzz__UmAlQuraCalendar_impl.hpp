#pragma once
#include "System/Globalization/zzzz__Calendar_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/Globalization/zzzz__UmAlQuraCalendar_def.hpp"
#include "System/zzzz__DayOfWeek_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::System::Globalization::____System__Globalization__UmAlQuraCalendar__DateMapping._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::____System__Globalization__UmAlQuraCalendar__DateMapping::*)(int32_t, int32_t, int32_t, int32_t)>(&::System::Globalization::____System__Globalization__UmAlQuraCalendar__DateMapping::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x23fb4c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::____System__Globalization__UmAlQuraCalendar__DateMapping>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "HijriMonthsLengthFlags", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "GregorianDate", ty: "::System::DateTime", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::____System__Globalization__UmAlQuraCalendar__DateMapping::____System__Globalization__UmAlQuraCalendar__DateMapping(int32_t HijriMonthsLengthFlags, ::System::DateTime GregorianDate) noexcept : ::bs_hook::ValueTypeWrapper() {this->HijriMonthsLengthFlags = HijriMonthsLengthFlags;
this->GregorianDate = GregorianDate;
}
constexpr void ::System::Globalization::____System__Globalization__UmAlQuraCalendar__DateMapping::__set_HijriMonthsLengthFlags(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Globalization::____System__Globalization__UmAlQuraCalendar__DateMapping::__get_HijriMonthsLengthFlags() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::System::Globalization::____System__Globalization__UmAlQuraCalendar__DateMapping::__set_GregorianDate(::System::DateTime value)  {
::cordl_internals::setInstanceField<::System::DateTime, 0x8>(this->__instance, std::forward<::System::DateTime>(value));
}
constexpr ::System::DateTime ::System::Globalization::____System__Globalization__UmAlQuraCalendar__DateMapping::__get_GregorianDate() const {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x8>(this->__instance);
}
 void ::System::Globalization::____System__Globalization__UmAlQuraCalendar__DateMapping::_ctor(int32_t MonthsLengthFlags, int32_t GYear, int32_t GMonth, int32_t GDay)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::____System__Globalization__UmAlQuraCalendar__DateMapping>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, MonthsLengthFlags, GYear, GMonth, GDay);
}
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.InitDateMapping
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Globalization::____System__Globalization__UmAlQuraCalendar__DateMapping> (*)()>(&::System::Globalization::UmAlQuraCalendar::InitDateMapping)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x23fb364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            "InitDateMapping",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.get_MinSupportedDateTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::Globalization::UmAlQuraCalendar::*)()>(&::System::Globalization::UmAlQuraCalendar::get_MinSupportedDateTime)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23fb508;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Globalization::UmAlQuraCalendar),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.get_MaxSupportedDateTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::Globalization::UmAlQuraCalendar::*)()>(&::System::Globalization::UmAlQuraCalendar::get_MaxSupportedDateTime)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23fb560;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Globalization::UmAlQuraCalendar),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::UmAlQuraCalendar::*)()>(&::System::Globalization::UmAlQuraCalendar::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23fb5b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.get_BaseCalendarID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Globalization::UmAlQuraCalendar::*)()>(&::System::Globalization::UmAlQuraCalendar::get_BaseCalendarID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23fb5c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Globalization::UmAlQuraCalendar),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.get_ID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Globalization::UmAlQuraCalendar::*)()>(&::System::Globalization::UmAlQuraCalendar::get_ID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23fb5c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Globalization::UmAlQuraCalendar),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.ConvertHijriToGregorian
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, int32_t, int32_t, ByRef<int32_t>, ByRef<int32_t>, ByRef<int32_t>)>(&::System::Globalization::UmAlQuraCalendar::ConvertHijriToGregorian)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x23fb5d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            "ConvertHijriToGregorian",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.GetAbsoluteDateUmAlQura
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int32_t, int32_t, int32_t)>(&::System::Globalization::UmAlQuraCalendar::GetAbsoluteDateUmAlQura)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x23fb710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            "GetAbsoluteDateUmAlQura",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.CheckTicksRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int64_t)>(&::System::Globalization::UmAlQuraCalendar::CheckTicksRange)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x23fb7d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            "CheckTicksRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.CheckEraRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::System::Globalization::UmAlQuraCalendar::CheckEraRange)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x23fb984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            "CheckEraRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.CheckYearRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, int32_t)>(&::System::Globalization::UmAlQuraCalendar::CheckYearRange)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x23fba00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            "CheckYearRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.CheckYearMonthRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, int32_t, int32_t)>(&::System::Globalization::UmAlQuraCalendar::CheckYearMonthRange)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x23fbb48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            "CheckYearMonthRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.ConvertGregorianToHijri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::DateTime, ByRef<int32_t>, ByRef<int32_t>, ByRef<int32_t>)>(&::System::Globalization::UmAlQuraCalendar::ConvertGregorianToHijri)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x23fbc28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            "ConvertGregorianToHijri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.GetDatePart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Globalization::UmAlQuraCalendar::*)(::System::DateTime, int32_t)>(&::System::Globalization::UmAlQuraCalendar::GetDatePart)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x23fbe80;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Globalization::UmAlQuraCalendar),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.GetDayOfMonth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Globalization::UmAlQuraCalendar::*)(::System::DateTime)>(&::System::Globalization::UmAlQuraCalendar::GetDayOfMonth)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x23fbfec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Globalization::UmAlQuraCalendar),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.GetDayOfWeek
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DayOfWeek (::System::Globalization::UmAlQuraCalendar::*)(::System::DateTime)>(&::System::Globalization::UmAlQuraCalendar::GetDayOfWeek)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x23fc000;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Globalization::UmAlQuraCalendar),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.GetDaysInMonth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Globalization::UmAlQuraCalendar::*)(int32_t, int32_t, int32_t)>(&::System::Globalization::UmAlQuraCalendar::GetDaysInMonth)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x23fc068;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Globalization::UmAlQuraCalendar),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.RealGetDaysInYear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::System::Globalization::UmAlQuraCalendar::RealGetDaysInYear)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x23fc120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            "RealGetDaysInYear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.GetDaysInYear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Globalization::UmAlQuraCalendar::*)(int32_t, int32_t)>(&::System::Globalization::UmAlQuraCalendar::GetDaysInYear)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x23fc1c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Globalization::UmAlQuraCalendar),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.GetEra
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Globalization::UmAlQuraCalendar::*)(::System::DateTime)>(&::System::Globalization::UmAlQuraCalendar::GetEra)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x23fc22c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Globalization::UmAlQuraCalendar),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.get_Eras
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (::System::Globalization::UmAlQuraCalendar::*)()>(&::System::Globalization::UmAlQuraCalendar::get_Eras)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x23fc29c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Globalization::UmAlQuraCalendar),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.GetMonth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Globalization::UmAlQuraCalendar::*)(::System::DateTime)>(&::System::Globalization::UmAlQuraCalendar::GetMonth)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x23fc300;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Globalization::UmAlQuraCalendar),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.GetMonthsInYear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Globalization::UmAlQuraCalendar::*)(int32_t, int32_t)>(&::System::Globalization::UmAlQuraCalendar::GetMonthsInYear)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x23fc314;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Globalization::UmAlQuraCalendar),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.GetYear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Globalization::UmAlQuraCalendar::*)(::System::DateTime)>(&::System::Globalization::UmAlQuraCalendar::GetYear)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x23fc380;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Globalization::UmAlQuraCalendar),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.IsLeapYear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::UmAlQuraCalendar::*)(int32_t, int32_t)>(&::System::Globalization::UmAlQuraCalendar::IsLeapYear)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x23fc394;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Globalization::UmAlQuraCalendar),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.ToDateTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::Globalization::UmAlQuraCalendar::*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::System::Globalization::UmAlQuraCalendar::ToDateTime)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x23fc40c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Globalization::UmAlQuraCalendar),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.get_TwoDigitYearMax
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Globalization::UmAlQuraCalendar::*)()>(&::System::Globalization::UmAlQuraCalendar::get_TwoDigitYearMax)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x23fc660;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Globalization::UmAlQuraCalendar),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.set_TwoDigitYearMax
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::UmAlQuraCalendar::*)(int32_t)>(&::System::Globalization::UmAlQuraCalendar::set_TwoDigitYearMax)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x23fc69c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Globalization::UmAlQuraCalendar),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.ToFourDigitYear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Globalization::UmAlQuraCalendar::*)(int32_t)>(&::System::Globalization::UmAlQuraCalendar::ToFourDigitYear)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x23fc7bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Globalization::UmAlQuraCalendar),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
 void ::System::Globalization::UmAlQuraCalendar::__set_HijriYearInfo(::ArrayW<::System::Globalization::____System__Globalization__UmAlQuraCalendar__DateMapping> value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Globalization::____System__Globalization__UmAlQuraCalendar__DateMapping>, "HijriYearInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get>(std::forward<::ArrayW<::System::Globalization::____System__Globalization__UmAlQuraCalendar__DateMapping>>(value));
}
 ::ArrayW<::System::Globalization::____System__Globalization__UmAlQuraCalendar__DateMapping> ::System::Globalization::UmAlQuraCalendar::__get_HijriYearInfo()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Globalization::____System__Globalization__UmAlQuraCalendar__DateMapping>, "HijriYearInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get>();
}
 void ::System::Globalization::UmAlQuraCalendar::__set_minDate(::System::DateTime value)  {
::cordl_internals::setStaticField<::System::DateTime, "minDate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get>(std::forward<::System::DateTime>(value));
}
 ::System::DateTime ::System::Globalization::UmAlQuraCalendar::__get_minDate()  {
return ::cordl_internals::getStaticField<::System::DateTime, "minDate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get>();
}
 void ::System::Globalization::UmAlQuraCalendar::__set_maxDate(::System::DateTime value)  {
::cordl_internals::setStaticField<::System::DateTime, "maxDate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get>(std::forward<::System::DateTime>(value));
}
 ::System::DateTime ::System::Globalization::UmAlQuraCalendar::__get_maxDate()  {
return ::cordl_internals::getStaticField<::System::DateTime, "maxDate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get>();
}
 ::ArrayW<::System::Globalization::____System__Globalization__UmAlQuraCalendar__DateMapping> ::System::Globalization::UmAlQuraCalendar::InitDateMapping()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            "InitDateMapping",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Globalization::____System__Globalization__UmAlQuraCalendar__DateMapping>, false>(nullptr, ___internal_method);
}
 ::System::DateTime ::System::Globalization::UmAlQuraCalendar::get_MinSupportedDateTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            "get_MinSupportedDateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::DateTime ::System::Globalization::UmAlQuraCalendar::get_MaxSupportedDateTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            "get_MaxSupportedDateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::System::Globalization::UmAlQuraCalendar::UmAlQuraCalendar()  : ::System::Globalization::Calendar(THROW_UNLESS(::il2cpp_utils::New<UmAlQuraCalendar>())) {}
 void ::System::Globalization::UmAlQuraCalendar::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::System::Globalization::UmAlQuraCalendar::get_BaseCalendarID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            "get_BaseCalendarID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::System::Globalization::UmAlQuraCalendar::get_ID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            "get_ID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Globalization::UmAlQuraCalendar::ConvertHijriToGregorian(int32_t HijriYear, int32_t HijriMonth, int32_t HijriDay, ByRef<int32_t> yg, ByRef<int32_t> mg, ByRef<int32_t> dg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            "ConvertHijriToGregorian",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, HijriYear, HijriMonth, HijriDay, yg, mg, dg);
}
 int64_t ::System::Globalization::UmAlQuraCalendar::GetAbsoluteDateUmAlQura(int32_t year, int32_t month, int32_t day)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            "GetAbsoluteDateUmAlQura",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, year, month, day);
}
 void ::System::Globalization::UmAlQuraCalendar::CheckTicksRange(int64_t ticks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            "CheckTicksRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ticks);
}
 void ::System::Globalization::UmAlQuraCalendar::CheckEraRange(int32_t era)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            "CheckEraRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, era);
}
 void ::System::Globalization::UmAlQuraCalendar::CheckYearRange(int32_t year, int32_t era)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            "CheckYearRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, year, era);
}
 void ::System::Globalization::UmAlQuraCalendar::CheckYearMonthRange(int32_t year, int32_t month, int32_t era)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            "CheckYearMonthRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, year, month, era);
}
 void ::System::Globalization::UmAlQuraCalendar::ConvertGregorianToHijri(::System::DateTime time, ByRef<int32_t> HijriYear, ByRef<int32_t> HijriMonth, ByRef<int32_t> HijriDay)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            "ConvertGregorianToHijri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, time, HijriYear, HijriMonth, HijriDay);
}
 int32_t ::System::Globalization::UmAlQuraCalendar::GetDatePart(::System::DateTime time, int32_t part)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            "GetDatePart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, time, part);
}
 int32_t ::System::Globalization::UmAlQuraCalendar::GetDayOfMonth(::System::DateTime time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            "GetDayOfMonth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, time);
}
 ::System::DayOfWeek ::System::Globalization::UmAlQuraCalendar::GetDayOfWeek(::System::DateTime time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            "GetDayOfWeek",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DayOfWeek, false>(const_cast<void*>(instance), ___internal_method, time);
}
 int32_t ::System::Globalization::UmAlQuraCalendar::GetDaysInMonth(int32_t year, int32_t month, int32_t era)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            "GetDaysInMonth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, year, month, era);
}
 int32_t ::System::Globalization::UmAlQuraCalendar::RealGetDaysInYear(int32_t year)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            "RealGetDaysInYear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, year);
}
 int32_t ::System::Globalization::UmAlQuraCalendar::GetDaysInYear(int32_t year, int32_t era)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            "GetDaysInYear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, year, era);
}
 int32_t ::System::Globalization::UmAlQuraCalendar::GetEra(::System::DateTime time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            "GetEra",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, time);
}
 ::ArrayW<int32_t> ::System::Globalization::UmAlQuraCalendar::get_Eras()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            "get_Eras",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::System::Globalization::UmAlQuraCalendar::GetMonth(::System::DateTime time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            "GetMonth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, time);
}
 int32_t ::System::Globalization::UmAlQuraCalendar::GetMonthsInYear(int32_t year, int32_t era)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            "GetMonthsInYear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, year, era);
}
 int32_t ::System::Globalization::UmAlQuraCalendar::GetYear(::System::DateTime time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            "GetYear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, time);
}
 bool ::System::Globalization::UmAlQuraCalendar::IsLeapYear(int32_t year, int32_t era)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            "IsLeapYear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, year, era);
}
 ::System::DateTime ::System::Globalization::UmAlQuraCalendar::ToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            "ToDateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(const_cast<void*>(instance), ___internal_method, year, month, day, hour, minute, second, millisecond, era);
}
 int32_t ::System::Globalization::UmAlQuraCalendar::get_TwoDigitYearMax()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            "get_TwoDigitYearMax",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Globalization::UmAlQuraCalendar::set_TwoDigitYearMax(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            "set_TwoDigitYearMax",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::System::Globalization::UmAlQuraCalendar::ToFourDigitYear(int32_t year)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::UmAlQuraCalendar>::get(),
                            "ToFourDigitYear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, year);
}
} // end anonymous namespace
