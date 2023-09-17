#pragma once
namespace {
#include "Polyglot/zzzz__LanguageExtensions_def.hpp"
#include "Polyglot/zzzz__Language_def.hpp"
//  Writing Method size for method: ::Polyglot::LanguageExtensions.ToSerializedName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Polyglot::Language)>(&::Polyglot::LanguageExtensions::ToSerializedName)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2670810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LanguageExtensions>::get(),
                            "ToSerializedName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Polyglot::Language>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Polyglot::LanguageExtensions.ToCultureInfoName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Polyglot::Language)>(&::Polyglot::LanguageExtensions::ToCultureInfoName)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x26709c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LanguageExtensions>::get(),
                            "ToCultureInfoName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Polyglot::Language>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Polyglot::LanguageExtensions.ToLanguage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Polyglot::Language (*)(::StringW)>(&::Polyglot::LanguageExtensions::ToLanguage)> {
  constexpr static std::size_t size = 0x7e8;
  constexpr static std::size_t addrs = 0x2670aa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LanguageExtensions>::get(),
                            "ToLanguage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 ::StringW ::Polyglot::LanguageExtensions::ToSerializedName(::Polyglot::Language lang)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LanguageExtensions>::get(),
                            "ToSerializedName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Polyglot::Language>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, lang);
}
 ::StringW ::Polyglot::LanguageExtensions::ToCultureInfoName(::Polyglot::Language lang)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LanguageExtensions>::get(),
                            "ToCultureInfoName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Polyglot::Language>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, lang);
}
 ::Polyglot::Language ::Polyglot::LanguageExtensions::ToLanguage(::StringW serializedName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LanguageExtensions>::get(),
                            "ToLanguage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Polyglot::Language, false>(nullptr, ___internal_method, serializedName);
}
} // end anonymous namespace
