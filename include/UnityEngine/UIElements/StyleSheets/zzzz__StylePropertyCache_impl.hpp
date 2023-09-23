#pragma once
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyCache_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::StylePropertyCache.TryGetSyntax
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::StringW>)>(&UnityEngine::UIElements::StyleSheets::StylePropertyCache::TryGetSyntax)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2c764a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::StylePropertyCache>::get(),
                            "TryGetSyntax",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::StylePropertyCache.TryGetNonTerminalValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::StringW>)>(&UnityEngine::UIElements::StyleSheets::StylePropertyCache::TryGetNonTerminalValue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2c76534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::StylePropertyCache>::get(),
                            "TryGetNonTerminalValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::UIElements::StyleSheets::StylePropertyCache::__set_s_PropertySyntaxCache(System::Collections::Generic::Dictionary_2<::StringW,::StringW> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<::StringW,::StringW>, "s_PropertySyntaxCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::StylePropertyCache>::get>(std::forward<System::Collections::Generic::Dictionary_2<::StringW,::StringW>>(value));
}
 System::Collections::Generic::Dictionary_2<::StringW,::StringW> UnityEngine::UIElements::StyleSheets::StylePropertyCache::__get_s_PropertySyntaxCache()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<::StringW,::StringW>, "s_PropertySyntaxCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::StylePropertyCache>::get>();
}
 void UnityEngine::UIElements::StyleSheets::StylePropertyCache::__set_s_NonTerminalValues(System::Collections::Generic::Dictionary_2<::StringW,::StringW> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<::StringW,::StringW>, "s_NonTerminalValues", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::StylePropertyCache>::get>(std::forward<System::Collections::Generic::Dictionary_2<::StringW,::StringW>>(value));
}
 System::Collections::Generic::Dictionary_2<::StringW,::StringW> UnityEngine::UIElements::StyleSheets::StylePropertyCache::__get_s_NonTerminalValues()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<::StringW,::StringW>, "s_NonTerminalValues", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::StylePropertyCache>::get>();
}
 bool UnityEngine::UIElements::StyleSheets::StylePropertyCache::TryGetSyntax(::StringW name, ByRef<::StringW> syntax)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::StylePropertyCache>::get(),
                            "TryGetSyntax",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, name, syntax);
}
 bool UnityEngine::UIElements::StyleSheets::StylePropertyCache::TryGetNonTerminalValue(::StringW name, ByRef<::StringW> syntax)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::StylePropertyCache>::get(),
                            "TryGetNonTerminalValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, name, syntax);
}
