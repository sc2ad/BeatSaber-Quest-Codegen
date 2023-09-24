#pragma once
#include "Newtonsoft/Json/Utilities/zzzz__JavaScriptUtils_def.hpp"
#include "Newtonsoft/Json/zzzz__StringEscapeHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__IArrayPool_1_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
//  Writing Method size for method: Newtonsoft::Json::Utilities::JavaScriptUtils.GetCharEscapeFlags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<bool> (*)(Newtonsoft::Json::StringEscapeHandling, char16_t)>(&Newtonsoft::Json::Utilities::JavaScriptUtils::GetCharEscapeFlags)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x24eb79c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::JavaScriptUtils>::get(),
                            "GetCharEscapeFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::StringEscapeHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Utilities::JavaScriptUtils.ShouldEscapeJavaScriptString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::ArrayW<bool>)>(&Newtonsoft::Json::Utilities::JavaScriptUtils::ShouldEscapeJavaScriptString)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x24eb834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::JavaScriptUtils>::get(),
                            "ShouldEscapeJavaScriptString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Utilities::JavaScriptUtils.WriteEscapedJavaScriptString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IO::TextWriter, ::StringW, char16_t, bool, ::ArrayW<bool>, Newtonsoft::Json::StringEscapeHandling, Newtonsoft::Json::IArrayPool_1<char16_t>, ByRef<::ArrayW<char16_t>>)>(&Newtonsoft::Json::Utilities::JavaScriptUtils::WriteEscapedJavaScriptString)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x24eb8bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::JavaScriptUtils>::get(),
                            "WriteEscapedJavaScriptString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::TextWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::StringEscapeHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::IArrayPool_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<char16_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Utilities::JavaScriptUtils.ToEscapedJavaScriptString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, char16_t, bool, Newtonsoft::Json::StringEscapeHandling)>(&Newtonsoft::Json::Utilities::JavaScriptUtils::ToEscapedJavaScriptString)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x24ebe60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::JavaScriptUtils>::get(),
                            "ToEscapedJavaScriptString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::StringEscapeHandling>::get()}
                        )));
    return ___internal_method;
  }
};
 void Newtonsoft::Json::Utilities::JavaScriptUtils::__set_SingleQuoteCharEscapeFlags(::ArrayW<bool> value)  {
::cordl_internals::setStaticField<::ArrayW<bool>, "SingleQuoteCharEscapeFlags", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::JavaScriptUtils>::get>(std::forward<::ArrayW<bool>>(value));
}
 ::ArrayW<bool> Newtonsoft::Json::Utilities::JavaScriptUtils::__get_SingleQuoteCharEscapeFlags()  {
return ::cordl_internals::getStaticField<::ArrayW<bool>, "SingleQuoteCharEscapeFlags", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::JavaScriptUtils>::get>();
}
 void Newtonsoft::Json::Utilities::JavaScriptUtils::__set_DoubleQuoteCharEscapeFlags(::ArrayW<bool> value)  {
::cordl_internals::setStaticField<::ArrayW<bool>, "DoubleQuoteCharEscapeFlags", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::JavaScriptUtils>::get>(std::forward<::ArrayW<bool>>(value));
}
 ::ArrayW<bool> Newtonsoft::Json::Utilities::JavaScriptUtils::__get_DoubleQuoteCharEscapeFlags()  {
return ::cordl_internals::getStaticField<::ArrayW<bool>, "DoubleQuoteCharEscapeFlags", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::JavaScriptUtils>::get>();
}
 void Newtonsoft::Json::Utilities::JavaScriptUtils::__set_HtmlCharEscapeFlags(::ArrayW<bool> value)  {
::cordl_internals::setStaticField<::ArrayW<bool>, "HtmlCharEscapeFlags", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::JavaScriptUtils>::get>(std::forward<::ArrayW<bool>>(value));
}
 ::ArrayW<bool> Newtonsoft::Json::Utilities::JavaScriptUtils::__get_HtmlCharEscapeFlags()  {
return ::cordl_internals::getStaticField<::ArrayW<bool>, "HtmlCharEscapeFlags", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::JavaScriptUtils>::get>();
}
 ::ArrayW<bool> Newtonsoft::Json::Utilities::JavaScriptUtils::GetCharEscapeFlags(Newtonsoft::Json::StringEscapeHandling stringEscapeHandling, char16_t quoteChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::JavaScriptUtils>::get(),
                            "GetCharEscapeFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::StringEscapeHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<bool>, false>(nullptr, ___internal_method, stringEscapeHandling, quoteChar);
}
 bool Newtonsoft::Json::Utilities::JavaScriptUtils::ShouldEscapeJavaScriptString(::StringW s, ::ArrayW<bool> charEscapeFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::JavaScriptUtils>::get(),
                            "ShouldEscapeJavaScriptString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, charEscapeFlags);
}
 void Newtonsoft::Json::Utilities::JavaScriptUtils::WriteEscapedJavaScriptString(System::IO::TextWriter writer, ::StringW s, char16_t delimiter, bool appendDelimiters, ::ArrayW<bool> charEscapeFlags, Newtonsoft::Json::StringEscapeHandling stringEscapeHandling, Newtonsoft::Json::IArrayPool_1<char16_t> bufferPool, ByRef<::ArrayW<char16_t>> writeBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::JavaScriptUtils>::get(),
                            "WriteEscapedJavaScriptString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::TextWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::StringEscapeHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::IArrayPool_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<char16_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, writer, s, delimiter, appendDelimiters, charEscapeFlags, stringEscapeHandling, bufferPool, writeBuffer);
}
 ::StringW Newtonsoft::Json::Utilities::JavaScriptUtils::ToEscapedJavaScriptString(::StringW value, char16_t delimiter, bool appendDelimiters, Newtonsoft::Json::StringEscapeHandling stringEscapeHandling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::JavaScriptUtils>::get(),
                            "ToEscapedJavaScriptString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::StringEscapeHandling>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, delimiter, appendDelimiters, stringEscapeHandling);
}
