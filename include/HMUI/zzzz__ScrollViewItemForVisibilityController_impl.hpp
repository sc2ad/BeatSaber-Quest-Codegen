#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "HMUI/zzzz__ScrollViewItemForVisibilityController_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::HMUI::ScrollViewItemForVisibilityController.GetWorldCorners
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollViewItemForVisibilityController::*)(::ArrayW<::UnityEngine::Vector3>)>(&::HMUI::ScrollViewItemForVisibilityController::GetWorldCorners)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1fd15c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollViewItemForVisibilityController>::get(),
                            "GetWorldCorners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollViewItemForVisibilityController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollViewItemForVisibilityController::*)()>(&::HMUI::ScrollViewItemForVisibilityController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fd1628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollViewItemForVisibilityController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::HMUI::ScrollViewItemForVisibilityController::GetWorldCorners(::ArrayW<::UnityEngine::Vector3> fourCornersArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollViewItemForVisibilityController>::get(),
                            "GetWorldCorners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, fourCornersArray);
}
// Ctor Parameters []
 ::HMUI::ScrollViewItemForVisibilityController::ScrollViewItemForVisibilityController()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<ScrollViewItemForVisibilityController>())) {}
 void ::HMUI::ScrollViewItemForVisibilityController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollViewItemForVisibilityController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
