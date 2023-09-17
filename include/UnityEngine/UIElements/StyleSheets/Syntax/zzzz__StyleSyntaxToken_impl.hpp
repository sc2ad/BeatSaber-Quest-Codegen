#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__StyleSyntaxToken_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__StyleSyntaxTokenType_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken::*)(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType)>(&::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2c7c25c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken::*)(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType, ::StringW)>(&::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2c7c26c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken::*)(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType, int32_t)>(&::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2c7c27c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType", modifiers: "", def_value: Some("{}") }, CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "number", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken::StyleSyntaxToken(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType type, ::StringW text, int32_t number) noexcept : ::bs_hook::ValueTypeWrapper() {this->type = type;
this->text = text;
this->number = number;
}
constexpr void ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken::__set_type(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType, 0x0>(this->__instance, std::forward<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType>(value));
}
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken::__get_type() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken::__set_text(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken::__get_text() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken::__set_number(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken::__get_number() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
 void ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken::_ctor(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, t);
}
 void ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken::_ctor(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType type, ::StringW text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, type, text);
}
 void ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken::_ctor(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType type, int32_t number)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, type, number);
}
} // end anonymous namespace
