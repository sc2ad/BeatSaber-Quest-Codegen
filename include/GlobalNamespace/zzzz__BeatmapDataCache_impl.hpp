#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__BeatmapDataCache_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4::MoveNext)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x2190de8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x219125c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "difficultyBeatmap", ty: "::GlobalNamespace::IDifficultyBeatmap", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapDataCache", modifiers: "", def_value: Some("csnull") }, CppParam { name: "environmentInfo", ty: "::GlobalNamespace::EnvironmentInfoSO", modifiers: "", def_value: Some("csnull") }, CppParam { name: "playerSpecificSettings", ty: "::GlobalNamespace::PlayerSpecificSettings", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4::____GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData> __t__builder, ::GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, ::GlobalNamespace::BeatmapDataCache __4__this, ::GlobalNamespace::EnvironmentInfoSO environmentInfo, ::GlobalNamespace::PlayerSpecificSettings playerSpecificSettings, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->difficultyBeatmap = difficultyBeatmap;
this->__4__this = __4__this;
this->environmentInfo = environmentInfo;
this->playerSpecificSettings = playerSpecificSettings;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData> ::GlobalNamespace::____GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData>, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4::__set_difficultyBeatmap(::GlobalNamespace::IDifficultyBeatmap value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IDifficultyBeatmap, 0x20>(this->__instance, std::forward<::GlobalNamespace::IDifficultyBeatmap>(value));
}
constexpr ::GlobalNamespace::IDifficultyBeatmap ::GlobalNamespace::____GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4::__get_difficultyBeatmap() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IDifficultyBeatmap, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4::__set___4__this(::GlobalNamespace::BeatmapDataCache value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDataCache, 0x28>(this->__instance, std::forward<::GlobalNamespace::BeatmapDataCache>(value));
}
constexpr ::GlobalNamespace::BeatmapDataCache ::GlobalNamespace::____GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCache, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4::__set_environmentInfo(::GlobalNamespace::EnvironmentInfoSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnvironmentInfoSO, 0x30>(this->__instance, std::forward<::GlobalNamespace::EnvironmentInfoSO>(value));
}
constexpr ::GlobalNamespace::EnvironmentInfoSO ::GlobalNamespace::____GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4::__get_environmentInfo() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentInfoSO, 0x30>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4::__set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerSpecificSettings, 0x38>(this->__instance, std::forward<::GlobalNamespace::PlayerSpecificSettings>(value));
}
constexpr ::GlobalNamespace::PlayerSpecificSettings ::GlobalNamespace::____GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4::__get_playerSpecificSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerSpecificSettings, 0x38>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData>, 0x40>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData> ::GlobalNamespace::____GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData>, 0x40>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataCache.GetBeatmapData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData> (::GlobalNamespace::BeatmapDataCache::*)(::GlobalNamespace::IDifficultyBeatmap, ::GlobalNamespace::EnvironmentInfoSO, ::GlobalNamespace::PlayerSpecificSettings)>(&::GlobalNamespace::BeatmapDataCache::GetBeatmapData)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2190cd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataCache>::get(),
                            "GetBeatmapData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataCache._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapDataCache::*)()>(&::GlobalNamespace::BeatmapDataCache::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2190de0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataCache>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::BeatmapDataCache::__set_difficultyBeatmap(::GlobalNamespace::IDifficultyBeatmap value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IDifficultyBeatmap, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IDifficultyBeatmap>(value));
}
constexpr ::GlobalNamespace::IDifficultyBeatmap ::GlobalNamespace::BeatmapDataCache::__get_difficultyBeatmap() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IDifficultyBeatmap, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapDataCache::__set_environmentInfo(::GlobalNamespace::EnvironmentInfoSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnvironmentInfoSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::EnvironmentInfoSO>(value));
}
constexpr ::GlobalNamespace::EnvironmentInfoSO ::GlobalNamespace::BeatmapDataCache::__get_environmentInfo() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentInfoSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapDataCache::__set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerSpecificSettings, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::PlayerSpecificSettings>(value));
}
constexpr ::GlobalNamespace::PlayerSpecificSettings ::GlobalNamespace::BeatmapDataCache::__get_playerSpecificSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerSpecificSettings, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapDataCache::__set_cachedMap(::GlobalNamespace::IReadonlyBeatmapData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IReadonlyBeatmapData, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IReadonlyBeatmapData>(value));
}
constexpr ::GlobalNamespace::IReadonlyBeatmapData ::GlobalNamespace::BeatmapDataCache::__get_cachedMap() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IReadonlyBeatmapData, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData> ::GlobalNamespace::BeatmapDataCache::GetBeatmapData(::GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, ::GlobalNamespace::EnvironmentInfoSO environmentInfo, ::GlobalNamespace::PlayerSpecificSettings playerSpecificSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataCache>::get(),
                            "GetBeatmapData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData>, false>(const_cast<void*>(instance), ___internal_method, difficultyBeatmap, environmentInfo, playerSpecificSettings);
}
// Ctor Parameters []
 ::GlobalNamespace::BeatmapDataCache::BeatmapDataCache()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BeatmapDataCache>())) {}
 void ::GlobalNamespace::BeatmapDataCache::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataCache>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
