#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/zzzz__Number_def.hpp"
#include "System/Globalization/zzzz__NumberStyles_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/Text/zzzz__ValueStringBuilder_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/Globalization/zzzz__NumberFormatInfo_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
//  Writing Method size for method: System::System__Number__NumberBuffer.get_sign
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::System__Number__NumberBuffer::*)()>(&System::System__Number__NumberBuffer::get_sign)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x244f62c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__Number__NumberBuffer>::get(),
                            "get_sign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::System__Number__NumberBuffer.set_sign
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::System__Number__NumberBuffer::*)(bool)>(&System::System__Number__NumberBuffer::set_sign)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x244f63c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__Number__NumberBuffer>::get(),
                            "set_sign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::System__Number__NumberBuffer.get_digits
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (System::System__Number__NumberBuffer::*)()>(&System::System__Number__NumberBuffer::get_digits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244f648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__Number__NumberBuffer>::get(),
                            "get_digits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "precision", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "scale", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_sign", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_digits", ty: "GlobalNamespace::System__Number__NumberBuffer__DigitsAndNullTerminator", modifiers: "", def_value: Some("{}") }, CppParam { name: "_allDigits", ty: "void*", modifiers: "", def_value: Some("csnull") }]
constexpr System::System__Number__NumberBuffer::System__Number__NumberBuffer(int32_t precision, int32_t scale, int32_t _sign, GlobalNamespace::System__Number__NumberBuffer__DigitsAndNullTerminator _digits, void* _allDigits) noexcept : ::bs_hook::ValueTypeWrapper() {this->precision = precision;
this->scale = scale;
this->_sign = _sign;
this->_digits = _digits;
this->_allDigits = _allDigits;
}
constexpr void System::System__Number__NumberBuffer::__set_precision(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::System__Number__NumberBuffer::__get_precision() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void System::System__Number__NumberBuffer::__set_scale(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::System__Number__NumberBuffer::__get_scale() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void System::System__Number__NumberBuffer::__set__sign(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::System__Number__NumberBuffer::__get__sign() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void System::System__Number__NumberBuffer::__set__digits(GlobalNamespace::System__Number__NumberBuffer__DigitsAndNullTerminator value)  {
::cordl_internals::setInstanceField<GlobalNamespace::System__Number__NumberBuffer__DigitsAndNullTerminator, 0xc>(this->__instance, std::forward<GlobalNamespace::System__Number__NumberBuffer__DigitsAndNullTerminator>(value));
}
constexpr GlobalNamespace::System__Number__NumberBuffer__DigitsAndNullTerminator System::System__Number__NumberBuffer::__get__digits() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::System__Number__NumberBuffer__DigitsAndNullTerminator, 0xc>(this->__instance);
}
constexpr void System::System__Number__NumberBuffer::__set__allDigits(void* value)  {
::cordl_internals::setInstanceField<void*, 0x72>(this->__instance, std::forward<void*>(value));
}
constexpr void* System::System__Number__NumberBuffer::__get__allDigits() const {
return ::cordl_internals::getInstanceField<void*, 0x72>(this->__instance);
}
 bool System::System__Number__NumberBuffer::get_sign()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__Number__NumberBuffer>::get(),
                            "get_sign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::System__Number__NumberBuffer::set_sign(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__Number__NumberBuffer>::get(),
                            "set_sign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 void* System::System__Number__NumberBuffer::get_digits()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__Number__NumberBuffer>::get(),
                            "get_digits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void*, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: System::Number.FormatDecimal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::Decimal, System::ReadOnlySpan_1<char16_t>, System::Globalization::NumberFormatInfo)>(&System::Number::FormatDecimal)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x2442d54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "FormatDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Decimal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.TryFormatDecimal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Decimal, System::ReadOnlySpan_1<char16_t>, System::Globalization::NumberFormatInfo, System::Span_1<char16_t>, ByRef<int32_t>)>(&System::Number::TryFormatDecimal)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x2444924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryFormatDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Decimal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.DecimalToNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Decimal, ByRef<System::System__Number__NumberBuffer>)>(&System::Number::DecimalToNumber)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x2443074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "DecimalToNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Decimal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.FormatDouble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(double_t, ::StringW, System::Globalization::NumberFormatInfo)>(&System::Number::FormatDouble)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2444b7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "FormatDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.TryFormatDouble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(double_t, System::ReadOnlySpan_1<char16_t>, System::Globalization::NumberFormatInfo, System::Span_1<char16_t>, ByRef<int32_t>)>(&System::Number::TryFormatDouble)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2444fc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryFormatDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.FormatDouble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(ByRef<System::Text::ValueStringBuilder>, double_t, System::ReadOnlySpan_1<char16_t>, System::Globalization::NumberFormatInfo)>(&System::Number::FormatDouble)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x2444cdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "FormatDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.FormatSingle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(float_t, ::StringW, System::Globalization::NumberFormatInfo)>(&System::Number::FormatSingle)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2445b7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "FormatSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.TryFormatSingle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float_t, System::ReadOnlySpan_1<char16_t>, System::Globalization::NumberFormatInfo, System::Span_1<char16_t>, ByRef<int32_t>)>(&System::Number::TryFormatSingle)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2445fcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryFormatSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.FormatSingle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(ByRef<System::Text::ValueStringBuilder>, float_t, System::ReadOnlySpan_1<char16_t>, System::Globalization::NumberFormatInfo)>(&System::Number::FormatSingle)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x2445cdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "FormatSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.TryCopyTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, System::Span_1<char16_t>, ByRef<int32_t>)>(&System::Number::TryCopyTo)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x244513c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryCopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.FormatInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int32_t, System::ReadOnlySpan_1<char16_t>, System::IFormatProvider)>(&System::Number::FormatInt32)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x243bdec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "FormatInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.TryFormatInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t, System::ReadOnlySpan_1<char16_t>, System::IFormatProvider, System::Span_1<char16_t>, ByRef<int32_t>)>(&System::Number::TryFormatInt32)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x243cc14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryFormatInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.FormatUInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(uint32_t, System::ReadOnlySpan_1<char16_t>, System::IFormatProvider)>(&System::Number::FormatUInt32)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x243c3b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "FormatUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.TryFormatUInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint32_t, System::ReadOnlySpan_1<char16_t>, System::IFormatProvider, System::Span_1<char16_t>, ByRef<int32_t>)>(&System::Number::TryFormatUInt32)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x243c83c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryFormatUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.FormatInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int64_t, System::ReadOnlySpan_1<char16_t>, System::IFormatProvider)>(&System::Number::FormatInt64)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x243f0b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "FormatInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.TryFormatInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int64_t, System::ReadOnlySpan_1<char16_t>, System::IFormatProvider, System::Span_1<char16_t>, ByRef<int32_t>)>(&System::Number::TryFormatInt64)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x243f618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryFormatInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.FormatUInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(uint64_t, System::ReadOnlySpan_1<char16_t>, System::IFormatProvider)>(&System::Number::FormatUInt64)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x2447ab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "FormatUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.TryFormatUInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint64_t, System::ReadOnlySpan_1<char16_t>, System::IFormatProvider, System::Span_1<char16_t>, ByRef<int32_t>)>(&System::Number::TryFormatUInt64)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x2447ed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryFormatUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.Int32ToNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ByRef<System::System__Number__NumberBuffer>)>(&System::Number::Int32ToNumber)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x24481b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "Int32ToNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.NegativeInt32ToDecStr
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int32_t, int32_t, ::StringW)>(&System::Number::NegativeInt32ToDecStr)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x24462d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "NegativeInt32ToDecStr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.TryNegativeInt32ToDecStr
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t, int32_t, ::StringW, System::Span_1<char16_t>, ByRef<int32_t>)>(&System::Number::TryNegativeInt32ToDecStr)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2446780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryNegativeInt32ToDecStr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.Int32ToHexStr
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int32_t, char16_t, int32_t)>(&System::Number::Int32ToHexStr)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2446484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "Int32ToHexStr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.TryInt32ToHexStr
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t, char16_t, int32_t, System::Span_1<char16_t>, ByRef<int32_t>)>(&System::Number::TryInt32ToHexStr)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2446968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryInt32ToHexStr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.Int32ToHexChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(void*, uint32_t, int32_t, int32_t)>(&System::Number::Int32ToHexChars)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x24482e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "Int32ToHexChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.UInt32ToNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint32_t, ByRef<System::System__Number__NumberBuffer>)>(&System::Number::UInt32ToNumber)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2448320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "UInt32ToNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.UInt32ToDecChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(void*, uint32_t, int32_t)>(&System::Number::UInt32ToDecChars)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2444b30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "UInt32ToDecChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.UInt32ToDecStr
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(uint32_t, int32_t)>(&System::Number::UInt32ToDecStr)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2446148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "UInt32ToDecStr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.TryUInt32ToDecStr
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint32_t, int32_t, System::Span_1<char16_t>, ByRef<int32_t>)>(&System::Number::TryUInt32ToDecStr)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x24465bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryUInt32ToDecStr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.Int64ToNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int64_t, ByRef<System::System__Number__NumberBuffer>)>(&System::Number::Int64ToNumber)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x24471c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "Int64ToNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.NegativeInt64ToDecStr
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int64_t, int32_t, ::StringW)>(&System::Number::NegativeInt64ToDecStr)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x2446d34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "NegativeInt64ToDecStr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.TryNegativeInt64ToDecStr
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int64_t, int32_t, ::StringW, System::Span_1<char16_t>, ByRef<int32_t>)>(&System::Number::TryNegativeInt64ToDecStr)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x24475ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryNegativeInt64ToDecStr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.Int64ToHexStr
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int64_t, char16_t, int32_t)>(&System::Number::Int64ToHexStr)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2446fd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "Int64ToHexStr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.TryInt64ToHexStr
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int64_t, char16_t, int32_t, System::Span_1<char16_t>, ByRef<int32_t>)>(&System::Number::TryInt64ToHexStr)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x24478b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryInt64ToHexStr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.UInt64ToNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, ByRef<System::System__Number__NumberBuffer>)>(&System::Number::UInt64ToNumber)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x2447d44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "UInt64ToNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.UInt64ToDecStr
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(uint64_t, int32_t)>(&System::Number::UInt64ToDecStr)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x2446adc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "UInt64ToDecStr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.TryUInt64ToDecStr
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint64_t, int32_t, System::Span_1<char16_t>, ByRef<int32_t>)>(&System::Number::TryUInt64ToDecStr)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x2447368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryUInt64ToDecStr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.ParseFormatSpecifier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(System::ReadOnlySpan_1<char16_t>, ByRef<int32_t>)>(&System::Number::ParseFormatSpecifier)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2442f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "ParseFormatSpecifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.NumberToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<System::Text::ValueStringBuilder>, ByRef<System::System__Number__NumberBuffer>, char16_t, int32_t, System::Globalization::NumberFormatInfo, bool)>(&System::Number::NumberToString)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x244328c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "NumberToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.NumberToStringFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<System::Text::ValueStringBuilder>, ByRef<System::System__Number__NumberBuffer>, System::ReadOnlySpan_1<char16_t>, System::Globalization::NumberFormatInfo)>(&System::Number::NumberToStringFormat)> {
  constexpr static std::size_t size = 0x1118;
  constexpr static std::size_t addrs = 0x244380c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "NumberToStringFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.FormatCurrency
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<System::Text::ValueStringBuilder>, ByRef<System::System__Number__NumberBuffer>, int32_t, int32_t, System::Globalization::NumberFormatInfo)>(&System::Number::FormatCurrency)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x244857c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "FormatCurrency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.FormatFixed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<System::Text::ValueStringBuilder>, ByRef<System::System__Number__NumberBuffer>, int32_t, int32_t, System::Globalization::NumberFormatInfo, ::ArrayW<int32_t>, ::StringW, ::StringW)>(&System::Number::FormatFixed)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0x24487e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "FormatFixed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.FormatNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<System::Text::ValueStringBuilder>, ByRef<System::System__Number__NumberBuffer>, int32_t, int32_t, System::Globalization::NumberFormatInfo)>(&System::Number::FormatNumber)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2448d24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "FormatNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.FormatScientific
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<System::Text::ValueStringBuilder>, ByRef<System::System__Number__NumberBuffer>, int32_t, int32_t, System::Globalization::NumberFormatInfo, char16_t)>(&System::Number::FormatScientific)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x2448f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "FormatScientific",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.FormatExponent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<System::Text::ValueStringBuilder>, System::Globalization::NumberFormatInfo, int32_t, char16_t, int32_t, bool)>(&System::Number::FormatExponent)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x2449924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "FormatExponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.FormatGeneral
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<System::Text::ValueStringBuilder>, ByRef<System::System__Number__NumberBuffer>, int32_t, int32_t, System::Globalization::NumberFormatInfo, char16_t, bool)>(&System::Number::FormatGeneral)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x24491d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "FormatGeneral",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.FormatPercent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<System::Text::ValueStringBuilder>, ByRef<System::System__Number__NumberBuffer>, int32_t, int32_t, System::Globalization::NumberFormatInfo)>(&System::Number::FormatPercent)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x2449588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "FormatPercent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.RoundNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<System::System__Number__NumberBuffer>, int32_t)>(&System::Number::RoundNumber)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x244847c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "RoundNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.FindSection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(System::ReadOnlySpan_1<char16_t>, int32_t)>(&System::Number::FindSection)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x24497f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "FindSection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.Low32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(uint64_t)>(&System::Number::Low32)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2448478;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "Low32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.High32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(uint64_t)>(&System::Number::High32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2448470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "High32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.Int64DivMod1E9
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(ByRef<uint64_t>)>(&System::Number::Int64DivMod1E9)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2448438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "Int64DivMod1E9",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.NumberToInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::System__Number__NumberBuffer>, ByRef<int32_t>)>(&System::Number::NumberToInt32)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2449bcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "NumberToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.NumberToInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::System__Number__NumberBuffer>, ByRef<int64_t>)>(&System::Number::NumberToInt64)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2449c88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "NumberToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.NumberToUInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::System__Number__NumberBuffer>, ByRef<uint32_t>)>(&System::Number::NumberToUInt32)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2449d3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "NumberToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.NumberToUInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::System__Number__NumberBuffer>, ByRef<uint64_t>)>(&System::Number::NumberToUInt64)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2449dec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "NumberToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.ParseInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(System::ReadOnlySpan_1<char16_t>, System::Globalization::NumberStyles, System::Globalization::NumberFormatInfo)>(&System::Number::ParseInt32)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x243d308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "ParseInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.ParseInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(System::ReadOnlySpan_1<char16_t>, System::Globalization::NumberStyles, System::Globalization::NumberFormatInfo)>(&System::Number::ParseInt64)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x243fa0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "ParseInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.ParseUInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(System::ReadOnlySpan_1<char16_t>, System::Globalization::NumberStyles, System::Globalization::NumberFormatInfo)>(&System::Number::ParseUInt32)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x244b64c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "ParseUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.ParseUInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(System::ReadOnlySpan_1<char16_t>, System::Globalization::NumberStyles, System::Globalization::NumberFormatInfo)>(&System::Number::ParseUInt64)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x244bfa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "ParseUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.ParseNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<void*>, void*, System::Globalization::NumberStyles, ByRef<System::System__Number__NumberBuffer>, System::Globalization::NumberFormatInfo, bool)>(&System::Number::ParseNumber)> {
  constexpr static std::size_t size = 0x708;
  constexpr static std::size_t addrs = 0x244c908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "ParseNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.TryParseInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::ReadOnlySpan_1<char16_t>, System::Globalization::NumberStyles, System::Globalization::NumberFormatInfo, ByRef<int32_t>)>(&System::Number::TryParseInt32)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x243d64c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryParseInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.TryParseInt32IntegerStyle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::ReadOnlySpan_1<char16_t>, System::Globalization::NumberStyles, System::Globalization::NumberFormatInfo, ByRef<int32_t>, ByRef<bool>)>(&System::Number::TryParseInt32IntegerStyle)> {
  constexpr static std::size_t size = 0x7a8;
  constexpr static std::size_t addrs = 0x2449e9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryParseInt32IntegerStyle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.TryParseInt64IntegerStyle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::ReadOnlySpan_1<char16_t>, System::Globalization::NumberStyles, System::Globalization::NumberFormatInfo, ByRef<int64_t>, ByRef<bool>)>(&System::Number::TryParseInt64IntegerStyle)> {
  constexpr static std::size_t size = 0x7b4;
  constexpr static std::size_t addrs = 0x244ab54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryParseInt64IntegerStyle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.TryParseInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::ReadOnlySpan_1<char16_t>, System::Globalization::NumberStyles, System::Globalization::NumberFormatInfo, ByRef<int64_t>)>(&System::Number::TryParseInt64)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x243fe68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryParseInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.TryParseUInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::ReadOnlySpan_1<char16_t>, System::Globalization::NumberStyles, System::Globalization::NumberFormatInfo, ByRef<uint32_t>)>(&System::Number::TryParseUInt32)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x244d26c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryParseUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.TryParseUInt32IntegerStyle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::ReadOnlySpan_1<char16_t>, System::Globalization::NumberStyles, System::Globalization::NumberFormatInfo, ByRef<uint32_t>, ByRef<bool>)>(&System::Number::TryParseUInt32IntegerStyle)> {
  constexpr static std::size_t size = 0x7a0;
  constexpr static std::size_t addrs = 0x244b804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryParseUInt32IntegerStyle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.TryParseUInt32HexNumberStyle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::ReadOnlySpan_1<char16_t>, System::Globalization::NumberStyles, System::Globalization::NumberFormatInfo, ByRef<uint32_t>, ByRef<bool>)>(&System::Number::TryParseUInt32HexNumberStyle)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x244a6d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryParseUInt32HexNumberStyle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.TryParseUInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::ReadOnlySpan_1<char16_t>, System::Globalization::NumberStyles, System::Globalization::NumberFormatInfo, ByRef<uint64_t>)>(&System::Number::TryParseUInt64)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x244d3f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryParseUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.TryParseUInt64IntegerStyle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::ReadOnlySpan_1<char16_t>, System::Globalization::NumberStyles, System::Globalization::NumberFormatInfo, ByRef<uint64_t>, ByRef<bool>)>(&System::Number::TryParseUInt64IntegerStyle)> {
  constexpr static std::size_t size = 0x7ac;
  constexpr static std::size_t addrs = 0x244c15c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryParseUInt64IntegerStyle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.TryParseUInt64HexNumberStyle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::ReadOnlySpan_1<char16_t>, System::Globalization::NumberStyles, System::Globalization::NumberFormatInfo, ByRef<uint64_t>, ByRef<bool>)>(&System::Number::TryParseUInt64HexNumberStyle)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x244b308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryParseUInt64HexNumberStyle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.ParseDecimal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Decimal (*)(System::ReadOnlySpan_1<char16_t>, System::Globalization::NumberStyles, System::Globalization::NumberFormatInfo)>(&System::Number::ParseDecimal)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x244d584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "ParseDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.NumberBufferToDecimal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::System__Number__NumberBuffer>, ByRef<System::Decimal>)>(&System::Number::NumberBufferToDecimal)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x244d68c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "NumberBufferToDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Decimal>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.ParseDouble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(System::ReadOnlySpan_1<char16_t>, System::Globalization::NumberStyles, System::Globalization::NumberFormatInfo)>(&System::Number::ParseDouble)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x244d964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "ParseDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.ParseSingle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(System::ReadOnlySpan_1<char16_t>, System::Globalization::NumberStyles, System::Globalization::NumberFormatInfo)>(&System::Number::ParseSingle)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x244df64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "ParseSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.TryParseDecimal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::ReadOnlySpan_1<char16_t>, System::Globalization::NumberStyles, System::Globalization::NumberFormatInfo, ByRef<System::Decimal>)>(&System::Number::TryParseDecimal)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x244e504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryParseDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Decimal>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.TryParseDouble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::ReadOnlySpan_1<char16_t>, System::Globalization::NumberStyles, System::Globalization::NumberFormatInfo, ByRef<double_t>)>(&System::Number::TryParseDouble)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x244e608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryParseDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<double_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.TryParseSingle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::ReadOnlySpan_1<char16_t>, System::Globalization::NumberStyles, System::Globalization::NumberFormatInfo, ByRef<float_t>)>(&System::Number::TryParseSingle)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x244e70c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryParseSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.StringToNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::ReadOnlySpan_1<char16_t>, System::Globalization::NumberStyles, ByRef<System::System__Number__NumberBuffer>, System::Globalization::NumberFormatInfo, bool)>(&System::Number::StringToNumber)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x244aa1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "StringToNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.TryStringToNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::ReadOnlySpan_1<char16_t>, System::Globalization::NumberStyles, ByRef<System::System__Number__NumberBuffer>, System::Globalization::NumberFormatInfo, bool)>(&System::Number::TryStringToNumber)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x244d0c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryStringToNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.TrailingZeros
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::ReadOnlySpan_1<char16_t>, int32_t)>(&System::Number::TrailingZeros)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x244d1f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TrailingZeros",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.MatchChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(void*, void*, ::StringW)>(&System::Number::MatchChars)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x244d02c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "MatchChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.IsWhite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&System::Number::IsWhite)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x244d010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "IsWhite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.IsDigit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&System::Number::IsDigit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x244d0b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "IsDigit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.ThrowOverflowOrFormatException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, ::StringW)>(&System::Number::ThrowOverflowOrFormatException)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x244a644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "ThrowOverflowOrFormatException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.NumberBufferToDouble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::System__Number__NumberBuffer>, ByRef<double_t>)>(&System::Number::NumberBufferToDouble)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x244de94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "NumberBufferToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<double_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.DigitsToInt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(void*, int32_t)>(&System::Number::DigitsToInt)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x244e880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "DigitsToInt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.Mul32x32To64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint32_t, uint32_t)>(&System::Number::Mul32x32To64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244e8b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "Mul32x32To64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.Mul64Lossy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t, uint64_t, ByRef<int32_t>)>(&System::Number::Mul64Lossy)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x244e8bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "Mul64Lossy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.abs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&System::Number::abs)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x244e954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "abs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.NumberToDouble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(ByRef<System::System__Number__NumberBuffer>)>(&System::Number::NumberToDouble)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x2445694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "NumberToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Number.DoubleToNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(double_t, int32_t, ByRef<System::System__Number__NumberBuffer>)>(&System::Number::DoubleToNumber)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x2445218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "DoubleToNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::Number::__set_s_posCurrencyFormats(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_posCurrencyFormats", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> System::Number::__get_s_posCurrencyFormats()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_posCurrencyFormats", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get>();
}
 void System::Number::__set_s_negCurrencyFormats(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_negCurrencyFormats", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> System::Number::__get_s_negCurrencyFormats()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_negCurrencyFormats", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get>();
}
 void System::Number::__set_s_posPercentFormats(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_posPercentFormats", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> System::Number::__get_s_posPercentFormats()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_posPercentFormats", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get>();
}
 void System::Number::__set_s_negPercentFormats(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_negPercentFormats", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> System::Number::__get_s_negPercentFormats()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_negPercentFormats", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get>();
}
 void System::Number::__set_s_negNumberFormats(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_negNumberFormats", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> System::Number::__get_s_negNumberFormats()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_negNumberFormats", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get>();
}
 void System::Number::__set_s_charToHexLookup(::ArrayW<int32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "s_charToHexLookup", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get>(std::forward<::ArrayW<int32_t>>(value));
}
 ::ArrayW<int32_t> System::Number::__get_s_charToHexLookup()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "s_charToHexLookup", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get>();
}
 void System::Number::__set_s_rgval64Power10(::ArrayW<uint64_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint64_t>, "s_rgval64Power10", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get>(std::forward<::ArrayW<uint64_t>>(value));
}
 ::ArrayW<uint64_t> System::Number::__get_s_rgval64Power10()  {
return ::cordl_internals::getStaticField<::ArrayW<uint64_t>, "s_rgval64Power10", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get>();
}
 void System::Number::__set_s_rgexp64Power10(::ArrayW<int8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<int8_t>, "s_rgexp64Power10", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get>(std::forward<::ArrayW<int8_t>>(value));
}
 ::ArrayW<int8_t> System::Number::__get_s_rgexp64Power10()  {
return ::cordl_internals::getStaticField<::ArrayW<int8_t>, "s_rgexp64Power10", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get>();
}
 void System::Number::__set_s_rgval64Power10By16(::ArrayW<uint64_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint64_t>, "s_rgval64Power10By16", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get>(std::forward<::ArrayW<uint64_t>>(value));
}
 ::ArrayW<uint64_t> System::Number::__get_s_rgval64Power10By16()  {
return ::cordl_internals::getStaticField<::ArrayW<uint64_t>, "s_rgval64Power10By16", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get>();
}
 void System::Number::__set_s_rgexp64Power10By16(::ArrayW<int16_t> value)  {
::cordl_internals::setStaticField<::ArrayW<int16_t>, "s_rgexp64Power10By16", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get>(std::forward<::ArrayW<int16_t>>(value));
}
 ::ArrayW<int16_t> System::Number::__get_s_rgexp64Power10By16()  {
return ::cordl_internals::getStaticField<::ArrayW<int16_t>, "s_rgexp64Power10By16", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get>();
}
 ::StringW System::Number::FormatDecimal(System::Decimal value, System::ReadOnlySpan_1<char16_t> format, System::Globalization::NumberFormatInfo info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "FormatDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Decimal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, format, info);
}
 bool System::Number::TryFormatDecimal(System::Decimal value, System::ReadOnlySpan_1<char16_t> format, System::Globalization::NumberFormatInfo info, System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryFormatDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Decimal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value, format, info, destination, charsWritten);
}
 void System::Number::DecimalToNumber(System::Decimal value, ByRef<System::System__Number__NumberBuffer> number)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "DecimalToNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Decimal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value, number);
}
 ::StringW System::Number::FormatDouble(double_t value, ::StringW format, System::Globalization::NumberFormatInfo info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "FormatDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, format, info);
}
 bool System::Number::TryFormatDouble(double_t value, System::ReadOnlySpan_1<char16_t> format, System::Globalization::NumberFormatInfo info, System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryFormatDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value, format, info, destination, charsWritten);
}
 ::StringW System::Number::FormatDouble(ByRef<System::Text::ValueStringBuilder> sb, double_t value, System::ReadOnlySpan_1<char16_t> format, System::Globalization::NumberFormatInfo info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "FormatDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, sb, value, format, info);
}
 ::StringW System::Number::FormatSingle(float_t value, ::StringW format, System::Globalization::NumberFormatInfo info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "FormatSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, format, info);
}
 bool System::Number::TryFormatSingle(float_t value, System::ReadOnlySpan_1<char16_t> format, System::Globalization::NumberFormatInfo info, System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryFormatSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value, format, info, destination, charsWritten);
}
 ::StringW System::Number::FormatSingle(ByRef<System::Text::ValueStringBuilder> sb, float_t value, System::ReadOnlySpan_1<char16_t> format, System::Globalization::NumberFormatInfo info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "FormatSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, sb, value, format, info);
}
 bool System::Number::TryCopyTo(::StringW source, System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryCopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, source, destination, charsWritten);
}
 ::StringW System::Number::FormatInt32(int32_t value, System::ReadOnlySpan_1<char16_t> format, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "FormatInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, format, provider);
}
 bool System::Number::TryFormatInt32(int32_t value, System::ReadOnlySpan_1<char16_t> format, System::IFormatProvider provider, System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryFormatInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value, format, provider, destination, charsWritten);
}
 ::StringW System::Number::FormatUInt32(uint32_t value, System::ReadOnlySpan_1<char16_t> format, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "FormatUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, format, provider);
}
 bool System::Number::TryFormatUInt32(uint32_t value, System::ReadOnlySpan_1<char16_t> format, System::IFormatProvider provider, System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryFormatUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value, format, provider, destination, charsWritten);
}
 ::StringW System::Number::FormatInt64(int64_t value, System::ReadOnlySpan_1<char16_t> format, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "FormatInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, format, provider);
}
 bool System::Number::TryFormatInt64(int64_t value, System::ReadOnlySpan_1<char16_t> format, System::IFormatProvider provider, System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryFormatInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value, format, provider, destination, charsWritten);
}
 ::StringW System::Number::FormatUInt64(uint64_t value, System::ReadOnlySpan_1<char16_t> format, System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "FormatUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, format, provider);
}
 bool System::Number::TryFormatUInt64(uint64_t value, System::ReadOnlySpan_1<char16_t> format, System::IFormatProvider provider, System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryFormatUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value, format, provider, destination, charsWritten);
}
 void System::Number::Int32ToNumber(int32_t value, ByRef<System::System__Number__NumberBuffer> number)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "Int32ToNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value, number);
}
 ::StringW System::Number::NegativeInt32ToDecStr(int32_t value, int32_t digits, ::StringW sNegative)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "NegativeInt32ToDecStr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, digits, sNegative);
}
 bool System::Number::TryNegativeInt32ToDecStr(int32_t value, int32_t digits, ::StringW sNegative, System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryNegativeInt32ToDecStr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value, digits, sNegative, destination, charsWritten);
}
 ::StringW System::Number::Int32ToHexStr(int32_t value, char16_t hexBase, int32_t digits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "Int32ToHexStr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, hexBase, digits);
}
 bool System::Number::TryInt32ToHexStr(int32_t value, char16_t hexBase, int32_t digits, System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryInt32ToHexStr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value, hexBase, digits, destination, charsWritten);
}
 void* System::Number::Int32ToHexChars(void* buffer, uint32_t value, int32_t hexBase, int32_t digits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "Int32ToHexChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, buffer, value, hexBase, digits);
}
 void System::Number::UInt32ToNumber(uint32_t value, ByRef<System::System__Number__NumberBuffer> number)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "UInt32ToNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value, number);
}
 void* System::Number::UInt32ToDecChars(void* bufferEnd, uint32_t value, int32_t digits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "UInt32ToDecChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, bufferEnd, value, digits);
}
 ::StringW System::Number::UInt32ToDecStr(uint32_t value, int32_t digits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "UInt32ToDecStr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, digits);
}
 bool System::Number::TryUInt32ToDecStr(uint32_t value, int32_t digits, System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryUInt32ToDecStr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value, digits, destination, charsWritten);
}
 void System::Number::Int64ToNumber(int64_t input, ByRef<System::System__Number__NumberBuffer> number)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "Int64ToNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, input, number);
}
 ::StringW System::Number::NegativeInt64ToDecStr(int64_t input, int32_t digits, ::StringW sNegative)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "NegativeInt64ToDecStr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, input, digits, sNegative);
}
 bool System::Number::TryNegativeInt64ToDecStr(int64_t input, int32_t digits, ::StringW sNegative, System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryNegativeInt64ToDecStr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, input, digits, sNegative, destination, charsWritten);
}
 ::StringW System::Number::Int64ToHexStr(int64_t value, char16_t hexBase, int32_t digits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "Int64ToHexStr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, hexBase, digits);
}
 bool System::Number::TryInt64ToHexStr(int64_t value, char16_t hexBase, int32_t digits, System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryInt64ToHexStr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value, hexBase, digits, destination, charsWritten);
}
 void System::Number::UInt64ToNumber(uint64_t value, ByRef<System::System__Number__NumberBuffer> number)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "UInt64ToNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value, number);
}
 ::StringW System::Number::UInt64ToDecStr(uint64_t value, int32_t digits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "UInt64ToDecStr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, digits);
}
 bool System::Number::TryUInt64ToDecStr(uint64_t value, int32_t digits, System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryUInt64ToDecStr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value, digits, destination, charsWritten);
}
 char16_t System::Number::ParseFormatSpecifier(System::ReadOnlySpan_1<char16_t> format, ByRef<int32_t> digits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "ParseFormatSpecifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, format, digits);
}
 void System::Number::NumberToString(ByRef<System::Text::ValueStringBuilder> sb, ByRef<System::System__Number__NumberBuffer> number, char16_t format, int32_t nMaxDigits, System::Globalization::NumberFormatInfo info, bool isDecimal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "NumberToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, number, format, nMaxDigits, info, isDecimal);
}
 void System::Number::NumberToStringFormat(ByRef<System::Text::ValueStringBuilder> sb, ByRef<System::System__Number__NumberBuffer> number, System::ReadOnlySpan_1<char16_t> format, System::Globalization::NumberFormatInfo info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "NumberToStringFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, number, format, info);
}
 void System::Number::FormatCurrency(ByRef<System::Text::ValueStringBuilder> sb, ByRef<System::System__Number__NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits, System::Globalization::NumberFormatInfo info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "FormatCurrency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, number, nMinDigits, nMaxDigits, info);
}
 void System::Number::FormatFixed(ByRef<System::Text::ValueStringBuilder> sb, ByRef<System::System__Number__NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits, System::Globalization::NumberFormatInfo info, ::ArrayW<int32_t> groupDigits, ::StringW sDecimal, ::StringW sGroup)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "FormatFixed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, number, nMinDigits, nMaxDigits, info, groupDigits, sDecimal, sGroup);
}
 void System::Number::FormatNumber(ByRef<System::Text::ValueStringBuilder> sb, ByRef<System::System__Number__NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits, System::Globalization::NumberFormatInfo info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "FormatNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, number, nMinDigits, nMaxDigits, info);
}
 void System::Number::FormatScientific(ByRef<System::Text::ValueStringBuilder> sb, ByRef<System::System__Number__NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits, System::Globalization::NumberFormatInfo info, char16_t expChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "FormatScientific",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, number, nMinDigits, nMaxDigits, info, expChar);
}
 void System::Number::FormatExponent(ByRef<System::Text::ValueStringBuilder> sb, System::Globalization::NumberFormatInfo info, int32_t value, char16_t expChar, int32_t minDigits, bool positiveSign)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "FormatExponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, info, value, expChar, minDigits, positiveSign);
}
 void System::Number::FormatGeneral(ByRef<System::Text::ValueStringBuilder> sb, ByRef<System::System__Number__NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits, System::Globalization::NumberFormatInfo info, char16_t expChar, bool bSuppressScientific)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "FormatGeneral",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, number, nMinDigits, nMaxDigits, info, expChar, bSuppressScientific);
}
 void System::Number::FormatPercent(ByRef<System::Text::ValueStringBuilder> sb, ByRef<System::System__Number__NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits, System::Globalization::NumberFormatInfo info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "FormatPercent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Text::ValueStringBuilder>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, number, nMinDigits, nMaxDigits, info);
}
 void System::Number::RoundNumber(ByRef<System::System__Number__NumberBuffer> number, int32_t pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "RoundNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, number, pos);
}
 int32_t System::Number::FindSection(System::ReadOnlySpan_1<char16_t> format, int32_t section)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "FindSection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, format, section);
}
 uint32_t System::Number::Low32(uint64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "Low32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, value);
}
 uint32_t System::Number::High32(uint64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "High32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, value);
}
 uint32_t System::Number::Int64DivMod1E9(ByRef<uint64_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "Int64DivMod1E9",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, value);
}
 bool System::Number::NumberToInt32(ByRef<System::System__Number__NumberBuffer> number, ByRef<int32_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "NumberToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, number, value);
}
 bool System::Number::NumberToInt64(ByRef<System::System__Number__NumberBuffer> number, ByRef<int64_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "NumberToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, number, value);
}
 bool System::Number::NumberToUInt32(ByRef<System::System__Number__NumberBuffer> number, ByRef<uint32_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "NumberToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, number, value);
}
 bool System::Number::NumberToUInt64(ByRef<System::System__Number__NumberBuffer> number, ByRef<uint64_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "NumberToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, number, value);
}
 int32_t System::Number::ParseInt32(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "ParseInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value, styles, info);
}
 int64_t System::Number::ParseInt64(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "ParseInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, value, styles, info);
}
 uint32_t System::Number::ParseUInt32(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "ParseUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, value, styles, info);
}
 uint64_t System::Number::ParseUInt64(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "ParseUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, value, styles, info);
}
 bool System::Number::ParseNumber(ByRef<void*> str, void* strEnd, System::Globalization::NumberStyles styles, ByRef<System::System__Number__NumberBuffer> number, System::Globalization::NumberFormatInfo info, bool parseDecimal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "ParseNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, strEnd, styles, number, info, parseDecimal);
}
 bool System::Number::TryParseInt32(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info, ByRef<int32_t> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryParseInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value, styles, info, result);
}
 bool System::Number::TryParseInt32IntegerStyle(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info, ByRef<int32_t> result, ByRef<bool> failureIsOverflow)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryParseInt32IntegerStyle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value, styles, info, result, failureIsOverflow);
}
 bool System::Number::TryParseInt64IntegerStyle(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info, ByRef<int64_t> result, ByRef<bool> failureIsOverflow)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryParseInt64IntegerStyle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value, styles, info, result, failureIsOverflow);
}
 bool System::Number::TryParseInt64(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info, ByRef<int64_t> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryParseInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value, styles, info, result);
}
 bool System::Number::TryParseUInt32(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info, ByRef<uint32_t> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryParseUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value, styles, info, result);
}
 bool System::Number::TryParseUInt32IntegerStyle(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info, ByRef<uint32_t> result, ByRef<bool> failureIsOverflow)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryParseUInt32IntegerStyle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value, styles, info, result, failureIsOverflow);
}
 bool System::Number::TryParseUInt32HexNumberStyle(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info, ByRef<uint32_t> result, ByRef<bool> failureIsOverflow)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryParseUInt32HexNumberStyle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value, styles, info, result, failureIsOverflow);
}
 bool System::Number::TryParseUInt64(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info, ByRef<uint64_t> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryParseUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value, styles, info, result);
}
 bool System::Number::TryParseUInt64IntegerStyle(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info, ByRef<uint64_t> result, ByRef<bool> failureIsOverflow)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryParseUInt64IntegerStyle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value, styles, info, result, failureIsOverflow);
}
 bool System::Number::TryParseUInt64HexNumberStyle(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info, ByRef<uint64_t> result, ByRef<bool> failureIsOverflow)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryParseUInt64HexNumberStyle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value, styles, info, result, failureIsOverflow);
}
 System::Decimal System::Number::ParseDecimal(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "ParseDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Decimal, false>(nullptr, ___internal_method, value, styles, info);
}
 bool System::Number::NumberBufferToDecimal(ByRef<System::System__Number__NumberBuffer> number, ByRef<System::Decimal> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "NumberBufferToDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Decimal>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, number, value);
}
 double_t System::Number::ParseDouble(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "ParseDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, value, styles, info);
}
 float_t System::Number::ParseSingle(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "ParseSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, value, styles, info);
}
 bool System::Number::TryParseDecimal(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info, ByRef<System::Decimal> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryParseDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Decimal>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value, styles, info, result);
}
 bool System::Number::TryParseDouble(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info, ByRef<double_t> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryParseDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<double_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value, styles, info, result);
}
 bool System::Number::TryParseSingle(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info, ByRef<float_t> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryParseSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value, styles, info, result);
}
 void System::Number::StringToNumber(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, ByRef<System::System__Number__NumberBuffer> number, System::Globalization::NumberFormatInfo info, bool parseDecimal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "StringToNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value, styles, number, info, parseDecimal);
}
 bool System::Number::TryStringToNumber(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, ByRef<System::System__Number__NumberBuffer> number, System::Globalization::NumberFormatInfo info, bool parseDecimal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TryStringToNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::NumberFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value, styles, number, info, parseDecimal);
}
 bool System::Number::TrailingZeros(System::ReadOnlySpan_1<char16_t> value, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "TrailingZeros",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value, index);
}
 void* System::Number::MatchChars(void* p, void* pEnd, ::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "MatchChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, p, pEnd, value);
}
 bool System::Number::IsWhite(int32_t ch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "IsWhite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ch);
}
 bool System::Number::IsDigit(int32_t ch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "IsDigit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ch);
}
 void System::Number::ThrowOverflowOrFormatException(bool overflow, ::StringW overflowResourceKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "ThrowOverflowOrFormatException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, overflow, overflowResourceKey);
}
 bool System::Number::NumberBufferToDouble(ByRef<System::System__Number__NumberBuffer> number, ByRef<double_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "NumberBufferToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<double_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, number, value);
}
 uint32_t System::Number::DigitsToInt(void* p, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "DigitsToInt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, p, count);
}
 uint64_t System::Number::Mul32x32To64(uint32_t a, uint32_t b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "Mul32x32To64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, a, b);
}
 uint64_t System::Number::Mul64Lossy(uint64_t a, uint64_t b, ByRef<int32_t> pexp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "Mul64Lossy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, a, b, pexp);
}
 int32_t System::Number::abs(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "abs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value);
}
 double_t System::Number::NumberToDouble(ByRef<System::System__Number__NumberBuffer> number)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "NumberToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, number);
}
 void System::Number::DoubleToNumber(double_t value, int32_t precision, ByRef<System::System__Number__NumberBuffer> number)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Number>::get(),
                            "DoubleToNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Number__NumberBuffer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value, precision, number);
}
