#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__UriParser_impl.hpp"
namespace {
#include "System/zzzz__UriParser_def.hpp"
#include "System/zzzz__UriFormat_def.hpp"
#include "System/zzzz__UriFormatException_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/zzzz__UriComponents_def.hpp"
#include "System/zzzz__UriSyntaxFlags_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::____System__UriParser__UriQuirksVersion::____System__UriParser__UriQuirksVersion(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::____System__UriParser__UriQuirksVersion::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::____System__UriParser__UriQuirksVersion::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::____System__UriParser__UriQuirksVersion  ::System::____System__UriParser__UriQuirksVersion::V2{2};
constexpr ::System::____System__UriParser__UriQuirksVersion  ::System::____System__UriParser__UriQuirksVersion::V3{3};
//  Writing Method size for method: ::System::UriParser.get_SchemeName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::UriParser::*)()>(&::System::UriParser::get_SchemeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27b9614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "get_SchemeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.get_DefaultPort
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::UriParser::*)()>(&::System::UriParser::get_DefaultPort)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27b961c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "get_DefaultPort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.OnNewUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::UriParser (::System::UriParser::*)()>(&::System::UriParser::OnNewUri)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27b9624;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::UriParser),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.InitializeAndValidate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::UriParser::*)(::System::Uri, ByRef<::System::UriFormatException>)>(&::System::UriParser::InitializeAndValidate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27b9628;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::UriParser),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.Resolve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::UriParser::*)(::System::Uri, ::System::Uri, ByRef<::System::UriFormatException>)>(&::System::UriParser::Resolve)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x27b9650;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::UriParser),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.IsBaseOf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::UriParser::*)(::System::Uri, ::System::Uri)>(&::System::UriParser::IsBaseOf)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x27b9838;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::UriParser),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.GetComponents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::UriParser::*)(::System::Uri, ::System::UriComponents, ::System::UriFormat)>(&::System::UriParser::GetComponents)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x27b9854;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::UriParser),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.IsWellFormedOriginalString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::UriParser::*)(::System::Uri)>(&::System::UriParser::IsWellFormedOriginalString)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x27b9a80;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::UriParser),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.get_ShouldUseLegacyV2Quirks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::UriParser::get_ShouldUseLegacyV2Quirks)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x27b9484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "get_ShouldUseLegacyV2Quirks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.get_Flags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::UriSyntaxFlags (::System::UriParser::*)()>(&::System::UriParser::get_Flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27ba29c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "get_Flags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.NotAny
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::UriParser::*)(::System::UriSyntaxFlags)>(&::System::UriParser::NotAny)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27b62f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "NotAny",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriSyntaxFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.InFact
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::UriParser::*)(::System::UriSyntaxFlags)>(&::System::UriParser::InFact)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x27b62dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "InFact",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriSyntaxFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.IsAllSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::UriParser::*)(::System::UriSyntaxFlags)>(&::System::UriParser::IsAllSet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27ba300;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "IsAllSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriSyntaxFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.IsFullMatch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::UriParser::*)(::System::UriSyntaxFlags, ::System::UriSyntaxFlags)>(&::System::UriParser::IsFullMatch)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x27ba2a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "IsFullMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriSyntaxFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriSyntaxFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::UriParser::*)(::System::UriSyntaxFlags)>(&::System::UriParser::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x27ba308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriSyntaxFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.FindOrFetchAsUnknownV1Syntax
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::UriParser (*)(::StringW)>(&::System::UriParser::FindOrFetchAsUnknownV1Syntax)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x27ba374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "FindOrFetchAsUnknownV1Syntax",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.GetSyntax
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::UriParser (*)(::StringW)>(&::System::UriParser::GetSyntax)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x27b620c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "GetSyntax",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.get_IsSimple
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::UriParser::*)()>(&::System::UriParser::get_IsSimple)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27ba664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "get_IsSimple",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.InternalOnNewUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::UriParser (::System::UriParser::*)()>(&::System::UriParser::InternalOnNewUri)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x27ba670;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "InternalOnNewUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.InternalValidate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::UriParser::*)(::System::Uri, ByRef<::System::UriFormatException>)>(&::System::UriParser::InternalValidate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27ba6b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "InternalValidate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::UriFormatException>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.InternalResolve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::UriParser::*)(::System::Uri, ::System::Uri, ByRef<::System::UriFormatException>)>(&::System::UriParser::InternalResolve)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27ba6c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "InternalResolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::UriFormatException>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.InternalIsBaseOf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::UriParser::*)(::System::Uri, ::System::Uri)>(&::System::UriParser::InternalIsBaseOf)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27ba6cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "InternalIsBaseOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.InternalGetComponents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::UriParser::*)(::System::Uri, ::System::UriComponents, ::System::UriFormat)>(&::System::UriParser::InternalGetComponents)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27ba6d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "InternalGetComponents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriComponents>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriFormat>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.InternalIsWellFormedOriginalString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::UriParser::*)(::System::Uri)>(&::System::UriParser::InternalIsWellFormedOriginalString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27ba6e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "InternalIsWellFormedOriginalString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr ::System::UriSyntaxFlags  ::System::UriParser::SchemeOnlyFlags{16};
 void ::System::UriParser::__set_m_Table(::System::Collections::Generic::Dictionary_2<::StringW,::System::UriParser> value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::UriParser>, "m_Table", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::UriParser>>(value));
}
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::UriParser> ::System::UriParser::__get_m_Table()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::UriParser>, "m_Table", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>();
}
 void ::System::UriParser::__set_m_TempTable(::System::Collections::Generic::Dictionary_2<::StringW,::System::UriParser> value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::UriParser>, "m_TempTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::UriParser>>(value));
}
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::UriParser> ::System::UriParser::__get_m_TempTable()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::UriParser>, "m_TempTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>();
}
constexpr void ::System::UriParser::__set_m_Flags(::System::UriSyntaxFlags value)  {
::cordl_internals::setInstanceField<::System::UriSyntaxFlags, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::UriSyntaxFlags>(value));
}
constexpr ::System::UriSyntaxFlags ::System::UriParser::__get_m_Flags() const {
return ::cordl_internals::getInstanceField<::System::UriSyntaxFlags, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::UriParser::__set_m_UpdatableFlags(::System::UriSyntaxFlags value)  {
::cordl_internals::setInstanceField<::System::UriSyntaxFlags, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::UriSyntaxFlags>(value));
}
constexpr ::System::UriSyntaxFlags ::System::UriParser::__get_m_UpdatableFlags() const {
return ::cordl_internals::getInstanceField<::System::UriSyntaxFlags, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::UriParser::__set_m_UpdatableFlagsUsed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::UriParser::__get_m_UpdatableFlagsUsed() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr ::System::UriSyntaxFlags  ::System::UriParser::c_UpdatableFlags{33554432};
constexpr void ::System::UriParser::__set_m_Port(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::UriParser::__get_m_Port() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::UriParser::__set_m_Scheme(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::UriParser::__get_m_Scheme() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::System::UriParser::__set_HttpUri(::System::UriParser value)  {
::cordl_internals::setStaticField<::System::UriParser, "HttpUri", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>(std::forward<::System::UriParser>(value));
}
 ::System::UriParser ::System::UriParser::__get_HttpUri()  {
return ::cordl_internals::getStaticField<::System::UriParser, "HttpUri", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>();
}
 void ::System::UriParser::__set_HttpsUri(::System::UriParser value)  {
::cordl_internals::setStaticField<::System::UriParser, "HttpsUri", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>(std::forward<::System::UriParser>(value));
}
 ::System::UriParser ::System::UriParser::__get_HttpsUri()  {
return ::cordl_internals::getStaticField<::System::UriParser, "HttpsUri", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>();
}
 void ::System::UriParser::__set_WsUri(::System::UriParser value)  {
::cordl_internals::setStaticField<::System::UriParser, "WsUri", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>(std::forward<::System::UriParser>(value));
}
 ::System::UriParser ::System::UriParser::__get_WsUri()  {
return ::cordl_internals::getStaticField<::System::UriParser, "WsUri", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>();
}
 void ::System::UriParser::__set_WssUri(::System::UriParser value)  {
::cordl_internals::setStaticField<::System::UriParser, "WssUri", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>(std::forward<::System::UriParser>(value));
}
 ::System::UriParser ::System::UriParser::__get_WssUri()  {
return ::cordl_internals::getStaticField<::System::UriParser, "WssUri", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>();
}
 void ::System::UriParser::__set_FtpUri(::System::UriParser value)  {
::cordl_internals::setStaticField<::System::UriParser, "FtpUri", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>(std::forward<::System::UriParser>(value));
}
 ::System::UriParser ::System::UriParser::__get_FtpUri()  {
return ::cordl_internals::getStaticField<::System::UriParser, "FtpUri", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>();
}
 void ::System::UriParser::__set_FileUri(::System::UriParser value)  {
::cordl_internals::setStaticField<::System::UriParser, "FileUri", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>(std::forward<::System::UriParser>(value));
}
 ::System::UriParser ::System::UriParser::__get_FileUri()  {
return ::cordl_internals::getStaticField<::System::UriParser, "FileUri", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>();
}
 void ::System::UriParser::__set_GopherUri(::System::UriParser value)  {
::cordl_internals::setStaticField<::System::UriParser, "GopherUri", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>(std::forward<::System::UriParser>(value));
}
 ::System::UriParser ::System::UriParser::__get_GopherUri()  {
return ::cordl_internals::getStaticField<::System::UriParser, "GopherUri", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>();
}
 void ::System::UriParser::__set_NntpUri(::System::UriParser value)  {
::cordl_internals::setStaticField<::System::UriParser, "NntpUri", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>(std::forward<::System::UriParser>(value));
}
 ::System::UriParser ::System::UriParser::__get_NntpUri()  {
return ::cordl_internals::getStaticField<::System::UriParser, "NntpUri", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>();
}
 void ::System::UriParser::__set_NewsUri(::System::UriParser value)  {
::cordl_internals::setStaticField<::System::UriParser, "NewsUri", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>(std::forward<::System::UriParser>(value));
}
 ::System::UriParser ::System::UriParser::__get_NewsUri()  {
return ::cordl_internals::getStaticField<::System::UriParser, "NewsUri", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>();
}
 void ::System::UriParser::__set_MailToUri(::System::UriParser value)  {
::cordl_internals::setStaticField<::System::UriParser, "MailToUri", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>(std::forward<::System::UriParser>(value));
}
 ::System::UriParser ::System::UriParser::__get_MailToUri()  {
return ::cordl_internals::getStaticField<::System::UriParser, "MailToUri", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>();
}
 void ::System::UriParser::__set_UuidUri(::System::UriParser value)  {
::cordl_internals::setStaticField<::System::UriParser, "UuidUri", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>(std::forward<::System::UriParser>(value));
}
 ::System::UriParser ::System::UriParser::__get_UuidUri()  {
return ::cordl_internals::getStaticField<::System::UriParser, "UuidUri", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>();
}
 void ::System::UriParser::__set_TelnetUri(::System::UriParser value)  {
::cordl_internals::setStaticField<::System::UriParser, "TelnetUri", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>(std::forward<::System::UriParser>(value));
}
 ::System::UriParser ::System::UriParser::__get_TelnetUri()  {
return ::cordl_internals::getStaticField<::System::UriParser, "TelnetUri", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>();
}
 void ::System::UriParser::__set_LdapUri(::System::UriParser value)  {
::cordl_internals::setStaticField<::System::UriParser, "LdapUri", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>(std::forward<::System::UriParser>(value));
}
 ::System::UriParser ::System::UriParser::__get_LdapUri()  {
return ::cordl_internals::getStaticField<::System::UriParser, "LdapUri", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>();
}
 void ::System::UriParser::__set_NetTcpUri(::System::UriParser value)  {
::cordl_internals::setStaticField<::System::UriParser, "NetTcpUri", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>(std::forward<::System::UriParser>(value));
}
 ::System::UriParser ::System::UriParser::__get_NetTcpUri()  {
return ::cordl_internals::getStaticField<::System::UriParser, "NetTcpUri", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>();
}
 void ::System::UriParser::__set_NetPipeUri(::System::UriParser value)  {
::cordl_internals::setStaticField<::System::UriParser, "NetPipeUri", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>(std::forward<::System::UriParser>(value));
}
 ::System::UriParser ::System::UriParser::__get_NetPipeUri()  {
return ::cordl_internals::getStaticField<::System::UriParser, "NetPipeUri", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>();
}
 void ::System::UriParser::__set_VsMacrosUri(::System::UriParser value)  {
::cordl_internals::setStaticField<::System::UriParser, "VsMacrosUri", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>(std::forward<::System::UriParser>(value));
}
 ::System::UriParser ::System::UriParser::__get_VsMacrosUri()  {
return ::cordl_internals::getStaticField<::System::UriParser, "VsMacrosUri", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>();
}
 void ::System::UriParser::__set_s_QuirksVersion(::System::____System__UriParser__UriQuirksVersion value)  {
::cordl_internals::setStaticField<::System::____System__UriParser__UriQuirksVersion, "s_QuirksVersion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>(std::forward<::System::____System__UriParser__UriQuirksVersion>(value));
}
 ::System::____System__UriParser__UriQuirksVersion ::System::UriParser::__get_s_QuirksVersion()  {
return ::cordl_internals::getStaticField<::System::____System__UriParser__UriQuirksVersion, "s_QuirksVersion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>();
}
constexpr ::System::UriSyntaxFlags  ::System::UriParser::UnknownV1SyntaxFlags{351342590};
 void ::System::UriParser::__set_HttpSyntaxFlags(::System::UriSyntaxFlags value)  {
::cordl_internals::setStaticField<::System::UriSyntaxFlags, "HttpSyntaxFlags", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>(std::forward<::System::UriSyntaxFlags>(value));
}
 ::System::UriSyntaxFlags ::System::UriParser::__get_HttpSyntaxFlags()  {
return ::cordl_internals::getStaticField<::System::UriSyntaxFlags, "HttpSyntaxFlags", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>();
}
constexpr ::System::UriSyntaxFlags  ::System::UriParser::FtpSyntaxFlags{367005533};
 void ::System::UriParser::__set_FileSyntaxFlags(::System::UriSyntaxFlags value)  {
::cordl_internals::setStaticField<::System::UriSyntaxFlags, "FileSyntaxFlags", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>(std::forward<::System::UriSyntaxFlags>(value));
}
 ::System::UriSyntaxFlags ::System::UriParser::__get_FileSyntaxFlags()  {
return ::cordl_internals::getStaticField<::System::UriSyntaxFlags, "FileSyntaxFlags", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get>();
}
constexpr ::System::UriSyntaxFlags  ::System::UriParser::VsmacrosSyntaxFlags{399519697};
constexpr ::System::UriSyntaxFlags  ::System::UriParser::GopherSyntaxFlags{337645405};
constexpr ::System::UriSyntaxFlags  ::System::UriParser::NewsSyntaxFlags{268435536};
constexpr ::System::UriSyntaxFlags  ::System::UriParser::NntpSyntaxFlags{337645405};
constexpr ::System::UriSyntaxFlags  ::System::UriParser::TelnetSyntaxFlags{337645405};
constexpr ::System::UriSyntaxFlags  ::System::UriParser::LdapSyntaxFlags{337645565};
constexpr ::System::UriSyntaxFlags  ::System::UriParser::MailtoSyntaxFlags{335564796};
constexpr ::System::UriSyntaxFlags  ::System::UriParser::NetPipeSyntaxFlags{400559729};
constexpr ::System::UriSyntaxFlags  ::System::UriParser::NetTcpSyntaxFlags{400559737};
 ::StringW ::System::UriParser::get_SchemeName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "get_SchemeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::System::UriParser::get_DefaultPort()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "get_DefaultPort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::UriParser ::System::UriParser::OnNewUri()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "OnNewUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::UriParser, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::UriParser::InitializeAndValidate(::System::Uri uri, ByRef<::System::UriFormatException> parsingError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "InitializeAndValidate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::UriFormatException>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, uri, parsingError);
}
 ::StringW ::System::UriParser::Resolve(::System::Uri baseUri, ::System::Uri relativeUri, ByRef<::System::UriFormatException> parsingError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "Resolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::UriFormatException>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, baseUri, relativeUri, parsingError);
}
 bool ::System::UriParser::IsBaseOf(::System::Uri baseUri, ::System::Uri relativeUri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "IsBaseOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, baseUri, relativeUri);
}
 ::StringW ::System::UriParser::GetComponents(::System::Uri uri, ::System::UriComponents components, ::System::UriFormat format)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "GetComponents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriComponents>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriFormat>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, uri, components, format);
}
 bool ::System::UriParser::IsWellFormedOriginalString(::System::Uri uri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "IsWellFormedOriginalString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, uri);
}
 bool ::System::UriParser::get_ShouldUseLegacyV2Quirks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "get_ShouldUseLegacyV2Quirks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 ::System::UriSyntaxFlags ::System::UriParser::get_Flags()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "get_Flags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::UriSyntaxFlags, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::UriParser::NotAny(::System::UriSyntaxFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "NotAny",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriSyntaxFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, flags);
}
 bool ::System::UriParser::InFact(::System::UriSyntaxFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "InFact",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriSyntaxFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, flags);
}
 bool ::System::UriParser::IsAllSet(::System::UriSyntaxFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "IsAllSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriSyntaxFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, flags);
}
 bool ::System::UriParser::IsFullMatch(::System::UriSyntaxFlags flags, ::System::UriSyntaxFlags expected)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "IsFullMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriSyntaxFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriSyntaxFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, flags, expected);
}
// Ctor Parameters [CppParam { name: "flags", ty: "::System::UriSyntaxFlags", modifiers: "", def_value: None }]
 ::System::UriParser::UriParser(::System::UriSyntaxFlags flags)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UriParser>(flags))) {}
 void ::System::UriParser::_ctor(::System::UriSyntaxFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriSyntaxFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, flags);
}
 ::System::UriParser ::System::UriParser::FindOrFetchAsUnknownV1Syntax(::StringW lwrCaseScheme)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "FindOrFetchAsUnknownV1Syntax",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::UriParser, false>(nullptr, ___internal_method, lwrCaseScheme);
}
 ::System::UriParser ::System::UriParser::GetSyntax(::StringW lwrCaseScheme)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "GetSyntax",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::UriParser, false>(nullptr, ___internal_method, lwrCaseScheme);
}
 bool ::System::UriParser::get_IsSimple()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "get_IsSimple",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::UriParser ::System::UriParser::InternalOnNewUri()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "InternalOnNewUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::UriParser, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::UriParser::InternalValidate(::System::Uri thisUri, ByRef<::System::UriFormatException> parsingError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "InternalValidate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::UriFormatException>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, thisUri, parsingError);
}
 ::StringW ::System::UriParser::InternalResolve(::System::Uri thisBaseUri, ::System::Uri uriLink, ByRef<::System::UriFormatException> parsingError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "InternalResolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::UriFormatException>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, thisBaseUri, uriLink, parsingError);
}
 bool ::System::UriParser::InternalIsBaseOf(::System::Uri thisBaseUri, ::System::Uri uriLink)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "InternalIsBaseOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, thisBaseUri, uriLink);
}
 ::StringW ::System::UriParser::InternalGetComponents(::System::Uri thisUri, ::System::UriComponents uriComponents, ::System::UriFormat uriFormat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "InternalGetComponents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriComponents>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriFormat>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, thisUri, uriComponents, uriFormat);
}
 bool ::System::UriParser::InternalIsWellFormedOriginalString(::System::Uri thisUri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriParser>::get(),
                            "InternalIsWellFormedOriginalString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, thisUri);
}
//  Writing Method size for method: ::System::____System__UriParser__BuiltInUriParser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::____System__UriParser__BuiltInUriParser::*)(::StringW, int32_t, ::System::UriSyntaxFlags)>(&::System::____System__UriParser__BuiltInUriParser::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x27ba21c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__UriParser__BuiltInUriParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriSyntaxFlags>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "lwrCaseScheme", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "defaultPort", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "syntaxFlags", ty: "::System::UriSyntaxFlags", modifiers: "", def_value: None }]
 ::System::____System__UriParser__BuiltInUriParser::____System__UriParser__BuiltInUriParser(::StringW lwrCaseScheme, int32_t defaultPort, ::System::UriSyntaxFlags syntaxFlags)  : ::System::UriParser(THROW_UNLESS(::il2cpp_utils::New<____System__UriParser__BuiltInUriParser>(lwrCaseScheme, defaultPort, syntaxFlags))) {}
 void ::System::____System__UriParser__BuiltInUriParser::_ctor(::StringW lwrCaseScheme, int32_t defaultPort, ::System::UriSyntaxFlags syntaxFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__UriParser__BuiltInUriParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriSyntaxFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, lwrCaseScheme, defaultPort, syntaxFlags);
}
} // end anonymous namespace
