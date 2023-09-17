#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/Text/zzzz__ValueUtf8Converter_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::System::Text::ValueUtf8Converter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::ValueUtf8Converter::*)(::System::Span_1<uint8_t>)>(&::System::Text::ValueUtf8Converter::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22dd81c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::ValueUtf8Converter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::ValueUtf8Converter.ConvertAndTerminateString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Span_1<uint8_t> (::System::Text::ValueUtf8Converter::*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::Text::ValueUtf8Converter::ConvertAndTerminateString)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x22dd828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::ValueUtf8Converter>::get(),
                            "ConvertAndTerminateString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::ValueUtf8Converter.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::ValueUtf8Converter::*)()>(&::System::Text::ValueUtf8Converter::Dispose)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x22ddaf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::ValueUtf8Converter>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "_arrayToReturnToPool", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_bytes", ty: "::System::Span_1<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Text::ValueUtf8Converter::ValueUtf8Converter(::ArrayW<uint8_t> _arrayToReturnToPool, ::System::Span_1<uint8_t> _bytes) noexcept : ::bs_hook::ValueTypeWrapper() {this->_arrayToReturnToPool = _arrayToReturnToPool;
this->_bytes = _bytes;
}
constexpr void ::System::Text::ValueUtf8Converter::__set__arrayToReturnToPool(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x0>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::System::Text::ValueUtf8Converter::__get__arrayToReturnToPool() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x0>(this->__instance);
}
constexpr void ::System::Text::ValueUtf8Converter::__set__bytes(::System::Span_1<uint8_t> value)  {
::cordl_internals::setInstanceField<::System::Span_1<uint8_t>, 0x8>(this->__instance, std::forward<::System::Span_1<uint8_t>>(value));
}
constexpr ::System::Span_1<uint8_t> ::System::Text::ValueUtf8Converter::__get__bytes() const {
return ::cordl_internals::getInstanceField<::System::Span_1<uint8_t>, 0x8>(this->__instance);
}
 void ::System::Text::ValueUtf8Converter::_ctor(::System::Span_1<uint8_t> initialBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::ValueUtf8Converter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, initialBuffer);
}
 ::System::Span_1<uint8_t> ::System::Text::ValueUtf8Converter::ConvertAndTerminateString(::System::ReadOnlySpan_1<char16_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::ValueUtf8Converter>::get(),
                            "ConvertAndTerminateString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Span_1<uint8_t>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 void ::System::Text::ValueUtf8Converter::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::ValueUtf8Converter>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
} // end anonymous namespace
