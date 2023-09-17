#pragma once
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__UIRLayoutUpdater_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__VersionChangeType_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIRLayoutUpdater.get_profilerMarker
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Profiling::ProfilerMarker (::UnityEngine::UIElements::UIRLayoutUpdater::*)()>(&::UnityEngine::UIElements::UIRLayoutUpdater::get_profilerMarker)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2d016d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::UIRLayoutUpdater),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIRLayoutUpdater>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRLayoutUpdater.OnVersionChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIRLayoutUpdater::*)(::UnityEngine::UIElements::VisualElement, ::UnityEngine::UIElements::VersionChangeType)>(&::UnityEngine::UIElements::UIRLayoutUpdater::OnVersionChanged)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2d01730;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::UIRLayoutUpdater),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIRLayoutUpdater>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRLayoutUpdater.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIRLayoutUpdater::*)()>(&::UnityEngine::UIElements::UIRLayoutUpdater::Update)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x2d01778;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::UIRLayoutUpdater),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIRLayoutUpdater>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRLayoutUpdater.UpdateSubTree
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIRLayoutUpdater::*)(::UnityEngine::UIElements::VisualElement, int32_t, bool)>(&::UnityEngine::UIElements::UIRLayoutUpdater::UpdateSubTree)> {
  constexpr static std::size_t size = 0x810;
  constexpr static std::size_t addrs = 0x2d01a64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIRLayoutUpdater>::get(),
                            "UpdateSubTree",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRLayoutUpdater._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIRLayoutUpdater::*)()>(&::UnityEngine::UIElements::UIRLayoutUpdater::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d02274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIRLayoutUpdater>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::UIElements::UIRLayoutUpdater::__set_s_Description(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "s_Description", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIRLayoutUpdater>::get>(std::forward<::StringW>(value));
}
 ::StringW ::UnityEngine::UIElements::UIRLayoutUpdater::__get_s_Description()  {
return ::cordl_internals::getStaticField<::StringW, "s_Description", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIRLayoutUpdater>::get>();
}
 void ::UnityEngine::UIElements::UIRLayoutUpdater::__set_s_ProfilerMarker(::Unity::Profiling::ProfilerMarker value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_ProfilerMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIRLayoutUpdater>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
 ::Unity::Profiling::ProfilerMarker ::UnityEngine::UIElements::UIRLayoutUpdater::__get_s_ProfilerMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_ProfilerMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIRLayoutUpdater>::get>();
}
 ::Unity::Profiling::ProfilerMarker ::UnityEngine::UIElements::UIRLayoutUpdater::get_profilerMarker()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIRLayoutUpdater>::get(),
                            "get_profilerMarker",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::ProfilerMarker, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::UIRLayoutUpdater::OnVersionChanged(::UnityEngine::UIElements::VisualElement ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIRLayoutUpdater>::get(),
                            "OnVersionChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VersionChangeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve, versionChangeType);
}
 void ::UnityEngine::UIElements::UIRLayoutUpdater::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIRLayoutUpdater>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param isDisplayed: bool (default: true)
 void ::UnityEngine::UIElements::UIRLayoutUpdater::UpdateSubTree(::UnityEngine::UIElements::VisualElement ve, int32_t currentLayoutPass, bool isDisplayed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIRLayoutUpdater>::get(),
                            "UpdateSubTree",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve, currentLayoutPass, isDisplayed);
}
// Ctor Parameters []
 ::UnityEngine::UIElements::UIRLayoutUpdater::UIRLayoutUpdater()  : ::UnityEngine::UIElements::BaseVisualTreeUpdater(THROW_UNLESS(::il2cpp_utils::New<UIRLayoutUpdater>())) {}
 void ::UnityEngine::UIElements::UIRLayoutUpdater::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIRLayoutUpdater>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
