#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__LightmappingSceneSetup_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeSO_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelNoTransitionInstallerData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d::*)()>(&GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d::MoveNext)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x21b616c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21b6418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0 __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d::__set___4__this(GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0 value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0, 0x20>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0>(value));
}
constexpr GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0 GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData>, 0x28>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData>, 0x28>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0::*)()>(&GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b6094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0._InstallBindings_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0::*)()>(&GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0::_InstallBindings_b__0)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x21b60a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0>::get(),
                            "<InstallBindings>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0::__set___4__this(GlobalNamespace::LightmappingSceneSetup value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LightmappingSceneSetup, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LightmappingSceneSetup>(value));
}
constexpr GlobalNamespace::LightmappingSceneSetup GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LightmappingSceneSetup, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0::__set_beatmapData(GlobalNamespace::IReadonlyBeatmapData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IReadonlyBeatmapData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IReadonlyBeatmapData>(value));
}
constexpr GlobalNamespace::IReadonlyBeatmapData GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0::__get_beatmapData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IReadonlyBeatmapData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0>())) {}
 void GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0::_InstallBindings_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0>::get(),
                            "<InstallBindings>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::LightmappingSceneSetup.get_colorScheme
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ColorSchemeSO (GlobalNamespace::LightmappingSceneSetup::*)()>(&GlobalNamespace::LightmappingSceneSetup::get_colorScheme)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b5374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmappingSceneSetup>::get(),
                            "get_colorScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightmappingSceneSetup.set_colorScheme
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightmappingSceneSetup::*)(GlobalNamespace::ColorSchemeSO)>(&GlobalNamespace::LightmappingSceneSetup::set_colorScheme)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b537c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmappingSceneSetup>::get(),
                            "set_colorScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorSchemeSO>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightmappingSceneSetup.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightmappingSceneSetup::*)()>(&GlobalNamespace::LightmappingSceneSetup::InstallBindings)> {
  constexpr static std::size_t size = 0xd10;
  constexpr static std::size_t addrs = 0x21b5384;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::LightmappingSceneSetup),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmappingSceneSetup>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightmappingSceneSetup._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightmappingSceneSetup::*)()>(&GlobalNamespace::LightmappingSceneSetup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b609c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmappingSceneSetup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LightmappingSceneSetup::__set__beatmapLevel(GlobalNamespace::BeatmapLevelSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapLevelSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapLevelSO>(value));
}
constexpr GlobalNamespace::BeatmapLevelSO GlobalNamespace::LightmappingSceneSetup::__get__beatmapLevel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapLevelSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightmappingSceneSetup::__set__beatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapCharacteristicSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapCharacteristicSO>(value));
}
constexpr GlobalNamespace::BeatmapCharacteristicSO GlobalNamespace::LightmappingSceneSetup::__get__beatmapCharacteristic() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapCharacteristicSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightmappingSceneSetup::__set__beatmapDifficulty(GlobalNamespace::BeatmapDifficulty value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapDifficulty, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapDifficulty>(value));
}
constexpr GlobalNamespace::BeatmapDifficulty GlobalNamespace::LightmappingSceneSetup::__get__beatmapDifficulty() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapDifficulty, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightmappingSceneSetup::__set__colorScheme(GlobalNamespace::ColorSchemeSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ColorSchemeSO, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ColorSchemeSO>(value));
}
constexpr GlobalNamespace::ColorSchemeSO GlobalNamespace::LightmappingSceneSetup::__get__colorScheme() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ColorSchemeSO, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightmappingSceneSetup::__set__standardLevelNoTransitionInstallerData(GlobalNamespace::StandardLevelNoTransitionInstallerData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::StandardLevelNoTransitionInstallerData, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::StandardLevelNoTransitionInstallerData>(value));
}
constexpr GlobalNamespace::StandardLevelNoTransitionInstallerData GlobalNamespace::LightmappingSceneSetup::__get__standardLevelNoTransitionInstallerData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::StandardLevelNoTransitionInstallerData, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::ColorSchemeSO GlobalNamespace::LightmappingSceneSetup::get_colorScheme()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmappingSceneSetup>::get(),
                            "get_colorScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::ColorSchemeSO, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LightmappingSceneSetup::set_colorScheme(GlobalNamespace::ColorSchemeSO value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmappingSceneSetup>::get(),
                            "set_colorScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorSchemeSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LightmappingSceneSetup::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmappingSceneSetup>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::LightmappingSceneSetup::LightmappingSceneSetup()  : Zenject::MonoInstaller(THROW_UNLESS(::il2cpp_utils::New<LightmappingSceneSetup>())) {}
 void GlobalNamespace::LightmappingSceneSetup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmappingSceneSetup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
