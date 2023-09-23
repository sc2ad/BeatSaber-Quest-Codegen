#pragma once
#include "TMPro/zzzz__TMP_UpdateManager_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: TMPro::TMP_UpdateManager.get_instance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TMPro::TMP_UpdateManager (*)()>(&TMPro::TMP_UpdateManager::get_instance)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2ab44a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get(),
                            "get_instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_UpdateManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_UpdateManager::*)()>(&TMPro::TMP_UpdateManager::_ctor)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2ab454c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_UpdateManager.RegisterTextObjectForUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(TMPro::TMP_Text)>(&TMPro::TMP_UpdateManager::RegisterTextObjectForUpdate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2ab4718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get(),
                            "RegisterTextObjectForUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_UpdateManager.InternalRegisterTextObjectForUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_UpdateManager::*)(TMPro::TMP_Text)>(&TMPro::TMP_UpdateManager::InternalRegisterTextObjectForUpdate)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2ab4778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get(),
                            "InternalRegisterTextObjectForUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_UpdateManager.RegisterTextElementForLayoutRebuild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(TMPro::TMP_Text)>(&TMPro::TMP_UpdateManager::RegisterTextElementForLayoutRebuild)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2ab488c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get(),
                            "RegisterTextElementForLayoutRebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_UpdateManager.InternalRegisterTextElementForLayoutRebuild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_UpdateManager::*)(TMPro::TMP_Text)>(&TMPro::TMP_UpdateManager::InternalRegisterTextElementForLayoutRebuild)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2ab48ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get(),
                            "InternalRegisterTextElementForLayoutRebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_UpdateManager.RegisterTextElementForGraphicRebuild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(TMPro::TMP_Text)>(&TMPro::TMP_UpdateManager::RegisterTextElementForGraphicRebuild)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2ab4a00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get(),
                            "RegisterTextElementForGraphicRebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_UpdateManager.InternalRegisterTextElementForGraphicRebuild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_UpdateManager::*)(TMPro::TMP_Text)>(&TMPro::TMP_UpdateManager::InternalRegisterTextElementForGraphicRebuild)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2ab4a60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get(),
                            "InternalRegisterTextElementForGraphicRebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_UpdateManager.RegisterTextElementForCullingUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(TMPro::TMP_Text)>(&TMPro::TMP_UpdateManager::RegisterTextElementForCullingUpdate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2ab4b74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get(),
                            "RegisterTextElementForCullingUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_UpdateManager.InternalRegisterTextElementForCullingUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_UpdateManager::*)(TMPro::TMP_Text)>(&TMPro::TMP_UpdateManager::InternalRegisterTextElementForCullingUpdate)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2ab4bd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get(),
                            "InternalRegisterTextElementForCullingUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_UpdateManager.OnCameraPreCull
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_UpdateManager::*)()>(&TMPro::TMP_UpdateManager::OnCameraPreCull)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ab4ce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get(),
                            "OnCameraPreCull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_UpdateManager.DoRebuilds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_UpdateManager::*)()>(&TMPro::TMP_UpdateManager::DoRebuilds)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2ab4cec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get(),
                            "DoRebuilds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_UpdateManager.UnRegisterTextObjectForUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(TMPro::TMP_Text)>(&TMPro::TMP_UpdateManager::UnRegisterTextObjectForUpdate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2ab4f40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get(),
                            "UnRegisterTextObjectForUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_UpdateManager.UnRegisterTextElementForRebuild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(TMPro::TMP_Text)>(&TMPro::TMP_UpdateManager::UnRegisterTextElementForRebuild)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2ab5038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get(),
                            "UnRegisterTextElementForRebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_UpdateManager.InternalUnRegisterTextElementForGraphicRebuild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_UpdateManager::*)(TMPro::TMP_Text)>(&TMPro::TMP_UpdateManager::InternalUnRegisterTextElementForGraphicRebuild)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2ab50b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get(),
                            "InternalUnRegisterTextElementForGraphicRebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_UpdateManager.InternalUnRegisterTextElementForLayoutRebuild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_UpdateManager::*)(TMPro::TMP_Text)>(&TMPro::TMP_UpdateManager::InternalUnRegisterTextElementForLayoutRebuild)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2ab5150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get(),
                            "InternalUnRegisterTextElementForLayoutRebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_UpdateManager.InternalUnRegisterTextObjectForUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_UpdateManager::*)(TMPro::TMP_Text)>(&TMPro::TMP_UpdateManager::InternalUnRegisterTextObjectForUpdate)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2ab4fa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get(),
                            "InternalUnRegisterTextObjectForUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get()}
                        )));
    return ___internal_method;
  }
};
 void TMPro::TMP_UpdateManager::__set_s_Instance(TMPro::TMP_UpdateManager value)  {
::cordl_internals::setStaticField<TMPro::TMP_UpdateManager, "s_Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get>(std::forward<TMPro::TMP_UpdateManager>(value));
}
 TMPro::TMP_UpdateManager TMPro::TMP_UpdateManager::__get_s_Instance()  {
return ::cordl_internals::getStaticField<TMPro::TMP_UpdateManager, "s_Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get>();
}
constexpr void TMPro::TMP_UpdateManager::__set_m_LayoutQueueLookup(System::Collections::Generic::HashSet_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::HashSet_1<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::HashSet_1<int32_t>>(value));
}
constexpr System::Collections::Generic::HashSet_1<int32_t> TMPro::TMP_UpdateManager::__get_m_LayoutQueueLookup() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::HashSet_1<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void TMPro::TMP_UpdateManager::__set_m_LayoutRebuildQueue(System::Collections::Generic::List_1<TMPro::TMP_Text> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<TMPro::TMP_Text>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<TMPro::TMP_Text>>(value));
}
constexpr System::Collections::Generic::List_1<TMPro::TMP_Text> TMPro::TMP_UpdateManager::__get_m_LayoutRebuildQueue() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<TMPro::TMP_Text>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void TMPro::TMP_UpdateManager::__set_m_GraphicQueueLookup(System::Collections::Generic::HashSet_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::HashSet_1<int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::HashSet_1<int32_t>>(value));
}
constexpr System::Collections::Generic::HashSet_1<int32_t> TMPro::TMP_UpdateManager::__get_m_GraphicQueueLookup() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::HashSet_1<int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void TMPro::TMP_UpdateManager::__set_m_GraphicRebuildQueue(System::Collections::Generic::List_1<TMPro::TMP_Text> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<TMPro::TMP_Text>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<TMPro::TMP_Text>>(value));
}
constexpr System::Collections::Generic::List_1<TMPro::TMP_Text> TMPro::TMP_UpdateManager::__get_m_GraphicRebuildQueue() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<TMPro::TMP_Text>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void TMPro::TMP_UpdateManager::__set_m_InternalUpdateLookup(System::Collections::Generic::HashSet_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::HashSet_1<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::HashSet_1<int32_t>>(value));
}
constexpr System::Collections::Generic::HashSet_1<int32_t> TMPro::TMP_UpdateManager::__get_m_InternalUpdateLookup() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::HashSet_1<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void TMPro::TMP_UpdateManager::__set_m_InternalUpdateQueue(System::Collections::Generic::List_1<TMPro::TMP_Text> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<TMPro::TMP_Text>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<TMPro::TMP_Text>>(value));
}
constexpr System::Collections::Generic::List_1<TMPro::TMP_Text> TMPro::TMP_UpdateManager::__get_m_InternalUpdateQueue() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<TMPro::TMP_Text>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void TMPro::TMP_UpdateManager::__set_m_CullingUpdateLookup(System::Collections::Generic::HashSet_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::HashSet_1<int32_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::HashSet_1<int32_t>>(value));
}
constexpr System::Collections::Generic::HashSet_1<int32_t> TMPro::TMP_UpdateManager::__get_m_CullingUpdateLookup() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::HashSet_1<int32_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void TMPro::TMP_UpdateManager::__set_m_CullingUpdateQueue(System::Collections::Generic::List_1<TMPro::TMP_Text> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<TMPro::TMP_Text>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<TMPro::TMP_Text>>(value));
}
constexpr System::Collections::Generic::List_1<TMPro::TMP_Text> TMPro::TMP_UpdateManager::__get_m_CullingUpdateQueue() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<TMPro::TMP_Text>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void TMPro::TMP_UpdateManager::__set_k_RegisterTextObjectForUpdateMarker(Unity::Profiling::ProfilerMarker value)  {
::cordl_internals::setStaticField<Unity::Profiling::ProfilerMarker, "k_RegisterTextObjectForUpdateMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get>(std::forward<Unity::Profiling::ProfilerMarker>(value));
}
 Unity::Profiling::ProfilerMarker TMPro::TMP_UpdateManager::__get_k_RegisterTextObjectForUpdateMarker()  {
return ::cordl_internals::getStaticField<Unity::Profiling::ProfilerMarker, "k_RegisterTextObjectForUpdateMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get>();
}
 void TMPro::TMP_UpdateManager::__set_k_RegisterTextElementForGraphicRebuildMarker(Unity::Profiling::ProfilerMarker value)  {
::cordl_internals::setStaticField<Unity::Profiling::ProfilerMarker, "k_RegisterTextElementForGraphicRebuildMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get>(std::forward<Unity::Profiling::ProfilerMarker>(value));
}
 Unity::Profiling::ProfilerMarker TMPro::TMP_UpdateManager::__get_k_RegisterTextElementForGraphicRebuildMarker()  {
return ::cordl_internals::getStaticField<Unity::Profiling::ProfilerMarker, "k_RegisterTextElementForGraphicRebuildMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get>();
}
 void TMPro::TMP_UpdateManager::__set_k_RegisterTextElementForCullingUpdateMarker(Unity::Profiling::ProfilerMarker value)  {
::cordl_internals::setStaticField<Unity::Profiling::ProfilerMarker, "k_RegisterTextElementForCullingUpdateMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get>(std::forward<Unity::Profiling::ProfilerMarker>(value));
}
 Unity::Profiling::ProfilerMarker TMPro::TMP_UpdateManager::__get_k_RegisterTextElementForCullingUpdateMarker()  {
return ::cordl_internals::getStaticField<Unity::Profiling::ProfilerMarker, "k_RegisterTextElementForCullingUpdateMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get>();
}
 void TMPro::TMP_UpdateManager::__set_k_UnregisterTextObjectForUpdateMarker(Unity::Profiling::ProfilerMarker value)  {
::cordl_internals::setStaticField<Unity::Profiling::ProfilerMarker, "k_UnregisterTextObjectForUpdateMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get>(std::forward<Unity::Profiling::ProfilerMarker>(value));
}
 Unity::Profiling::ProfilerMarker TMPro::TMP_UpdateManager::__get_k_UnregisterTextObjectForUpdateMarker()  {
return ::cordl_internals::getStaticField<Unity::Profiling::ProfilerMarker, "k_UnregisterTextObjectForUpdateMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get>();
}
 void TMPro::TMP_UpdateManager::__set_k_UnregisterTextElementForGraphicRebuildMarker(Unity::Profiling::ProfilerMarker value)  {
::cordl_internals::setStaticField<Unity::Profiling::ProfilerMarker, "k_UnregisterTextElementForGraphicRebuildMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get>(std::forward<Unity::Profiling::ProfilerMarker>(value));
}
 Unity::Profiling::ProfilerMarker TMPro::TMP_UpdateManager::__get_k_UnregisterTextElementForGraphicRebuildMarker()  {
return ::cordl_internals::getStaticField<Unity::Profiling::ProfilerMarker, "k_UnregisterTextElementForGraphicRebuildMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get>();
}
 TMPro::TMP_UpdateManager TMPro::TMP_UpdateManager::get_instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get(),
                            "get_instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TMPro::TMP_UpdateManager, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
 TMPro::TMP_UpdateManager::TMP_UpdateManager()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<TMP_UpdateManager>())) {}
 void TMPro::TMP_UpdateManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void TMPro::TMP_UpdateManager::RegisterTextObjectForUpdate(TMPro::TMP_Text textObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get(),
                            "RegisterTextObjectForUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, textObject);
}
 void TMPro::TMP_UpdateManager::InternalRegisterTextObjectForUpdate(TMPro::TMP_Text textObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get(),
                            "InternalRegisterTextObjectForUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, textObject);
}
 void TMPro::TMP_UpdateManager::RegisterTextElementForLayoutRebuild(TMPro::TMP_Text element)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get(),
                            "RegisterTextElementForLayoutRebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, element);
}
 void TMPro::TMP_UpdateManager::InternalRegisterTextElementForLayoutRebuild(TMPro::TMP_Text element)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get(),
                            "InternalRegisterTextElementForLayoutRebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, element);
}
 void TMPro::TMP_UpdateManager::RegisterTextElementForGraphicRebuild(TMPro::TMP_Text element)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get(),
                            "RegisterTextElementForGraphicRebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, element);
}
 void TMPro::TMP_UpdateManager::InternalRegisterTextElementForGraphicRebuild(TMPro::TMP_Text element)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get(),
                            "InternalRegisterTextElementForGraphicRebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, element);
}
 void TMPro::TMP_UpdateManager::RegisterTextElementForCullingUpdate(TMPro::TMP_Text element)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get(),
                            "RegisterTextElementForCullingUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, element);
}
 void TMPro::TMP_UpdateManager::InternalRegisterTextElementForCullingUpdate(TMPro::TMP_Text element)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get(),
                            "InternalRegisterTextElementForCullingUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, element);
}
 void TMPro::TMP_UpdateManager::OnCameraPreCull()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get(),
                            "OnCameraPreCull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void TMPro::TMP_UpdateManager::DoRebuilds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get(),
                            "DoRebuilds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void TMPro::TMP_UpdateManager::UnRegisterTextObjectForUpdate(TMPro::TMP_Text textObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get(),
                            "UnRegisterTextObjectForUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, textObject);
}
 void TMPro::TMP_UpdateManager::UnRegisterTextElementForRebuild(TMPro::TMP_Text element)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get(),
                            "UnRegisterTextElementForRebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, element);
}
 void TMPro::TMP_UpdateManager::InternalUnRegisterTextElementForGraphicRebuild(TMPro::TMP_Text element)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get(),
                            "InternalUnRegisterTextElementForGraphicRebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, element);
}
 void TMPro::TMP_UpdateManager::InternalUnRegisterTextElementForLayoutRebuild(TMPro::TMP_Text element)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get(),
                            "InternalUnRegisterTextElementForLayoutRebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, element);
}
 void TMPro::TMP_UpdateManager::InternalUnRegisterTextObjectForUpdate(TMPro::TMP_Text textObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_UpdateManager>::get(),
                            "InternalUnRegisterTextObjectForUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, textObject);
}
