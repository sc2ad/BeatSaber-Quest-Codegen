#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__SceneInfo_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10::*)()>(&GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10::MoveNext)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1f82cac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1f82efc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::ScenesTransitionSetupDataSO", modifiers: "", def_value: Some("csnull") }, CppParam { name: "runAsync", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10::GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::ScenesTransitionSetupDataSO __4__this, bool runAsync, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->runAsync = runAsync;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10::__set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10::__set___4__this(GlobalNamespace::ScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ScenesTransitionSetupDataSO, 0x28>(this->__instance, std::forward<GlobalNamespace::ScenesTransitionSetupDataSO>(value));
}
constexpr GlobalNamespace::ScenesTransitionSetupDataSO GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ScenesTransitionSetupDataSO, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10::__set_runAsync(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->__instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10::__get_runAsync() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x38>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x38>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d::*)()>(&GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1f82f08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1f83088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::ScenesTransitionSetupDataSO", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d::GlobalNamespace__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, GlobalNamespace::ScenesTransitionSetupDataSO __4__this, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d::__set___4__this(GlobalNamespace::ScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ScenesTransitionSetupDataSO, 0x20>(this->__instance, std::forward<GlobalNamespace::ScenesTransitionSetupDataSO>(value));
}
constexpr GlobalNamespace::ScenesTransitionSetupDataSO GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ScenesTransitionSetupDataSO, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x28>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x28>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::ScenesTransitionSetupDataSO.get_scenes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<GlobalNamespace::SceneInfo> (GlobalNamespace::ScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::ScenesTransitionSetupDataSO::get_scenes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f82b38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScenesTransitionSetupDataSO>::get(),
                            "get_scenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ScenesTransitionSetupDataSO.set_scenes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScenesTransitionSetupDataSO::*)(::ArrayW<GlobalNamespace::SceneInfo>)>(&GlobalNamespace::ScenesTransitionSetupDataSO::set_scenes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f82b40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScenesTransitionSetupDataSO>::get(),
                            "set_scenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<GlobalNamespace::SceneInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ScenesTransitionSetupDataSO.get_beforeScenesWillBeActivatedTaskIsComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::ScenesTransitionSetupDataSO::get_beforeScenesWillBeActivatedTaskIsComplete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f82b48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScenesTransitionSetupDataSO>::get(),
                            "get_beforeScenesWillBeActivatedTaskIsComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ScenesTransitionSetupDataSO.set_beforeScenesWillBeActivatedTaskIsComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScenesTransitionSetupDataSO::*)(bool)>(&GlobalNamespace::ScenesTransitionSetupDataSO::set_beforeScenesWillBeActivatedTaskIsComplete)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1f82b50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScenesTransitionSetupDataSO>::get(),
                            "set_beforeScenesWillBeActivatedTaskIsComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ScenesTransitionSetupDataSO.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScenesTransitionSetupDataSO::*)(::ArrayW<GlobalNamespace::SceneInfo>, ::ArrayW<GlobalNamespace::SceneSetupData>)>(&GlobalNamespace::ScenesTransitionSetupDataSO::Init)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1f82a14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScenesTransitionSetupDataSO>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<GlobalNamespace::SceneInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<GlobalNamespace::SceneSetupData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ScenesTransitionSetupDataSO.BeforeScenesWillBeActivated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScenesTransitionSetupDataSO::*)(bool)>(&GlobalNamespace::ScenesTransitionSetupDataSO::BeforeScenesWillBeActivated)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1f827f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScenesTransitionSetupDataSO>::get(),
                            "BeforeScenesWillBeActivated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ScenesTransitionSetupDataSO.BeforeScenesWillBeActivatedAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (GlobalNamespace::ScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::ScenesTransitionSetupDataSO::BeforeScenesWillBeActivatedAsync)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1f82b5c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::ScenesTransitionSetupDataSO),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScenesTransitionSetupDataSO>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ScenesTransitionSetupDataSO.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScenesTransitionSetupDataSO::*)(Zenject::DiContainer)>(&GlobalNamespace::ScenesTransitionSetupDataSO::InstallBindings)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x1f81020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScenesTransitionSetupDataSO>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ScenesTransitionSetupDataSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::ScenesTransitionSetupDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f82a28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScenesTransitionSetupDataSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ScenesTransitionSetupDataSO._BeforeScenesWillBeActivated_b__10_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (GlobalNamespace::ScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::ScenesTransitionSetupDataSO::_BeforeScenesWillBeActivated_b__10_0)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x1f82be4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScenesTransitionSetupDataSO>::get(),
                            "<BeforeScenesWillBeActivated>b__10_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ScenesTransitionSetupDataSO::__set__scenes_k__BackingField(::ArrayW<GlobalNamespace::SceneInfo> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::SceneInfo>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::SceneInfo>>(value));
}
constexpr ::ArrayW<GlobalNamespace::SceneInfo> GlobalNamespace::ScenesTransitionSetupDataSO::__get__scenes_k__BackingField() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::SceneInfo>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ScenesTransitionSetupDataSO::__set__sceneSetupDataArray(::ArrayW<GlobalNamespace::SceneSetupData> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::SceneSetupData>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::SceneSetupData>>(value));
}
constexpr ::ArrayW<GlobalNamespace::SceneSetupData> GlobalNamespace::ScenesTransitionSetupDataSO::__get__sceneSetupDataArray() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::SceneSetupData>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ScenesTransitionSetupDataSO::__set__beforeScenesWillBeActivatedTaskIsComplete_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::ScenesTransitionSetupDataSO::__get__beforeScenesWillBeActivatedTaskIsComplete_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<GlobalNamespace::SceneInfo> GlobalNamespace::ScenesTransitionSetupDataSO::get_scenes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScenesTransitionSetupDataSO>::get(),
                            "get_scenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<GlobalNamespace::SceneInfo>, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::ScenesTransitionSetupDataSO::set_scenes(::ArrayW<GlobalNamespace::SceneInfo> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScenesTransitionSetupDataSO>::get(),
                            "set_scenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<GlobalNamespace::SceneInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool GlobalNamespace::ScenesTransitionSetupDataSO::get_beforeScenesWillBeActivatedTaskIsComplete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScenesTransitionSetupDataSO>::get(),
                            "get_beforeScenesWillBeActivatedTaskIsComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::ScenesTransitionSetupDataSO::set_beforeScenesWillBeActivatedTaskIsComplete(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScenesTransitionSetupDataSO>::get(),
                            "set_beforeScenesWillBeActivatedTaskIsComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::ScenesTransitionSetupDataSO::Init(::ArrayW<GlobalNamespace::SceneInfo> scenes, ::ArrayW<GlobalNamespace::SceneSetupData> sceneSetupData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScenesTransitionSetupDataSO>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<GlobalNamespace::SceneInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<GlobalNamespace::SceneSetupData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, scenes, sceneSetupData);
}
 void GlobalNamespace::ScenesTransitionSetupDataSO::BeforeScenesWillBeActivated(bool runAsync)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScenesTransitionSetupDataSO>::get(),
                            "BeforeScenesWillBeActivated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, runAsync);
}
 System::Threading::Tasks::Task GlobalNamespace::ScenesTransitionSetupDataSO::BeforeScenesWillBeActivatedAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScenesTransitionSetupDataSO>::get(),
                            "BeforeScenesWillBeActivatedAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::ScenesTransitionSetupDataSO::InstallBindings(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScenesTransitionSetupDataSO>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container);
}
// Ctor Parameters []
 GlobalNamespace::ScenesTransitionSetupDataSO::ScenesTransitionSetupDataSO()  : GlobalNamespace::PersistentScriptableObject(THROW_UNLESS(::il2cpp_utils::New<ScenesTransitionSetupDataSO>())) {}
 void GlobalNamespace::ScenesTransitionSetupDataSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScenesTransitionSetupDataSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task GlobalNamespace::ScenesTransitionSetupDataSO::_BeforeScenesWillBeActivated_b__10_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ScenesTransitionSetupDataSO>::get(),
                            "<BeforeScenesWillBeActivated>b__10_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method);
}
