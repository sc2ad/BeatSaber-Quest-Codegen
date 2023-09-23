#pragma once
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "GlobalNamespace/zzzz__PracticeSettings_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCache_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14::*)()>(&GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x21b6d3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21b6f04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::GameplayCoreSceneSetupData", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14::GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, GlobalNamespace::GameplayCoreSceneSetupData __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14::__set___4__this(GlobalNamespace::GameplayCoreSceneSetupData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayCoreSceneSetupData, 0x20>(this->__instance, std::forward<GlobalNamespace::GameplayCoreSceneSetupData>(value));
}
constexpr GlobalNamespace::GameplayCoreSceneSetupData GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayCoreSceneSetupData, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData>, 0x28>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData>, 0x28>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15::*)()>(&GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x21b6f10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0x1058;
  constexpr static std::size_t addrs = 0x21b7320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IReadonlyBeatmapData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::GameplayCoreSceneSetupData", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15::GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IReadonlyBeatmapData> __t__builder, GlobalNamespace::GameplayCoreSceneSetupData __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IReadonlyBeatmapData> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IReadonlyBeatmapData>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IReadonlyBeatmapData>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IReadonlyBeatmapData> GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IReadonlyBeatmapData>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15::__set___4__this(GlobalNamespace::GameplayCoreSceneSetupData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayCoreSceneSetupData, 0x20>(this->__instance, std::forward<GlobalNamespace::GameplayCoreSceneSetupData>(value));
}
constexpr GlobalNamespace::GameplayCoreSceneSetupData GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayCoreSceneSetupData, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData>, 0x28>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData>, 0x28>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GameplayCoreSceneSetupData.get_transformedBeatmapData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IReadonlyBeatmapData (GlobalNamespace::GameplayCoreSceneSetupData::*)()>(&GlobalNamespace::GameplayCoreSceneSetupData::get_transformedBeatmapData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b6af4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayCoreSceneSetupData>::get(),
                            "get_transformedBeatmapData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayCoreSceneSetupData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayCoreSceneSetupData::*)(GlobalNamespace::IDifficultyBeatmap, GlobalNamespace::IPreviewBeatmapLevel, GlobalNamespace::GameplayModifiers, GlobalNamespace::PlayerSpecificSettings, GlobalNamespace::PracticeSettings, bool, GlobalNamespace::EnvironmentInfoSO, GlobalNamespace::ColorScheme, GlobalNamespace::MainSettingsModelSO, GlobalNamespace::BeatmapDataCache)>(&GlobalNamespace::GameplayCoreSceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x21b6afc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayCoreSceneSetupData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifiers>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PracticeSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EnvironmentInfoSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorScheme>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MainSettingsModelSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapDataCache>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayCoreSceneSetupData.LoadTransformedBeatmapDataAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (GlobalNamespace::GameplayCoreSceneSetupData::*)()>(&GlobalNamespace::GameplayCoreSceneSetupData::LoadTransformedBeatmapDataAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x21b6b84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayCoreSceneSetupData>::get(),
                            "LoadTransformedBeatmapDataAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayCoreSceneSetupData.GetTransformedBeatmapDataAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::IReadonlyBeatmapData> (GlobalNamespace::GameplayCoreSceneSetupData::*)()>(&GlobalNamespace::GameplayCoreSceneSetupData::GetTransformedBeatmapDataAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x21b6c4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayCoreSceneSetupData>::get(),
                            "GetTransformedBeatmapDataAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__set_difficultyBeatmap(GlobalNamespace::IDifficultyBeatmap value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IDifficultyBeatmap, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IDifficultyBeatmap>(value));
}
constexpr GlobalNamespace::IDifficultyBeatmap GlobalNamespace::GameplayCoreSceneSetupData::__get_difficultyBeatmap() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IDifficultyBeatmap, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__set_previewBeatmapLevel(GlobalNamespace::IPreviewBeatmapLevel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IPreviewBeatmapLevel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IPreviewBeatmapLevel>(value));
}
constexpr GlobalNamespace::IPreviewBeatmapLevel GlobalNamespace::GameplayCoreSceneSetupData::__get_previewBeatmapLevel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IPreviewBeatmapLevel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__set_gameplayModifiers(GlobalNamespace::GameplayModifiers value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayModifiers, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameplayModifiers>(value));
}
constexpr GlobalNamespace::GameplayModifiers GlobalNamespace::GameplayCoreSceneSetupData::__get_gameplayModifiers() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayModifiers, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__set_playerSpecificSettings(GlobalNamespace::PlayerSpecificSettings value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PlayerSpecificSettings, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PlayerSpecificSettings>(value));
}
constexpr GlobalNamespace::PlayerSpecificSettings GlobalNamespace::GameplayCoreSceneSetupData::__get_playerSpecificSettings() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PlayerSpecificSettings, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__set_practiceSettings(GlobalNamespace::PracticeSettings value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PracticeSettings, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PracticeSettings>(value));
}
constexpr GlobalNamespace::PracticeSettings GlobalNamespace::GameplayCoreSceneSetupData::__get_practiceSettings() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PracticeSettings, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__set_useTestNoteCutSoundEffects(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GameplayCoreSceneSetupData::__get_useTestNoteCutSoundEffects() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__set_environmentInfo(GlobalNamespace::EnvironmentInfoSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::EnvironmentInfoSO, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::EnvironmentInfoSO>(value));
}
constexpr GlobalNamespace::EnvironmentInfoSO GlobalNamespace::GameplayCoreSceneSetupData::__get_environmentInfo() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::EnvironmentInfoSO, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__set_colorScheme(GlobalNamespace::ColorScheme value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ColorScheme, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ColorScheme>(value));
}
constexpr GlobalNamespace::ColorScheme GlobalNamespace::GameplayCoreSceneSetupData::__get_colorScheme() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ColorScheme, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__set_mainSettingsModel(GlobalNamespace::MainSettingsModelSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MainSettingsModelSO, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MainSettingsModelSO>(value));
}
constexpr GlobalNamespace::MainSettingsModelSO GlobalNamespace::GameplayCoreSceneSetupData::__get_mainSettingsModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MainSettingsModelSO, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__set_beatmapDataCache(GlobalNamespace::BeatmapDataCache value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapDataCache, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapDataCache>(value));
}
constexpr GlobalNamespace::BeatmapDataCache GlobalNamespace::GameplayCoreSceneSetupData::__get_beatmapDataCache() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapDataCache, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__set__transformedBeatmapData(GlobalNamespace::IReadonlyBeatmapData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IReadonlyBeatmapData, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IReadonlyBeatmapData>(value));
}
constexpr GlobalNamespace::IReadonlyBeatmapData GlobalNamespace::GameplayCoreSceneSetupData::__get__transformedBeatmapData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IReadonlyBeatmapData, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::IReadonlyBeatmapData GlobalNamespace::GameplayCoreSceneSetupData::get_transformedBeatmapData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayCoreSceneSetupData>::get(),
                            "get_transformedBeatmapData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IReadonlyBeatmapData, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "difficultyBeatmap", ty: "GlobalNamespace::IDifficultyBeatmap", modifiers: "", def_value: None }, CppParam { name: "previewBeatmapLevel", ty: "GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: None }, CppParam { name: "gameplayModifiers", ty: "GlobalNamespace::GameplayModifiers", modifiers: "", def_value: None }, CppParam { name: "playerSpecificSettings", ty: "GlobalNamespace::PlayerSpecificSettings", modifiers: "", def_value: None }, CppParam { name: "practiceSettings", ty: "GlobalNamespace::PracticeSettings", modifiers: "", def_value: None }, CppParam { name: "useTestNoteCutSoundEffects", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "environmentInfo", ty: "GlobalNamespace::EnvironmentInfoSO", modifiers: "", def_value: None }, CppParam { name: "colorScheme", ty: "GlobalNamespace::ColorScheme", modifiers: "", def_value: None }, CppParam { name: "mainSettingsModel", ty: "GlobalNamespace::MainSettingsModelSO", modifiers: "", def_value: None }, CppParam { name: "beatmapDataCache", ty: "GlobalNamespace::BeatmapDataCache", modifiers: "", def_value: Some("csnull") }]
 GlobalNamespace::GameplayCoreSceneSetupData::GameplayCoreSceneSetupData(GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, GlobalNamespace::GameplayModifiers gameplayModifiers, GlobalNamespace::PlayerSpecificSettings playerSpecificSettings, GlobalNamespace::PracticeSettings practiceSettings, bool useTestNoteCutSoundEffects, GlobalNamespace::EnvironmentInfoSO environmentInfo, GlobalNamespace::ColorScheme colorScheme, GlobalNamespace::MainSettingsModelSO mainSettingsModel, GlobalNamespace::BeatmapDataCache beatmapDataCache)  : GlobalNamespace::SceneSetupData(THROW_UNLESS(::il2cpp_utils::New<GameplayCoreSceneSetupData>(difficultyBeatmap, previewBeatmapLevel, gameplayModifiers, playerSpecificSettings, practiceSettings, useTestNoteCutSoundEffects, environmentInfo, colorScheme, mainSettingsModel, beatmapDataCache))) {}
