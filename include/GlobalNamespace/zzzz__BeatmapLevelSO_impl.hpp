#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IAssetSongAudioClipProvider_def.hpp"
#include "GlobalNamespace/zzzz__IAssetSongPreviewAudioClipProvider_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__PreviewDifficultyBeatmapSet_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmapSet_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapDataBasicInfo_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataSO_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet.get_beatmapCharacteristic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapCharacteristicSO (::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet::get_beatmapCharacteristic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e85a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet>::get(),
                            "get_beatmapCharacteristic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet.get_difficultyBeatmaps
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap> (::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet::get_difficultyBeatmaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e85b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet>::get(),
                            "get_difficultyBeatmaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet::*)(::GlobalNamespace::BeatmapCharacteristicSO, ::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap>)>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x21e85b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet.SetParentLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet::*)(::GlobalNamespace::IBeatmapLevel)>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet::SetParentLevel)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x21e7a20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet>::get(),
                            "SetParentLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::IDifficultyBeatmapSet
constexpr  ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet::operator ::GlobalNamespace::IDifficultyBeatmapSet() const noexcept {
return ::GlobalNamespace::IDifficultyBeatmapSet(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet::__set__beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCharacteristicSO, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapCharacteristicSO>(value));
}
constexpr ::GlobalNamespace::BeatmapCharacteristicSO ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet::__get__beatmapCharacteristic() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCharacteristicSO, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet::__set__difficultyBeatmaps(::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap> ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet::__get__difficultyBeatmaps() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::GlobalNamespace::BeatmapCharacteristicSO ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet::get_beatmapCharacteristic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet>::get(),
                            "get_beatmapCharacteristic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapCharacteristicSO, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap> ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet::get_difficultyBeatmaps()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet>::get(),
                            "get_difficultyBeatmaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap>, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "beatmapCharacteristic", ty: "::GlobalNamespace::BeatmapCharacteristicSO", modifiers: "", def_value: None }, CppParam { name: "difficultyBeatmaps", ty: "::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap>", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet(::GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, ::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap> difficultyBeatmaps)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet>(beatmapCharacteristic, difficultyBeatmaps))) {}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet::_ctor(::GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, ::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap> difficultyBeatmaps)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapCharacteristic, difficultyBeatmaps);
}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet::SetParentLevel(::GlobalNamespace::IBeatmapLevel level)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet>::get(),
                            "SetParentLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, level);
}
//  Writing Method size for method: ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16::*)()>(&::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x21e8874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21e8a60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo> __t__builder, ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo> ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo>, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16::__set___4__this(::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap, 0x20>(this->__instance, std::forward<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo>, 0x28>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo> ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo>, 0x28>(this->__instance);
}
 void ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::*)()>(&::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x21e8ab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21e8d98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap", modifiers: "", def_value: Some("csnull") }, CppParam { name: "environmentInfo", ty: "::GlobalNamespace::EnvironmentInfoSO", modifiers: "", def_value: Some("csnull") }, CppParam { name: "playerSpecificSettings", ty: "::GlobalNamespace::PlayerSpecificSettings", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData> __t__builder, ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap __4__this, ::GlobalNamespace::EnvironmentInfoSO environmentInfo, ::GlobalNamespace::PlayerSpecificSettings playerSpecificSettings, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->environmentInfo = environmentInfo;
this->playerSpecificSettings = playerSpecificSettings;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData> ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData>, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::__set___4__this(::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap, 0x20>(this->__instance, std::forward<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::__set_environmentInfo(::GlobalNamespace::EnvironmentInfoSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnvironmentInfoSO, 0x28>(this->__instance, std::forward<::GlobalNamespace::EnvironmentInfoSO>(value));
}
constexpr ::GlobalNamespace::EnvironmentInfoSO ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::__get_environmentInfo() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentInfoSO, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::__set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerSpecificSettings, 0x30>(this->__instance, std::forward<::GlobalNamespace::PlayerSpecificSettings>(value));
}
constexpr ::GlobalNamespace::PlayerSpecificSettings ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::__get_playerSpecificSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerSpecificSettings, 0x30>(this->__instance);
}
constexpr void ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData>, 0x38>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData> ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData>, 0x38>(this->__instance);
}
 void ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap.get_difficulty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDifficulty (::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::get_difficulty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e85e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap>::get(),
                            "get_difficulty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap.get_difficultyRank
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::get_difficultyRank)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e85ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap>::get(),
                            "get_difficultyRank",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap.get_noteJumpMovementSpeed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::get_noteJumpMovementSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e85f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap>::get(),
                            "get_noteJumpMovementSpeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap.get_noteJumpStartBeatOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::get_noteJumpStartBeatOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e85fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap>::get(),
                            "get_noteJumpStartBeatOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap.get_environmentNameIdx
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::get_environmentNameIdx)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e8604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap>::get(),
                            "get_environmentNameIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap.GetBeatmapDataBasicInfoAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapDataBasicInfo> (::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::GetBeatmapDataBasicInfoAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x21e860c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap>::get(),
                            "GetBeatmapDataBasicInfoAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap.GetBeatmapDataAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData> (::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::*)(::GlobalNamespace::EnvironmentInfoSO, ::GlobalNamespace::PlayerSpecificSettings)>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::GetBeatmapDataAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x21e86fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap>::get(),
                            "GetBeatmapDataAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap.get_level
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IBeatmapLevel (::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::get_level)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e8800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap>::get(),
                            "get_level",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap.get_parentDifficultyBeatmapSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IDifficultyBeatmapSet (::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::get_parentDifficultyBeatmapSet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e8808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap>::get(),
                            "get_parentDifficultyBeatmapSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap.SetParents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::*)(::GlobalNamespace::IBeatmapLevel, ::GlobalNamespace::IDifficultyBeatmapSet)>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::SetParents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e06d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap>::get(),
                            "SetParents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmapSet>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::*)(::GlobalNamespace::IBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty, int32_t, float_t, float_t, int32_t, ::GlobalNamespace::BeatmapDataSO)>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x21e8810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataSO>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::IDifficultyBeatmap
constexpr  ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::operator ::GlobalNamespace::IDifficultyBeatmap() const noexcept {
return ::GlobalNamespace::IDifficultyBeatmap(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::__set__difficulty(::GlobalNamespace::BeatmapDifficulty value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapDifficulty>(value));
}
constexpr ::GlobalNamespace::BeatmapDifficulty ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::__get__difficulty() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::__set__difficultyRank(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::__get__difficultyRank() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::__set__noteJumpMovementSpeed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::__get__noteJumpMovementSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::__set__noteJumpStartBeatOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::__get__noteJumpStartBeatOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::__set__environmentNameIdx(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::__get__environmentNameIdx() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::__set__beatmapData(::GlobalNamespace::BeatmapDataSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDataSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapDataSO>(value));
}
constexpr ::GlobalNamespace::BeatmapDataSO ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::__get__beatmapData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::__set__parentLevel(::GlobalNamespace::IBeatmapLevel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IBeatmapLevel, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IBeatmapLevel>(value));
}
constexpr ::GlobalNamespace::IBeatmapLevel ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::__get__parentLevel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapLevel, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::__set__parentDifficultyBeatmapSet(::GlobalNamespace::IDifficultyBeatmapSet value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IDifficultyBeatmapSet, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IDifficultyBeatmapSet>(value));
}
constexpr ::GlobalNamespace::IDifficultyBeatmapSet ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::__get__parentDifficultyBeatmapSet() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IDifficultyBeatmapSet, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::GlobalNamespace::BeatmapDifficulty ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::get_difficulty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap>::get(),
                            "get_difficulty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDifficulty, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::get_difficultyRank()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap>::get(),
                            "get_difficultyRank",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::get_noteJumpMovementSpeed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap>::get(),
                            "get_noteJumpMovementSpeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::get_noteJumpStartBeatOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap>::get(),
                            "get_noteJumpStartBeatOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::get_environmentNameIdx()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap>::get(),
                            "get_environmentNameIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapDataBasicInfo> ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::GetBeatmapDataBasicInfoAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap>::get(),
                            "GetBeatmapDataBasicInfoAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapDataBasicInfo>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData> ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::GetBeatmapDataAsync(::GlobalNamespace::EnvironmentInfoSO environmentInfo, ::GlobalNamespace::PlayerSpecificSettings playerSpecificSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap>::get(),
                            "GetBeatmapDataAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData>, false>(const_cast<void*>(instance), ___internal_method, environmentInfo, playerSpecificSettings);
}
 ::GlobalNamespace::IBeatmapLevel ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::get_level()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap>::get(),
                            "get_level",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatmapLevel, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::IDifficultyBeatmapSet ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::get_parentDifficultyBeatmapSet()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap>::get(),
                            "get_parentDifficultyBeatmapSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IDifficultyBeatmapSet, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::SetParents(::GlobalNamespace::IBeatmapLevel parentLevel, ::GlobalNamespace::IDifficultyBeatmapSet parentDifficultyBeatmapSet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap>::get(),
                            "SetParents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmapSet>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parentLevel, parentDifficultyBeatmapSet);
}
// Ctor Parameters [CppParam { name: "parentLevel", ty: "::GlobalNamespace::IBeatmapLevel", modifiers: "", def_value: None }, CppParam { name: "difficulty", ty: "::GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: None }, CppParam { name: "difficultyRank", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "noteJumpMovementSpeed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "noteJumpStartBeatOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "environmentNameIdx", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "beatmapData", ty: "::GlobalNamespace::BeatmapDataSO", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap(::GlobalNamespace::IBeatmapLevel parentLevel, ::GlobalNamespace::BeatmapDifficulty difficulty, int32_t difficultyRank, float_t noteJumpMovementSpeed, float_t noteJumpStartBeatOffset, int32_t environmentNameIdx, ::GlobalNamespace::BeatmapDataSO beatmapData)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap>(parentLevel, difficulty, difficultyRank, noteJumpMovementSpeed, noteJumpStartBeatOffset, environmentNameIdx, beatmapData))) {}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap::_ctor(::GlobalNamespace::IBeatmapLevel parentLevel, ::GlobalNamespace::BeatmapDifficulty difficulty, int32_t difficultyRank, float_t noteJumpMovementSpeed, float_t noteJumpStartBeatOffset, int32_t environmentNameIdx, ::GlobalNamespace::BeatmapDataSO beatmapData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parentLevel, difficulty, difficultyRank, noteJumpMovementSpeed, noteJumpStartBeatOffset, environmentNameIdx, beatmapData);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result::______GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result  ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result::OK{0};
constexpr ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result  ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result::NotOwned{1};
constexpr ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result  ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result::Fail{2};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult::*)(::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result, ::GlobalNamespace::IBeatmapLevelData)>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21e8df0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "result", ty: "::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapLevelData", ty: "::GlobalNamespace::IBeatmapLevelData", modifiers: "", def_value: Some("csnull") }]
constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult(::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result result, ::GlobalNamespace::IBeatmapLevelData beatmapLevelData) noexcept : ::bs_hook::ValueTypeWrapper() {this->result = result;
this->beatmapLevelData = beatmapLevelData;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult::__set_result(::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result, 0x0>(this->__instance, std::forward<::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result>(value));
}
constexpr ::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult::__get_result() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult::__set_beatmapLevelData(::GlobalNamespace::IBeatmapLevelData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IBeatmapLevelData, 0x8>(this->__instance, std::forward<::GlobalNamespace::IBeatmapLevelData>(value));
}
constexpr ::GlobalNamespace::IBeatmapLevelData ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult::__get_beatmapLevelData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapLevelData, 0x8>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult::_ctor(::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result result, ::GlobalNamespace::IBeatmapLevelData beatmapLevelData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::______GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, result, beatmapLevelData);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68::MoveNext)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x21e8dfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21e902c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapLevelSO", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68::____GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip> __t__builder, ::System::Threading::CancellationToken cancellationToken, ::GlobalNamespace::BeatmapLevelSO __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->cancellationToken = cancellationToken;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip> ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip>, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x20>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68::__set___4__this(::GlobalNamespace::BeatmapLevelSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelSO, 0x28>(this->__instance, std::forward<::GlobalNamespace::BeatmapLevelSO>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelSO ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelSO, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip>, 0x30>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip> ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip>, 0x30>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69::MoveNext)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x21e9084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21e92b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapLevelSO", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69::____GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite> __t__builder, ::System::Threading::CancellationToken cancellationToken, ::GlobalNamespace::BeatmapLevelSO __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->cancellationToken = cancellationToken;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite> ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite>, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x20>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69::__set___4__this(::GlobalNamespace::BeatmapLevelSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelSO, 0x28>(this->__instance, std::forward<::GlobalNamespace::BeatmapLevelSO>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelSO ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelSO, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite>, 0x30>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite> ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite>, 0x30>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72::MoveNext)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x21e930c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21e95ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapLevelSO", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72::____GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> __t__builder, ::GlobalNamespace::BeatmapLevelSO __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72::__set___4__this(::GlobalNamespace::BeatmapLevelSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelSO, 0x20>(this->__instance, std::forward<::GlobalNamespace::BeatmapLevelSO>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelSO ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelSO, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>, 0x28>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>, 0x28>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_levelID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_levelID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e7800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_levelID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_songName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_songName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e7808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_songName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_songSubName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_songSubName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e7810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_songSubName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_songAuthorName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_songAuthorName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e7818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_songAuthorName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_levelAuthorName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_levelAuthorName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e7820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_levelAuthorName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_beatsPerMinute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_beatsPerMinute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e7828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_beatsPerMinute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_songTimeOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_songTimeOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e7830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_songTimeOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_shuffle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_shuffle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e7838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_shuffle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_shufflePeriod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_shufflePeriod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e7840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_shufflePeriod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_previewStartTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_previewStartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e7848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_previewStartTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_previewDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_previewDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e7850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_previewDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_coverImage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Sprite (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_coverImage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e7858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_coverImage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_environmentInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentInfoSO (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_environmentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e7860;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_environmentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_allDirectionsEnvironmentInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentInfoSO (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_allDirectionsEnvironmentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e7868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_allDirectionsEnvironmentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_environmentInfos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::EnvironmentInfoSO> (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_environmentInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e7870;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_environmentInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_difficultyBeatmapSets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet> (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_difficultyBeatmapSets)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21e7878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_difficultyBeatmapSets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_songDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_songDuration)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21e7894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_songDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_previewDifficultyBeatmapSets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet> (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_previewDifficultyBeatmapSets)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21e78b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_previewDifficultyBeatmapSets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_songPreviewAudioClip
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_songPreviewAudioClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e78cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_songPreviewAudioClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_songAudioClip
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_songAudioClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e78d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_songAudioClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::OnEnable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21e78dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::BeatmapLevelSO),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.InitData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::InitData)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x21e78f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "InitData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.GetPreviewAudioClipAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip> (::GlobalNamespace::BeatmapLevelSO::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::BeatmapLevelSO::GetPreviewAudioClipAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x21e7a64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "GetPreviewAudioClipAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.GetCoverImageAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::Sprite> (::GlobalNamespace::BeatmapLevelSO::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::BeatmapLevelSO::GetCoverImageAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x21e7b60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "GetCoverImageAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_beatmapLevelData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IBeatmapLevelData (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_beatmapLevelData)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x21e7c5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_beatmapLevelData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.GetBeatmapLevelDataAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> (::GlobalNamespace::BeatmapLevelSO::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::BeatmapLevelSO::GetBeatmapLevelDataAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x21e7cdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "GetBeatmapLevelDataAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.GetDifficultyBeatmap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IDifficultyBeatmap (::GlobalNamespace::BeatmapLevelSO::*)(::GlobalNamespace::BeatmapCharacteristicSO, ::GlobalNamespace::BeatmapDifficulty)>(&::GlobalNamespace::BeatmapLevelSO::GetDifficultyBeatmap)> {
  constexpr static std::size_t size = 0x79c;
  constexpr static std::size_t addrs = 0x21e7dd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "GetDifficultyBeatmap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.InitFull
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelSO::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::UnityEngine::AudioClip, float_t, float_t, float_t, float_t, float_t, float_t, ::UnityEngine::Sprite, ::GlobalNamespace::EnvironmentInfoSO, ::GlobalNamespace::EnvironmentInfoSO, ::ArrayW<::GlobalNamespace::EnvironmentInfoSO>, ::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet>)>(&::GlobalNamespace::BeatmapLevelSO::InitFull)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x21e8570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "InitFull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::EnvironmentInfoSO>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e85a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::IBeatmapLevel
constexpr  ::GlobalNamespace::BeatmapLevelSO::operator ::GlobalNamespace::IBeatmapLevel() const noexcept {
return ::GlobalNamespace::IBeatmapLevel(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::GlobalNamespace::IPreviewBeatmapLevel
constexpr  ::GlobalNamespace::BeatmapLevelSO::operator ::GlobalNamespace::IPreviewBeatmapLevel() const noexcept {
return ::GlobalNamespace::IPreviewBeatmapLevel(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::GlobalNamespace::IAssetSongAudioClipProvider
constexpr  ::GlobalNamespace::BeatmapLevelSO::operator ::GlobalNamespace::IAssetSongAudioClipProvider() const noexcept {
return ::GlobalNamespace::IAssetSongAudioClipProvider(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::GlobalNamespace::IAssetSongPreviewAudioClipProvider
constexpr  ::GlobalNamespace::BeatmapLevelSO::operator ::GlobalNamespace::IAssetSongPreviewAudioClipProvider() const noexcept {
return ::GlobalNamespace::IAssetSongPreviewAudioClipProvider(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapLevelSO::__set__levelID(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::BeatmapLevelSO::__get__levelID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapLevelSO::__set__songName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::BeatmapLevelSO::__get__songName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapLevelSO::__set__songSubName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::BeatmapLevelSO::__get__songSubName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapLevelSO::__set__songAuthorName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::BeatmapLevelSO::__get__songAuthorName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapLevelSO::__set__levelAuthorName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::BeatmapLevelSO::__get__levelAuthorName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapLevelSO::__set__audioClip(::UnityEngine::AudioClip value)  {
::cordl_internals::setInstanceField<::UnityEngine::AudioClip, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::AudioClip>(value));
}
constexpr ::UnityEngine::AudioClip ::GlobalNamespace::BeatmapLevelSO::__get__audioClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioClip, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapLevelSO::__set__beatsPerMinute(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BeatmapLevelSO::__get__beatsPerMinute() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapLevelSO::__set__songTimeOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BeatmapLevelSO::__get__songTimeOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapLevelSO::__set__shuffle(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BeatmapLevelSO::__get__shuffle() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapLevelSO::__set__shufflePeriod(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BeatmapLevelSO::__get__shufflePeriod() const {
return ::cordl_internals::getInstanceField<float_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapLevelSO::__set__previewStartTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BeatmapLevelSO::__get__previewStartTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapLevelSO::__set__previewDuration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BeatmapLevelSO::__get__previewDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapLevelSO::__set__coverImage(::UnityEngine::Sprite value)  {
::cordl_internals::setInstanceField<::UnityEngine::Sprite, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Sprite>(value));
}
constexpr ::UnityEngine::Sprite ::GlobalNamespace::BeatmapLevelSO::__get__coverImage() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Sprite, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapLevelSO::__set__environmentInfo(::GlobalNamespace::EnvironmentInfoSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnvironmentInfoSO, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::EnvironmentInfoSO>(value));
}
constexpr ::GlobalNamespace::EnvironmentInfoSO ::GlobalNamespace::BeatmapLevelSO::__get__environmentInfo() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentInfoSO, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapLevelSO::__set__allDirectionsEnvironmentInfo(::GlobalNamespace::EnvironmentInfoSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnvironmentInfoSO, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::EnvironmentInfoSO>(value));
}
constexpr ::GlobalNamespace::EnvironmentInfoSO ::GlobalNamespace::BeatmapLevelSO::__get__allDirectionsEnvironmentInfo() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentInfoSO, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapLevelSO::__set__environmentInfos(::ArrayW<::GlobalNamespace::EnvironmentInfoSO> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::EnvironmentInfoSO>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::EnvironmentInfoSO>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::EnvironmentInfoSO> ::GlobalNamespace::BeatmapLevelSO::__get__environmentInfos() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::EnvironmentInfoSO>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapLevelSO::__set__difficultyBeatmapSets(::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet> ::GlobalNamespace::BeatmapLevelSO::__get__difficultyBeatmapSets() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapLevelSO::__set__ignore360MovementBeatmaps(bool value)  {
::cordl_internals::setInstanceField<bool, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::BeatmapLevelSO::__get__ignore360MovementBeatmaps() const {
return ::cordl_internals::getInstanceField<bool, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapLevelSO::__set__no360MovementDifficultyBeatmapSets(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet>>(value));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet> ::GlobalNamespace::BeatmapLevelSO::__get__no360MovementDifficultyBeatmapSets() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapLevelSO::__set__previewDifficultyBeatmapSets(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet>>(value));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet> ::GlobalNamespace::BeatmapLevelSO::__get__previewDifficultyBeatmapSets() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapLevelSO::__set__no360MovementPreviewDifficultyBeatmapSets(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet>, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet>>(value));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet> ::GlobalNamespace::BeatmapLevelSO::__get__no360MovementPreviewDifficultyBeatmapSets() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet>, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapLevelSO::__set__beatmapLevelData(::GlobalNamespace::IBeatmapLevelData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IBeatmapLevelData, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IBeatmapLevelData>(value));
}
constexpr ::GlobalNamespace::IBeatmapLevelData ::GlobalNamespace::BeatmapLevelSO::__get__beatmapLevelData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapLevelData, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapLevelSO::__set__getBeatmapLevelDataResult(::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult ::GlobalNamespace::BeatmapLevelSO::__get__getBeatmapLevelDataResult() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW ::GlobalNamespace::BeatmapLevelSO::get_levelID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_levelID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::GlobalNamespace::BeatmapLevelSO::get_songName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_songName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::GlobalNamespace::BeatmapLevelSO::get_songSubName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_songSubName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::GlobalNamespace::BeatmapLevelSO::get_songAuthorName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_songAuthorName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::GlobalNamespace::BeatmapLevelSO::get_levelAuthorName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_levelAuthorName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::BeatmapLevelSO::get_beatsPerMinute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_beatsPerMinute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::BeatmapLevelSO::get_songTimeOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_songTimeOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::BeatmapLevelSO::get_shuffle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_shuffle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::BeatmapLevelSO::get_shufflePeriod()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_shufflePeriod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::BeatmapLevelSO::get_previewStartTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_previewStartTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::BeatmapLevelSO::get_previewDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_previewDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Sprite ::GlobalNamespace::BeatmapLevelSO::get_coverImage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_coverImage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Sprite, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::EnvironmentInfoSO ::GlobalNamespace::BeatmapLevelSO::get_environmentInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_environmentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentInfoSO, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::EnvironmentInfoSO ::GlobalNamespace::BeatmapLevelSO::get_allDirectionsEnvironmentInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_allDirectionsEnvironmentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentInfoSO, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::GlobalNamespace::EnvironmentInfoSO> ::GlobalNamespace::BeatmapLevelSO::get_environmentInfos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_environmentInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::EnvironmentInfoSO>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet> ::GlobalNamespace::BeatmapLevelSO::get_difficultyBeatmapSets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_difficultyBeatmapSets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet>, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::BeatmapLevelSO::get_songDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_songDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet> ::GlobalNamespace::BeatmapLevelSO::get_previewDifficultyBeatmapSets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_previewDifficultyBeatmapSets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::AudioClip ::GlobalNamespace::BeatmapLevelSO::get_songPreviewAudioClip()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_songPreviewAudioClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioClip, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::AudioClip ::GlobalNamespace::BeatmapLevelSO::get_songAudioClip()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_songAudioClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioClip, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::BeatmapLevelSO::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::BeatmapLevelSO::InitData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "InitData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip> ::GlobalNamespace::BeatmapLevelSO::GetPreviewAudioClipAsync(::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "GetPreviewAudioClipAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip>, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
 ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite> ::GlobalNamespace::BeatmapLevelSO::GetCoverImageAsync(::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "GetCoverImageAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::Sprite>, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
 ::GlobalNamespace::IBeatmapLevelData ::GlobalNamespace::BeatmapLevelSO::get_beatmapLevelData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "get_beatmapLevelData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatmapLevelData, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> ::GlobalNamespace::BeatmapLevelSO::GetBeatmapLevelDataAsync(::System::Threading::CancellationToken token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "GetBeatmapLevelDataAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>, false>(const_cast<void*>(instance), ___internal_method, token);
}
 ::GlobalNamespace::IDifficultyBeatmap ::GlobalNamespace::BeatmapLevelSO::GetDifficultyBeatmap(::GlobalNamespace::BeatmapCharacteristicSO characteristic, ::GlobalNamespace::BeatmapDifficulty difficulty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "GetDifficultyBeatmap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IDifficultyBeatmap, false>(const_cast<void*>(instance), ___internal_method, characteristic, difficulty);
}
 void ::GlobalNamespace::BeatmapLevelSO::InitFull(::StringW levelID, ::StringW songName, ::StringW songSubName, ::StringW songAuthorName, ::StringW levelAuthorName, ::UnityEngine::AudioClip audioClip, float_t beatsPerMinute, float_t songTimeOffset, float_t shuffle, float_t shufflePeriod, float_t previewStartTime, float_t previewDuration, ::UnityEngine::Sprite coverImage, ::GlobalNamespace::EnvironmentInfoSO environmentInfo, ::GlobalNamespace::EnvironmentInfoSO allDirectionsEnvironmentInfo, ::ArrayW<::GlobalNamespace::EnvironmentInfoSO> environmentInfos, ::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet> difficultyBeatmapSets)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            "InitFull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::EnvironmentInfoSO>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, levelID, songName, songSubName, songAuthorName, levelAuthorName, audioClip, beatsPerMinute, songTimeOffset, shuffle, shufflePeriod, previewStartTime, previewDuration, coverImage, environmentInfo, allDirectionsEnvironmentInfo, environmentInfos, difficultyBeatmapSets);
}
// Ctor Parameters []
 ::GlobalNamespace::BeatmapLevelSO::BeatmapLevelSO()  : ::GlobalNamespace::PersistentScriptableObject(THROW_UNLESS(::il2cpp_utils::New<BeatmapLevelSO>())) {}
 void ::GlobalNamespace::BeatmapLevelSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
