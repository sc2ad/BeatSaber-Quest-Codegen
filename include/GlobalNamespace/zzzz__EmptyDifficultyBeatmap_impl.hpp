#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__EmptyDifficultyBeatmap_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmapSet_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapDataBasicInfo_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23::*)()>(&GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23::MoveNext)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x21eac8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21eaeac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapDataBasicInfo>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::EmptyDifficultyBeatmap", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapData>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapDataBasicInfo> __t__builder, GlobalNamespace::EmptyDifficultyBeatmap __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapData> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapDataBasicInfo> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapDataBasicInfo>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapDataBasicInfo>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapDataBasicInfo> GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapDataBasicInfo>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23::__set___4__this(GlobalNamespace::EmptyDifficultyBeatmap value)  {
::cordl_internals::setInstanceField<GlobalNamespace::EmptyDifficultyBeatmap, 0x20>(this->__instance, std::forward<GlobalNamespace::EmptyDifficultyBeatmap>(value));
}
constexpr GlobalNamespace::EmptyDifficultyBeatmap GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::EmptyDifficultyBeatmap, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapData> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapData>, 0x28>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapData>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapData> GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapData>, 0x28>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24::*)()>(&GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24::MoveNext)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x21eaf04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21eb124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IReadonlyBeatmapData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::EmptyDifficultyBeatmap", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IReadonlyBeatmapData> __t__builder, GlobalNamespace::EmptyDifficultyBeatmap __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IReadonlyBeatmapData> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IReadonlyBeatmapData>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IReadonlyBeatmapData>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IReadonlyBeatmapData> GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IReadonlyBeatmapData>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24::__set___4__this(GlobalNamespace::EmptyDifficultyBeatmap value)  {
::cordl_internals::setInstanceField<GlobalNamespace::EmptyDifficultyBeatmap, 0x20>(this->__instance, std::forward<GlobalNamespace::EmptyDifficultyBeatmap>(value));
}
constexpr GlobalNamespace::EmptyDifficultyBeatmap GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::EmptyDifficultyBeatmap, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData>, 0x28>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData>, 0x28>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::EmptyDifficultyBeatmap.get_level
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IBeatmapLevel (GlobalNamespace::EmptyDifficultyBeatmap::*)()>(&GlobalNamespace::EmptyDifficultyBeatmap::get_level)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ea9d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EmptyDifficultyBeatmap>::get(),
                            "get_level",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EmptyDifficultyBeatmap.get_parentDifficultyBeatmapSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IDifficultyBeatmapSet (GlobalNamespace::EmptyDifficultyBeatmap::*)()>(&GlobalNamespace::EmptyDifficultyBeatmap::get_parentDifficultyBeatmapSet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ea9d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EmptyDifficultyBeatmap>::get(),
                            "get_parentDifficultyBeatmapSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EmptyDifficultyBeatmap.get_difficulty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapDifficulty (GlobalNamespace::EmptyDifficultyBeatmap::*)()>(&GlobalNamespace::EmptyDifficultyBeatmap::get_difficulty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ea9e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EmptyDifficultyBeatmap>::get(),
                            "get_difficulty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EmptyDifficultyBeatmap.get_difficultyRank
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::EmptyDifficultyBeatmap::*)()>(&GlobalNamespace::EmptyDifficultyBeatmap::get_difficultyRank)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ea9e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EmptyDifficultyBeatmap>::get(),
                            "get_difficultyRank",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EmptyDifficultyBeatmap.get_noteJumpMovementSpeed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::EmptyDifficultyBeatmap::*)()>(&GlobalNamespace::EmptyDifficultyBeatmap::get_noteJumpMovementSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ea9f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EmptyDifficultyBeatmap>::get(),
                            "get_noteJumpMovementSpeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EmptyDifficultyBeatmap.get_noteJumpStartBeatOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::EmptyDifficultyBeatmap::*)()>(&GlobalNamespace::EmptyDifficultyBeatmap::get_noteJumpStartBeatOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ea9f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EmptyDifficultyBeatmap>::get(),
                            "get_noteJumpStartBeatOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EmptyDifficultyBeatmap.get_environmentNameIdx
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::EmptyDifficultyBeatmap::*)()>(&GlobalNamespace::EmptyDifficultyBeatmap::get_environmentNameIdx)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21eaa00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EmptyDifficultyBeatmap>::get(),
                            "get_environmentNameIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EmptyDifficultyBeatmap.get_beatmapDataBasicInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IBeatmapDataBasicInfo (GlobalNamespace::EmptyDifficultyBeatmap::*)()>(&GlobalNamespace::EmptyDifficultyBeatmap::get_beatmapDataBasicInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21eaa08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EmptyDifficultyBeatmap>::get(),
                            "get_beatmapDataBasicInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EmptyDifficultyBeatmap.GetBeatmapDataBasicInfoAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::IBeatmapDataBasicInfo> (GlobalNamespace::EmptyDifficultyBeatmap::*)()>(&GlobalNamespace::EmptyDifficultyBeatmap::GetBeatmapDataBasicInfoAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x21eaa10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EmptyDifficultyBeatmap>::get(),
                            "GetBeatmapDataBasicInfoAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EmptyDifficultyBeatmap.GetBeatmapDataAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::IReadonlyBeatmapData> (GlobalNamespace::EmptyDifficultyBeatmap::*)(GlobalNamespace::EnvironmentInfoSO, GlobalNamespace::PlayerSpecificSettings)>(&GlobalNamespace::EmptyDifficultyBeatmap::GetBeatmapDataAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x21eab00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EmptyDifficultyBeatmap>::get(),
                            "GetBeatmapDataAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EnvironmentInfoSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettings>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EmptyDifficultyBeatmap._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EmptyDifficultyBeatmap::*)()>(&GlobalNamespace::EmptyDifficultyBeatmap::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21eabf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EmptyDifficultyBeatmap>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IDifficultyBeatmap
