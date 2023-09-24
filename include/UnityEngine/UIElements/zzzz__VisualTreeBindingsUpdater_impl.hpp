#pragma once
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeHierarchyTrackerUpdater_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeBindingsUpdater_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__PropertyName_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__IBinding_def.hpp"
#include "UnityEngine/UIElements/zzzz__VersionChangeType_def.hpp"
#include "UnityEngine/UIElements/zzzz__HierarchyChangeType_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::VisualTreeBindingsUpdater.get_profilerMarker
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Unity::Profiling::ProfilerMarker (UnityEngine::UIElements::VisualTreeBindingsUpdater::*)()>(&UnityEngine::UIElements::VisualTreeBindingsUpdater::get_profilerMarker)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2d07de0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::VisualTreeBindingsUpdater),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::VisualTreeBindingsUpdater.GetBindingObjectFromElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::IBinding (UnityEngine::UIElements::VisualTreeBindingsUpdater::*)(UnityEngine::UIElements::VisualElement)>(&UnityEngine::UIElements::VisualTreeBindingsUpdater::GetBindingObjectFromElement)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2d07e38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get(),
                            "GetBindingObjectFromElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::VisualTreeBindingsUpdater.StartTracking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::VisualTreeBindingsUpdater::*)(UnityEngine::UIElements::VisualElement)>(&UnityEngine::UIElements::VisualTreeBindingsUpdater::StartTracking)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2d07ff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get(),
                            "StartTracking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::VisualTreeBindingsUpdater.StopTracking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::VisualTreeBindingsUpdater::*)(UnityEngine::UIElements::VisualElement)>(&UnityEngine::UIElements::VisualTreeBindingsUpdater::StopTracking)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2d08078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get(),
                            "StopTracking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::VisualTreeBindingsUpdater.get_temporaryObjectCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> (UnityEngine::UIElements::VisualTreeBindingsUpdater::*)()>(&UnityEngine::UIElements::VisualTreeBindingsUpdater::get_temporaryObjectCache)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d080f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get(),
                            "get_temporaryObjectCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::VisualTreeBindingsUpdater.GetAdditionalBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::IBinding (*)(UnityEngine::UIElements::VisualElement)>(&UnityEngine::UIElements::VisualTreeBindingsUpdater::GetAdditionalBinding)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2d07f70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get(),
                            "GetAdditionalBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::VisualTreeBindingsUpdater.StartTrackingRecursive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::VisualTreeBindingsUpdater::*)(UnityEngine::UIElements::VisualElement)>(&UnityEngine::UIElements::VisualTreeBindingsUpdater::StartTrackingRecursive)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2d08100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get(),
                            "StartTrackingRecursive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::VisualTreeBindingsUpdater.StopTrackingRecursive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::VisualTreeBindingsUpdater::*)(UnityEngine::UIElements::VisualElement)>(&UnityEngine::UIElements::VisualTreeBindingsUpdater::StopTrackingRecursive)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2d08218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get(),
                            "StopTrackingRecursive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::VisualTreeBindingsUpdater.OnVersionChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::VisualTreeBindingsUpdater::*)(UnityEngine::UIElements::VisualElement, UnityEngine::UIElements::VersionChangeType)>(&UnityEngine::UIElements::VisualTreeBindingsUpdater::OnVersionChanged)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2d08324;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::VisualTreeBindingsUpdater),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::VisualTreeBindingsUpdater.OnHierarchyChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::VisualTreeBindingsUpdater::*)(UnityEngine::UIElements::VisualElement, UnityEngine::UIElements::HierarchyChangeType)>(&UnityEngine::UIElements::VisualTreeBindingsUpdater::OnHierarchyChange)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2d0841c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::VisualTreeBindingsUpdater),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::VisualTreeBindingsUpdater.CurrentTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)()>(&UnityEngine::UIElements::VisualTreeBindingsUpdater::CurrentTime)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2d08434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get(),
                            "CurrentTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::VisualTreeBindingsUpdater.PerformTrackingOperations
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::VisualTreeBindingsUpdater::*)()>(&UnityEngine::UIElements::VisualTreeBindingsUpdater::PerformTrackingOperations)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x2d08484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get(),
                            "PerformTrackingOperations",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::VisualTreeBindingsUpdater.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::VisualTreeBindingsUpdater::*)()>(&UnityEngine::UIElements::VisualTreeBindingsUpdater::Update)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0x2d08708;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::VisualTreeBindingsUpdater),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::VisualTreeBindingsUpdater.UpdateBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::VisualTreeBindingsUpdater::*)()>(&UnityEngine::UIElements::VisualTreeBindingsUpdater::UpdateBindings)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x2d08d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get(),
                            "UpdateBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::VisualTreeBindingsUpdater._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::VisualTreeBindingsUpdater::*)()>(&UnityEngine::UIElements::VisualTreeBindingsUpdater::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2d0923c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::UIElements::VisualTreeBindingsUpdater::__set_s_BindingRequestObjectVEPropertyName(UnityEngine::PropertyName value)  {