/// @param beatmapDataCache: GlobalNamespace::BeatmapDataCache (default: csnull)
 void GlobalNamespace::GameplayCoreSceneSetupData::_ctor(GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, GlobalNamespace::GameplayModifiers gameplayModifiers, GlobalNamespace::PlayerSpecificSettings playerSpecificSettings, GlobalNamespace::PracticeSettings practiceSettings, bool useTestNoteCutSoundEffects, GlobalNamespace::EnvironmentInfoSO environmentInfo, GlobalNamespace::ColorScheme colorScheme, GlobalNamespace::MainSettingsModelSO mainSettingsModel, GlobalNamespace::BeatmapDataCache beatmapDataCache)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayCoreSceneSetupData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifiers>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PracticeSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EnvironmentInfoSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorScheme>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MainSettingsModelSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapDataCache>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, difficultyBeatmap, previewBeatmapLevel, gameplayModifiers, playerSpecificSettings, practiceSettings, useTestNoteCutSoundEffects, environmentInfo, colorScheme, mainSettingsModel, beatmapDataCache);
}
 System::Threading::Tasks::Task GlobalNamespace::GameplayCoreSceneSetupData::LoadTransformedBeatmapDataAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayCoreSceneSetupData>::get(),
                            "LoadTransformedBeatmapDataAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::IReadonlyBeatmapData> GlobalNamespace::GameplayCoreSceneSetupData::GetTransformedBeatmapDataAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayCoreSceneSetupData>::get(),
                            "GetTransformedBeatmapDataAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::IReadonlyBeatmapData>, false>(const_cast<void*>(instance), ___internal_method);
}
