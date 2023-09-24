#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__LevelCollectionViewController_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "GlobalNamespace/zzzz__PerceivedLoudnessPerLevelModel_def.hpp"
#include "GlobalNamespace/zzzz__SongPreviewPlayer_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__LevelCollectionViewController_def.hpp"
#include "GlobalNamespace/zzzz__LevelCollectionTableView_def.hpp"
#include "GlobalNamespace/zzzz__AudioClipAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelCollection_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0::*)()>(&GlobalNamespace::GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2166574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0._SongPlayerCrossfadeToLevelAsync_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0::*)()>(&GlobalNamespace::GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0::_SongPlayerCrossfadeToLevelAsync_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x216657c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0>::get(),
                            "<SongPlayerCrossfadeToLevelAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0::__set___4__this(GlobalNamespace::LevelCollectionViewController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LevelCollectionViewController, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LevelCollectionViewController>(value));
}
constexpr GlobalNamespace::LevelCollectionViewController GlobalNamespace::GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LevelCollectionViewController, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0::__set_level(GlobalNamespace::IPreviewBeatmapLevel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IPreviewBeatmapLevel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IPreviewBeatmapLevel>(value));
}
constexpr GlobalNamespace::IPreviewBeatmapLevel GlobalNamespace::GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0::__get_level() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IPreviewBeatmapLevel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0 GlobalNamespace::GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0::New_ctor()  {
GlobalNamespace::GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0 o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0::_SongPlayerCrossfadeToLevelAsync_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0>::get(),
                            "<SongPlayerCrossfadeToLevelAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24::*)()>(&GlobalNamespace::GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24::MoveNext)> {
  constexpr static std::size_t size = 0x768;
  constexpr static std::size_t addrs = 0x21665a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2166d10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::LevelCollectionViewController", modifiers: "", def_value: Some("csnull") }, CppParam { name: "level", ty: "GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__8__1", ty: "GlobalNamespace::GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24::GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::LevelCollectionViewController __4__this, GlobalNamespace::IPreviewBeatmapLevel level, GlobalNamespace::GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0 __8__1, System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->level = level;
this->__8__1 = __8__1;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24::__set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder GlobalNamespace::GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24::__set___4__this(GlobalNamespace::LevelCollectionViewController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LevelCollectionViewController, 0x28>(this->__instance, std::forward<GlobalNamespace::LevelCollectionViewController>(value));
}
constexpr GlobalNamespace::LevelCollectionViewController GlobalNamespace::GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LevelCollectionViewController, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24::__set_level(GlobalNamespace::IPreviewBeatmapLevel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IPreviewBeatmapLevel, 0x30>(this->__instance, std::forward<GlobalNamespace::IPreviewBeatmapLevel>(value));
}
constexpr GlobalNamespace::IPreviewBeatmapLevel GlobalNamespace::GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24::__get_level() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IPreviewBeatmapLevel, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24::__set___8__1(GlobalNamespace::GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0 value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0, 0x38>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0>(value));
}
constexpr GlobalNamespace::GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0 GlobalNamespace::GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24::__get___8__1() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0, 0x38>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip>, 0x40>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip> GlobalNamespace::GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip>, 0x40>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::LevelCollectionViewController.add_didSelectLevelEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)(System::Action_2<GlobalNamespace::LevelCollectionViewController,GlobalNamespace::IPreviewBeatmapLevel>)>(&GlobalNamespace::LevelCollectionViewController::add_didSelectLevelEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2164078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCollectionViewController>::get(),
                            "add_didSelectLevelEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::LevelCollectionViewController,GlobalNamespace::IPreviewBeatmapLevel>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelCollectionViewController.remove_didSelectLevelEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)(System::Action_2<GlobalNamespace::LevelCollectionViewController,GlobalNamespace::IPreviewBeatmapLevel>)>(&GlobalNamespace::LevelCollectionViewController::remove_didSelectLevelEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2164930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCollectionViewController>::get(),
                            "remove_didSelectLevelEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::LevelCollectionViewController,GlobalNamespace::IPreviewBeatmapLevel>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelCollectionViewController.add_didSelectHeaderEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)(System::Action_1<GlobalNamespace::LevelCollectionViewController>)>(&GlobalNamespace::LevelCollectionViewController::add_didSelectHeaderEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2164128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCollectionViewController>::get(),
                            "add_didSelectHeaderEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::LevelCollectionViewController>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelCollectionViewController.remove_didSelectHeaderEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)(System::Action_1<GlobalNamespace::LevelCollectionViewController>)>(&GlobalNamespace::LevelCollectionViewController::remove_didSelectHeaderEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21649e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCollectionViewController>::get(),
                            "remove_didSelectHeaderEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::LevelCollectionViewController>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelCollectionViewController.SetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)(GlobalNamespace::IBeatmapLevelCollection, ::StringW, UnityEngine::Sprite, bool, UnityEngine::GameObject)>(&GlobalNamespace::LevelCollectionViewController::SetData)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x2164eb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCollectionViewController>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevelCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Sprite>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelCollectionViewController.SelectLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)(GlobalNamespace::IPreviewBeatmapLevel)>(&GlobalNamespace::LevelCollectionViewController::SelectLevel)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x21639b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCollectionViewController>::get(),
                            "SelectLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelCollectionViewController.RefreshFavorites
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)()>(&GlobalNamespace::LevelCollectionViewController::RefreshFavorites)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2165fcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCollectionViewController>::get(),
                            "RefreshFavorites",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelCollectionViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)(bool, bool, bool)>(&GlobalNamespace::LevelCollectionViewController::DidActivate)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x21660e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::LevelCollectionViewController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCollectionViewController>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelCollectionViewController.DidDeactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)(bool, bool)>(&GlobalNamespace::LevelCollectionViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2166298;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::LevelCollectionViewController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCollectionViewController>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelCollectionViewController.HandleLevelCollectionTableViewDidSelectLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)(GlobalNamespace::LevelCollectionTableView, GlobalNamespace::IPreviewBeatmapLevel)>(&GlobalNamespace::LevelCollectionViewController::HandleLevelCollectionTableViewDidSelectLevel)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2166414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCollectionViewController>::get(),
                            "HandleLevelCollectionTableViewDidSelectLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LevelCollectionTableView>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelCollectionViewController.SongPlayerCrossfadeToLevelAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)(GlobalNamespace::IPreviewBeatmapLevel)>(&GlobalNamespace::LevelCollectionViewController::SongPlayerCrossfadeToLevelAsync)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2166464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCollectionViewController>::get(),
                            "SongPlayerCrossfadeToLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelCollectionViewController.HandleLevelCollectionTableViewDidSelectPack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)(GlobalNamespace::LevelCollectionTableView)>(&GlobalNamespace::LevelCollectionViewController::HandleLevelCollectionTableViewDidSelectPack)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2166504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCollectionViewController>::get(),
                            "HandleLevelCollectionTableViewDidSelectPack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LevelCollectionTableView>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelCollectionViewController.HandleAdditionalContentModelDidInvalidateData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)()>(&GlobalNamespace::LevelCollectionViewController::HandleAdditionalContentModelDidInvalidateData)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2166548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCollectionViewController>::get(),
                            "HandleAdditionalContentModelDidInvalidateData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelCollectionViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::*)()>(&GlobalNamespace::LevelCollectionViewController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2166564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCollectionViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LevelCollectionViewController::__set__levelCollectionTableView(GlobalNamespace::LevelCollectionTableView value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LevelCollectionTableView, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LevelCollectionTableView>(value));
}
constexpr GlobalNamespace::LevelCollectionTableView GlobalNamespace::LevelCollectionViewController::__get__levelCollectionTableView() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LevelCollectionTableView, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelCollectionViewController::__set__noDataInfoContainer(UnityEngine::RectTransform value)  {
::cordl_internals::setInstanceField<UnityEngine::RectTransform, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::RectTransform>(value));
}
constexpr UnityEngine::RectTransform GlobalNamespace::LevelCollectionViewController::__get__noDataInfoContainer() const {
return ::cordl_internals::getInstanceField<UnityEngine::RectTransform, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelCollectionViewController::__set__playerDataModel(GlobalNamespace::PlayerDataModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PlayerDataModel, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PlayerDataModel>(value));
}
constexpr GlobalNamespace::PlayerDataModel GlobalNamespace::LevelCollectionViewController::__get__playerDataModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PlayerDataModel, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelCollectionViewController::__set__container(Zenject::DiContainer value)  {
::cordl_internals::setInstanceField<Zenject::DiContainer, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::DiContainer>(value));
}
constexpr Zenject::DiContainer GlobalNamespace::LevelCollectionViewController::__get__container() const {
return ::cordl_internals::getInstanceField<Zenject::DiContainer, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelCollectionViewController::__set__additionalContentModel(GlobalNamespace::AdditionalContentModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AdditionalContentModel, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AdditionalContentModel>(value));
}
constexpr GlobalNamespace::AdditionalContentModel GlobalNamespace::LevelCollectionViewController::__get__additionalContentModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AdditionalContentModel, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelCollectionViewController::__set__songPreviewPlayer(GlobalNamespace::SongPreviewPlayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SongPreviewPlayer, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SongPreviewPlayer>(value));
}
constexpr GlobalNamespace::SongPreviewPlayer GlobalNamespace::LevelCollectionViewController::__get__songPreviewPlayer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SongPreviewPlayer, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelCollectionViewController::__set__perceivedLoudnessPerLevelModel(GlobalNamespace::PerceivedLoudnessPerLevelModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PerceivedLoudnessPerLevelModel, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PerceivedLoudnessPerLevelModel>(value));
}
constexpr GlobalNamespace::PerceivedLoudnessPerLevelModel GlobalNamespace::LevelCollectionViewController::__get__perceivedLoudnessPerLevelModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PerceivedLoudnessPerLevelModel, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelCollectionViewController::__set__audioClipAsyncLoader(GlobalNamespace::AudioClipAsyncLoader value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AudioClipAsyncLoader, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AudioClipAsyncLoader>(value));
}
constexpr GlobalNamespace::AudioClipAsyncLoader GlobalNamespace::LevelCollectionViewController::__get__audioClipAsyncLoader() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AudioClipAsyncLoader, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelCollectionViewController::__set_didSelectLevelEvent(System::Action_2<GlobalNamespace::LevelCollectionViewController,GlobalNamespace::IPreviewBeatmapLevel> value)  {
::cordl_internals::setInstanceField<System::Action_2<GlobalNamespace::LevelCollectionViewController,GlobalNamespace::IPreviewBeatmapLevel>, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<GlobalNamespace::LevelCollectionViewController,GlobalNamespace::IPreviewBeatmapLevel>>(value));
}
constexpr System::Action_2<GlobalNamespace::LevelCollectionViewController,GlobalNamespace::IPreviewBeatmapLevel> GlobalNamespace::LevelCollectionViewController::__get_didSelectLevelEvent() const {
return ::cordl_internals::getInstanceField<System::Action_2<GlobalNamespace::LevelCollectionViewController,GlobalNamespace::IPreviewBeatmapLevel>, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelCollectionViewController::__set_didSelectHeaderEvent(System::Action_1<GlobalNamespace::LevelCollectionViewController> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::LevelCollectionViewController>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::LevelCollectionViewController>>(value));
}
constexpr System::Action_1<GlobalNamespace::LevelCollectionViewController> GlobalNamespace::LevelCollectionViewController::__get_didSelectHeaderEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::LevelCollectionViewController>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelCollectionViewController::__set__showHeader(bool value)  {
::cordl_internals::setInstanceField<bool, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::LevelCollectionViewController::__get__showHeader() const {
return ::cordl_internals::getInstanceField<bool, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelCollectionViewController::__set__songPlayerCrossFadingToLevelId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::LevelCollectionViewController::__get__songPlayerCrossFadingToLevelId() const {
return ::cordl_internals::getInstanceField<::StringW, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelCollectionViewController::__set__noDataInfoGO(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::LevelCollectionViewController::__get__noDataInfoGO() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelCollectionViewController::__set__previewBeatmapLevelToBeSelected(GlobalNamespace::IPreviewBeatmapLevel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IPreviewBeatmapLevel, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IPreviewBeatmapLevel>(value));
}
constexpr GlobalNamespace::IPreviewBeatmapLevel GlobalNamespace::LevelCollectionViewController::__get__previewBeatmapLevelToBeSelected() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IPreviewBeatmapLevel, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::LevelCollectionViewController::add_didSelectLevelEvent(System::Action_2<GlobalNamespace::LevelCollectionViewController,GlobalNamespace::IPreviewBeatmapLevel> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCollectionViewController>::get(),
                            "add_didSelectLevelEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::LevelCollectionViewController,GlobalNamespace::IPreviewBeatmapLevel>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LevelCollectionViewController::remove_didSelectLevelEvent(System::Action_2<GlobalNamespace::LevelCollectionViewController,GlobalNamespace::IPreviewBeatmapLevel> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCollectionViewController>::get(),
                            "remove_didSelectLevelEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::LevelCollectionViewController,GlobalNamespace::IPreviewBeatmapLevel>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LevelCollectionViewController::add_didSelectHeaderEvent(System::Action_1<GlobalNamespace::LevelCollectionViewController> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCollectionViewController>::get(),
                            "add_didSelectHeaderEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::LevelCollectionViewController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LevelCollectionViewController::remove_didSelectHeaderEvent(System::Action_1<GlobalNamespace::LevelCollectionViewController> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCollectionViewController>::get(),
                            "remove_didSelectHeaderEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::LevelCollectionViewController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LevelCollectionViewController::SetData(GlobalNamespace::IBeatmapLevelCollection beatmapLevelCollection, ::StringW headerText, UnityEngine::Sprite headerSprite, bool sortLevels, UnityEngine::GameObject noDataInfoPrefab)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCollectionViewController>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevelCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Sprite>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapLevelCollection, headerText, headerSprite, sortLevels, noDataInfoPrefab);
}
 void GlobalNamespace::LevelCollectionViewController::SelectLevel(GlobalNamespace::IPreviewBeatmapLevel beatmapLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCollectionViewController>::get(),
                            "SelectLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapLevel);
}
 void GlobalNamespace::LevelCollectionViewController::RefreshFavorites()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCollectionViewController>::get(),
                            "RefreshFavorites",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LevelCollectionViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCollectionViewController>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
 void GlobalNamespace::LevelCollectionViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCollectionViewController>::get(),
                            "DidDeactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
 void GlobalNamespace::LevelCollectionViewController::HandleLevelCollectionTableViewDidSelectLevel(GlobalNamespace::LevelCollectionTableView tableView, GlobalNamespace::IPreviewBeatmapLevel level)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCollectionViewController>::get(),
                            "HandleLevelCollectionTableViewDidSelectLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LevelCollectionTableView>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tableView, level);
}
 void GlobalNamespace::LevelCollectionViewController::SongPlayerCrossfadeToLevelAsync(GlobalNamespace::IPreviewBeatmapLevel level)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCollectionViewController>::get(),
                            "SongPlayerCrossfadeToLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, level);
}
 void GlobalNamespace::LevelCollectionViewController::HandleLevelCollectionTableViewDidSelectPack(GlobalNamespace::LevelCollectionTableView tableView)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCollectionViewController>::get(),
                            "HandleLevelCollectionTableViewDidSelectPack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LevelCollectionTableView>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tableView);
}
 void GlobalNamespace::LevelCollectionViewController::HandleAdditionalContentModelDidInvalidateData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCollectionViewController>::get(),
                            "HandleAdditionalContentModelDidInvalidateData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::LevelCollectionViewController GlobalNamespace::LevelCollectionViewController::New_ctor()  {
GlobalNamespace::LevelCollectionViewController o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::LevelCollectionViewController>())};
return o;
}
 void GlobalNamespace::LevelCollectionViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelCollectionViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
