#pragma once
namespace {
#include "UnityEngine/UIElements/zzzz__VisualElementUtils_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementUtils.GetUniqueName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::UIElements::VisualElementUtils::GetUniqueName)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2c8af30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementUtils>::get(),
                            "GetUniqueName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementUtils.GetFoldoutDepth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::UIElements::VisualElement)>(&::UnityEngine::UIElements::VisualElementUtils::GetFoldoutDepth)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2c8948c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementUtils>::get(),
                            "GetFoldoutDepth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementUtils.GetListAndFoldoutDepth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::UIElements::VisualElement)>(&::UnityEngine::UIElements::VisualElementUtils::GetListAndFoldoutDepth)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2c8b044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementUtils>::get(),
                            "GetListAndFoldoutDepth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::UIElements::VisualElementUtils::__set_s_usedNames(::System::Collections::Generic::HashSet_1<::StringW> value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::StringW>, "s_usedNames", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementUtils>::get>(std::forward<::System::Collections::Generic::HashSet_1<::StringW>>(value));
}
 ::System::Collections::Generic::HashSet_1<::StringW> ::UnityEngine::UIElements::VisualElementUtils::__get_s_usedNames()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::StringW>, "s_usedNames", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementUtils>::get>();
}
 void ::UnityEngine::UIElements::VisualElementUtils::__set_s_FoldoutType(::System::Type value)  {
::cordl_internals::setStaticField<::System::Type, "s_FoldoutType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementUtils>::get>(std::forward<::System::Type>(value));
}
 ::System::Type ::UnityEngine::UIElements::VisualElementUtils::__get_s_FoldoutType()  {
return ::cordl_internals::getStaticField<::System::Type, "s_FoldoutType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementUtils>::get>();
}
 ::StringW ::UnityEngine::UIElements::VisualElementUtils::GetUniqueName(::StringW nameBase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementUtils>::get(),
                            "GetUniqueName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, nameBase);
}
 int32_t ::UnityEngine::UIElements::VisualElementUtils::GetFoldoutDepth(::UnityEngine::UIElements::VisualElement element)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementUtils>::get(),
                            "GetFoldoutDepth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, element);
}
 int32_t ::UnityEngine::UIElements::VisualElementUtils::GetListAndFoldoutDepth(::UnityEngine::UIElements::VisualElement element)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementUtils>::get(),
                            "GetListAndFoldoutDepth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, element);
}
} // end anonymous namespace
