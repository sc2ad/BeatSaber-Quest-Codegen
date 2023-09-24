#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Globalization/zzzz__TimeSpanFormat_def.hpp"
#include "System/Globalization/zzzz__DateTimeFormatInfo_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/Globalization/zzzz__TimeSpanFormat_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Globalization::System__Globalization__TimeSpanFormat__Pattern::System__Globalization__TimeSpanFormat__Pattern(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Globalization::System__Globalization__TimeSpanFormat__Pattern::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::System__Globalization__TimeSpanFormat__Pattern::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Globalization::System__Globalization__TimeSpanFormat__Pattern  System::Globalization::System__Globalization__TimeSpanFormat__Pattern::None{0};
constexpr System::Globalization::System__Globalization__TimeSpanFormat__Pattern  System::Globalization::System__Globalization__TimeSpanFormat__Pattern::Minimum{1};
constexpr System::Globalization::System__Globalization__TimeSpanFormat__Pattern  System::Globalization::System__Globalization__TimeSpanFormat__Pattern::Full{2};
//  Writing Method size for method: System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals.get_Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::*)()>(&System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::get_Start)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23e6c98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals>::get(),
                            "get_Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals.get_DayHourSep
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::*)()>(&System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::get_DayHourSep)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23e6cc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals>::get(),
                            "get_DayHourSep",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals.get_HourMinuteSep
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::*)()>(&System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::get_HourMinuteSep)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23e6cec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals>::get(),
                            "get_HourMinuteSep",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals.get_MinuteSecondSep
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::*)()>(&System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::get_MinuteSecondSep)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23e6d18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals>::get(),
                            "get_MinuteSecondSep",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals.get_SecondFractionSep
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::*)()>(&System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::get_SecondFractionSep)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23e6d44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals>::get(),
                            "get_SecondFractionSep",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals.get_End
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::*)()>(&System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::get_End)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23e6d70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals>::get(),
                            "get_End",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals.InitInvariant
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals (*)(bool)>(&System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::InitInvariant)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x23e6e30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals>::get(),
                            "InitInvariant",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::*)(System::ReadOnlySpan_1<char16_t>, bool)>(&System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::Init)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x23e6810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "AppCompatLiteral", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "dd", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "hh", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "mm", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ss", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ff", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_literals", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("csnull") }]
constexpr System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::System__Globalization__TimeSpanFormat__FormatLiterals(::StringW AppCompatLiteral, int32_t dd, int32_t hh, int32_t mm, int32_t ss, int32_t ff, ::ArrayW<::StringW> _literals) noexcept : ::bs_hook::ValueTypeWrapper() {this->AppCompatLiteral = AppCompatLiteral;
this->dd = dd;
this->hh = hh;
this->mm = mm;
this->ss = ss;
this->ff = ff;
this->_literals = _literals;
}
constexpr void System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::__set_AppCompatLiteral(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::__get_AppCompatLiteral() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::__set_dd(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::__get_dd() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::__set_hh(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::__get_hh() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
constexpr void System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::__set_mm(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::__get_mm() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::__set_ss(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::__get_ss() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->__instance);
}
constexpr void System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::__set_ff(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::__get_ff() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->__instance);
}
constexpr void System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::__set__literals(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x20>(this->__instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::__get__literals() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x20>(this->__instance);
}
 ::StringW System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::get_Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals>::get(),
                            "get_Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::get_DayHourSep()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals>::get(),
                            "get_DayHourSep",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::get_HourMinuteSep()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals>::get(),
                            "get_HourMinuteSep",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::get_MinuteSecondSep()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals>::get(),
                            "get_MinuteSecondSep",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::get_SecondFractionSep()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals>::get(),
                            "get_SecondFractionSep",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::get_End()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals>::get(),
                            "get_End",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::InitInvariant(bool isNegative)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals>::get(),
                            "InitInvariant",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals, false>(nullptr, ___internal_method, isNegative);
}
 void System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals::Init(System::ReadOnlySpan_1<char16_t> format, bool useInvariantFieldLengths)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, format, useInvariantFieldLengths);
}
//  Writing Method size for method: System::Globalization::TimeSpanFormat.AppendNonNegativeInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Text::StringBuilder, int32_t, int32_t)>(&System::Globalization::TimeSpanFormat::AppendNonNegativeInt32)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x23e5718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::TimeSpanFormat>::get(),
                            "AppendNonNegativeInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::TimeSpanFormat.Format
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::TimeSpan, ::StringW, System::IFormatProvider)>(&System::Globalization::TimeSpanFormat::Format)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x23e5810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::TimeSpanFormat>::get(),
                            "Format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::TimeSpanFormat.TryFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::TimeSpan, System::Span_1<char16_t>, ByRef<int32_t>, System::ReadOnlySpan_1<char16_t>, System::IFormatProvider)>(&System::Globalization::TimeSpanFormat::TryFormat)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x23e5b70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::TimeSpanFormat>::get(),
                            "TryFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::TimeSpanFormat.FormatToBuilder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::StringBuilder (*)(System::TimeSpan, System::ReadOnlySpan_1<char16_t>, System::IFormatProvider)>(&System::Globalization::TimeSpanFormat::FormatToBuilder)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x23e58c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::TimeSpanFormat>::get(),
                            "FormatToBuilder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::TimeSpanFormat.FormatStandard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::StringBuilder (*)(System::TimeSpan, bool, System::ReadOnlySpan_1<char16_t>, System::Globalization::System__Globalization__TimeSpanFormat__Pattern)>(&System::Globalization::TimeSpanFormat::FormatStandard)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x23e5c8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::TimeSpanFormat>::get(),
                            "FormatStandard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::System__Globalization__TimeSpanFormat__Pattern>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::TimeSpanFormat.FormatCustomized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::StringBuilder (*)(System::TimeSpan, System::ReadOnlySpan_1<char16_t>, System::Globalization::DateTimeFormatInfo, System::Text::StringBuilder)>(&System::Globalization::TimeSpanFormat::FormatCustomized)> {
  constexpr static std::size_t size = 0x6f8;
  constexpr static std::size_t addrs = 0x23e6118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::TimeSpanFormat>::get(),
                            "FormatCustomized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::Globalization::TimeSpanFormat::__set_PositiveInvariantFormatLiterals(System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals value)  {
