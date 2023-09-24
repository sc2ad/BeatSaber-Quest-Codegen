#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Net/zzzz__HttpListenerRequestUriBuilder_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Net/zzzz__HttpListenerRequestUriBuilder_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Uri_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::System__Net__HttpListenerRequestUriBuilder__ParsingResult::System__Net__HttpListenerRequestUriBuilder__ParsingResult(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Net::System__Net__HttpListenerRequestUriBuilder__ParsingResult::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::System__Net__HttpListenerRequestUriBuilder__ParsingResult::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Net::System__Net__HttpListenerRequestUriBuilder__ParsingResult  System::Net::System__Net__HttpListenerRequestUriBuilder__ParsingResult::Success{0};
constexpr System::Net::System__Net__HttpListenerRequestUriBuilder__ParsingResult  System::Net::System__Net__HttpListenerRequestUriBuilder__ParsingResult::InvalidString{1};
constexpr System::Net::System__Net__HttpListenerRequestUriBuilder__ParsingResult  System::Net::System__Net__HttpListenerRequestUriBuilder__ParsingResult::EncodingError{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::System__Net__HttpListenerRequestUriBuilder__EncodingType::System__Net__HttpListenerRequestUriBuilder__EncodingType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Net::System__Net__HttpListenerRequestUriBuilder__EncodingType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::System__Net__HttpListenerRequestUriBuilder__EncodingType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Net::System__Net__HttpListenerRequestUriBuilder__EncodingType  System::Net::System__Net__HttpListenerRequestUriBuilder__EncodingType::Primary{0};
constexpr System::Net::System__Net__HttpListenerRequestUriBuilder__EncodingType  System::Net::System__Net__HttpListenerRequestUriBuilder__EncodingType::Secondary{1};
//  Writing Method size for method: System::Net::HttpListenerRequestUriBuilder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerRequestUriBuilder::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW)>(&System::Net::HttpListenerRequestUriBuilder::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x280a26c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListenerRequestUriBuilder.GetRequestUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Uri (*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW)>(&System::Net::HttpListenerRequestUriBuilder::GetRequestUri)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x280a3b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get(),
                            "GetRequestUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListenerRequestUriBuilder.Build
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Uri (System::Net::HttpListenerRequestUriBuilder::*)()>(&System::Net::HttpListenerRequestUriBuilder::Build)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x280a444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get(),
                            "Build",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListenerRequestUriBuilder.BuildRequestUriUsingCookedPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerRequestUriBuilder::*)()>(&System::Net::HttpListenerRequestUriBuilder::BuildRequestUriUsingCookedPath)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x280a52c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get(),
                            "BuildRequestUriUsingCookedPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListenerRequestUriBuilder.BuildRequestUriUsingRawPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerRequestUriBuilder::*)()>(&System::Net::HttpListenerRequestUriBuilder::BuildRequestUriUsingRawPath)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x280a7c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get(),
                            "BuildRequestUriUsingRawPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListenerRequestUriBuilder.GetEncoding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding (*)(System::Net::System__Net__HttpListenerRequestUriBuilder__EncodingType)>(&System::Net::HttpListenerRequestUriBuilder::GetEncoding)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x280acbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get(),
                            "GetEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::System__Net__HttpListenerRequestUriBuilder__EncodingType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListenerRequestUriBuilder.BuildRequestUriUsingRawPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::System__Net__HttpListenerRequestUriBuilder__ParsingResult (System::Net::HttpListenerRequestUriBuilder::*)(System::Text::Encoding)>(&System::Net::HttpListenerRequestUriBuilder::BuildRequestUriUsingRawPath)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x280ad28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get(),
                            "BuildRequestUriUsingRawPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListenerRequestUriBuilder.ParseRawPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::System__Net__HttpListenerRequestUriBuilder__ParsingResult (System::Net::HttpListenerRequestUriBuilder::*)(System::Text::Encoding)>(&System::Net::HttpListenerRequestUriBuilder::ParseRawPath)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x280af78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get(),
                            "ParseRawPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListenerRequestUriBuilder.AppendUnicodeCodePointValuePercentEncoded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::HttpListenerRequestUriBuilder::*)(::StringW)>(&System::Net::HttpListenerRequestUriBuilder::AppendUnicodeCodePointValuePercentEncoded)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x280b470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get(),
                            "AppendUnicodeCodePointValuePercentEncoded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListenerRequestUriBuilder.AddPercentEncodedOctetToRawOctetsList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::HttpListenerRequestUriBuilder::*)(System::Text::Encoding, ::StringW)>(&System::Net::HttpListenerRequestUriBuilder::AddPercentEncodedOctetToRawOctetsList)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x280b784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get(),
                            "AddPercentEncodedOctetToRawOctetsList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListenerRequestUriBuilder.EmptyDecodeAndAppendRawOctetsList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::HttpListenerRequestUriBuilder::*)(System::Text::Encoding)>(&System::Net::HttpListenerRequestUriBuilder::EmptyDecodeAndAppendRawOctetsList)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x280b0c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get(),
                            "EmptyDecodeAndAppendRawOctetsList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListenerRequestUriBuilder.AppendOctetsPercentEncoded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Text::StringBuilder, System::Collections::Generic::IEnumerable_1<uint8_t>)>(&System::Net::HttpListenerRequestUriBuilder::AppendOctetsPercentEncoded)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x280b8d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get(),
                            "AppendOctetsPercentEncoded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListenerRequestUriBuilder.GetOctetsAsString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::Collections::Generic::IEnumerable_1<uint8_t>)>(&System::Net::HttpListenerRequestUriBuilder::GetOctetsAsString)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x280bc44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get(),
                            "GetOctetsAsString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListenerRequestUriBuilder.GetPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::Net::HttpListenerRequestUriBuilder::GetPath)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x280ab4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get(),
                            "GetPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListenerRequestUriBuilder.AddSlashToAsteriskOnlyPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::Net::HttpListenerRequestUriBuilder::AddSlashToAsteriskOnlyPath)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x280a338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get(),
                            "AddSlashToAsteriskOnlyPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListenerRequestUriBuilder.LogWarning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerRequestUriBuilder::*)(::StringW, ::StringW, ::ArrayW<::bs_hook::Il2CppWrapperType>)>(&System::Net::HttpListenerRequestUriBuilder::LogWarning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x280ab44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get(),
                            "LogWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::Net::HttpListenerRequestUriBuilder::__set_useCookedRequestUrl(bool value)  {
