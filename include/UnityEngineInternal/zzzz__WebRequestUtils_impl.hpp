#pragma once
#include "UnityEngineInternal/zzzz__WebRequestUtils_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
//  Writing Method size for method: UnityEngineInternal::WebRequestUtils.RedirectTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW)>(&UnityEngineInternal::WebRequestUtils::RedirectTo)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2d33d5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngineInternal::WebRequestUtils>::get(),
                            "RedirectTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngineInternal::WebRequestUtils.MakeInitialUrl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW)>(&UnityEngineInternal::WebRequestUtils::MakeInitialUrl)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x2d33e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngineInternal::WebRequestUtils>::get(),
                            "MakeInitialUrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngineInternal::WebRequestUtils.MakeUriString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::Uri, ::StringW, bool)>(&UnityEngineInternal::WebRequestUtils::MakeUriString)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x2d341e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngineInternal::WebRequestUtils>::get(),
                            "MakeUriString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngineInternal::WebRequestUtils.URLDecode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&UnityEngineInternal::WebRequestUtils::URLDecode)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2d345dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngineInternal::WebRequestUtils>::get(),
                            "URLDecode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngineInternal::WebRequestUtils::__set_domainRegex(System::Text::RegularExpressions::Regex value)  {
::cordl_internals::setStaticField<System::Text::RegularExpressions::Regex, "domainRegex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngineInternal::WebRequestUtils>::get>(std::forward<System::Text::RegularExpressions::Regex>(value));
}
 System::Text::RegularExpressions::Regex UnityEngineInternal::WebRequestUtils::__get_domainRegex()  {
return ::cordl_internals::getStaticField<System::Text::RegularExpressions::Regex, "domainRegex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngineInternal::WebRequestUtils>::get>();
}
 ::StringW UnityEngineInternal::WebRequestUtils::RedirectTo(::StringW baseUri, ::StringW redirectUri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngineInternal::WebRequestUtils>::get(),
                            "RedirectTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, baseUri, redirectUri);
}
 ::StringW UnityEngineInternal::WebRequestUtils::MakeInitialUrl(::StringW targetUrl, ::StringW localUrl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngineInternal::WebRequestUtils>::get(),
                            "MakeInitialUrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, targetUrl, localUrl);
}
 ::StringW UnityEngineInternal::WebRequestUtils::MakeUriString(System::Uri targetUri, ::StringW targetUrl, bool prependProtocol)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngineInternal::WebRequestUtils>::get(),
                            "MakeUriString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, targetUri, targetUrl, prependProtocol);
}
 ::StringW UnityEngineInternal::WebRequestUtils::URLDecode(::StringW encoded)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngineInternal::WebRequestUtils>::get(),
                            "URLDecode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, encoded);
}
