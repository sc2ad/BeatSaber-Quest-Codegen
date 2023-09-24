#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelFilterModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelFilterModel_def.hpp"
#include "GlobalNamespace/zzzz__LevelFilterParams_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelCollection_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e3840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0._FilerBeatmapLevelPackCollectionAsync_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0::*)(GlobalNamespace::IPreviewBeatmapLevel)>(&GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0::_FilerBeatmapLevelPackCollectionAsync_b__0)> {
  constexpr static std::size_t size = 0x760;
  constexpr static std::size_t addrs = 0x21e3848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0>::get(),
                            "<FilerBeatmapLevelPackCollectionAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0::__set_searchByText(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0::__get_searchByText() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0::__set_searchTexts(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0::__get_searchTexts() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0::__set_levelFilterParams(GlobalNamespace::LevelFilterParams value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LevelFilterParams, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LevelFilterParams>(value));
}
constexpr GlobalNamespace::LevelFilterParams GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0::__get_levelFilterParams() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LevelFilterParams, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0::__set_playerDataModel(GlobalNamespace::PlayerDataModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PlayerDataModel, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PlayerDataModel>(value));
}
constexpr GlobalNamespace::PlayerDataModel GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0::__get_playerDataModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PlayerDataModel, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0 GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0::New_ctor()  {
GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0 o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0::_FilerBeatmapLevelPackCollectionAsync_b__0(GlobalNamespace::IPreviewBeatmapLevel beatmapLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0>::get(),
                            "<FilerBeatmapLevelPackCollectionAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, beatmapLevel);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0::MoveNext)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x21e3fa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21e43ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevelCollection>", modifiers: "", def_value: Some("{}") }, CppParam { name: "levelFilterParams", ty: "GlobalNamespace::LevelFilterParams", modifiers: "", def_value: Some("csnull") }, CppParam { name: "playerDataModel", ty: "GlobalNamespace::PlayerDataModel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "beatmapLevelPacks", ty: "::ArrayW<GlobalNamespace::IBeatmapLevelPack>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "additionalContentModel", ty: "GlobalNamespace::AdditionalContentModel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__8__1", ty: "GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel>>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0::GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevelCollection> __t__builder, GlobalNamespace::LevelFilterParams levelFilterParams, GlobalNamespace::PlayerDataModel playerDataModel, ::ArrayW<GlobalNamespace::IBeatmapLevelPack> beatmapLevelPacks, GlobalNamespace::AdditionalContentModel additionalContentModel, System::Threading::CancellationToken cancellationToken, GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0 __8__1, System::Runtime::CompilerServices::TaskAwaiter_1<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel>> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->levelFilterParams = levelFilterParams;
this->playerDataModel = playerDataModel;
this->beatmapLevelPacks = beatmapLevelPacks;
this->additionalContentModel = additionalContentModel;
this->cancellationToken = cancellationToken;
this->__8__1 = __8__1;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevelCollection> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevelCollection>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevelCollection>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevelCollection> GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevelCollection>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0::__set_levelFilterParams(GlobalNamespace::LevelFilterParams value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LevelFilterParams, 0x20>(this->__instance, std::forward<GlobalNamespace::LevelFilterParams>(value));
}
constexpr GlobalNamespace::LevelFilterParams GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0::__get_levelFilterParams() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LevelFilterParams, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0::__set_playerDataModel(GlobalNamespace::PlayerDataModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PlayerDataModel, 0x28>(this->__instance, std::forward<GlobalNamespace::PlayerDataModel>(value));
}
constexpr GlobalNamespace::PlayerDataModel GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0::__get_playerDataModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PlayerDataModel, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0::__set_beatmapLevelPacks(::ArrayW<GlobalNamespace::IBeatmapLevelPack> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::IBeatmapLevelPack>, 0x30>(this->__instance, std::forward<::ArrayW<GlobalNamespace::IBeatmapLevelPack>>(value));
}
constexpr ::ArrayW<GlobalNamespace::IBeatmapLevelPack> GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0::__get_beatmapLevelPacks() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::IBeatmapLevelPack>, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0::__set_additionalContentModel(GlobalNamespace::AdditionalContentModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AdditionalContentModel, 0x38>(this->__instance, std::forward<GlobalNamespace::AdditionalContentModel>(value));
}
constexpr GlobalNamespace::AdditionalContentModel GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0::__get_additionalContentModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AdditionalContentModel, 0x38>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x40>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x40>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0::__set___8__1(GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0 value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0, 0x48>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0>(value));
}
constexpr GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0 GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0::__get___8__1() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel____c__DisplayClass0_0, 0x48>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel>> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel>>, 0x50>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel>>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel>> GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel>>, 0x50>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::*)()>(&GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::MoveNext)> {
  constexpr static std::size_t size = 0x98c;
  constexpr static std::size_t addrs = 0x21e4404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21e4d90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapLevelPacks", ty: "::ArrayW<GlobalNamespace::IBeatmapLevelPack>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "songPackMask", ty: "GlobalNamespace::SongPackMask", modifiers: "", def_value: Some("{}") }, CppParam { name: "onlyOwned", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "additionalContentModel", ty: "GlobalNamespace::AdditionalContentModel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "onlyNotOwned", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_levels_5__2", ty: "System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__7__wrap2", ty: "::ArrayW<GlobalNamespace::IBeatmapLevelPack>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__7__wrap3", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap4", ty: "System::Collections::Generic::IEnumerator_1<GlobalNamespace::IPreviewBeatmapLevel>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_beatmapLevel_5__6", ty: "GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel>> __t__builder, ::ArrayW<GlobalNamespace::IBeatmapLevelPack> beatmapLevelPacks, GlobalNamespace::SongPackMask songPackMask, bool onlyOwned, GlobalNamespace::AdditionalContentModel additionalContentModel, System::Threading::CancellationToken cancellationToken, bool onlyNotOwned, System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel> _levels_5__2, ::ArrayW<GlobalNamespace::IBeatmapLevelPack> __7__wrap2, int32_t __7__wrap3, System::Collections::Generic::IEnumerator_1<GlobalNamespace::IPreviewBeatmapLevel> __7__wrap4, GlobalNamespace::IPreviewBeatmapLevel _beatmapLevel_5__6, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->beatmapLevelPacks = beatmapLevelPacks;
this->songPackMask = songPackMask;
this->onlyOwned = onlyOwned;
this->additionalContentModel = additionalContentModel;
this->cancellationToken = cancellationToken;
this->onlyNotOwned = onlyNotOwned;
this->_levels_5__2 = _levels_5__2;
this->__7__wrap2 = __7__wrap2;
this->__7__wrap3 = __7__wrap3;
this->__7__wrap4 = __7__wrap4;
this->_beatmapLevel_5__6 = _beatmapLevel_5__6;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel>> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel>>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel>>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel>> GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel>>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::__set_beatmapLevelPacks(::ArrayW<GlobalNamespace::IBeatmapLevelPack> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::IBeatmapLevelPack>, 0x20>(this->__instance, std::forward<::ArrayW<GlobalNamespace::IBeatmapLevelPack>>(value));
}
constexpr ::ArrayW<GlobalNamespace::IBeatmapLevelPack> GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::__get_beatmapLevelPacks() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::IBeatmapLevelPack>, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::__set_songPackMask(GlobalNamespace::SongPackMask value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SongPackMask, 0x28>(this->__instance, std::forward<GlobalNamespace::SongPackMask>(value));
}
constexpr GlobalNamespace::SongPackMask GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::__get_songPackMask() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SongPackMask, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::__set_onlyOwned(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->__instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::__get_onlyOwned() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::__set_additionalContentModel(GlobalNamespace::AdditionalContentModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AdditionalContentModel, 0x40>(this->__instance, std::forward<GlobalNamespace::AdditionalContentModel>(value));
}
constexpr GlobalNamespace::AdditionalContentModel GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::__get_additionalContentModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AdditionalContentModel, 0x40>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x48>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x48>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::__set_onlyNotOwned(bool value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this->__instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::__get_onlyNotOwned() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::__set__levels_5__2(System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel>, 0x58>(this->__instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel> GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::__get__levels_5__2() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel>, 0x58>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::__set___7__wrap2(::ArrayW<GlobalNamespace::IBeatmapLevelPack> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::IBeatmapLevelPack>, 0x60>(this->__instance, std::forward<::ArrayW<GlobalNamespace::IBeatmapLevelPack>>(value));
}
constexpr ::ArrayW<GlobalNamespace::IBeatmapLevelPack> GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::__get___7__wrap2() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::IBeatmapLevelPack>, 0x60>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::__set___7__wrap3(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x68>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::__get___7__wrap3() const {
return ::cordl_internals::getInstanceField<int32_t, 0x68>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::__set___7__wrap4(System::Collections::Generic::IEnumerator_1<GlobalNamespace::IPreviewBeatmapLevel> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerator_1<GlobalNamespace::IPreviewBeatmapLevel>, 0x70>(this->__instance, std::forward<System::Collections::Generic::IEnumerator_1<GlobalNamespace::IPreviewBeatmapLevel>>(value));
}
constexpr System::Collections::Generic::IEnumerator_1<GlobalNamespace::IPreviewBeatmapLevel> GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::__get___7__wrap4() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerator_1<GlobalNamespace::IPreviewBeatmapLevel>, 0x70>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::__set__beatmapLevel_5__6(GlobalNamespace::IPreviewBeatmapLevel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IPreviewBeatmapLevel, 0x78>(this->__instance, std::forward<GlobalNamespace::IPreviewBeatmapLevel>(value));
}
constexpr GlobalNamespace::IPreviewBeatmapLevel GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::__get__beatmapLevel_5__6() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IPreviewBeatmapLevel, 0x78>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x80>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x80>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::BeatmapLevelFilterModel.FilerBeatmapLevelPackCollectionAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::IBeatmapLevelCollection> (*)(::ArrayW<GlobalNamespace::IBeatmapLevelPack>, GlobalNamespace::LevelFilterParams, GlobalNamespace::PlayerDataModel, GlobalNamespace::AdditionalContentModel, System::Threading::CancellationToken)>(&GlobalNamespace::BeatmapLevelFilterModel::FilerBeatmapLevelPackCollectionAsync)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x21e33bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelFilterModel>::get(),
                            "FilerBeatmapLevelPackCollectionAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<GlobalNamespace::IBeatmapLevelPack>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LevelFilterParams>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerDataModel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::AdditionalContentModel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapLevelFilterModel.LevelContainsText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::IPreviewBeatmapLevel, ::ArrayW<::StringW>)>(&GlobalNamespace::BeatmapLevelFilterModel::LevelContainsText)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x21e34dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelFilterModel>::get(),
                            "LevelContainsText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapLevelFilterModel.GetAllBeatmapLevelsAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel>> (*)(::ArrayW<GlobalNamespace::IBeatmapLevelPack>, GlobalNamespace::SongPackMask, bool, bool, GlobalNamespace::AdditionalContentModel, System::Threading::CancellationToken)>(&GlobalNamespace::BeatmapLevelFilterModel::GetAllBeatmapLevelsAsync)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x21e370c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelFilterModel>::get(),
                            "GetAllBeatmapLevelsAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<GlobalNamespace::IBeatmapLevelPack>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SongPackMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::AdditionalContentModel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
 System::Threading::Tasks::Task_1<GlobalNamespace::IBeatmapLevelCollection> GlobalNamespace::BeatmapLevelFilterModel::FilerBeatmapLevelPackCollectionAsync(::ArrayW<GlobalNamespace::IBeatmapLevelPack> beatmapLevelPacks, GlobalNamespace::LevelFilterParams levelFilterParams, GlobalNamespace::PlayerDataModel playerDataModel, GlobalNamespace::AdditionalContentModel additionalContentModel, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelFilterModel>::get(),
                            "FilerBeatmapLevelPackCollectionAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<GlobalNamespace::IBeatmapLevelPack>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LevelFilterParams>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerDataModel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::AdditionalContentModel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::IBeatmapLevelCollection>, false>(nullptr, ___internal_method, beatmapLevelPacks, levelFilterParams, playerDataModel, additionalContentModel, cancellationToken);
}
 bool GlobalNamespace::BeatmapLevelFilterModel::LevelContainsText(GlobalNamespace::IPreviewBeatmapLevel beatmapLevel, ::ArrayW<::StringW> searchTexts)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelFilterModel>::get(),
                            "LevelContainsText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, beatmapLevel, searchTexts);
}
 System::Threading::Tasks::Task_1<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel>> GlobalNamespace::BeatmapLevelFilterModel::GetAllBeatmapLevelsAsync(::ArrayW<GlobalNamespace::IBeatmapLevelPack> beatmapLevelPacks, GlobalNamespace::SongPackMask songPackMask, bool onlyOwned, bool onlyNotOwned, GlobalNamespace::AdditionalContentModel additionalContentModel, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelFilterModel>::get(),
                            "GetAllBeatmapLevelsAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<GlobalNamespace::IBeatmapLevelPack>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SongPackMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::AdditionalContentModel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel>>, false>(nullptr, ___internal_method, beatmapLevelPacks, songPackMask, onlyOwned, onlyNotOwned, additionalContentModel, cancellationToken);
}