::cordl_internals::setStaticField<System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals, "PositiveInvariantFormatLiterals", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::TimeSpanFormat>::get>(std::forward<System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals>(value));
}
 System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals System::Globalization::TimeSpanFormat::__get_PositiveInvariantFormatLiterals()  {
return ::cordl_internals::getStaticField<System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals, "PositiveInvariantFormatLiterals", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::TimeSpanFormat>::get>();
}
 void System::Globalization::TimeSpanFormat::__set_NegativeInvariantFormatLiterals(System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals value)  {
::cordl_internals::setStaticField<System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals, "NegativeInvariantFormatLiterals", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::TimeSpanFormat>::get>(std::forward<System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals>(value));
}
 System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals System::Globalization::TimeSpanFormat::__get_NegativeInvariantFormatLiterals()  {
return ::cordl_internals::getStaticField<System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals, "NegativeInvariantFormatLiterals", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::TimeSpanFormat>::get>();
}
 void System::Globalization::TimeSpanFormat::AppendNonNegativeInt32(System::Text::StringBuilder sb, int32_t n, int32_t digits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::TimeSpanFormat>::get(),
                            "AppendNonNegativeInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, n, digits);
}
 ::StringW System::Globalization::TimeSpanFormat::Format(System::TimeSpan value, ::StringW format, System::IFormatProvider formatProvider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::TimeSpanFormat>::get(),
                            "Format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, format, formatProvider);
}
 bool System::Globalization::TimeSpanFormat::TryFormat(System::TimeSpan value, System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, System::ReadOnlySpan_1<char16_t> format, System::IFormatProvider formatProvider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::TimeSpanFormat>::get(),
                            "TryFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value, destination, charsWritten, format, formatProvider);
}
 System::Text::StringBuilder System::Globalization::TimeSpanFormat::FormatToBuilder(System::TimeSpan value, System::ReadOnlySpan_1<char16_t> format, System::IFormatProvider formatProvider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::TimeSpanFormat>::get(),
                            "FormatToBuilder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::StringBuilder, false>(nullptr, ___internal_method, value, format, formatProvider);
}
 System::Text::StringBuilder System::Globalization::TimeSpanFormat::FormatStandard(System::TimeSpan value, bool isInvariant, System::ReadOnlySpan_1<char16_t> format, System::Globalization::System__Globalization__TimeSpanFormat__Pattern pattern)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::TimeSpanFormat>::get(),
                            "FormatStandard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::System__Globalization__TimeSpanFormat__Pattern>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::StringBuilder, false>(nullptr, ___internal_method, value, isInvariant, format, pattern);
}
 System::Text::StringBuilder System::Globalization::TimeSpanFormat::FormatCustomized(System::TimeSpan value, System::ReadOnlySpan_1<char16_t> format, System::Globalization::DateTimeFormatInfo dtfi, System::Text::StringBuilder result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::TimeSpanFormat>::get(),
                            "FormatCustomized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::StringBuilder, false>(nullptr, ___internal_method, value, format, dtfi, result);
}
