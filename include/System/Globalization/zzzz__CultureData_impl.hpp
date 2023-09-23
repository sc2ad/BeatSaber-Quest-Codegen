#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Globalization/zzzz__CultureData_def.hpp"
#include "System/Globalization/zzzz__CalendarData_def.hpp"
#include "System/Globalization/zzzz__CalendarId_def.hpp"
#include "System/Globalization/zzzz__NumberFormatInfo_def.hpp"
// Ctor Parameters [CppParam { name: "currency_decimal_digits", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "currency_decimal_separator", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "currency_group_separator", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "currency_group_sizes0", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "currency_group_sizes1", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "currency_negative_pattern", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "currency_positive_pattern", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "currency_symbol", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nan_symbol", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "negative_infinity_symbol", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "negative_sign", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "number_decimal_digits", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "number_decimal_separator", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "number_group_separator", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "number_group_sizes0", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "number_group_sizes1", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "number_negative_pattern", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "per_mille_symbol", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "percent_negative_pattern", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "percent_positive_pattern", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "percent_symbol", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "positive_infinity_symbol", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "positive_sign", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::System__Globalization__CultureData__NumberFormatEntryManaged(int32_t currency_decimal_digits, int32_t currency_decimal_separator, int32_t currency_group_separator, int32_t currency_group_sizes0, int32_t currency_group_sizes1, int32_t currency_negative_pattern, int32_t currency_positive_pattern, int32_t currency_symbol, int32_t nan_symbol, int32_t negative_infinity_symbol, int32_t negative_sign, int32_t number_decimal_digits, int32_t number_decimal_separator, int32_t number_group_separator, int32_t number_group_sizes0, int32_t number_group_sizes1, int32_t number_negative_pattern, int32_t per_mille_symbol, int32_t percent_negative_pattern, int32_t percent_positive_pattern, int32_t percent_symbol, int32_t positive_infinity_symbol, int32_t positive_sign) noexcept : ::bs_hook::ValueTypeWrapper() {this->currency_decimal_digits = currency_decimal_digits;
this->currency_decimal_separator = currency_decimal_separator;
this->currency_group_separator = currency_group_separator;
this->currency_group_sizes0 = currency_group_sizes0;
this->currency_group_sizes1 = currency_group_sizes1;
this->currency_negative_pattern = currency_negative_pattern;
this->currency_positive_pattern = currency_positive_pattern;
this->currency_symbol = currency_symbol;
this->nan_symbol = nan_symbol;
this->negative_infinity_symbol = negative_infinity_symbol;
this->negative_sign = negative_sign;
this->number_decimal_digits = number_decimal_digits;
this->number_decimal_separator = number_decimal_separator;
this->number_group_separator = number_group_separator;
this->number_group_sizes0 = number_group_sizes0;
this->number_group_sizes1 = number_group_sizes1;
this->number_negative_pattern = number_negative_pattern;
this->per_mille_symbol = per_mille_symbol;
this->percent_negative_pattern = percent_negative_pattern;
this->percent_positive_pattern = percent_positive_pattern;
this->percent_symbol = percent_symbol;
this->positive_infinity_symbol = positive_infinity_symbol;
this->positive_sign = positive_sign;
}
constexpr void System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__set_currency_decimal_digits(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__get_currency_decimal_digits() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__set_currency_decimal_separator(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__get_currency_decimal_separator() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__set_currency_group_separator(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__get_currency_group_separator() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__set_currency_group_sizes0(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__get_currency_group_sizes0() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
constexpr void System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__set_currency_group_sizes1(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__get_currency_group_sizes1() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__set_currency_negative_pattern(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__get_currency_negative_pattern() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->__instance);
}
constexpr void System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__set_currency_positive_pattern(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__get_currency_positive_pattern() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->__instance);
}
constexpr void System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__set_currency_symbol(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__get_currency_symbol() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->__instance);
}
constexpr void System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__set_nan_symbol(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__get_nan_symbol() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->__instance);
}
constexpr void System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__set_negative_infinity_symbol(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__get_negative_infinity_symbol() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->__instance);
}
constexpr void System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__set_negative_sign(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__get_negative_sign() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->__instance);
}
constexpr void System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__set_number_decimal_digits(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__get_number_decimal_digits() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->__instance);
}
constexpr void System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__set_number_decimal_separator(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__get_number_decimal_separator() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->__instance);
}
constexpr void System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__set_number_group_separator(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__get_number_group_separator() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this->__instance);
}
constexpr void System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__set_number_group_sizes0(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__get_number_group_sizes0() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->__instance);
}
constexpr void System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__set_number_group_sizes1(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__get_number_group_sizes1() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this->__instance);
}
constexpr void System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__set_number_negative_pattern(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__get_number_negative_pattern() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->__instance);
}
constexpr void System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__set_per_mille_symbol(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__get_per_mille_symbol() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this->__instance);
}
constexpr void System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__set_percent_negative_pattern(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__get_percent_negative_pattern() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->__instance);
}
constexpr void System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__set_percent_positive_pattern(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__get_percent_positive_pattern() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4c>(this->__instance);
}
constexpr void System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__set_percent_symbol(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__get_percent_symbol() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this->__instance);
}
constexpr void System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__set_positive_infinity_symbol(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x54>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__get_positive_infinity_symbol() const {
return ::cordl_internals::getInstanceField<int32_t, 0x54>(this->__instance);
}
constexpr void System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__set_positive_sign(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x58>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged::__get_positive_sign() const {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this->__instance);
}
//  Writing Method size for method: System::Globalization::CultureData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::CultureData::*)(::StringW)>(&System::Globalization::CultureData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23fd000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.get_Invariant
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::CultureData (*)()>(&System::Globalization::CultureData::get_Invariant)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x23f8da8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "get_Invariant",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.GetCultureData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::CultureData (*)(::StringW, bool)>(&System::Globalization::CultureData::GetCultureData)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x23fd028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "GetCultureData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.GetCultureData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::CultureData (*)(::StringW, bool, int32_t, int32_t, int32_t, ::StringW, int32_t, int32_t, int32_t, int32_t, bool, ::StringW)>(&System::Globalization::CultureData::GetCultureData)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x23fd120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "GetCultureData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.fill_culture_data
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::CultureData::*)(int32_t)>(&System::Globalization::CultureData::fill_culture_data)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23fd240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "fill_culture_data",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.GetCalendar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::CalendarData (System::Globalization::CultureData::*)(int32_t)>(&System::Globalization::CultureData::GetCalendar)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x23fd244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "GetCalendar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.get_LongTimes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::CultureData::*)()>(&System::Globalization::CultureData::get_LongTimes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x23fd360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "get_LongTimes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.get_ShortTimes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::CultureData::*)()>(&System::Globalization::CultureData::get_ShortTimes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x23fd378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "get_ShortTimes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.get_SISO639LANGNAME
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::CultureData::*)()>(&System::Globalization::CultureData::get_SISO639LANGNAME)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23fd390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "get_SISO639LANGNAME",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.get_IFIRSTDAYOFWEEK
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Globalization::CultureData::*)()>(&System::Globalization::CultureData::get_IFIRSTDAYOFWEEK)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23fd398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "get_IFIRSTDAYOFWEEK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.get_IFIRSTWEEKOFYEAR
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Globalization::CultureData::*)()>(&System::Globalization::CultureData::get_IFIRSTWEEKOFYEAR)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23fd3a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "get_IFIRSTWEEKOFYEAR",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.get_SAM1159
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::CultureData::*)()>(&System::Globalization::CultureData::get_SAM1159)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23fd3a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "get_SAM1159",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.get_SPM2359
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::CultureData::*)()>(&System::Globalization::CultureData::get_SPM2359)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23fd3b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "get_SPM2359",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.get_TimeSeparator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::CultureData::*)()>(&System::Globalization::CultureData::get_TimeSeparator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23fd3b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "get_TimeSeparator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.get_CalendarIds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (System::Globalization::CultureData::*)()>(&System::Globalization::CultureData::get_CalendarIds)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x23fd3c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "get_CalendarIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.GetCalendarIds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Globalization::CalendarId> (System::Globalization::CultureData::*)()>(&System::Globalization::CultureData::GetCalendarIds)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x23fd570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "GetCalendarIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.get_IsInvariantCulture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::CultureData::*)()>(&System::Globalization::CultureData::get_IsInvariantCulture)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23f7a48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "get_IsInvariantCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.get_CultureName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::CultureData::*)()>(&System::Globalization::CultureData::get_CultureName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23fd648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "get_CultureName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.get_SCOMPAREINFO
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::CultureData::*)()>(&System::Globalization::CultureData::get_SCOMPAREINFO)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x23fd650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "get_SCOMPAREINFO",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.get_STEXTINFO
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::CultureData::*)()>(&System::Globalization::CultureData::get_STEXTINFO)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23fd690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "get_STEXTINFO",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.get_UseUserOverride
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::CultureData::*)()>(&System::Globalization::CultureData::get_UseUserOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23fd698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "get_UseUserOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.EraNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::CultureData::*)(int32_t)>(&System::Globalization::CultureData::EraNames)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23fd6a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "EraNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.AbbrevEraNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::CultureData::*)(int32_t)>(&System::Globalization::CultureData::AbbrevEraNames)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23fd6bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "AbbrevEraNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.AbbreviatedEnglishEraNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::CultureData::*)(int32_t)>(&System::Globalization::CultureData::AbbreviatedEnglishEraNames)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23fd6d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "AbbreviatedEnglishEraNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.ShortDates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::CultureData::*)(int32_t)>(&System::Globalization::CultureData::ShortDates)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23fd6f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "ShortDates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.LongDates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::CultureData::*)(int32_t)>(&System::Globalization::CultureData::LongDates)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23fd710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "LongDates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.YearMonths
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::CultureData::*)(int32_t)>(&System::Globalization::CultureData::YearMonths)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23fd72c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "YearMonths",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.DayNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::CultureData::*)(int32_t)>(&System::Globalization::CultureData::DayNames)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23fd748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "DayNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.AbbreviatedDayNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::CultureData::*)(int32_t)>(&System::Globalization::CultureData::AbbreviatedDayNames)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23fd764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "AbbreviatedDayNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.MonthNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::CultureData::*)(int32_t)>(&System::Globalization::CultureData::MonthNames)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23fd780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "MonthNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.GenitiveMonthNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::CultureData::*)(int32_t)>(&System::Globalization::CultureData::GenitiveMonthNames)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23fd79c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "GenitiveMonthNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.AbbreviatedMonthNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::CultureData::*)(int32_t)>(&System::Globalization::CultureData::AbbreviatedMonthNames)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23fd7b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "AbbreviatedMonthNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.AbbreviatedGenitiveMonthNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::CultureData::*)(int32_t)>(&System::Globalization::CultureData::AbbreviatedGenitiveMonthNames)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23fd7d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "AbbreviatedGenitiveMonthNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.LeapYearMonthNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::CultureData::*)(int32_t)>(&System::Globalization::CultureData::LeapYearMonthNames)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23fd7f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "LeapYearMonthNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.MonthDay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::CultureData::*)(int32_t)>(&System::Globalization::CultureData::MonthDay)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23fd80c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "MonthDay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.DateSeparator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::CultureData::*)(int32_t)>(&System::Globalization::CultureData::DateSeparator)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x23fd828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "DateSeparator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.GetDateSeparator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::Globalization::CultureData::GetDateSeparator)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x23fd8d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "GetDateSeparator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.GetSeparator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW)>(&System::Globalization::CultureData::GetSeparator)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x23fd91c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "GetSeparator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.IndexOfTimePart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, int32_t, ::StringW)>(&System::Globalization::CultureData::IndexOfTimePart)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x23fda20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "IndexOfTimePart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.UnescapeNlsString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, int32_t, int32_t)>(&System::Globalization::CultureData::UnescapeNlsString)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x23fdb0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "UnescapeNlsString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.ReescapeWin32Strings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(::ArrayW<::StringW>)>(&System::Globalization::CultureData::ReescapeWin32Strings)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23fdcb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "ReescapeWin32Strings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.ReescapeWin32String
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::Globalization::CultureData::ReescapeWin32String)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23fdcb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "ReescapeWin32String",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.strlen
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(void*)>(&System::Globalization::CultureData::strlen)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x23fdcb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "strlen",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.idx2string
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(void*, int32_t)>(&System::Globalization::CultureData::idx2string)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x23fdcd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "idx2string",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.create_group_sizes_array
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (System::Globalization::CultureData::*)(int32_t, int32_t)>(&System::Globalization::CultureData::create_group_sizes_array)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x23fdd14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "create_group_sizes_array",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.GetNFIValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::CultureData::*)(System::Globalization::NumberFormatInfo)>(&System::Globalization::CultureData::GetNFIValues)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x23f78b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "GetNFIValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::CultureData.fill_number_data
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(int32_t, ByRef<System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged>)>(&System::Globalization::CultureData::fill_number_data)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23fddc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "fill_number_data",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Globalization::CultureData::__set_sAM1159(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::CultureData::__get_sAM1159() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureData::__set_sPM2359(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::CultureData::__get_sPM2359() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureData::__set_sTimeSeparator(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::CultureData::__get_sTimeSeparator() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureData::__set_saLongTimes(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> System::Globalization::CultureData::__get_saLongTimes() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureData::__set_saShortTimes(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> System::Globalization::CultureData::__get_saShortTimes() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureData::__set_iFirstDayOfWeek(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::CultureData::__get_iFirstDayOfWeek() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureData::__set_iFirstWeekOfYear(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::CultureData::__get_iFirstWeekOfYear() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureData::__set_waCalendars(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> System::Globalization::CultureData::__get_waCalendars() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureData::__set_calendars(::ArrayW<System::Globalization::CalendarData> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Globalization::CalendarData>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Globalization::CalendarData>>(value));
}
constexpr ::ArrayW<System::Globalization::CalendarData> System::Globalization::CultureData::__get_calendars() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Globalization::CalendarData>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureData::__set_sISO639Language(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::CultureData::__get_sISO639Language() const {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureData::__set_sRealName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::CultureData::__get_sRealName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureData::__set_bUseOverrides(bool value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Globalization::CultureData::__get_bUseOverrides() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureData::__set_calendarId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::CultureData::__get_calendarId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureData::__set_numberIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::CultureData::__get_numberIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureData::__set_iDefaultAnsiCodePage(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::CultureData::__get_iDefaultAnsiCodePage() const {
return ::cordl_internals::getInstanceField<int32_t, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureData::__set_iDefaultOemCodePage(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::CultureData::__get_iDefaultOemCodePage() const {
return ::cordl_internals::getInstanceField<int32_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureData::__set_iDefaultMacCodePage(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x74>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::CultureData::__get_iDefaultMacCodePage() const {
return ::cordl_internals::getInstanceField<int32_t, 0x74>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureData::__set_iDefaultEbcdicCodePage(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::CultureData::__get_iDefaultEbcdicCodePage() const {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureData::__set_isRightToLeft(bool value)  {
::cordl_internals::setInstanceField<bool, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Globalization::CultureData::__get_isRightToLeft() const {
return ::cordl_internals::getInstanceField<bool, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::CultureData::__set_sListSeparator(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::CultureData::__get_sListSeparator() const {
return ::cordl_internals::getInstanceField<::StringW, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Globalization::CultureData::__set_s_Invariant(System::Globalization::CultureData value)  {
::cordl_internals::setStaticField<System::Globalization::CultureData, "s_Invariant", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get>(std::forward<System::Globalization::CultureData>(value));
}
 System::Globalization::CultureData System::Globalization::CultureData::__get_s_Invariant()  {
return ::cordl_internals::getStaticField<System::Globalization::CultureData, "s_Invariant", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get>();
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
 System::Globalization::CultureData::CultureData(::StringW name)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CultureData>(name))) {}
 void System::Globalization::CultureData::_ctor(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name);
}
 System::Globalization::CultureData System::Globalization::CultureData::get_Invariant()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "get_Invariant",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::CultureData, false>(nullptr, ___internal_method);
}
 System::Globalization::CultureData System::Globalization::CultureData::GetCultureData(::StringW cultureName, bool useUserOverride)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "GetCultureData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::CultureData, false>(nullptr, ___internal_method, cultureName, useUserOverride);
}
 System::Globalization::CultureData System::Globalization::CultureData::GetCultureData(::StringW cultureName, bool useUserOverride, int32_t datetimeIndex, int32_t calendarId, int32_t numberIndex, ::StringW iso2lang, int32_t ansiCodePage, int32_t oemCodePage, int32_t macCodePage, int32_t ebcdicCodePage, bool rightToLeft, ::StringW listSeparator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "GetCultureData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::CultureData, false>(nullptr, ___internal_method, cultureName, useUserOverride, datetimeIndex, calendarId, numberIndex, iso2lang, ansiCodePage, oemCodePage, macCodePage, ebcdicCodePage, rightToLeft, listSeparator);
}
 void System::Globalization::CultureData::fill_culture_data(int32_t datetimeIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "fill_culture_data",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, datetimeIndex);
}
 System::Globalization::CalendarData System::Globalization::CultureData::GetCalendar(int32_t calendarId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "GetCalendar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::CalendarData, false>(const_cast<void*>(instance), ___internal_method, calendarId);
}
 ::ArrayW<::StringW> System::Globalization::CultureData::get_LongTimes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "get_LongTimes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::StringW> System::Globalization::CultureData::get_ShortTimes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "get_ShortTimes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Globalization::CultureData::get_SISO639LANGNAME()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "get_SISO639LANGNAME",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Globalization::CultureData::get_IFIRSTDAYOFWEEK()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "get_IFIRSTDAYOFWEEK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Globalization::CultureData::get_IFIRSTWEEKOFYEAR()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "get_IFIRSTWEEKOFYEAR",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Globalization::CultureData::get_SAM1159()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "get_SAM1159",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Globalization::CultureData::get_SPM2359()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "get_SPM2359",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Globalization::CultureData::get_TimeSeparator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "get_TimeSeparator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<int32_t> System::Globalization::CultureData::get_CalendarIds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "get_CalendarIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<System::Globalization::CalendarId> System::Globalization::CultureData::GetCalendarIds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "GetCalendarIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Globalization::CalendarId>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Globalization::CultureData::get_IsInvariantCulture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "get_IsInvariantCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Globalization::CultureData::get_CultureName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "get_CultureName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Globalization::CultureData::get_SCOMPAREINFO()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "get_SCOMPAREINFO",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Globalization::CultureData::get_STEXTINFO()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "get_STEXTINFO",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Globalization::CultureData::get_UseUserOverride()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "get_UseUserOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::StringW> System::Globalization::CultureData::EraNames(int32_t calendarId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "EraNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method, calendarId);
}
 ::ArrayW<::StringW> System::Globalization::CultureData::AbbrevEraNames(int32_t calendarId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "AbbrevEraNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method, calendarId);
}
 ::ArrayW<::StringW> System::Globalization::CultureData::AbbreviatedEnglishEraNames(int32_t calendarId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "AbbreviatedEnglishEraNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method, calendarId);
}
 ::ArrayW<::StringW> System::Globalization::CultureData::ShortDates(int32_t calendarId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "ShortDates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method, calendarId);
}
 ::ArrayW<::StringW> System::Globalization::CultureData::LongDates(int32_t calendarId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "LongDates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method, calendarId);
}
 ::ArrayW<::StringW> System::Globalization::CultureData::YearMonths(int32_t calendarId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "YearMonths",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method, calendarId);
}
 ::ArrayW<::StringW> System::Globalization::CultureData::DayNames(int32_t calendarId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "DayNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method, calendarId);
}
 ::ArrayW<::StringW> System::Globalization::CultureData::AbbreviatedDayNames(int32_t calendarId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "AbbreviatedDayNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method, calendarId);
}
 ::ArrayW<::StringW> System::Globalization::CultureData::MonthNames(int32_t calendarId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "MonthNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method, calendarId);
}
 ::ArrayW<::StringW> System::Globalization::CultureData::GenitiveMonthNames(int32_t calendarId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "GenitiveMonthNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method, calendarId);
}
 ::ArrayW<::StringW> System::Globalization::CultureData::AbbreviatedMonthNames(int32_t calendarId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "AbbreviatedMonthNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method, calendarId);
}
 ::ArrayW<::StringW> System::Globalization::CultureData::AbbreviatedGenitiveMonthNames(int32_t calendarId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "AbbreviatedGenitiveMonthNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method, calendarId);
}
 ::ArrayW<::StringW> System::Globalization::CultureData::LeapYearMonthNames(int32_t calendarId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "LeapYearMonthNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method, calendarId);
}
 ::StringW System::Globalization::CultureData::MonthDay(int32_t calendarId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "MonthDay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, calendarId);
}
 ::StringW System::Globalization::CultureData::DateSeparator(int32_t calendarId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "DateSeparator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, calendarId);
}
 ::StringW System::Globalization::CultureData::GetDateSeparator(::StringW format)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "GetDateSeparator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, format);
}
 ::StringW System::Globalization::CultureData::GetSeparator(::StringW format, ::StringW timeParts)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "GetSeparator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, format, timeParts);
}
 int32_t System::Globalization::CultureData::IndexOfTimePart(::StringW format, int32_t startIndex, ::StringW timeParts)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "IndexOfTimePart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, format, startIndex, timeParts);
}
 ::StringW System::Globalization::CultureData::UnescapeNlsString(::StringW str, int32_t start, int32_t end)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "UnescapeNlsString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, str, start, end);
}
 ::ArrayW<::StringW> System::Globalization::CultureData::ReescapeWin32Strings(::ArrayW<::StringW> array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "ReescapeWin32Strings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(nullptr, ___internal_method, array);
}
 ::StringW System::Globalization::CultureData::ReescapeWin32String(::StringW str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "ReescapeWin32String",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, str);
}
 int32_t System::Globalization::CultureData::strlen(void* s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "strlen",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, s);
}
 ::StringW System::Globalization::CultureData::idx2string(void* data, int32_t idx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "idx2string",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, data, idx);
}
 ::ArrayW<int32_t> System::Globalization::CultureData::create_group_sizes_array(int32_t gs0, int32_t gs1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "create_group_sizes_array",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(const_cast<void*>(instance), ___internal_method, gs0, gs1);
}
 void System::Globalization::CultureData::GetNFIValues(System::Globalization::NumberFormatInfo nfi)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "GetNFIValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, nfi);
}
 void* System::Globalization::CultureData::fill_number_data(int32_t index, ByRef<System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged> nfe)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::CultureData>::get(),
                            "fill_number_data",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, index, nfe);
}
