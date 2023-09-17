#pragma once
namespace {
#include "System/Net/zzzz__WebUtility_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/Net/Configuration/zzzz__UnicodeDecodingConformance_def.hpp"
#include "System/Net/Configuration/zzzz__UnicodeEncodingConformance_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
//  Writing Method size for method: ::System::Net::____System__Net__WebUtility__UrlDecoder.FlushBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebUtility__UrlDecoder::*)()>(&::System::Net::____System__Net__WebUtility__UrlDecoder::FlushBytes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2814628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebUtility__UrlDecoder>::get(),
                            "FlushBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__WebUtility__UrlDecoder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebUtility__UrlDecoder::*)(int32_t, ::System::Text::Encoding)>(&::System::Net::____System__Net__WebUtility__UrlDecoder::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x28142b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebUtility__UrlDecoder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__WebUtility__UrlDecoder.AddChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebUtility__UrlDecoder::*)(char16_t)>(&::System::Net::____System__Net__WebUtility__UrlDecoder::AddChar)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2814410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebUtility__UrlDecoder>::get(),
                            "AddChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__WebUtility__UrlDecoder.AddByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebUtility__UrlDecoder::*)(uint8_t)>(&::System::Net::____System__Net__WebUtility__UrlDecoder::AddByte)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2814378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebUtility__UrlDecoder>::get(),
                            "AddByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__WebUtility__UrlDecoder.GetString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::____System__Net__WebUtility__UrlDecoder::*)()>(&::System::Net::____System__Net__WebUtility__UrlDecoder::GetString)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2814470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebUtility__UrlDecoder>::get(),
                            "GetString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Net::____System__Net__WebUtility__UrlDecoder::__set__bufferSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__WebUtility__UrlDecoder::__get__bufferSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::____System__Net__WebUtility__UrlDecoder::__set__numChars(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__WebUtility__UrlDecoder::__get__numChars() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::____System__Net__WebUtility__UrlDecoder::__set__charBuffer(::ArrayW<char16_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<char16_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<char16_t>>(value));
}
constexpr ::ArrayW<char16_t> ::System::Net::____System__Net__WebUtility__UrlDecoder::__get__charBuffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::____System__Net__WebUtility__UrlDecoder::__set__numBytes(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__WebUtility__UrlDecoder::__get__numBytes() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::____System__Net__WebUtility__UrlDecoder::__set__byteBuffer(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::System::Net::____System__Net__WebUtility__UrlDecoder::__get__byteBuffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::____System__Net__WebUtility__UrlDecoder::__set__encoding(::System::Text::Encoding value)  {
::cordl_internals::setInstanceField<::System::Text::Encoding, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Text::Encoding>(value));
}
constexpr ::System::Text::Encoding ::System::Net::____System__Net__WebUtility__UrlDecoder::__get__encoding() const {
return ::cordl_internals::getInstanceField<::System::Text::Encoding, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::System::Net::____System__Net__WebUtility__UrlDecoder::FlushBytes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebUtility__UrlDecoder>::get(),
                            "FlushBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "encoding", ty: "::System::Text::Encoding", modifiers: "", def_value: None }]
 ::System::Net::____System__Net__WebUtility__UrlDecoder::____System__Net__WebUtility__UrlDecoder(int32_t bufferSize, ::System::Text::Encoding encoding)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__Net__WebUtility__UrlDecoder>(bufferSize, encoding))) {}
 void ::System::Net::____System__Net__WebUtility__UrlDecoder::_ctor(int32_t bufferSize, ::System::Text::Encoding encoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebUtility__UrlDecoder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bufferSize, encoding);
}
 void ::System::Net::____System__Net__WebUtility__UrlDecoder::AddChar(char16_t ch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebUtility__UrlDecoder>::get(),
                            "AddChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ch);
}
 void ::System::Net::____System__Net__WebUtility__UrlDecoder::AddByte(uint8_t b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebUtility__UrlDecoder>::get(),
                            "AddByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, b);
}
 ::StringW ::System::Net::____System__Net__WebUtility__UrlDecoder::GetString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebUtility__UrlDecoder>::get(),
                            "GetString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::System::Net::WebUtility.HtmlEncode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Net::WebUtility::HtmlEncode)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x28138ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility>::get(),
                            "HtmlEncode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.HtmlEncode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::IO::TextWriter)>(&::System::Net::WebUtility::HtmlEncode)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x2813b54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility>::get(),
                            "HtmlEncode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.IndexOfHtmlEncodingChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, int32_t)>(&::System::Net::WebUtility::IndexOfHtmlEncodingChars)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2813a0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility>::get(),
                            "IndexOfHtmlEncodingChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.get_HtmlEncodeConformance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Configuration::UnicodeEncodingConformance (*)()>(&::System::Net::WebUtility::get_HtmlEncodeConformance)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2813f08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility>::get(),
                            "get_HtmlEncodeConformance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.UrlDecodeInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::System::Text::Encoding)>(&::System::Net::WebUtility::UrlDecodeInternal)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x28140a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility>::get(),
                            "UrlDecodeInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.UrlDecode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Net::WebUtility::UrlDecode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x28144f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility>::get(),
                            "UrlDecode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.GetNextUnicodeScalarValueFromUtf16Surrogate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(ByRef<void*>, ByRef<int32_t>)>(&::System::Net::WebUtility::GetNextUnicodeScalarValueFromUtf16Surrogate)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2813fec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility>::get(),
                            "GetNextUnicodeScalarValueFromUtf16Surrogate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.HexToInt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(char16_t)>(&::System::Net::WebUtility::HexToInt)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2814328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility>::get(),
                            "HexToInt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::System::Net::WebUtility::__set__htmlEntityEndingChars(::ArrayW<char16_t> value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "_htmlEntityEndingChars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility>::get>(std::forward<::ArrayW<char16_t>>(value));
}
 ::ArrayW<char16_t> ::System::Net::WebUtility::__get__htmlEntityEndingChars()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "_htmlEntityEndingChars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility>::get>();
}
 void ::System::Net::WebUtility::__set__htmlDecodeConformance(::System::Net::Configuration::UnicodeDecodingConformance value)  {
::cordl_internals::setStaticField<::System::Net::Configuration::UnicodeDecodingConformance, "_htmlDecodeConformance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility>::get>(std::forward<::System::Net::Configuration::UnicodeDecodingConformance>(value));
}
 ::System::Net::Configuration::UnicodeDecodingConformance ::System::Net::WebUtility::__get__htmlDecodeConformance()  {
return ::cordl_internals::getStaticField<::System::Net::Configuration::UnicodeDecodingConformance, "_htmlDecodeConformance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility>::get>();
}
 void ::System::Net::WebUtility::__set__htmlEncodeConformance(::System::Net::Configuration::UnicodeEncodingConformance value)  {
::cordl_internals::setStaticField<::System::Net::Configuration::UnicodeEncodingConformance, "_htmlEncodeConformance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility>::get>(std::forward<::System::Net::Configuration::UnicodeEncodingConformance>(value));
}
 ::System::Net::Configuration::UnicodeEncodingConformance ::System::Net::WebUtility::__get__htmlEncodeConformance()  {
return ::cordl_internals::getStaticField<::System::Net::Configuration::UnicodeEncodingConformance, "_htmlEncodeConformance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility>::get>();
}
 ::StringW ::System::Net::WebUtility::HtmlEncode(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility>::get(),
                            "HtmlEncode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value);
}
 void ::System::Net::WebUtility::HtmlEncode(::StringW value, ::System::IO::TextWriter output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility>::get(),
                            "HtmlEncode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value, output);
}
 int32_t ::System::Net::WebUtility::IndexOfHtmlEncodingChars(::StringW s, int32_t startPos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility>::get(),
                            "IndexOfHtmlEncodingChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, s, startPos);
}
 ::System::Net::Configuration::UnicodeEncodingConformance ::System::Net::WebUtility::get_HtmlEncodeConformance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility>::get(),
                            "get_HtmlEncodeConformance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::UnicodeEncodingConformance, false>(nullptr, ___internal_method);
}
 ::StringW ::System::Net::WebUtility::UrlDecodeInternal(::StringW value, ::System::Text::Encoding encoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility>::get(),
                            "UrlDecodeInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, encoding);
}
 ::StringW ::System::Net::WebUtility::UrlDecode(::StringW encodedValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility>::get(),
                            "UrlDecode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, encodedValue);
}
 int32_t ::System::Net::WebUtility::GetNextUnicodeScalarValueFromUtf16Surrogate(ByRef<void*> pch, ByRef<int32_t> charsRemaining)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility>::get(),
                            "GetNextUnicodeScalarValueFromUtf16Surrogate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, pch, charsRemaining);
}
 int32_t ::System::Net::WebUtility::HexToInt(char16_t h)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility>::get(),
                            "HexToInt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, h);
}
} // end anonymous namespace
