#pragma once
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeStyleUpdater_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeStyleUpdaterTraversal_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VersionChangeType_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::VisualTreeStyleUpdater.get_profilerMarker
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Unity::Profiling::ProfilerMarker (UnityEngine::UIElements::VisualTreeStyleUpdater::*)()>(&UnityEngine::UIElements::VisualTreeStyleUpdater::get_profilerMarker)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c483e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::VisualTreeStyleUpdater),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeStyleUpdater>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::VisualTreeStyleUpdater.OnVersionChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::VisualTreeStyleUpdater::*)(UnityEngine::UIElements::VisualElement, UnityEngine::UIElements::VersionChangeType)>(&UnityEngine::UIElements::VisualTreeStyleUpdater::OnVersionChanged)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2c4843c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::VisualTreeStyleUpdater),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeStyleUpdater>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::VisualTreeStyleUpdater.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::VisualTreeStyleUpdater::*)()>(&UnityEngine::UIElements::VisualTreeStyleUpdater::Update)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x2c48584;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::VisualTreeStyleUpdater),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeStyleUpdater>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::VisualTreeStyleUpdater.ApplyStyles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::VisualTreeStyleUpdater::*)()>(&UnityEngine::UIElements::VisualTreeStyleUpdater::ApplyStyles)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2c48890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeStyleUpdater>::get(),
                            "ApplyStyles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::VisualTreeStyleUpdater._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::VisualTreeStyleUpdater::*)()>(&UnityEngine::UIElements::VisualTreeStyleUpdater::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2c48cf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeStyleUpdater>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::VisualTreeStyleUpdater::__set_m_ApplyStyleUpdateList(System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement>>(value));
}
constexpr System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement> UnityEngine::UIElements::VisualTreeStyleUpdater::__get_m_ApplyStyleUpdateList() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::VisualTreeStyleUpdater::__set_m_TransitionPropertyUpdateList(System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement>>(value));
}
constexpr System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement> UnityEngine::UIElements::VisualTreeStyleUpdater::__get_m_TransitionPropertyUpdateList() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::VisualTreeStyleUpdater::__set_m_IsApplyingStyles(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::VisualTreeStyleUpdater::__get_m_IsApplyingStyles() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::VisualTreeStyleUpdater::__set_m_Version(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::UIElements::VisualTreeStyleUpdater::__get_m_Version() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::VisualTreeStyleUpdater::__set_m_LastVersion(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::UIElements::VisualTreeStyleUpdater::__get_m_LastVersion() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::VisualTreeStyleUpdater::__set_m_StyleContextHierarchyTraversal(UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal>(value));
}
constexpr UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal UnityEngine::UIElements::VisualTreeStyleUpdater::__get_m_StyleContextHierarchyTraversal() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::UIElements::VisualTreeStyleUpdater::__set_s_Description(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "s_Description", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeStyleUpdater>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::VisualTreeStyleUpdater::__get_s_Description()  {
return ::cordl_internals::getStaticField<::StringW, "s_Description", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeStyleUpdater>::get>();
}
 void UnityEngine::UIElements::VisualTreeStyleUpdater::__set_s_ProfilerMarker(Unity::Profiling::ProfilerMarker value)  {
::cordl_internals::setStaticField<Unity::Profiling::ProfilerMarker, "s_ProfilerMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeStyleUpdater>::get>(std::forward<Unity::Profiling::ProfilerMarker>(value));
}
 Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeStyleUpdater::__get_s_ProfilerMarker()  {
return ::cordl_internals::getStaticField<Unity::Profiling::ProfilerMarker, "s_ProfilerMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeStyleUpdater>::get>();
}
 Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeStyleUpdater::get_profilerMarker()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeStyleUpdater>::get(),
                            "get_profilerMarker",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Unity::Profiling::ProfilerMarker, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::VisualTreeStyleUpdater::OnVersionChanged(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::VersionChangeType versionChangeType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeStyleUpdater>::get(),
                            "OnVersionChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VersionChangeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve, versionChangeType);
}
 void UnityEngine::UIElements::VisualTreeStyleUpdater::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeStyleUpdater>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::VisualTreeStyleUpdater::ApplyStyles()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeStyleUpdater>::get(),
                            "ApplyStyles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::UIElements::VisualTreeStyleUpdater UnityEngine::UIElements::VisualTreeStyleUpdater::New_ctor()  {
UnityEngine::UIElements::VisualTreeStyleUpdater o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::UIElements::VisualTreeStyleUpdater>())};
return o;
}
 void UnityEngine::UIElements::VisualTreeStyleUpdater::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeStyleUpdater>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