::cordl_internals::setStaticField<bool, "useCookedRequestUrl", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get>(std::forward<bool>(value));
}
 bool System::Net::HttpListenerRequestUriBuilder::__get_useCookedRequestUrl()  {
return ::cordl_internals::getStaticField<bool, "useCookedRequestUrl", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get>();
}
 void System::Net::HttpListenerRequestUriBuilder::__set_utf8Encoding(System::Text::Encoding value)  {
::cordl_internals::setStaticField<System::Text::Encoding, "utf8Encoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get>(std::forward<System::Text::Encoding>(value));
}
 System::Text::Encoding System::Net::HttpListenerRequestUriBuilder::__get_utf8Encoding()  {
return ::cordl_internals::getStaticField<System::Text::Encoding, "utf8Encoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get>();
}
 void System::Net::HttpListenerRequestUriBuilder::__set_ansiEncoding(System::Text::Encoding value)  {
::cordl_internals::setStaticField<System::Text::Encoding, "ansiEncoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get>(std::forward<System::Text::Encoding>(value));
}
 System::Text::Encoding System::Net::HttpListenerRequestUriBuilder::__get_ansiEncoding()  {
return ::cordl_internals::getStaticField<System::Text::Encoding, "ansiEncoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get>();
}
constexpr void System::Net::HttpListenerRequestUriBuilder::__set_rawUri(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Net::HttpListenerRequestUriBuilder::__get_rawUri() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpListenerRequestUriBuilder::__set_cookedUriScheme(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Net::HttpListenerRequestUriBuilder::__get_cookedUriScheme() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpListenerRequestUriBuilder::__set_cookedUriHost(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Net::HttpListenerRequestUriBuilder::__get_cookedUriHost() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpListenerRequestUriBuilder::__set_cookedUriPath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Net::HttpListenerRequestUriBuilder::__get_cookedUriPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpListenerRequestUriBuilder::__set_cookedUriQuery(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Net::HttpListenerRequestUriBuilder::__get_cookedUriQuery() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpListenerRequestUriBuilder::__set_requestUriString(System::Text::StringBuilder value)  {
::cordl_internals::setInstanceField<System::Text::StringBuilder, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Text::StringBuilder>(value));
}
constexpr System::Text::StringBuilder System::Net::HttpListenerRequestUriBuilder::__get_requestUriString() const {
return ::cordl_internals::getInstanceField<System::Text::StringBuilder, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpListenerRequestUriBuilder::__set_rawOctets(System::Collections::Generic::List_1<uint8_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<uint8_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<uint8_t>>(value));
}
constexpr System::Collections::Generic::List_1<uint8_t> System::Net::HttpListenerRequestUriBuilder::__get_rawOctets() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<uint8_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpListenerRequestUriBuilder::__set_rawPath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Net::HttpListenerRequestUriBuilder::__get_rawPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpListenerRequestUriBuilder::__set_requestUri(System::Uri value)  {
::cordl_internals::setInstanceField<System::Uri, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Uri>(value));
}
constexpr System::Uri System::Net::HttpListenerRequestUriBuilder::__get_requestUri() const {
return ::cordl_internals::getInstanceField<System::Uri, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Net::HttpListenerRequestUriBuilder System::Net::HttpListenerRequestUriBuilder::New_ctor(::StringW rawUri, ::StringW cookedUriScheme, ::StringW cookedUriHost, ::StringW cookedUriPath, ::StringW cookedUriQuery)  {
System::Net::HttpListenerRequestUriBuilder o{THROW_UNLESS(::il2cpp_utils::New<System::Net::HttpListenerRequestUriBuilder>(rawUri, cookedUriScheme, cookedUriHost, cookedUriPath, cookedUriQuery))};
return o;
}
 void System::Net::HttpListenerRequestUriBuilder::_ctor(::StringW rawUri, ::StringW cookedUriScheme, ::StringW cookedUriHost, ::StringW cookedUriPath, ::StringW cookedUriQuery)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rawUri, cookedUriScheme, cookedUriHost, cookedUriPath, cookedUriQuery);
}
 System::Uri System::Net::HttpListenerRequestUriBuilder::GetRequestUri(::StringW rawUri, ::StringW cookedUriScheme, ::StringW cookedUriHost, ::StringW cookedUriPath, ::StringW cookedUriQuery)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get(),
                            "GetRequestUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Uri, false>(nullptr, ___internal_method, rawUri, cookedUriScheme, cookedUriHost, cookedUriPath, cookedUriQuery);
}
 System::Uri System::Net::HttpListenerRequestUriBuilder::Build()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get(),
                            "Build",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Uri, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::HttpListenerRequestUriBuilder::BuildRequestUriUsingCookedPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get(),
                            "BuildRequestUriUsingCookedPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::HttpListenerRequestUriBuilder::BuildRequestUriUsingRawPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get(),
                            "BuildRequestUriUsingRawPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Text::Encoding System::Net::HttpListenerRequestUriBuilder::GetEncoding(System::Net::System__Net__HttpListenerRequestUriBuilder__EncodingType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get(),
                            "GetEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::System__Net__HttpListenerRequestUriBuilder__EncodingType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::Encoding, false>(nullptr, ___internal_method, type);
}
 System::Net::System__Net__HttpListenerRequestUriBuilder__ParsingResult System::Net::HttpListenerRequestUriBuilder::BuildRequestUriUsingRawPath(System::Text::Encoding encoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get(),
                            "BuildRequestUriUsingRawPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::System__Net__HttpListenerRequestUriBuilder__ParsingResult, false>(const_cast<void*>(instance), ___internal_method, encoding);
}
 System::Net::System__Net__HttpListenerRequestUriBuilder__ParsingResult System::Net::HttpListenerRequestUriBuilder::ParseRawPath(System::Text::Encoding encoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get(),
                            "ParseRawPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::System__Net__HttpListenerRequestUriBuilder__ParsingResult, false>(const_cast<void*>(instance), ___internal_method, encoding);
}
 bool System::Net::HttpListenerRequestUriBuilder::AppendUnicodeCodePointValuePercentEncoded(::StringW codePoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get(),
                            "AppendUnicodeCodePointValuePercentEncoded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, codePoint);
}
 bool System::Net::HttpListenerRequestUriBuilder::AddPercentEncodedOctetToRawOctetsList(System::Text::Encoding encoding, ::StringW escapedCharacter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get(),
                            "AddPercentEncodedOctetToRawOctetsList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, encoding, escapedCharacter);
}
 bool System::Net::HttpListenerRequestUriBuilder::EmptyDecodeAndAppendRawOctetsList(System::Text::Encoding encoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get(),
                            "EmptyDecodeAndAppendRawOctetsList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, encoding);
}
 void System::Net::HttpListenerRequestUriBuilder::AppendOctetsPercentEncoded(System::Text::StringBuilder target, System::Collections::Generic::IEnumerable_1<uint8_t> octets)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get(),
                            "AppendOctetsPercentEncoded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, target, octets);
}
 ::StringW System::Net::HttpListenerRequestUriBuilder::GetOctetsAsString(System::Collections::Generic::IEnumerable_1<uint8_t> octets)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get(),
                            "GetOctetsAsString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, octets);
}
 ::StringW System::Net::HttpListenerRequestUriBuilder::GetPath(::StringW uriString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get(),
                            "GetPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, uriString);
}
 ::StringW System::Net::HttpListenerRequestUriBuilder::AddSlashToAsteriskOnlyPath(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get(),
                            "AddSlashToAsteriskOnlyPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path);
}
 void System::Net::HttpListenerRequestUriBuilder::LogWarning(::StringW methodName, ::StringW message, ::ArrayW<::bs_hook::Il2CppWrapperType> args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListenerRequestUriBuilder>::get(),
                            "LogWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, methodName, message, args);
}
