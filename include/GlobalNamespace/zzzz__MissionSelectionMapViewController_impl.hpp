#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__MissionSelectionMapViewController_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__MissionNode_def.hpp"
#include "GlobalNamespace/zzzz__MissionNodeVisualController_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "GlobalNamespace/zzzz__PerceivedLoudnessPerLevelModel_def.hpp"
#include "GlobalNamespace/zzzz__MissionMapAnimationController_def.hpp"
#include "GlobalNamespace/zzzz__AudioClipAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__MissionNodeSelectionManager_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "HMUI/zzzz__ScrollView_def.hpp"
#include "GlobalNamespace/zzzz__SongPreviewPlayer_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0::*)()>(&GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2174ac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0._SongPlayerCrossfadeToLevelAsync_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0::*)()>(&GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0::_SongPlayerCrossfadeToLevelAsync_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2174ad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0>::get(),
                            "<SongPlayerCrossfadeToLevelAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0::__set___4__this(GlobalNamespace::MissionSelectionMapViewController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MissionSelectionMapViewController, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MissionSelectionMapViewController>(value));
}
constexpr GlobalNamespace::MissionSelectionMapViewController GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MissionSelectionMapViewController, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0::__set_level(GlobalNamespace::IPreviewBeatmapLevel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IPreviewBeatmapLevel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IPreviewBeatmapLevel>(value));
}
constexpr GlobalNamespace::IPreviewBeatmapLevel GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0::__get_level() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IPreviewBeatmapLevel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0::GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0>())) {}
 void GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0::_SongPlayerCrossfadeToLevelAsync_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0>::get(),
                            "<SongPlayerCrossfadeToLevelAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15::*)()>(&GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x2174afc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2174f98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::MissionSelectionMapViewController", modifiers: "", def_value: Some("csnull") }, CppParam { name: "level", ty: "GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__8__1", ty: "GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_musicVolume_5__2", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15::GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::MissionSelectionMapViewController __4__this, GlobalNamespace::IPreviewBeatmapLevel level, GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0 __8__1, float_t _musicVolume_5__2, System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->level = level;
this->__8__1 = __8__1;
this->_musicVolume_5__2 = _musicVolume_5__2;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15::__set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15::__set___4__this(GlobalNamespace::MissionSelectionMapViewController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MissionSelectionMapViewController, 0x28>(this->__instance, std::forward<GlobalNamespace::MissionSelectionMapViewController>(value));
}
constexpr GlobalNamespace::MissionSelectionMapViewController GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MissionSelectionMapViewController, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15::__set_level(GlobalNamespace::IPreviewBeatmapLevel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IPreviewBeatmapLevel, 0x30>(this->__instance, std::forward<GlobalNamespace::IPreviewBeatmapLevel>(value));
}
constexpr GlobalNamespace::IPreviewBeatmapLevel GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15::__get_level() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IPreviewBeatmapLevel, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15::__set___8__1(GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0 value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0, 0x38>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0>(value));
}
constexpr GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0 GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15::__get___8__1() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0, 0x38>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15::__set__musicVolume_5__2(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15::__get__musicVolume_5__2() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip>, 0x48>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip> GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip>, 0x48>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::MissionSelectionMapViewController.add_didSelectMissionLevelEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionSelectionMapViewController::*)(System::Action_2<GlobalNamespace::MissionSelectionMapViewController,GlobalNamespace::MissionNode>)>(&GlobalNamespace::MissionSelectionMapViewController::add_didSelectMissionLevelEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2174584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionSelectionMapViewController>::get(),
                            "add_didSelectMissionLevelEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::MissionSelectionMapViewController,GlobalNamespace::MissionNode>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MissionSelectionMapViewController.remove_didSelectMissionLevelEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionSelectionMapViewController::*)(System::Action_2<GlobalNamespace::MissionSelectionMapViewController,GlobalNamespace::MissionNode>)>(&GlobalNamespace::MissionSelectionMapViewController::remove_didSelectMissionLevelEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2174634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionSelectionMapViewController>::get(),
                            "remove_didSelectMissionLevelEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::MissionSelectionMapViewController,GlobalNamespace::MissionNode>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MissionSelectionMapViewController.get_animatedUpdateIsRequired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MissionSelectionMapViewController::*)()>(&GlobalNamespace::MissionSelectionMapViewController::get_animatedUpdateIsRequired)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21746e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionSelectionMapViewController>::get(),
                            "get_animatedUpdateIsRequired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MissionSelectionMapViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionSelectionMapViewController::*)(bool, bool, bool)>(&GlobalNamespace::MissionSelectionMapViewController::DidActivate)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2174700;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MissionSelectionMapViewController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionSelectionMapViewController>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MissionSelectionMapViewController.DidDeactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionSelectionMapViewController::*)(bool, bool)>(&GlobalNamespace::MissionSelectionMapViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2174844;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MissionSelectionMapViewController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionSelectionMapViewController>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MissionSelectionMapViewController.HandleMissionNodeSelectionManagerDidSelectMissionNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionSelectionMapViewController::*)(GlobalNamespace::MissionNodeVisualController)>(&GlobalNamespace::MissionSelectionMapViewController::HandleMissionNodeSelectionManagerDidSelectMissionNode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2174974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionSelectionMapViewController>::get(),
                            "HandleMissionNodeSelectionManagerDidSelectMissionNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MissionNodeVisualController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MissionSelectionMapViewController.SongPlayerCrossfadeToLevelAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionSelectionMapViewController::*)(GlobalNamespace::IPreviewBeatmapLevel)>(&GlobalNamespace::MissionSelectionMapViewController::SongPlayerCrossfadeToLevelAsync)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x21749e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionSelectionMapViewController>::get(),
                            "SongPlayerCrossfadeToLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MissionSelectionMapViewController.ShowMissionClearedAnimation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionSelectionMapViewController::*)(System::Action)>(&GlobalNamespace::MissionSelectionMapViewController::ShowMissionClearedAnimation)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2174a80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionSelectionMapViewController>::get(),
                            "ShowMissionClearedAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MissionSelectionMapViewController.DeselectSelectedNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionSelectionMapViewController::*)()>(&GlobalNamespace::MissionSelectionMapViewController::DeselectSelectedNode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2174aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionSelectionMapViewController>::get(),
                            "DeselectSelectedNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MissionSelectionMapViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionSelectionMapViewController::*)()>(&GlobalNamespace::MissionSelectionMapViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2174ac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionSelectionMapViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MissionSelectionMapViewController::__set__mapScrollView(HMUI::ScrollView value)  {
::cordl_internals::setInstanceField<HMUI::ScrollView, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::ScrollView>(value));
}
constexpr HMUI::ScrollView GlobalNamespace::MissionSelectionMapViewController::__get__mapScrollView() const {
return ::cordl_internals::getInstanceField<HMUI::ScrollView, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionSelectionMapViewController::__set__missionNodeSelectionManager(GlobalNamespace::MissionNodeSelectionManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MissionNodeSelectionManager, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MissionNodeSelectionManager>(value));
}
constexpr GlobalNamespace::MissionNodeSelectionManager GlobalNamespace::MissionSelectionMapViewController::__get__missionNodeSelectionManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MissionNodeSelectionManager, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionSelectionMapViewController::__set__missionMapAnimationController(GlobalNamespace::MissionMapAnimationController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MissionMapAnimationController, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MissionMapAnimationController>(value));
}
constexpr GlobalNamespace::MissionMapAnimationController GlobalNamespace::MissionSelectionMapViewController::__get__missionMapAnimationController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MissionMapAnimationController, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionSelectionMapViewController::__set__songPreviewPlayer(GlobalNamespace::SongPreviewPlayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SongPreviewPlayer, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SongPreviewPlayer>(value));
}
constexpr GlobalNamespace::SongPreviewPlayer GlobalNamespace::MissionSelectionMapViewController::__get__songPreviewPlayer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SongPreviewPlayer, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionSelectionMapViewController::__set__perceivedLoudnessPerLevelModel(GlobalNamespace::PerceivedLoudnessPerLevelModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PerceivedLoudnessPerLevelModel, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PerceivedLoudnessPerLevelModel>(value));
}
constexpr GlobalNamespace::PerceivedLoudnessPerLevelModel GlobalNamespace::MissionSelectionMapViewController::__get__perceivedLoudnessPerLevelModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PerceivedLoudnessPerLevelModel, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionSelectionMapViewController::__set__audioClipAsyncLoader(GlobalNamespace::AudioClipAsyncLoader value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AudioClipAsyncLoader, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AudioClipAsyncLoader>(value));
}
constexpr GlobalNamespace::AudioClipAsyncLoader GlobalNamespace::MissionSelectionMapViewController::__get__audioClipAsyncLoader() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AudioClipAsyncLoader, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionSelectionMapViewController::__set_didSelectMissionLevelEvent(System::Action_2<GlobalNamespace::MissionSelectionMapViewController,GlobalNamespace::MissionNode> value)  {
::cordl_internals::setInstanceField<System::Action_2<GlobalNamespace::MissionSelectionMapViewController,GlobalNamespace::MissionNode>, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<GlobalNamespace::MissionSelectionMapViewController,GlobalNamespace::MissionNode>>(value));
}
constexpr System::Action_2<GlobalNamespace::MissionSelectionMapViewController,GlobalNamespace::MissionNode> GlobalNamespace::MissionSelectionMapViewController::__get_didSelectMissionLevelEvent() const {
return ::cordl_internals::getInstanceField<System::Action_2<GlobalNamespace::MissionSelectionMapViewController,GlobalNamespace::MissionNode>, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionSelectionMapViewController::__set__selectedMissionNode(GlobalNamespace::MissionNode value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MissionNode, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MissionNode>(value));
}
constexpr GlobalNamespace::MissionNode GlobalNamespace::MissionSelectionMapViewController::__get__selectedMissionNode() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MissionNode, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MissionSelectionMapViewController::add_didSelectMissionLevelEvent(System::Action_2<GlobalNamespace::MissionSelectionMapViewController,GlobalNamespace::MissionNode> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionSelectionMapViewController>::get(),
                            "add_didSelectMissionLevelEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::MissionSelectionMapViewController,GlobalNamespace::MissionNode>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MissionSelectionMapViewController::remove_didSelectMissionLevelEvent(System::Action_2<GlobalNamespace::MissionSelectionMapViewController,GlobalNamespace::MissionNode> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionSelectionMapViewController>::get(),
                            "remove_didSelectMissionLevelEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::MissionSelectionMapViewController,GlobalNamespace::MissionNode>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool GlobalNamespace::MissionSelectionMapViewController::get_animatedUpdateIsRequired()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionSelectionMapViewController>::get(),
                            "get_animatedUpdateIsRequired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MissionSelectionMapViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionSelectionMapViewController>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
 void GlobalNamespace::MissionSelectionMapViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionSelectionMapViewController>::get(),
                            "DidDeactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
 void GlobalNamespace::MissionSelectionMapViewController::HandleMissionNodeSelectionManagerDidSelectMissionNode(GlobalNamespace::MissionNodeVisualController missionNodeVisualController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionSelectionMapViewController>::get(),
                            "HandleMissionNodeSelectionManagerDidSelectMissionNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MissionNodeVisualController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, missionNodeVisualController);
}
 void GlobalNamespace::MissionSelectionMapViewController::SongPlayerCrossfadeToLevelAsync(GlobalNamespace::IPreviewBeatmapLevel level)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionSelectionMapViewController>::get(),
                            "SongPlayerCrossfadeToLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, level);
}
 void GlobalNamespace::MissionSelectionMapViewController::ShowMissionClearedAnimation(System::Action finishCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionSelectionMapViewController>::get(),
                            "ShowMissionClearedAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, finishCallback);
}
 void GlobalNamespace::MissionSelectionMapViewController::DeselectSelectedNode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionSelectionMapViewController>::get(),
                            "DeselectSelectedNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::MissionSelectionMapViewController::MissionSelectionMapViewController()  : HMUI::ViewController(THROW_UNLESS(::il2cpp_utils::New<MissionSelectionMapViewController>())) {}
 void GlobalNamespace::MissionSelectionMapViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionSelectionMapViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