::cordl_internals::setStaticField<UnityEngine::PropertyName, "s_BindingRequestObjectVEPropertyName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get>(std::forward<UnityEngine::PropertyName>(value));
}
 UnityEngine::PropertyName UnityEngine::UIElements::VisualTreeBindingsUpdater::__get_s_BindingRequestObjectVEPropertyName()  {
return ::cordl_internals::getStaticField<UnityEngine::PropertyName, "s_BindingRequestObjectVEPropertyName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get>();
}
 void UnityEngine::UIElements::VisualTreeBindingsUpdater::__set_s_AdditionalBindingObjectVEPropertyName(UnityEngine::PropertyName value)  {
::cordl_internals::setStaticField<UnityEngine::PropertyName, "s_AdditionalBindingObjectVEPropertyName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get>(std::forward<UnityEngine::PropertyName>(value));
}
 UnityEngine::PropertyName UnityEngine::UIElements::VisualTreeBindingsUpdater::__get_s_AdditionalBindingObjectVEPropertyName()  {
return ::cordl_internals::getStaticField<UnityEngine::PropertyName, "s_AdditionalBindingObjectVEPropertyName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get>();
}
 void UnityEngine::UIElements::VisualTreeBindingsUpdater::__set_s_Description(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "s_Description", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::VisualTreeBindingsUpdater::__get_s_Description()  {
return ::cordl_internals::getStaticField<::StringW, "s_Description", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get>();
}
 void UnityEngine::UIElements::VisualTreeBindingsUpdater::__set_s_ProfilerMarker(Unity::Profiling::ProfilerMarker value)  {
::cordl_internals::setStaticField<Unity::Profiling::ProfilerMarker, "s_ProfilerMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get>(std::forward<Unity::Profiling::ProfilerMarker>(value));
}
 Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeBindingsUpdater::__get_s_ProfilerMarker()  {
return ::cordl_internals::getStaticField<Unity::Profiling::ProfilerMarker, "s_ProfilerMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get>();
}
 void UnityEngine::UIElements::VisualTreeBindingsUpdater::__set_s_ProfilerBindingRequestsMarker(Unity::Profiling::ProfilerMarker value)  {
::cordl_internals::setStaticField<Unity::Profiling::ProfilerMarker, "s_ProfilerBindingRequestsMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get>(std::forward<Unity::Profiling::ProfilerMarker>(value));
}
 Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeBindingsUpdater::__get_s_ProfilerBindingRequestsMarker()  {
return ::cordl_internals::getStaticField<Unity::Profiling::ProfilerMarker, "s_ProfilerBindingRequestsMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get>();
}
 void UnityEngine::UIElements::VisualTreeBindingsUpdater::__set_s_MarkerUpdate(Unity::Profiling::ProfilerMarker value)  {
::cordl_internals::setStaticField<Unity::Profiling::ProfilerMarker, "s_MarkerUpdate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get>(std::forward<Unity::Profiling::ProfilerMarker>(value));
}
 Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeBindingsUpdater::__get_s_MarkerUpdate()  {
return ::cordl_internals::getStaticField<Unity::Profiling::ProfilerMarker, "s_MarkerUpdate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get>();
}
 void UnityEngine::UIElements::VisualTreeBindingsUpdater::__set_s_MarkerPoll(Unity::Profiling::ProfilerMarker value)  {
::cordl_internals::setStaticField<Unity::Profiling::ProfilerMarker, "s_MarkerPoll", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get>(std::forward<Unity::Profiling::ProfilerMarker>(value));
}
 Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeBindingsUpdater::__get_s_MarkerPoll()  {
return ::cordl_internals::getStaticField<Unity::Profiling::ProfilerMarker, "s_MarkerPoll", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get>();
}
 void UnityEngine::UIElements::VisualTreeBindingsUpdater::__set__disableBindingsThrottling_k__BackingField(bool value)  {
::cordl_internals::setStaticField<bool, "<disableBindingsThrottling>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get>(std::forward<bool>(value));
}
 bool UnityEngine::UIElements::VisualTreeBindingsUpdater::__get__disableBindingsThrottling_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<disableBindingsThrottling>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get>();
}
constexpr void UnityEngine::UIElements::VisualTreeBindingsUpdater::__set_m_ElementsWithBindings(System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement>>(value));
}
constexpr System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement> UnityEngine::UIElements::VisualTreeBindingsUpdater::__get_m_ElementsWithBindings() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::VisualTreeBindingsUpdater::__set_m_ElementsToAdd(System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement>>(value));
}
constexpr System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement> UnityEngine::UIElements::VisualTreeBindingsUpdater::__get_m_ElementsToAdd() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::VisualTreeBindingsUpdater::__set_m_ElementsToRemove(System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement>>(value));
}
constexpr System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement> UnityEngine::UIElements::VisualTreeBindingsUpdater::__get_m_ElementsToRemove() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::VisualTreeBindingsUpdater::__set_m_LastUpdateTime(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t UnityEngine::UIElements::VisualTreeBindingsUpdater::__get_m_LastUpdateTime() const {
return ::cordl_internals::getInstanceField<int64_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::VisualTreeBindingsUpdater::__set_m_ElementsToBind(System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement>>(value));
}
constexpr System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement> UnityEngine::UIElements::VisualTreeBindingsUpdater::__get_m_ElementsToBind() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::VisualTreeBindingsUpdater::__set__temporaryObjectCache_k__BackingField(System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> UnityEngine::UIElements::VisualTreeBindingsUpdater::__get__temporaryObjectCache_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::VisualTreeBindingsUpdater::__set_updatedBindings(System::Collections::Generic::List_1<UnityEngine::UIElements::IBinding> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::UIElements::IBinding>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::UIElements::IBinding>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::IBinding> UnityEngine::UIElements::VisualTreeBindingsUpdater::__get_updatedBindings() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::UIElements::IBinding>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeBindingsUpdater::get_profilerMarker()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get(),
                            "get_profilerMarker",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Unity::Profiling::ProfilerMarker, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::UIElements::IBinding UnityEngine::UIElements::VisualTreeBindingsUpdater::GetBindingObjectFromElement(UnityEngine::UIElements::VisualElement ve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get(),
                            "GetBindingObjectFromElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::IBinding, false>(const_cast<void*>(instance), ___internal_method, ve);
}
 void UnityEngine::UIElements::VisualTreeBindingsUpdater::StartTracking(UnityEngine::UIElements::VisualElement ve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get(),
                            "StartTracking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve);
}
 void UnityEngine::UIElements::VisualTreeBindingsUpdater::StopTracking(UnityEngine::UIElements::VisualElement ve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get(),
                            "StopTracking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve);
}
 System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> UnityEngine::UIElements::VisualTreeBindingsUpdater::get_temporaryObjectCache()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get(),
                            "get_temporaryObjectCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::UIElements::IBinding UnityEngine::UIElements::VisualTreeBindingsUpdater::GetAdditionalBinding(UnityEngine::UIElements::VisualElement ve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get(),
                            "GetAdditionalBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::IBinding, false>(nullptr, ___internal_method, ve);
}
 void UnityEngine::UIElements::VisualTreeBindingsUpdater::StartTrackingRecursive(UnityEngine::UIElements::VisualElement ve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get(),
                            "StartTrackingRecursive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve);
}
 void UnityEngine::UIElements::VisualTreeBindingsUpdater::StopTrackingRecursive(UnityEngine::UIElements::VisualElement ve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get(),
                            "StopTrackingRecursive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve);
}
 void UnityEngine::UIElements::VisualTreeBindingsUpdater::OnVersionChanged(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::VersionChangeType versionChangeType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get(),
                            "OnVersionChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VersionChangeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve, versionChangeType);
}
 void UnityEngine::UIElements::VisualTreeBindingsUpdater::OnHierarchyChange(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::HierarchyChangeType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get(),
                            "OnHierarchyChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::HierarchyChangeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve, type);
}
 int64_t UnityEngine::UIElements::VisualTreeBindingsUpdater::CurrentTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get(),
                            "CurrentTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method);
}
 void UnityEngine::UIElements::VisualTreeBindingsUpdater::PerformTrackingOperations()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get(),
                            "PerformTrackingOperations",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::VisualTreeBindingsUpdater::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::VisualTreeBindingsUpdater::UpdateBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get(),
                            "UpdateBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::UIElements::VisualTreeBindingsUpdater UnityEngine::UIElements::VisualTreeBindingsUpdater::New_ctor()  {
UnityEngine::UIElements::VisualTreeBindingsUpdater o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::UIElements::VisualTreeBindingsUpdater>())};
return o;
}
 void UnityEngine::UIElements::VisualTreeBindingsUpdater::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::VisualTreeBindingsUpdater>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
