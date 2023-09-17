#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/zzzz__DateTimeRawInfo_def.hpp"
#include "System/zzzz__DateTimeParse_def.hpp"
//  Writing Method size for method: ::System::DateTimeRawInfo.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::DateTimeRawInfo::*)(void*)>(&::System::DateTimeRawInfo::Init)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x24389d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeRawInfo>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeRawInfo.AddNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::DateTimeRawInfo::*)(int32_t)>(&::System::DateTimeRawInfo::AddNumber)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x24389f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeRawInfo>::get(),
                            "AddNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeRawInfo.GetNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::DateTimeRawInfo::*)(int32_t)>(&::System::DateTimeRawInfo::GetNumber)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2438a10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeRawInfo>::get(),
                            "GetNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "num", ty: "void*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "numCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "month", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "year", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "dayOfWeek", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "era", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "timeMark", ty: "::System::____System__DateTimeParse__TM", modifiers: "", def_value: Some("{}") }, CppParam { name: "fraction", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasSameDateAndTimeSeparators", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::System::DateTimeRawInfo::DateTimeRawInfo(void* num, int32_t numCount, int32_t month, int32_t year, int32_t dayOfWeek, int32_t era, ::System::____System__DateTimeParse__TM timeMark, double_t fraction, bool hasSameDateAndTimeSeparators) noexcept : ::bs_hook::ValueTypeWrapper() {this->num = num;
this->numCount = numCount;
this->month = month;
this->year = year;
this->dayOfWeek = dayOfWeek;
this->era = era;
this->timeMark = timeMark;
this->fraction = fraction;
this->hasSameDateAndTimeSeparators = hasSameDateAndTimeSeparators;
}
constexpr void ::System::DateTimeRawInfo::__set_num(void* value)  {
::cordl_internals::setInstanceField<void*, 0x0>(this->__instance, std::forward<void*>(value));
}
constexpr void* ::System::DateTimeRawInfo::__get_num() const {
return ::cordl_internals::getInstanceField<void*, 0x0>(this->__instance);
}
constexpr void ::System::DateTimeRawInfo::__set_numCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::DateTimeRawInfo::__get_numCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void ::System::DateTimeRawInfo::__set_month(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::DateTimeRawInfo::__get_month() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
constexpr void ::System::DateTimeRawInfo::__set_year(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::DateTimeRawInfo::__get_year() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void ::System::DateTimeRawInfo::__set_dayOfWeek(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::DateTimeRawInfo::__get_dayOfWeek() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->__instance);
}
constexpr void ::System::DateTimeRawInfo::__set_era(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::DateTimeRawInfo::__get_era() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->__instance);
}
constexpr void ::System::DateTimeRawInfo::__set_timeMark(::System::____System__DateTimeParse__TM value)  {
::cordl_internals::setInstanceField<::System::____System__DateTimeParse__TM, 0x1c>(this->__instance, std::forward<::System::____System__DateTimeParse__TM>(value));
}
constexpr ::System::____System__DateTimeParse__TM ::System::DateTimeRawInfo::__get_timeMark() const {
return ::cordl_internals::getInstanceField<::System::____System__DateTimeParse__TM, 0x1c>(this->__instance);
}
constexpr void ::System::DateTimeRawInfo::__set_fraction(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x20>(this->__instance, std::forward<double_t>(value));
}
constexpr double_t ::System::DateTimeRawInfo::__get_fraction() const {
return ::cordl_internals::getInstanceField<double_t, 0x20>(this->__instance);
}
constexpr void ::System::DateTimeRawInfo::__set_hasSameDateAndTimeSeparators(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::System::DateTimeRawInfo::__get_hasSameDateAndTimeSeparators() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->__instance);
}
 void ::System::DateTimeRawInfo::Init(void* numberBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeRawInfo>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, numberBuffer);
}
 void ::System::DateTimeRawInfo::AddNumber(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeRawInfo>::get(),
                            "AddNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 int32_t ::System::DateTimeRawInfo::GetNumber(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeRawInfo>::get(),
                            "GetNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index);
}
} // end anonymous namespace