constexpr  GlobalNamespace::EmptyDifficultyBeatmap::operator GlobalNamespace::IDifficultyBeatmap() const noexcept {
return GlobalNamespace::IDifficultyBeatmap(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EmptyDifficultyBeatmap::__set__level_k__BackingField(GlobalNamespace::IBeatmapLevel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IBeatmapLevel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IBeatmapLevel>(value));
}
constexpr GlobalNamespace::IBeatmapLevel GlobalNamespace::EmptyDifficultyBeatmap::__get__level_k__BackingField() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IBeatmapLevel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EmptyDifficultyBeatmap::__set__parentDifficultyBeatmapSet_k__BackingField(GlobalNamespace::IDifficultyBeatmapSet value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IDifficultyBeatmapSet, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IDifficultyBeatmapSet>(value));
}
constexpr GlobalNamespace::IDifficultyBeatmapSet GlobalNamespace::EmptyDifficultyBeatmap::__get__parentDifficultyBeatmapSet_k__BackingField() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IDifficultyBeatmapSet, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EmptyDifficultyBeatmap::__set__difficulty_k__BackingField(GlobalNamespace::BeatmapDifficulty value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapDifficulty, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapDifficulty>(value));
}
constexpr GlobalNamespace::BeatmapDifficulty GlobalNamespace::EmptyDifficultyBeatmap::__get__difficulty_k__BackingField() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapDifficulty, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EmptyDifficultyBeatmap::__set__difficultyRank_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::EmptyDifficultyBeatmap::__get__difficultyRank_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EmptyDifficultyBeatmap::__set__noteJumpMovementSpeed_k__BackingField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::EmptyDifficultyBeatmap::__get__noteJumpMovementSpeed_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EmptyDifficultyBeatmap::__set__noteJumpStartBeatOffset_k__BackingField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::EmptyDifficultyBeatmap::__get__noteJumpStartBeatOffset_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EmptyDifficultyBeatmap::__set__environmentNameIdx_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::EmptyDifficultyBeatmap::__get__environmentNameIdx_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EmptyDifficultyBeatmap::__set__beatmapData(GlobalNamespace::BeatmapData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapData, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapData>(value));
}
constexpr GlobalNamespace::BeatmapData GlobalNamespace::EmptyDifficultyBeatmap::__get__beatmapData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapData, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::IBeatmapLevel GlobalNamespace::EmptyDifficultyBeatmap::get_level()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EmptyDifficultyBeatmap>::get(),
                            "get_level",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IBeatmapLevel, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::IDifficultyBeatmapSet GlobalNamespace::EmptyDifficultyBeatmap::get_parentDifficultyBeatmapSet()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EmptyDifficultyBeatmap>::get(),
                            "get_parentDifficultyBeatmapSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IDifficultyBeatmapSet, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::BeatmapDifficulty GlobalNamespace::EmptyDifficultyBeatmap::get_difficulty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EmptyDifficultyBeatmap>::get(),
                            "get_difficulty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::BeatmapDifficulty, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t GlobalNamespace::EmptyDifficultyBeatmap::get_difficultyRank()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EmptyDifficultyBeatmap>::get(),
                            "get_difficultyRank",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::EmptyDifficultyBeatmap::get_noteJumpMovementSpeed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EmptyDifficultyBeatmap>::get(),
                            "get_noteJumpMovementSpeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::EmptyDifficultyBeatmap::get_noteJumpStartBeatOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EmptyDifficultyBeatmap>::get(),
                            "get_noteJumpStartBeatOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t GlobalNamespace::EmptyDifficultyBeatmap::get_environmentNameIdx()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EmptyDifficultyBeatmap>::get(),
                            "get_environmentNameIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::IBeatmapDataBasicInfo GlobalNamespace::EmptyDifficultyBeatmap::get_beatmapDataBasicInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EmptyDifficultyBeatmap>::get(),
                            "get_beatmapDataBasicInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IBeatmapDataBasicInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::IBeatmapDataBasicInfo> GlobalNamespace::EmptyDifficultyBeatmap::GetBeatmapDataBasicInfoAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EmptyDifficultyBeatmap>::get(),
                            "GetBeatmapDataBasicInfoAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::IBeatmapDataBasicInfo>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::IReadonlyBeatmapData> GlobalNamespace::EmptyDifficultyBeatmap::GetBeatmapDataAsync(GlobalNamespace::EnvironmentInfoSO environmentInfo, GlobalNamespace::PlayerSpecificSettings playerSpecificSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EmptyDifficultyBeatmap>::get(),
                            "GetBeatmapDataAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EnvironmentInfoSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::IReadonlyBeatmapData>, false>(const_cast<void*>(instance), ___internal_method, environmentInfo, playerSpecificSettings);
}
// Ctor Parameters []
 GlobalNamespace::EmptyDifficultyBeatmap::EmptyDifficultyBeatmap()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<EmptyDifficultyBeatmap>())) {}
 void GlobalNamespace::EmptyDifficultyBeatmap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EmptyDifficultyBeatmap>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
