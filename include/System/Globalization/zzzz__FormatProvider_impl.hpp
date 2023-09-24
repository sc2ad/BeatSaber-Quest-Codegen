#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Globalization/zzzz__FormatProvider_def.hpp"
#include "System/Globalization/zzzz__FormatProvider_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/Globalization/zzzz__NumberFormatInfo_def.hpp"
#include "System/Text/zzzz__ValueStringBuilder_def.hpp"
//  Writing Method size for method: GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer.get_digits
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer::*)()>(&GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer::get_digits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ba5b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer>::get(),
                            "get_digits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "precision", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "scale", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sign", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "overrideDigits", ty: "void*", modifiers: "", def_value: Some("csnull") }]
constexpr GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer::System__Globalization__FormatProvider__Number__NumberBuffer(int32_t precision, int32_t scale, bool sign, void* overrideDigits) noexcept : ::bs_hook::ValueTypeWrapper() {this->precision = precision;
this->scale = scale;
this->sign = sign;
this->overrideDigits = overrideDigits;
}
constexpr void GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer::__set_precision(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer::__get_precision() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer::__set_scale(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer::__get_scale() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer::__set_sign(bool value)  {
::cordl_internals::setInstanceField<bool, 0x8>(this->__instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer::__get_sign() const {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer::__set_overrideDigits(void* value)  {
::cordl_internals::setInstanceField<void*, 0x10>(this->__instance, std::forward<void*>(value));
}
constexpr void* GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer::__get_overrideDigits() const {
return ::cordl_internals::getInstanceField<void*, 0x10>(this->__instance);
}
 void* GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer::get_digits()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer>::get(),
                            "get_digits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void*, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: System::Globalization::System__Globalization__FormatProvider__Number.Int32ToDecChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*, ByRef<int32_t>, uint32_t, int32_t)>(&System::Globalization::System__Globalization__FormatProvider__Number::Int32ToDecChars)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x26b8118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get(),
                            "Int32ToDecChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::System__Globalization__FormatProvider__Number.ParseFormatSpecifier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(System::ReadOnlySpan_1<char16_t>, ByRef<int32_t>)>(&System::Globalization::System__Globalization__FormatProvider__Number::ParseFormatSpecifier)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x26b6a10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get(),
                            "ParseFormatSpecifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::System__Globalization__FormatProvider__Number.NumberToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<System::Text::ValueStringBuilder>, ByRef<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer>, char16_t, int32_t, System::Globalization::NumberFormatInfo, bool)>(&System::Globalization::System__Globalization__FormatProvider__Number::NumberToString)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x26b6b50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get(),
                            "NumberToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::System__Globalization__FormatProvider__Number.FormatCurrency
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<System::Text::ValueStringBuilder>, ByRef<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer>, int32_t, int32_t, System::Globalization::NumberFormatInfo)>(&System::Globalization::System__Globalization__FormatProvider__Number::FormatCurrency)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x26b8248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get(),
                            "FormatCurrency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::System__Globalization__FormatProvider__Number.wcslen
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(void*)>(&System::Globalization::System__Globalization__FormatProvider__Number::wcslen)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x26b9464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get(),
                            "wcslen",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::System__Globalization__FormatProvider__Number.FormatFixed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<System::Text::ValueStringBuilder>, ByRef<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer>, int32_t, int32_t, System::Globalization::NumberFormatInfo, ::ArrayW<int32_t>, ::StringW, ::StringW)>(&System::Globalization::System__Globalization__FormatProvider__Number::FormatFixed)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x26b84a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get(),
                            "FormatFixed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::System__Globalization__FormatProvider__Number.FormatNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<System::Text::ValueStringBuilder>, ByRef<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer>, int32_t, int32_t, System::Globalization::NumberFormatInfo)>(&System::Globalization::System__Globalization__FormatProvider__Number::FormatNumber)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x26b89e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get(),
                            "FormatNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::System__Globalization__FormatProvider__Number.FormatScientific
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<System::Text::ValueStringBuilder>, ByRef<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer>, int32_t, int32_t, System::Globalization::NumberFormatInfo, char16_t)>(&System::Globalization::System__Globalization__FormatProvider__Number::FormatScientific)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x26b8c2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get(),
                            "FormatScientific",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::System__Globalization__FormatProvider__Number.FormatExponent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<System::Text::ValueStringBuilder>, System::Globalization::NumberFormatInfo, int32_t, char16_t, int32_t, bool)>(&System::Globalization::System__Globalization__FormatProvider__Number::FormatExponent)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x26b9640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get(),
                            "FormatExponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::System__Globalization__FormatProvider__Number.FormatGeneral
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<System::Text::ValueStringBuilder>, ByRef<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer>, int32_t, int32_t, System::Globalization::NumberFormatInfo, char16_t, bool)>(&System::Globalization::System__Globalization__FormatProvider__Number::FormatGeneral)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x26b8e68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get(),
                            "FormatGeneral",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::System__Globalization__FormatProvider__Number.FormatPercent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<System::Text::ValueStringBuilder>, ByRef<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer>, int32_t, int32_t, System::Globalization::NumberFormatInfo)>(&System::Globalization::System__Globalization__FormatProvider__Number::FormatPercent)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x26b9204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get(),
                            "FormatPercent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::System__Globalization__FormatProvider__Number.RoundNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer>, int32_t)>(&System::Globalization::System__Globalization__FormatProvider__Number::RoundNumber)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x26b8174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get(),
                            "RoundNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::System__Globalization__FormatProvider__Number.FindSection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(System::ReadOnlySpan_1<char16_t>, int32_t)>(&System::Globalization::System__Globalization__FormatProvider__Number::FindSection)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x26b9930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get(),
                            "FindSection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::System__Globalization__FormatProvider__Number.NumberToStringFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<System::Text::ValueStringBuilder>, ByRef<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer>, System::ReadOnlySpan_1<char16_t>, System::Globalization::NumberFormatInfo)>(&System::Globalization::System__Globalization__FormatProvider__Number::NumberToStringFormat)> {
  constexpr static std::size_t size = 0x1080;
  constexpr static std::size_t addrs = 0x26b7098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get(),
                            "NumberToStringFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::Globalization::System__Globalization__FormatProvider__Number::__set_s_posCurrencyFormats(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_posCurrencyFormats", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> System::Globalization::System__Globalization__FormatProvider__Number::__get_s_posCurrencyFormats()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_posCurrencyFormats", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get>();
}
 void System::Globalization::System__Globalization__FormatProvider__Number::__set_s_negCurrencyFormats(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_negCurrencyFormats", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> System::Globalization::System__Globalization__FormatProvider__Number::__get_s_negCurrencyFormats()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_negCurrencyFormats", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get>();
}
 void System::Globalization::System__Globalization__FormatProvider__Number::__set_s_posPercentFormats(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_posPercentFormats", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> System::Globalization::System__Globalization__FormatProvider__Number::__get_s_posPercentFormats()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_posPercentFormats", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get>();
}
 void System::Globalization::System__Globalization__FormatProvider__Number::__set_s_negPercentFormats(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_negPercentFormats", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> System::Globalization::System__Globalization__FormatProvider__Number::__get_s_negPercentFormats()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_negPercentFormats", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get>();
}
 void System::Globalization::System__Globalization__FormatProvider__Number::__set_s_negNumberFormats(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_negNumberFormats", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> System::Globalization::System__Globalization__FormatProvider__Number::__get_s_negNumberFormats()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_negNumberFormats", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get>();
}
 void System::Globalization::System__Globalization__FormatProvider__Number::__set_s_posNumberFormat(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "s_posNumberFormat", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get>(std::forward<::StringW>(value));
}
 ::StringW System::Globalization::System__Globalization__FormatProvider__Number::__get_s_posNumberFormat()  {
return ::cordl_internals::getStaticField<::StringW, "s_posNumberFormat", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get>();
}
 void System::Globalization::System__Globalization__FormatProvider__Number::Int32ToDecChars(void* buffer, ByRef<int32_t> index, uint32_t value, int32_t digits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get(),
                            "Int32ToDecChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, buffer, index, value, digits);
}
 char16_t System::Globalization::System__Globalization__FormatProvider__Number::ParseFormatSpecifier(System::ReadOnlySpan_1<char16_t> format, ByRef<int32_t> digits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get(),
                            "ParseFormatSpecifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, format, digits);
}
 void System::Globalization::System__Globalization__FormatProvider__Number::NumberToString(ByRef<System::Text::ValueStringBuilder> sb, ByRef<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer> number, char16_t format, int32_t nMaxDigits, System::Globalization::NumberFormatInfo info, bool isDecimal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get(),
                            "NumberToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, number, format, nMaxDigits, info, isDecimal);
}
 void System::Globalization::System__Globalization__FormatProvider__Number::FormatCurrency(ByRef<System::Text::ValueStringBuilder> sb, ByRef<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits, System::Globalization::NumberFormatInfo info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get(),
                            "FormatCurrency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, number, nMinDigits, nMaxDigits, info);
}
 int32_t System::Globalization::System__Globalization__FormatProvider__Number::wcslen(void* s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get(),
                            "wcslen",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, s);
}
 void System::Globalization::System__Globalization__FormatProvider__Number::FormatFixed(ByRef<System::Text::ValueStringBuilder> sb, ByRef<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits, System::Globalization::NumberFormatInfo info, ::ArrayW<int32_t> groupDigits, ::StringW sDecimal, ::StringW sGroup)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get(),
                            "FormatFixed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, number, nMinDigits, nMaxDigits, info, groupDigits, sDecimal, sGroup);
}
 void System::Globalization::System__Globalization__FormatProvider__Number::FormatNumber(ByRef<System::Text::ValueStringBuilder> sb, ByRef<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits, System::Globalization::NumberFormatInfo info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get(),
                            "FormatNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, number, nMinDigits, nMaxDigits, info);
}
 void System::Globalization::System__Globalization__FormatProvider__Number::FormatScientific(ByRef<System::Text::ValueStringBuilder> sb, ByRef<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits, System::Globalization::NumberFormatInfo info, char16_t expChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get(),
                            "FormatScientific",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, number, nMinDigits, nMaxDigits, info, expChar);
}
 void System::Globalization::System__Globalization__FormatProvider__Number::FormatExponent(ByRef<System::Text::ValueStringBuilder> sb, System::Globalization::NumberFormatInfo info, int32_t value, char16_t expChar, int32_t minDigits, bool positiveSign)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get(),
                            "FormatExponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, info, value, expChar, minDigits, positiveSign);
}
 void System::Globalization::System__Globalization__FormatProvider__Number::FormatGeneral(ByRef<System::Text::ValueStringBuilder> sb, ByRef<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits, System::Globalization::NumberFormatInfo info, char16_t expChar, bool bSuppressScientific)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get(),
                            "FormatGeneral",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, number, nMinDigits, nMaxDigits, info, expChar, bSuppressScientific);
}
 void System::Globalization::System__Globalization__FormatProvider__Number::FormatPercent(ByRef<System::Text::ValueStringBuilder> sb, ByRef<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits, System::Globalization::NumberFormatInfo info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get(),
                            "FormatPercent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, number, nMinDigits, nMaxDigits, info);
}
 void System::Globalization::System__Globalization__FormatProvider__Number::RoundNumber(ByRef<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer> number, int32_t pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get(),
                            "RoundNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, number, pos);
}
 int32_t System::Globalization::System__Globalization__FormatProvider__Number::FindSection(System::ReadOnlySpan_1<char16_t> format, int32_t section)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get(),
                            "FindSection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, format, section);
}
 void System::Globalization::System__Globalization__FormatProvider__Number::NumberToStringFormat(ByRef<System::Text::ValueStringBuilder> sb, ByRef<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer> number, System::ReadOnlySpan_1<char16_t> format, System::Globalization::NumberFormatInfo info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__FormatProvider__Number>::get(),
                            "NumberToStringFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::System__Globalization__FormatProvider__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, number, format, info);
}
//  Writing Method size for method: System::Globalization::FormatProvider.FormatBigInteger
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<System::Text::ValueStringBuilder>, int32_t, int32_t, bool, System::ReadOnlySpan_1<char16_t>, System::Globalization::NumberFormatInfo, ::ArrayW<char16_t>, int32_t)>(&System::Globalization::FormatProvider::FormatBigInteger)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x26b68c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::FormatProvider>::get(),
                            "FormatBigInteger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::Globalization::FormatProvider::FormatBigInteger(ByRef<System::Text::ValueStringBuilder> sb, int32_t precision, int32_t scale, bool sign, System::ReadOnlySpan_1<char16_t> format, System::Globalization::NumberFormatInfo numberFormatInfo, ::ArrayW<char16_t> digits, int32_t startIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::FormatProvider>::get(),
                            "FormatBigInteger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, precision, scale, sign, format, numberFormatInfo, digits, startIndex);
}
