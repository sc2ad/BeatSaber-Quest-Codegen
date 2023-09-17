#pragma once
namespace {
#include "System/IO/Enumeration/zzzz__FileSystemName_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemName.TranslateWin32Expression
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Enumeration::FileSystemName::TranslateWin32Expression)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x23d614c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemName>::get(),
                            "TranslateWin32Expression",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemName.MatchesWin32Expression
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, bool)>(&::System::IO::Enumeration::FileSystemName::MatchesWin32Expression)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x23d6794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemName>::get(),
                            "MatchesWin32Expression",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemName.MatchesSimpleExpression
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, bool)>(&::System::IO::Enumeration::FileSystemName::MatchesSimpleExpression)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x23d670c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemName>::get(),
                            "MatchesSimpleExpression",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemName.MatchPattern
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, bool, bool)>(&::System::IO::Enumeration::FileSystemName::MatchPattern)> {
  constexpr static std::size_t size = 0x754;
  constexpr static std::size_t addrs = 0x23d784c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemName>::get(),
                            "MatchPattern",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::System::IO::Enumeration::FileSystemName::__set_s_wildcardChars(::ArrayW<char16_t> value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "s_wildcardChars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemName>::get>(std::forward<::ArrayW<char16_t>>(value));
}
 ::ArrayW<char16_t> ::System::IO::Enumeration::FileSystemName::__get_s_wildcardChars()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "s_wildcardChars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemName>::get>();
}
 void ::System::IO::Enumeration::FileSystemName::__set_s_simpleWildcardChars(::ArrayW<char16_t> value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "s_simpleWildcardChars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemName>::get>(std::forward<::ArrayW<char16_t>>(value));
}
 ::ArrayW<char16_t> ::System::IO::Enumeration::FileSystemName::__get_s_simpleWildcardChars()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "s_simpleWildcardChars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemName>::get>();
}
 ::StringW ::System::IO::Enumeration::FileSystemName::TranslateWin32Expression(::StringW expression)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemName>::get(),
                            "TranslateWin32Expression",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, expression);
}
/// @param ignoreCase: bool (default: true)
 bool ::System::IO::Enumeration::FileSystemName::MatchesWin32Expression(::System::ReadOnlySpan_1<char16_t> expression, ::System::ReadOnlySpan_1<char16_t> name, bool ignoreCase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemName>::get(),
                            "MatchesWin32Expression",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, expression, name, ignoreCase);
}
/// @param ignoreCase: bool (default: true)
 bool ::System::IO::Enumeration::FileSystemName::MatchesSimpleExpression(::System::ReadOnlySpan_1<char16_t> expression, ::System::ReadOnlySpan_1<char16_t> name, bool ignoreCase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemName>::get(),
                            "MatchesSimpleExpression",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, expression, name, ignoreCase);
}
 bool ::System::IO::Enumeration::FileSystemName::MatchPattern(::System::ReadOnlySpan_1<char16_t> expression, ::System::ReadOnlySpan_1<char16_t> name, bool ignoreCase, bool useExtendedWildcards)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemName>::get(),
                            "MatchPattern",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, expression, name, ignoreCase, useExtendedWildcards);
}
} // end anonymous namespace
