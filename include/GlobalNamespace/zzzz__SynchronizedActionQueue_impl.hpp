#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__SynchronizedActionQueue_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SynchronizedActionQueue__SynchronizedAction._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__SynchronizedActionQueue__SynchronizedAction::*)(float_t, System::Action)>(&GlobalNamespace::GlobalNamespace__SynchronizedActionQueue__SynchronizedAction::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdcc460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SynchronizedActionQueue__SynchronizedAction>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "action", ty: "System::Action", modifiers: "", def_value: Some("csnull") }]
constexpr GlobalNamespace::GlobalNamespace__SynchronizedActionQueue__SynchronizedAction::GlobalNamespace__SynchronizedActionQueue__SynchronizedAction(float_t time, System::Action action) noexcept : ::bs_hook::ValueTypeWrapper() {this->time = time;
this->action = action;
}
constexpr void GlobalNamespace::GlobalNamespace__SynchronizedActionQueue__SynchronizedAction::__set_time(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__SynchronizedActionQueue__SynchronizedAction::__get_time() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SynchronizedActionQueue__SynchronizedAction::__set_action(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x8>(this->__instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::GlobalNamespace__SynchronizedActionQueue__SynchronizedAction::__get_action() const {
return ::cordl_internals::getInstanceField<System::Action, 0x8>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__SynchronizedActionQueue__SynchronizedAction::_ctor(float_t time, System::Action action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SynchronizedActionQueue__SynchronizedAction>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, time, action);
}
//  Writing Method size for method: GlobalNamespace::SynchronizedActionQueue.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SynchronizedActionQueue::*)()>(&GlobalNamespace::SynchronizedActionQueue::Clear)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xdcc334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SynchronizedActionQueue>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SynchronizedActionQueue.EnqueueAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SynchronizedActionQueue::*)(float_t, System::Action)>(&GlobalNamespace::SynchronizedActionQueue::EnqueueAction)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xdcc3a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SynchronizedActionQueue>::get(),
                            "EnqueueAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SynchronizedActionQueue.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SynchronizedActionQueue::*)(float_t)>(&GlobalNamespace::SynchronizedActionQueue::Update)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xdcc46c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SynchronizedActionQueue>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SynchronizedActionQueue._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SynchronizedActionQueue::*)()>(&GlobalNamespace::SynchronizedActionQueue::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xdcc580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SynchronizedActionQueue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SynchronizedActionQueue::__set__synchronizedActionQueue(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__SynchronizedActionQueue__SynchronizedAction> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__SynchronizedActionQueue__SynchronizedAction>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__SynchronizedActionQueue__SynchronizedAction>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__SynchronizedActionQueue__SynchronizedAction> GlobalNamespace::SynchronizedActionQueue::__get__synchronizedActionQueue() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__SynchronizedActionQueue__SynchronizedAction>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::SynchronizedActionQueue::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SynchronizedActionQueue>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::SynchronizedActionQueue::EnqueueAction(float_t time, System::Action action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SynchronizedActionQueue>::get(),
                            "EnqueueAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, time, action);
}
 void GlobalNamespace::SynchronizedActionQueue::Update(float_t time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SynchronizedActionQueue>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, time);
}
// Ctor Parameters []
 GlobalNamespace::SynchronizedActionQueue::SynchronizedActionQueue()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SynchronizedActionQueue>())) {}
 void GlobalNamespace::SynchronizedActionQueue::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SynchronizedActionQueue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
