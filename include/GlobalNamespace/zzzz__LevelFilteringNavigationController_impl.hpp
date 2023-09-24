#pragma once
#include "HMUI/zzzz__NavigationController_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__LevelFilteringNavigationController_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__LevelFilteringNavigationController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__IAnnotatedBeatmapLevelCollection_def.hpp"
#include "GlobalNamespace/zzzz__SelectLevelCategoryViewController_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__AnnotatedBeatmapLevelCollectionsViewController_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "GlobalNamespace/zzzz__LevelSearchViewController_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPackCollection_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0::*)()>(&GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2169124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0._SelectAnnotatedBeatmapLevelCollection_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0::*)(::StringW)>(&GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0::_SelectAnnotatedBeatmapLevelCollection_b__1)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x21692c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0>::get(),
                            "<SelectAnnotatedBeatmapLevelCollection>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0::__set_levelPack(GlobalNamespace::IBeatmapLevelPack value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IBeatmapLevelPack, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IBeatmapLevelPack>(value));
}
constexpr GlobalNamespace::IBeatmapLevelPack GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0::__get_levelPack() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IBeatmapLevelPack, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0 GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0::New_ctor()  {
GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0 o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0::_SelectAnnotatedBeatmapLevelCollection_b__1(::StringW packID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c__DisplayClass53_0>::get(),
                            "<SelectAnnotatedBeatmapLevelCollection>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, packID);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c::*)()>(&GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21693dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c._SelectAnnotatedBeatmapLevelCollection_b__53_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c::*)(GlobalNamespace::IBeatmapLevelPack)>(&GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c::_SelectAnnotatedBeatmapLevelCollection_b__53_0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21693e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c>::get(),
                            "<SelectAnnotatedBeatmapLevelCollection>b__53_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevelPack>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c::__set___9(GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c value)  {
::cordl_internals::setStaticField<GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c>::get>(std::forward<GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c>(value));
}
 GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c::__get___9()  {
return ::cordl_internals::getStaticField<GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c>::get>();
}
 void GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c::__set___9__53_0(System::Func_2<GlobalNamespace::IBeatmapLevelPack,::StringW> value)  {
::cordl_internals::setStaticField<System::Func_2<GlobalNamespace::IBeatmapLevelPack,::StringW>, "<>9__53_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c>::get>(std::forward<System::Func_2<GlobalNamespace::IBeatmapLevelPack,::StringW>>(value));
}
 System::Func_2<GlobalNamespace::IBeatmapLevelPack,::StringW> GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c::__get___9__53_0()  {
return ::cordl_internals::getStaticField<System::Func_2<GlobalNamespace::IBeatmapLevelPack,::StringW>, "<>9__53_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c>::get>();
}
 GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c::New_ctor()  {
GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c::_SelectAnnotatedBeatmapLevelCollection_b__53_0(GlobalNamespace::IBeatmapLevelPack pack)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController____c>::get(),
                            "<SelectAnnotatedBeatmapLevelCollection>b__53_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevelPack>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, pack);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54::*)()>(&GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54::MoveNext)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x2169480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x216996c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::LevelFilteringNavigationController", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_cancellationToken_5__2", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevelPackCollection>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54::GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::LevelFilteringNavigationController __4__this, System::Threading::CancellationToken _cancellationToken_5__2, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevelPackCollection> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_cancellationToken_5__2 = _cancellationToken_5__2;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54::__set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54::__set___4__this(GlobalNamespace::LevelFilteringNavigationController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LevelFilteringNavigationController, 0x28>(this->__instance, std::forward<GlobalNamespace::LevelFilteringNavigationController>(value));
}
constexpr GlobalNamespace::LevelFilteringNavigationController GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LevelFilteringNavigationController, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54::__set__cancellationToken_5__2(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x30>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54::__get__cancellationToken_5__2() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevelPackCollection> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevelPackCollection>, 0x38>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevelPackCollection>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevelPackCollection> GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevelPackCollection>, 0x38>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LevelFilteringNavigationController___UpdateCustomSongs_d__54>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::LevelFilteringNavigationController.add_didSelectAnnotatedBeatmapLevelCollectionEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelFilteringNavigationController::*)(System::Action_4<GlobalNamespace::LevelFilteringNavigationController,GlobalNamespace::IAnnotatedBeatmapLevelCollection,UnityEngine::GameObject,GlobalNamespace::BeatmapCharacteristicSO>)>(&GlobalNamespace::LevelFilteringNavigationController::add_didSelectAnnotatedBeatmapLevelCollectionEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2166d1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "add_didSelectAnnotatedBeatmapLevelCollectionEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_4<GlobalNamespace::LevelFilteringNavigationController,GlobalNamespace::IAnnotatedBeatmapLevelCollection,UnityEngine::GameObject,GlobalNamespace::BeatmapCharacteristicSO>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelFilteringNavigationController.remove_didSelectAnnotatedBeatmapLevelCollectionEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelFilteringNavigationController::*)(System::Action_4<GlobalNamespace::LevelFilteringNavigationController,GlobalNamespace::IAnnotatedBeatmapLevelCollection,UnityEngine::GameObject,GlobalNamespace::BeatmapCharacteristicSO>)>(&GlobalNamespace::LevelFilteringNavigationController::remove_didSelectAnnotatedBeatmapLevelCollectionEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2166dcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "remove_didSelectAnnotatedBeatmapLevelCollectionEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_4<GlobalNamespace::LevelFilteringNavigationController,GlobalNamespace::IAnnotatedBeatmapLevelCollection,UnityEngine::GameObject,GlobalNamespace::BeatmapCharacteristicSO>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelFilteringNavigationController.add_didStartLoadingEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelFilteringNavigationController::*)(System::Action_1<GlobalNamespace::LevelFilteringNavigationController>)>(&GlobalNamespace::LevelFilteringNavigationController::add_didStartLoadingEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2166e7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "add_didStartLoadingEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::LevelFilteringNavigationController>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelFilteringNavigationController.remove_didStartLoadingEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelFilteringNavigationController::*)(System::Action_1<GlobalNamespace::LevelFilteringNavigationController>)>(&GlobalNamespace::LevelFilteringNavigationController::remove_didStartLoadingEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2166f2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "remove_didStartLoadingEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::LevelFilteringNavigationController>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelFilteringNavigationController.add_didPressAllSongsEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelFilteringNavigationController::*)(System::Action_1<GlobalNamespace::LevelFilteringNavigationController>)>(&GlobalNamespace::LevelFilteringNavigationController::add_didPressAllSongsEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2166fdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "add_didPressAllSongsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::LevelFilteringNavigationController>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelFilteringNavigationController.remove_didPressAllSongsEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelFilteringNavigationController::*)(System::Action_1<GlobalNamespace::LevelFilteringNavigationController>)>(&GlobalNamespace::LevelFilteringNavigationController::remove_didPressAllSongsEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x216708c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "remove_didPressAllSongsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::LevelFilteringNavigationController>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelFilteringNavigationController.add_didOpenBeatmapLevelCollectionsEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelFilteringNavigationController::*)(System::Action)>(&GlobalNamespace::LevelFilteringNavigationController::add_didOpenBeatmapLevelCollectionsEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x216713c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "add_didOpenBeatmapLevelCollectionsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelFilteringNavigationController.remove_didOpenBeatmapLevelCollectionsEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelFilteringNavigationController::*)(System::Action)>(&GlobalNamespace::LevelFilteringNavigationController::remove_didOpenBeatmapLevelCollectionsEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21671d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "remove_didOpenBeatmapLevelCollectionsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelFilteringNavigationController.add_didCloseBeatmapLevelCollectionsEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelFilteringNavigationController::*)(System::Action)>(&GlobalNamespace::LevelFilteringNavigationController::add_didCloseBeatmapLevelCollectionsEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2167274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "add_didCloseBeatmapLevelCollectionsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelFilteringNavigationController.remove_didCloseBeatmapLevelCollectionsEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelFilteringNavigationController::*)(System::Action)>(&GlobalNamespace::LevelFilteringNavigationController::remove_didCloseBeatmapLevelCollectionsEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2167310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "remove_didCloseBeatmapLevelCollectionsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelFilteringNavigationController.get_selectedBeatmapLevelPack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IBeatmapLevelPack (GlobalNamespace::LevelFilteringNavigationController::*)()>(&GlobalNamespace::LevelFilteringNavigationController::get_selectedBeatmapLevelPack)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x21673ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "get_selectedBeatmapLevelPack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelFilteringNavigationController.get_selectedLevelCategory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory (GlobalNamespace::LevelFilteringNavigationController::*)()>(&GlobalNamespace::LevelFilteringNavigationController::get_selectedLevelCategory)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2167400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "get_selectedLevelCategory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelFilteringNavigationController.Setup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelFilteringNavigationController::*)(GlobalNamespace::SongPackMask, GlobalNamespace::IBeatmapLevelPack, GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory, bool, bool)>(&GlobalNamespace::LevelFilteringNavigationController::Setup)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2167470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SongPackMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevelPack>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelFilteringNavigationController.SetupBeatmapLevelPacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelFilteringNavigationController::*)()>(&GlobalNamespace::LevelFilteringNavigationController::SetupBeatmapLevelPacks)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x21675c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "SetupBeatmapLevelPacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelFilteringNavigationController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelFilteringNavigationController::*)(bool, bool, bool)>(&GlobalNamespace::LevelFilteringNavigationController::DidActivate)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x2167d40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::LevelFilteringNavigationController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelFilteringNavigationController.LevelSearchViewControllerDidStartLoading
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelFilteringNavigationController::*)(GlobalNamespace::LevelSearchViewController)>(&GlobalNamespace::LevelFilteringNavigationController::LevelSearchViewControllerDidStartLoading)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x21684ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "LevelSearchViewControllerDidStartLoading",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LevelSearchViewController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelFilteringNavigationController.DidDeactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelFilteringNavigationController::*)(bool, bool)>(&GlobalNamespace::LevelFilteringNavigationController::DidDeactivate)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x21684cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::LevelFilteringNavigationController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelFilteringNavigationController.LevelSearchViewControllerDidFilterBeatmapLevelCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelFilteringNavigationController::*)(GlobalNamespace::IAnnotatedBeatmapLevelCollection, GlobalNamespace::BeatmapCharacteristicSO)>(&GlobalNamespace::LevelFilteringNavigationController::LevelSearchViewControllerDidFilterBeatmapLevelCollection)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2168a18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "LevelSearchViewControllerDidFilterBeatmapLevelCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IAnnotatedBeatmapLevelCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicSO>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelFilteringNavigationController.SelectLevelCategoryViewControllerDidSelectLevelCategory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelFilteringNavigationController::*)(GlobalNamespace::SelectLevelCategoryViewController, GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory)>(&GlobalNamespace::LevelFilteringNavigationController::SelectLevelCategoryViewControllerDidSelectLevelCategory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2168a48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "SelectLevelCategoryViewControllerDidSelectLevelCategory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SelectLevelCategoryViewController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelFilteringNavigationController.UpdateSecondChildControllerContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelFilteringNavigationController::*)(GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory)>(&GlobalNamespace::LevelFilteringNavigationController::UpdateSecondChildControllerContent)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x216832c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "UpdateSecondChildControllerContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelFilteringNavigationController.ShowPacksInSecondChildController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelFilteringNavigationController::*)(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IBeatmapLevelPack>)>(&GlobalNamespace::LevelFilteringNavigationController::ShowPacksInSecondChildController)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x2168a50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "ShowPacksInSecondChildController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IBeatmapLevelPack>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelFilteringNavigationController.ReplaceSecondViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelFilteringNavigationController::*)(HMUI::ViewController)>(&GlobalNamespace::LevelFilteringNavigationController::ReplaceSecondViewController)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2168c90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "ReplaceSecondViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::ViewController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelFilteringNavigationController.HandlePlayerDataFavoriteLevelsSetDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelFilteringNavigationController::*)()>(&GlobalNamespace::LevelFilteringNavigationController::HandlePlayerDataFavoriteLevelsSetDidChange)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2168dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "HandlePlayerDataFavoriteLevelsSetDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelFilteringNavigationController.HandleIncreaseNumberOfGameplays
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelFilteringNavigationController::*)()>(&GlobalNamespace::LevelFilteringNavigationController::HandleIncreaseNumberOfGameplays)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2168e04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "HandleIncreaseNumberOfGameplays",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelFilteringNavigationController.HandleAnnotatedBeatmapLevelCollectionsViewControllerDidOpenBeatmapLevelCollections
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelFilteringNavigationController::*)()>(&GlobalNamespace::LevelFilteringNavigationController::HandleAnnotatedBeatmapLevelCollectionsViewControllerDidOpenBeatmapLevelCollections)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2168e64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "HandleAnnotatedBeatmapLevelCollectionsViewControllerDidOpenBeatmapLevelCollections",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelFilteringNavigationController.HandleAnnotatedBeatmapLevelCollectionsViewControllerDidCloseBeatmapLevelCollections
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelFilteringNavigationController::*)()>(&GlobalNamespace::LevelFilteringNavigationController::HandleAnnotatedBeatmapLevelCollectionsViewControllerDidCloseBeatmapLevelCollections)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2168e80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "HandleAnnotatedBeatmapLevelCollectionsViewControllerDidCloseBeatmapLevelCollections",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelFilteringNavigationController.HandleAnnotatedBeatmapLevelCollectionsViewControllerDidSelectAnnotatedBeatmapLevelCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelFilteringNavigationController::*)(GlobalNamespace::IAnnotatedBeatmapLevelCollection)>(&GlobalNamespace::LevelFilteringNavigationController::HandleAnnotatedBeatmapLevelCollectionsViewControllerDidSelectAnnotatedBeatmapLevelCollection)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2168e9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "HandleAnnotatedBeatmapLevelCollectionsViewControllerDidSelectAnnotatedBeatmapLevelCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IAnnotatedBeatmapLevelCollection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelFilteringNavigationController.SelectAnnotatedBeatmapLevelCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelFilteringNavigationController::*)(GlobalNamespace::IBeatmapLevelPack)>(&GlobalNamespace::LevelFilteringNavigationController::SelectAnnotatedBeatmapLevelCollection)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x2168ecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "SelectAnnotatedBeatmapLevelCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevelPack>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelFilteringNavigationController.UpdateCustomSongs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelFilteringNavigationController::*)()>(&GlobalNamespace::LevelFilteringNavigationController::UpdateCustomSongs)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2168d30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "UpdateCustomSongs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelFilteringNavigationController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelFilteringNavigationController::*)()>(&GlobalNamespace::LevelFilteringNavigationController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x216912c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelFilteringNavigationController._SetupBeatmapLevelPacks_b__39_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LevelFilteringNavigationController::*)(GlobalNamespace::IBeatmapLevelPack)>(&GlobalNamespace::LevelFilteringNavigationController::_SetupBeatmapLevelPacks_b__39_0)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2169134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "<SetupBeatmapLevelPacks>b__39_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevelPack>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LevelFilteringNavigationController._SetupBeatmapLevelPacks_b__39_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LevelFilteringNavigationController::*)(GlobalNamespace::IBeatmapLevelPack)>(&GlobalNamespace::LevelFilteringNavigationController::_SetupBeatmapLevelPacks_b__39_1)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x21691fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "<SetupBeatmapLevelPacks>b__39_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevelPack>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__emptyFavoritesListInfoPrefab(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::LevelFilteringNavigationController::__get__emptyFavoritesListInfoPrefab() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__emptyCustomSongListInfoPrefab(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::LevelFilteringNavigationController::__get__emptyCustomSongListInfoPrefab() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__playerDataModel(GlobalNamespace::PlayerDataModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PlayerDataModel, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PlayerDataModel>(value));
}
constexpr GlobalNamespace::PlayerDataModel GlobalNamespace::LevelFilteringNavigationController::__get__playerDataModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PlayerDataModel, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__selectLevelCategoryViewController(GlobalNamespace::SelectLevelCategoryViewController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SelectLevelCategoryViewController, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SelectLevelCategoryViewController>(value));
}
constexpr GlobalNamespace::SelectLevelCategoryViewController GlobalNamespace::LevelFilteringNavigationController::__get__selectLevelCategoryViewController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SelectLevelCategoryViewController, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__annotatedBeatmapLevelCollectionsViewController(GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController>(value));
}
constexpr GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController GlobalNamespace::LevelFilteringNavigationController::__get__annotatedBeatmapLevelCollectionsViewController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__levelSearchViewController(GlobalNamespace::LevelSearchViewController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LevelSearchViewController, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LevelSearchViewController>(value));
}
constexpr GlobalNamespace::LevelSearchViewController GlobalNamespace::LevelFilteringNavigationController::__get__levelSearchViewController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LevelSearchViewController, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__beatmapLevelsModel(GlobalNamespace::BeatmapLevelsModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapLevelsModel, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapLevelsModel>(value));
}
constexpr GlobalNamespace::BeatmapLevelsModel GlobalNamespace::LevelFilteringNavigationController::__get__beatmapLevelsModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapLevelsModel, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set_didSelectAnnotatedBeatmapLevelCollectionEvent(System::Action_4<GlobalNamespace::LevelFilteringNavigationController,GlobalNamespace::IAnnotatedBeatmapLevelCollection,UnityEngine::GameObject,GlobalNamespace::BeatmapCharacteristicSO> value)  {
::cordl_internals::setInstanceField<System::Action_4<GlobalNamespace::LevelFilteringNavigationController,GlobalNamespace::IAnnotatedBeatmapLevelCollection,UnityEngine::GameObject,GlobalNamespace::BeatmapCharacteristicSO>, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_4<GlobalNamespace::LevelFilteringNavigationController,GlobalNamespace::IAnnotatedBeatmapLevelCollection,UnityEngine::GameObject,GlobalNamespace::BeatmapCharacteristicSO>>(value));
}
constexpr System::Action_4<GlobalNamespace::LevelFilteringNavigationController,GlobalNamespace::IAnnotatedBeatmapLevelCollection,UnityEngine::GameObject,GlobalNamespace::BeatmapCharacteristicSO> GlobalNamespace::LevelFilteringNavigationController::__get_didSelectAnnotatedBeatmapLevelCollectionEvent() const {
return ::cordl_internals::getInstanceField<System::Action_4<GlobalNamespace::LevelFilteringNavigationController,GlobalNamespace::IAnnotatedBeatmapLevelCollection,UnityEngine::GameObject,GlobalNamespace::BeatmapCharacteristicSO>, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set_didStartLoadingEvent(System::Action_1<GlobalNamespace::LevelFilteringNavigationController> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::LevelFilteringNavigationController>, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::LevelFilteringNavigationController>>(value));
}
constexpr System::Action_1<GlobalNamespace::LevelFilteringNavigationController> GlobalNamespace::LevelFilteringNavigationController::__get_didStartLoadingEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::LevelFilteringNavigationController>, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set_didPressAllSongsEvent(System::Action_1<GlobalNamespace::LevelFilteringNavigationController> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::LevelFilteringNavigationController>, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::LevelFilteringNavigationController>>(value));
}
constexpr System::Action_1<GlobalNamespace::LevelFilteringNavigationController> GlobalNamespace::LevelFilteringNavigationController::__get_didPressAllSongsEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::LevelFilteringNavigationController>, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set_didOpenBeatmapLevelCollectionsEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::LevelFilteringNavigationController::__get_didOpenBeatmapLevelCollectionsEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set_didCloseBeatmapLevelCollectionsEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::LevelFilteringNavigationController::__get_didCloseBeatmapLevelCollectionsEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__cancellationTokenSource(System::Threading::CancellationTokenSource value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationTokenSource, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationTokenSource>(value));
}
constexpr System::Threading::CancellationTokenSource GlobalNamespace::LevelFilteringNavigationController::__get__cancellationTokenSource() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationTokenSource, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__currentNoDataInfoPrefab(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x100>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::LevelFilteringNavigationController::__get__currentNoDataInfoPrefab() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x100>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__levelPackIdToBeSelectedAfterPresent(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::LevelFilteringNavigationController::__get__levelPackIdToBeSelectedAfterPresent() const {
return ::cordl_internals::getInstanceField<::StringW, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__hidePacksIfOneOrNone(bool value)  {
::cordl_internals::setInstanceField<bool, 0x110>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::LevelFilteringNavigationController::__get__hidePacksIfOneOrNone() const {
return ::cordl_internals::getInstanceField<bool, 0x110>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__enableCustomLevels(bool value)  {
::cordl_internals::setInstanceField<bool, 0x111>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::LevelFilteringNavigationController::__get__enableCustomLevels() const {
return ::cordl_internals::getInstanceField<bool, 0x111>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__songPackMask(GlobalNamespace::SongPackMask value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SongPackMask, 0x118>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SongPackMask>(value));
}
constexpr GlobalNamespace::SongPackMask GlobalNamespace::LevelFilteringNavigationController::__get__songPackMask() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SongPackMask, 0x118>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__enabledLevelCategories(::ArrayW<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory>, 0x128>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory>>(value));
}
constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory> GlobalNamespace::LevelFilteringNavigationController::__get__enabledLevelCategories() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory>, 0x128>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__ostBeatmapLevelPacks(::ArrayW<GlobalNamespace::IBeatmapLevelPack> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::IBeatmapLevelPack>, 0x130>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::IBeatmapLevelPack>>(value));
}
constexpr ::ArrayW<GlobalNamespace::IBeatmapLevelPack> GlobalNamespace::LevelFilteringNavigationController::__get__ostBeatmapLevelPacks() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::IBeatmapLevelPack>, 0x130>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__musicPacksBeatmapLevelPacks(::ArrayW<GlobalNamespace::IBeatmapLevelPack> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::IBeatmapLevelPack>, 0x138>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::IBeatmapLevelPack>>(value));
}
constexpr ::ArrayW<GlobalNamespace::IBeatmapLevelPack> GlobalNamespace::LevelFilteringNavigationController::__get__musicPacksBeatmapLevelPacks() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::IBeatmapLevelPack>, 0x138>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__customLevelPacks(::ArrayW<GlobalNamespace::IBeatmapLevelPack> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::IBeatmapLevelPack>, 0x140>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::IBeatmapLevelPack>>(value));
}
constexpr ::ArrayW<GlobalNamespace::IBeatmapLevelPack> GlobalNamespace::LevelFilteringNavigationController::__get__customLevelPacks() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::IBeatmapLevelPack>, 0x140>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__allOfficialBeatmapLevelPacks(::ArrayW<GlobalNamespace::IBeatmapLevelPack> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::IBeatmapLevelPack>, 0x148>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::IBeatmapLevelPack>>(value));
}
constexpr ::ArrayW<GlobalNamespace::IBeatmapLevelPack> GlobalNamespace::LevelFilteringNavigationController::__get__allOfficialBeatmapLevelPacks() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::IBeatmapLevelPack>, 0x148>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__set__allBeatmapLevelPacks(::ArrayW<GlobalNamespace::IBeatmapLevelPack> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::IBeatmapLevelPack>, 0x150>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::IBeatmapLevelPack>>(value));
}
constexpr ::ArrayW<GlobalNamespace::IBeatmapLevelPack> GlobalNamespace::LevelFilteringNavigationController::__get__allBeatmapLevelPacks() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::IBeatmapLevelPack>, 0x150>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::LevelFilteringNavigationController::add_didSelectAnnotatedBeatmapLevelCollectionEvent(System::Action_4<GlobalNamespace::LevelFilteringNavigationController,GlobalNamespace::IAnnotatedBeatmapLevelCollection,UnityEngine::GameObject,GlobalNamespace::BeatmapCharacteristicSO> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "add_didSelectAnnotatedBeatmapLevelCollectionEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_4<GlobalNamespace::LevelFilteringNavigationController,GlobalNamespace::IAnnotatedBeatmapLevelCollection,UnityEngine::GameObject,GlobalNamespace::BeatmapCharacteristicSO>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LevelFilteringNavigationController::remove_didSelectAnnotatedBeatmapLevelCollectionEvent(System::Action_4<GlobalNamespace::LevelFilteringNavigationController,GlobalNamespace::IAnnotatedBeatmapLevelCollection,UnityEngine::GameObject,GlobalNamespace::BeatmapCharacteristicSO> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "remove_didSelectAnnotatedBeatmapLevelCollectionEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_4<GlobalNamespace::LevelFilteringNavigationController,GlobalNamespace::IAnnotatedBeatmapLevelCollection,UnityEngine::GameObject,GlobalNamespace::BeatmapCharacteristicSO>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LevelFilteringNavigationController::add_didStartLoadingEvent(System::Action_1<GlobalNamespace::LevelFilteringNavigationController> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "add_didStartLoadingEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::LevelFilteringNavigationController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LevelFilteringNavigationController::remove_didStartLoadingEvent(System::Action_1<GlobalNamespace::LevelFilteringNavigationController> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "remove_didStartLoadingEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::LevelFilteringNavigationController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LevelFilteringNavigationController::add_didPressAllSongsEvent(System::Action_1<GlobalNamespace::LevelFilteringNavigationController> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "add_didPressAllSongsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::LevelFilteringNavigationController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LevelFilteringNavigationController::remove_didPressAllSongsEvent(System::Action_1<GlobalNamespace::LevelFilteringNavigationController> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "remove_didPressAllSongsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::LevelFilteringNavigationController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LevelFilteringNavigationController::add_didOpenBeatmapLevelCollectionsEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "add_didOpenBeatmapLevelCollectionsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LevelFilteringNavigationController::remove_didOpenBeatmapLevelCollectionsEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "remove_didOpenBeatmapLevelCollectionsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LevelFilteringNavigationController::add_didCloseBeatmapLevelCollectionsEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "add_didCloseBeatmapLevelCollectionsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LevelFilteringNavigationController::remove_didCloseBeatmapLevelCollectionsEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "remove_didCloseBeatmapLevelCollectionsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::IBeatmapLevelPack GlobalNamespace::LevelFilteringNavigationController::get_selectedBeatmapLevelPack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "get_selectedBeatmapLevelPack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IBeatmapLevelPack, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory GlobalNamespace::LevelFilteringNavigationController::get_selectedLevelCategory()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "get_selectedLevelCategory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LevelFilteringNavigationController::Setup(GlobalNamespace::SongPackMask songPackMask, GlobalNamespace::IBeatmapLevelPack levelPackToBeSelectedAfterPresent, GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory startLevelCategory, bool hidePacksIfOneOrNone, bool enableCustomLevels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SongPackMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevelPack>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, songPackMask, levelPackToBeSelectedAfterPresent, startLevelCategory, hidePacksIfOneOrNone, enableCustomLevels);
}
 void GlobalNamespace::LevelFilteringNavigationController::SetupBeatmapLevelPacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "SetupBeatmapLevelPacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LevelFilteringNavigationController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
 void GlobalNamespace::LevelFilteringNavigationController::LevelSearchViewControllerDidStartLoading(GlobalNamespace::LevelSearchViewController obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "LevelSearchViewControllerDidStartLoading",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LevelSearchViewController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 void GlobalNamespace::LevelFilteringNavigationController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "DidDeactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
 void GlobalNamespace::LevelFilteringNavigationController::LevelSearchViewControllerDidFilterBeatmapLevelCollection(GlobalNamespace::IAnnotatedBeatmapLevelCollection annotatedBeatmapLevelCollection, GlobalNamespace::BeatmapCharacteristicSO preferredBeatmapCharacteristic)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "LevelSearchViewControllerDidFilterBeatmapLevelCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IAnnotatedBeatmapLevelCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, annotatedBeatmapLevelCollection, preferredBeatmapCharacteristic);
}
 void GlobalNamespace::LevelFilteringNavigationController::SelectLevelCategoryViewControllerDidSelectLevelCategory(GlobalNamespace::SelectLevelCategoryViewController viewController, GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory levelCategory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "SelectLevelCategoryViewControllerDidSelectLevelCategory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SelectLevelCategoryViewController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, viewController, levelCategory);
}
 void GlobalNamespace::LevelFilteringNavigationController::UpdateSecondChildControllerContent(GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory levelCategory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "UpdateSecondChildControllerContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, levelCategory);
}
 void GlobalNamespace::LevelFilteringNavigationController::ShowPacksInSecondChildController(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IBeatmapLevelPack> beatmapLevelPacks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "ShowPacksInSecondChildController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IBeatmapLevelPack>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapLevelPacks);
}
 void GlobalNamespace::LevelFilteringNavigationController::ReplaceSecondViewController(HMUI::ViewController viewController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "ReplaceSecondViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::ViewController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, viewController);
}
 void GlobalNamespace::LevelFilteringNavigationController::HandlePlayerDataFavoriteLevelsSetDidChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "HandlePlayerDataFavoriteLevelsSetDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LevelFilteringNavigationController::HandleIncreaseNumberOfGameplays()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "HandleIncreaseNumberOfGameplays",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LevelFilteringNavigationController::HandleAnnotatedBeatmapLevelCollectionsViewControllerDidOpenBeatmapLevelCollections()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "HandleAnnotatedBeatmapLevelCollectionsViewControllerDidOpenBeatmapLevelCollections",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LevelFilteringNavigationController::HandleAnnotatedBeatmapLevelCollectionsViewControllerDidCloseBeatmapLevelCollections()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "HandleAnnotatedBeatmapLevelCollectionsViewControllerDidCloseBeatmapLevelCollections",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LevelFilteringNavigationController::HandleAnnotatedBeatmapLevelCollectionsViewControllerDidSelectAnnotatedBeatmapLevelCollection(GlobalNamespace::IAnnotatedBeatmapLevelCollection annotatedBeatmapLevelCollection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "HandleAnnotatedBeatmapLevelCollectionsViewControllerDidSelectAnnotatedBeatmapLevelCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IAnnotatedBeatmapLevelCollection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, annotatedBeatmapLevelCollection);
}
 void GlobalNamespace::LevelFilteringNavigationController::SelectAnnotatedBeatmapLevelCollection(GlobalNamespace::IBeatmapLevelPack levelPack)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "SelectAnnotatedBeatmapLevelCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevelPack>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, levelPack);
}
 void GlobalNamespace::LevelFilteringNavigationController::UpdateCustomSongs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "UpdateCustomSongs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::LevelFilteringNavigationController GlobalNamespace::LevelFilteringNavigationController::New_ctor()  {
GlobalNamespace::LevelFilteringNavigationController o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::LevelFilteringNavigationController>())};
return o;
}
 void GlobalNamespace::LevelFilteringNavigationController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::LevelFilteringNavigationController::_SetupBeatmapLevelPacks_b__39_0(GlobalNamespace::IBeatmapLevelPack pack)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "<SetupBeatmapLevelPacks>b__39_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevelPack>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pack);
}
 bool GlobalNamespace::LevelFilteringNavigationController::_SetupBeatmapLevelPacks_b__39_1(GlobalNamespace::IBeatmapLevelPack pack)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LevelFilteringNavigationController>::get(),
                            "<SetupBeatmapLevelPacks>b__39_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevelPack>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pack);
}
