#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/zzzz__ParsingInfo_def.hpp"
#include "System/zzzz__DateTimeParse_def.hpp"
#include "System/zzzz__DateTimeParse_def.hpp"
#include "System/Globalization/zzzz__Calendar_def.hpp"
//  Writing Method size for method: ::System::ParsingInfo.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ParsingInfo::*)()>(&::System::ParsingInfo::Init)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2438bbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ParsingInfo>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "calendar", ty: "::System::Globalization::Calendar", modifiers: "", def_value: Some("csnull") }, CppParam { name: "dayOfWeek", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "timeMark", ty: "::System::____System__DateTimeParse__TM", modifiers: "", def_value: Some("{}") }, CppParam { name: "fUseHour12", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "fUseTwoDigitYear", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "fAllowInnerWhite", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "fAllowTrailingWhite", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "fCustomNumberParser", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "parseNumberDelegate", ty: "::System::____System__DateTimeParse__MatchNumberDelegate", modifiers: "", def_value: Some("csnull") }]
constexpr ::System::ParsingInfo::ParsingInfo(::System::Globalization::Calendar calendar, int32_t dayOfWeek, ::System::____System__DateTimeParse__TM timeMark, bool fUseHour12, bool fUseTwoDigitYear, bool fAllowInnerWhite, bool fAllowTrailingWhite, bool fCustomNumberParser, ::System::____System__DateTimeParse__MatchNumberDelegate parseNumberDelegate) noexcept : ::bs_hook::ValueTypeWrapper() {this->calendar = calendar;
this->dayOfWeek = dayOfWeek;
this->timeMark = timeMark;
this->fUseHour12 = fUseHour12;
this->fUseTwoDigitYear = fUseTwoDigitYear;
this->fAllowInnerWhite = fAllowInnerWhite;
this->fAllowTrailingWhite = fAllowTrailingWhite;
this->fCustomNumberParser = fCustomNumberParser;
this->parseNumberDelegate = parseNumberDelegate;
}
constexpr void ::System::ParsingInfo::__set_calendar(::System::Globalization::Calendar value)  {
::cordl_internals::setInstanceField<::System::Globalization::Calendar, 0x0>(this->__instance, std::forward<::System::Globalization::Calendar>(value));
}
constexpr ::System::Globalization::Calendar ::System::ParsingInfo::__get_calendar() const {
return ::cordl_internals::getInstanceField<::System::Globalization::Calendar, 0x0>(this->__instance);
}
constexpr void ::System::ParsingInfo::__set_dayOfWeek(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::ParsingInfo::__get_dayOfWeek() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void ::System::ParsingInfo::__set_timeMark(::System::____System__DateTimeParse__TM value)  {
::cordl_internals::setInstanceField<::System::____System__DateTimeParse__TM, 0xc>(this->__instance, std::forward<::System::____System__DateTimeParse__TM>(value));
}
constexpr ::System::____System__DateTimeParse__TM ::System::ParsingInfo::__get_timeMark() const {
return ::cordl_internals::getInstanceField<::System::____System__DateTimeParse__TM, 0xc>(this->__instance);
}
constexpr void ::System::ParsingInfo::__set_fUseHour12(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::System::ParsingInfo::__get_fUseHour12() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->__instance);
}
constexpr void ::System::ParsingInfo::__set_fUseTwoDigitYear(bool value)  {
::cordl_internals::setInstanceField<bool, 0x11>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::System::ParsingInfo::__get_fUseTwoDigitYear() const {
return ::cordl_internals::getInstanceField<bool, 0x11>(this->__instance);
}
constexpr void ::System::ParsingInfo::__set_fAllowInnerWhite(bool value)  {
::cordl_internals::setInstanceField<bool, 0x12>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::System::ParsingInfo::__get_fAllowInnerWhite() const {
return ::cordl_internals::getInstanceField<bool, 0x12>(this->__instance);
}
constexpr void ::System::ParsingInfo::__set_fAllowTrailingWhite(bool value)  {
::cordl_internals::setInstanceField<bool, 0x13>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::System::ParsingInfo::__get_fAllowTrailingWhite() const {
return ::cordl_internals::getInstanceField<bool, 0x13>(this->__instance);
}
constexpr void ::System::ParsingInfo::__set_fCustomNumberParser(bool value)  {
::cordl_internals::setInstanceField<bool, 0x14>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::System::ParsingInfo::__get_fCustomNumberParser() const {
return ::cordl_internals::getInstanceField<bool, 0x14>(this->__instance);
}
constexpr void ::System::ParsingInfo::__set_parseNumberDelegate(::System::____System__DateTimeParse__MatchNumberDelegate value)  {
::cordl_internals::setInstanceField<::System::____System__DateTimeParse__MatchNumberDelegate, 0x18>(this->__instance, std::forward<::System::____System__DateTimeParse__MatchNumberDelegate>(value));
}
constexpr ::System::____System__DateTimeParse__MatchNumberDelegate ::System::ParsingInfo::__get_parseNumberDelegate() const {
return ::cordl_internals::getInstanceField<::System::____System__DateTimeParse__MatchNumberDelegate, 0x18>(this->__instance);
}
 void ::System::ParsingInfo::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ParsingInfo>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
} // end anonymous namespace
