#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/Xml/Schema/zzzz__XsdDateTime_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/Xml/Schema/zzzz__XmlTypeCode_def.hpp"
#include "System/Xml/Schema/zzzz__XsdDateTimeFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__DateTimeTypeCode::____System__Xml__Schema__XsdDateTime__DateTimeTypeCode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__DateTimeTypeCode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__DateTimeTypeCode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__DateTimeTypeCode  ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__DateTimeTypeCode::DateTime{0};
constexpr ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__DateTimeTypeCode  ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__DateTimeTypeCode::Time{1};
constexpr ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__DateTimeTypeCode  ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__DateTimeTypeCode::Date{2};
constexpr ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__DateTimeTypeCode  ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__DateTimeTypeCode::GYearMonth{3};
constexpr ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__DateTimeTypeCode  ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__DateTimeTypeCode::GYear{4};
constexpr ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__DateTimeTypeCode  ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__DateTimeTypeCode::GMonthDay{5};
constexpr ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__DateTimeTypeCode  ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__DateTimeTypeCode::GDay{6};
constexpr ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__DateTimeTypeCode  ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__DateTimeTypeCode::GMonth{7};
constexpr ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__DateTimeTypeCode  ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__DateTimeTypeCode::XdrDateTime{8};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__XsdDateTimeKind::____System__Xml__Schema__XsdDateTime__XsdDateTimeKind(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__XsdDateTimeKind::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__XsdDateTimeKind::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__XsdDateTimeKind  ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__XsdDateTimeKind::Unspecified{0};
constexpr ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__XsdDateTimeKind  ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__XsdDateTimeKind::Zulu{1};
constexpr ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__XsdDateTimeKind  ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__XsdDateTimeKind::LocalWestOfZulu{2};
constexpr ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__XsdDateTimeKind  ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__XsdDateTimeKind::LocalEastOfZulu{3};
//  Writing Method size for method: ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser.Parse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::*)(::StringW, ::System::Xml::Schema::XsdDateTimeFlags)>(&::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::Parse)> {
  constexpr static std::size_t size = 0x8b0;
  constexpr static std::size_t addrs = 0x275302c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTimeFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser.ParseDate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::*)(int32_t)>(&::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::ParseDate)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x2755184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser>::get(),
                            "ParseDate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser.ParseTimeAndZoneAndWhitespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::*)(int32_t)>(&::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::ParseTimeAndZoneAndWhitespace)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2755368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser>::get(),
                            "ParseTimeAndZoneAndWhitespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser.ParseTimeAndWhitespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::*)(int32_t)>(&::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::ParseTimeAndWhitespace)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27555c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser>::get(),
                            "ParseTimeAndWhitespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser.ParseTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::*)(ByRef<int32_t>)>(&::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::ParseTime)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x27557bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser>::get(),
                            "ParseTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser.ParseZoneAndWhitespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::*)(int32_t)>(&::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::ParseZoneAndWhitespace)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x27553ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser>::get(),
                            "ParseZoneAndWhitespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser.Parse4Dig
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::*)(int32_t, ByRef<int32_t>)>(&::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::Parse4Dig)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2755618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser>::get(),
                            "Parse4Dig",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser.Parse2Dig
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::*)(int32_t, ByRef<int32_t>)>(&::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::Parse2Dig)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2755724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser>::get(),
                            "Parse2Dig",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser.ParseChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::*)(int32_t, char16_t)>(&::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::ParseChar)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2755324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser>::get(),
                            "ParseChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser.Test
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Xml::Schema::XsdDateTimeFlags, ::System::Xml::Schema::XsdDateTimeFlags)>(&::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::Test)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2755178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser>::get(),
                            "Test",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTimeFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTimeFlags>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "typeCode", ty: "::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__DateTimeTypeCode", modifiers: "", def_value: Some("{}") }, CppParam { name: "year", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "month", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "day", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "hour", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "minute", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "second", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fraction", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "kind", ty: "::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__XsdDateTimeKind", modifiers: "", def_value: Some("{}") }, CppParam { name: "zoneHour", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "zoneMinute", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::____System__Xml__Schema__XsdDateTime__Parser(::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__DateTimeTypeCode typeCode, int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t fraction, ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__XsdDateTimeKind kind, int32_t zoneHour, int32_t zoneMinute, ::StringW text, int32_t length) noexcept : ::bs_hook::ValueTypeWrapper() {this->typeCode = typeCode;
this->year = year;
this->month = month;
this->day = day;
this->hour = hour;
this->minute = minute;
this->second = second;
this->fraction = fraction;
this->kind = kind;
this->zoneHour = zoneHour;
this->zoneMinute = zoneMinute;
this->text = text;
this->length = length;
}
constexpr void ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::__set_typeCode(::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__DateTimeTypeCode value)  {
::cordl_internals::setInstanceField<::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__DateTimeTypeCode, 0x0>(this->__instance, std::forward<::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__DateTimeTypeCode>(value));
}
constexpr ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__DateTimeTypeCode ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::__get_typeCode() const {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__DateTimeTypeCode, 0x0>(this->__instance);
}
constexpr void ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::__set_year(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::__get_year() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::__set_month(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::__get_month() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::__set_day(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::__get_day() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
constexpr void ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::__set_hour(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::__get_hour() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::__set_minute(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::__get_minute() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->__instance);
}
constexpr void ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::__set_second(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::__get_second() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->__instance);
}
constexpr void ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::__set_fraction(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::__get_fraction() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->__instance);
}
constexpr void ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::__set_kind(::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__XsdDateTimeKind value)  {
::cordl_internals::setInstanceField<::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__XsdDateTimeKind, 0x20>(this->__instance, std::forward<::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__XsdDateTimeKind>(value));
}
constexpr ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__XsdDateTimeKind ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::__get_kind() const {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__XsdDateTimeKind, 0x20>(this->__instance);
}
constexpr void ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::__set_zoneHour(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::__get_zoneHour() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->__instance);
}
constexpr void ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::__set_zoneMinute(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::__get_zoneMinute() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->__instance);
}
constexpr void ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::__set_text(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::__get_text() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->__instance);
}
constexpr void ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::__set_length(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::__get_length() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->__instance);
}
 void ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::__set_Power10(::ArrayW<int32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "Power10", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser>::get>(std::forward<::ArrayW<int32_t>>(value));
}
 ::ArrayW<int32_t> ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::__get_Power10()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "Power10", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser>::get>();
}
 bool ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::Parse(::StringW text, ::System::Xml::Schema::XsdDateTimeFlags kinds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTimeFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, text, kinds);
}
 bool ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::ParseDate(int32_t start)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser>::get(),
                            "ParseDate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, start);
}
 bool ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::ParseTimeAndZoneAndWhitespace(int32_t start)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser>::get(),
                            "ParseTimeAndZoneAndWhitespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, start);
}
 bool ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::ParseTimeAndWhitespace(int32_t start)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser>::get(),
                            "ParseTimeAndWhitespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, start);
}
 bool ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::ParseTime(ByRef<int32_t> start)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser>::get(),
                            "ParseTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, start);
}
 bool ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::ParseZoneAndWhitespace(int32_t start)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser>::get(),
                            "ParseZoneAndWhitespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, start);
}
 bool ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::Parse4Dig(int32_t start, ByRef<int32_t> num)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser>::get(),
                            "Parse4Dig",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, start, num);
}
 bool ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::Parse2Dig(int32_t start, ByRef<int32_t> num)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser>::get(),
                            "Parse2Dig",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, start, num);
}
 bool ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::ParseChar(int32_t start, char16_t ch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser>::get(),
                            "ParseChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, start, ch);
}
 bool ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser::Test(::System::Xml::Schema::XsdDateTimeFlags left, ::System::Xml::Schema::XsdDateTimeFlags right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser>::get(),
                            "Test",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTimeFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTimeFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdDateTime::*)(::StringW, ::System::Xml::Schema::XsdDateTimeFlags)>(&::System::Xml::Schema::XsdDateTime::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2752ef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTimeFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdDateTime::*)(::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser)>(&::System::Xml::Schema::XsdDateTime::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2753958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.InitiateXsdDateTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdDateTime::*)(::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser)>(&::System::Xml::Schema::XsdDateTime::InitiateXsdDateTime)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x27538dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "InitiateXsdDateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.TryParse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::System::Xml::Schema::XsdDateTimeFlags, ByRef<::System::Xml::Schema::XsdDateTime>)>(&::System::Xml::Schema::XsdDateTime::TryParse)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2753988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "TryParse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTimeFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Xml::Schema::XsdDateTime>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdDateTime::*)(::System::DateTime, ::System::Xml::Schema::XsdDateTimeFlags)>(&::System::Xml::Schema::XsdDateTime::_ctor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x27539fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTimeFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdDateTime::*)(::System::DateTimeOffset)>(&::System::Xml::Schema::XsdDateTime::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2753b58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTimeOffset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdDateTime::*)(::System::DateTimeOffset, ::System::Xml::Schema::XsdDateTimeFlags)>(&::System::Xml::Schema::XsdDateTime::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2753b60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTimeOffset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTimeFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.get_InternalTypeCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__DateTimeTypeCode (::System::Xml::Schema::XsdDateTime::*)()>(&::System::Xml::Schema::XsdDateTime::get_InternalTypeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2753c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "get_InternalTypeCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.get_InternalKind
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__XsdDateTimeKind (::System::Xml::Schema::XsdDateTime::*)()>(&::System::Xml::Schema::XsdDateTime::get_InternalKind)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2753c7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "get_InternalKind",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.get_Year
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::XsdDateTime::*)()>(&::System::Xml::Schema::XsdDateTime::get_Year)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2753c84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "get_Year",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.get_Month
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::XsdDateTime::*)()>(&::System::Xml::Schema::XsdDateTime::get_Month)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2753c8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "get_Month",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.get_Day
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::XsdDateTime::*)()>(&::System::Xml::Schema::XsdDateTime::get_Day)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2753c94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "get_Day",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.get_Hour
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::XsdDateTime::*)()>(&::System::Xml::Schema::XsdDateTime::get_Hour)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2753c9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "get_Hour",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.get_Minute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::XsdDateTime::*)()>(&::System::Xml::Schema::XsdDateTime::get_Minute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2753ca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "get_Minute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.get_Second
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::XsdDateTime::*)()>(&::System::Xml::Schema::XsdDateTime::get_Second)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2753cac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "get_Second",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.get_Fraction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::XsdDateTime::*)()>(&::System::Xml::Schema::XsdDateTime::get_Fraction)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2753cb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "get_Fraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.get_ZoneHour
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::XsdDateTime::*)()>(&::System::Xml::Schema::XsdDateTime::get_ZoneHour)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2753d8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "get_ZoneHour",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.get_ZoneMinute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::XsdDateTime::*)()>(&::System::Xml::Schema::XsdDateTime::get_ZoneMinute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2753d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "get_ZoneMinute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.op_Implicit___System__DateTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(::System::Xml::Schema::XsdDateTime)>(&::System::Xml::Schema::XsdDateTime::op_Implicit___System__DateTime)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x2753d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTime>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.op_Implicit___System__DateTimeOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTimeOffset (*)(::System::Xml::Schema::XsdDateTime)>(&::System::Xml::Schema::XsdDateTime::op_Implicit___System__DateTimeOffset)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x27541bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTime>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::XsdDateTime::*)()>(&::System::Xml::Schema::XsdDateTime::ToString)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x275443c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::Schema::XsdDateTime),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.PrintDate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdDateTime::*)(::System::Text::StringBuilder)>(&::System::Xml::Schema::XsdDateTime::PrintDate)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2754814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "PrintDate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.PrintTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdDateTime::*)(::System::Text::StringBuilder)>(&::System::Xml::Schema::XsdDateTime::PrintTime)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x2754964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "PrintTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.PrintZone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdDateTime::*)(::System::Text::StringBuilder)>(&::System::Xml::Schema::XsdDateTime::PrintZone)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2754c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "PrintZone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.IntToCharArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdDateTime::*)(::ArrayW<char16_t>, int32_t, int32_t, int32_t)>(&::System::Xml::Schema::XsdDateTime::IntToCharArray)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2754b70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "IntToCharArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDateTime.ShortToCharArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XsdDateTime::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Xml::Schema::XsdDateTime::ShortToCharArray)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2754bd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "ShortToCharArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "dt", ty: "::System::DateTime", modifiers: "", def_value: Some("{}") }, CppParam { name: "extra", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::XsdDateTime::XsdDateTime(::System::DateTime dt, uint32_t extra) noexcept : ::bs_hook::ValueTypeWrapper() {this->dt = dt;
this->extra = extra;
}
constexpr void ::System::Xml::Schema::XsdDateTime::__set_dt(::System::DateTime value)  {
::cordl_internals::setInstanceField<::System::DateTime, 0x0>(this->__instance, std::forward<::System::DateTime>(value));
}
constexpr ::System::DateTime ::System::Xml::Schema::XsdDateTime::__get_dt() const {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x0>(this->__instance);
}
constexpr void ::System::Xml::Schema::XsdDateTime::__set_extra(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::System::Xml::Schema::XsdDateTime::__get_extra() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->__instance);
}
 void ::System::Xml::Schema::XsdDateTime::__set_Lzyyyy(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "Lzyyyy", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
 int32_t ::System::Xml::Schema::XsdDateTime::__get_Lzyyyy()  {
return ::cordl_internals::getStaticField<int32_t, "Lzyyyy", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
 void ::System::Xml::Schema::XsdDateTime::__set_Lzyyyy_(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "Lzyyyy_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
 int32_t ::System::Xml::Schema::XsdDateTime::__get_Lzyyyy_()  {
return ::cordl_internals::getStaticField<int32_t, "Lzyyyy_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
 void ::System::Xml::Schema::XsdDateTime::__set_Lzyyyy_MM(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "Lzyyyy_MM", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
 int32_t ::System::Xml::Schema::XsdDateTime::__get_Lzyyyy_MM()  {
return ::cordl_internals::getStaticField<int32_t, "Lzyyyy_MM", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
 void ::System::Xml::Schema::XsdDateTime::__set_Lzyyyy_MM_(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "Lzyyyy_MM_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
 int32_t ::System::Xml::Schema::XsdDateTime::__get_Lzyyyy_MM_()  {
return ::cordl_internals::getStaticField<int32_t, "Lzyyyy_MM_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
 void ::System::Xml::Schema::XsdDateTime::__set_Lzyyyy_MM_dd(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "Lzyyyy_MM_dd", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
 int32_t ::System::Xml::Schema::XsdDateTime::__get_Lzyyyy_MM_dd()  {
return ::cordl_internals::getStaticField<int32_t, "Lzyyyy_MM_dd", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
 void ::System::Xml::Schema::XsdDateTime::__set_Lzyyyy_MM_ddT(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "Lzyyyy_MM_ddT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
 int32_t ::System::Xml::Schema::XsdDateTime::__get_Lzyyyy_MM_ddT()  {
return ::cordl_internals::getStaticField<int32_t, "Lzyyyy_MM_ddT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
 void ::System::Xml::Schema::XsdDateTime::__set_LzHH(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "LzHH", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
 int32_t ::System::Xml::Schema::XsdDateTime::__get_LzHH()  {
return ::cordl_internals::getStaticField<int32_t, "LzHH", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
 void ::System::Xml::Schema::XsdDateTime::__set_LzHH_(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "LzHH_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
 int32_t ::System::Xml::Schema::XsdDateTime::__get_LzHH_()  {
return ::cordl_internals::getStaticField<int32_t, "LzHH_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
 void ::System::Xml::Schema::XsdDateTime::__set_LzHH_mm(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "LzHH_mm", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
 int32_t ::System::Xml::Schema::XsdDateTime::__get_LzHH_mm()  {
return ::cordl_internals::getStaticField<int32_t, "LzHH_mm", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
 void ::System::Xml::Schema::XsdDateTime::__set_LzHH_mm_(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "LzHH_mm_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
 int32_t ::System::Xml::Schema::XsdDateTime::__get_LzHH_mm_()  {
return ::cordl_internals::getStaticField<int32_t, "LzHH_mm_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
 void ::System::Xml::Schema::XsdDateTime::__set_LzHH_mm_ss(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "LzHH_mm_ss", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
 int32_t ::System::Xml::Schema::XsdDateTime::__get_LzHH_mm_ss()  {
return ::cordl_internals::getStaticField<int32_t, "LzHH_mm_ss", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
 void ::System::Xml::Schema::XsdDateTime::__set_Lz_(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "Lz_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
 int32_t ::System::Xml::Schema::XsdDateTime::__get_Lz_()  {
return ::cordl_internals::getStaticField<int32_t, "Lz_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
 void ::System::Xml::Schema::XsdDateTime::__set_Lz_zz(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "Lz_zz", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
 int32_t ::System::Xml::Schema::XsdDateTime::__get_Lz_zz()  {
return ::cordl_internals::getStaticField<int32_t, "Lz_zz", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
 void ::System::Xml::Schema::XsdDateTime::__set_Lz_zz_(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "Lz_zz_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
 int32_t ::System::Xml::Schema::XsdDateTime::__get_Lz_zz_()  {
return ::cordl_internals::getStaticField<int32_t, "Lz_zz_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
 void ::System::Xml::Schema::XsdDateTime::__set_Lz_zz_zz(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "Lz_zz_zz", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
 int32_t ::System::Xml::Schema::XsdDateTime::__get_Lz_zz_zz()  {
return ::cordl_internals::getStaticField<int32_t, "Lz_zz_zz", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
 void ::System::Xml::Schema::XsdDateTime::__set_Lz__(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "Lz__", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
 int32_t ::System::Xml::Schema::XsdDateTime::__get_Lz__()  {
return ::cordl_internals::getStaticField<int32_t, "Lz__", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
 void ::System::Xml::Schema::XsdDateTime::__set_Lz__mm(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "Lz__mm", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
 int32_t ::System::Xml::Schema::XsdDateTime::__get_Lz__mm()  {
return ::cordl_internals::getStaticField<int32_t, "Lz__mm", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
 void ::System::Xml::Schema::XsdDateTime::__set_Lz__mm_(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "Lz__mm_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
 int32_t ::System::Xml::Schema::XsdDateTime::__get_Lz__mm_()  {
return ::cordl_internals::getStaticField<int32_t, "Lz__mm_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
 void ::System::Xml::Schema::XsdDateTime::__set_Lz__mm__(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "Lz__mm__", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
 int32_t ::System::Xml::Schema::XsdDateTime::__get_Lz__mm__()  {
return ::cordl_internals::getStaticField<int32_t, "Lz__mm__", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
 void ::System::Xml::Schema::XsdDateTime::__set_Lz__mm_dd(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "Lz__mm_dd", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
 int32_t ::System::Xml::Schema::XsdDateTime::__get_Lz__mm_dd()  {
return ::cordl_internals::getStaticField<int32_t, "Lz__mm_dd", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
 void ::System::Xml::Schema::XsdDateTime::__set_Lz___(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "Lz___", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
 int32_t ::System::Xml::Schema::XsdDateTime::__get_Lz___()  {
return ::cordl_internals::getStaticField<int32_t, "Lz___", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
 void ::System::Xml::Schema::XsdDateTime::__set_Lz___dd(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "Lz___dd", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<int32_t>(value));
}
 int32_t ::System::Xml::Schema::XsdDateTime::__get_Lz___dd()  {
return ::cordl_internals::getStaticField<int32_t, "Lz___dd", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
 void ::System::Xml::Schema::XsdDateTime::__set_typeCodes(::ArrayW<::System::Xml::Schema::XmlTypeCode> value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XmlTypeCode>, "typeCodes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>(std::forward<::ArrayW<::System::Xml::Schema::XmlTypeCode>>(value));
}
 ::ArrayW<::System::Xml::Schema::XmlTypeCode> ::System::Xml::Schema::XsdDateTime::__get_typeCodes()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XmlTypeCode>, "typeCodes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get>();
}
 void ::System::Xml::Schema::XsdDateTime::_ctor(::StringW text, ::System::Xml::Schema::XsdDateTimeFlags kinds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTimeFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, text, kinds);
}
 void ::System::Xml::Schema::XsdDateTime::_ctor(::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser parser)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, parser);
}
 void ::System::Xml::Schema::XsdDateTime::InitiateXsdDateTime(::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser parser)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "InitiateXsdDateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__Parser>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, parser);
}
 bool ::System::Xml::Schema::XsdDateTime::TryParse(::StringW text, ::System::Xml::Schema::XsdDateTimeFlags kinds, ByRef<::System::Xml::Schema::XsdDateTime> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "TryParse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTimeFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Xml::Schema::XsdDateTime>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, text, kinds, result);
}
 void ::System::Xml::Schema::XsdDateTime::_ctor(::System::DateTime dateTime, ::System::Xml::Schema::XsdDateTimeFlags kinds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTimeFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, dateTime, kinds);
}
 void ::System::Xml::Schema::XsdDateTime::_ctor(::System::DateTimeOffset dateTimeOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTimeOffset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, dateTimeOffset);
}
 void ::System::Xml::Schema::XsdDateTime::_ctor(::System::DateTimeOffset dateTimeOffset, ::System::Xml::Schema::XsdDateTimeFlags kinds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTimeOffset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTimeFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, dateTimeOffset, kinds);
}
 ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__DateTimeTypeCode ::System::Xml::Schema::XsdDateTime::get_InternalTypeCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "get_InternalTypeCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__DateTimeTypeCode, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__XsdDateTimeKind ::System::Xml::Schema::XsdDateTime::get_InternalKind()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "get_InternalKind",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::____System__Xml__Schema__XsdDateTime__XsdDateTimeKind, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t ::System::Xml::Schema::XsdDateTime::get_Year()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "get_Year",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t ::System::Xml::Schema::XsdDateTime::get_Month()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "get_Month",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t ::System::Xml::Schema::XsdDateTime::get_Day()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "get_Day",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t ::System::Xml::Schema::XsdDateTime::get_Hour()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "get_Hour",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t ::System::Xml::Schema::XsdDateTime::get_Minute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "get_Minute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t ::System::Xml::Schema::XsdDateTime::get_Second()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "get_Second",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t ::System::Xml::Schema::XsdDateTime::get_Fraction()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "get_Fraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t ::System::Xml::Schema::XsdDateTime::get_ZoneHour()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "get_ZoneHour",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t ::System::Xml::Schema::XsdDateTime::get_ZoneMinute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "get_ZoneMinute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::System::DateTime ::System::Xml::Schema::XsdDateTime::op_Implicit___System__DateTime(::System::Xml::Schema::XsdDateTime xdt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(nullptr, ___internal_method, xdt);
}
 ::System::DateTimeOffset ::System::Xml::Schema::XsdDateTime::op_Implicit___System__DateTimeOffset(::System::Xml::Schema::XsdDateTime xdt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XsdDateTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset, false>(nullptr, ___internal_method, xdt);
}
 ::StringW ::System::Xml::Schema::XsdDateTime::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Xml::Schema::XsdDateTime::PrintDate(::System::Text::StringBuilder sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "PrintDate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, sb);
}
 void ::System::Xml::Schema::XsdDateTime::PrintTime(::System::Text::StringBuilder sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "PrintTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, sb);
}
 void ::System::Xml::Schema::XsdDateTime::PrintZone(::System::Text::StringBuilder sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "PrintZone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, sb);
}
 void ::System::Xml::Schema::XsdDateTime::IntToCharArray(::ArrayW<char16_t> text, int32_t start, int32_t value, int32_t digits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "IntToCharArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, text, start, value, digits);
}
 void ::System::Xml::Schema::XsdDateTime::ShortToCharArray(::ArrayW<char16_t> text, int32_t start, int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdDateTime>::get(),
                            "ShortToCharArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, text, start, value);
}
} // end anonymous namespace
