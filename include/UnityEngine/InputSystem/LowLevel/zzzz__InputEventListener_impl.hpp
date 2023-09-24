#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventListener_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventListener_def.hpp"
#include "System/zzzz__IObservable_1_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState::*)()>(&UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2958a18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState.__ctor_b__2_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState::*)(UnityEngine::InputSystem::LowLevel::InputEventPtr, UnityEngine::InputSystem::InputDevice)>(&UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState::__ctor_b__2_0)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2958aa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState>::get(),
                            "<.ctor>b__2_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState::__set_observers(UnityEngine::InputSystem::Utilities::InlinedArray_1<System::IObserver_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>> value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::InlinedArray_1<System::IObserver_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Utilities::InlinedArray_1<System::IObserver_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>>>(value));
}
constexpr UnityEngine::InputSystem::Utilities::InlinedArray_1<System::IObserver_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>> UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState::__get_observers() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::InlinedArray_1<System::IObserver_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState::__set_onEventDelegate(System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice> value)  {
::cordl_internals::setInstanceField<System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice>>(value));
}
constexpr System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice> UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState::__get_onEventDelegate() const {
return ::cordl_internals::getInstanceField<System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState::New_ctor()  {
UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState>())};
return o;
}
 void UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState::__ctor_b__2_0(UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, UnityEngine::InputSystem::InputDevice device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState>::get(),
                            "<.ctor>b__2_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventPtr, device);
}
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver::*)()>(&UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver::Dispose)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2958b9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver::*)()>(&UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2958aa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver::__set_observer(System::IObserver_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> value)  {
::cordl_internals::setInstanceField<System::IObserver_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IObserver_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>>(value));
}
constexpr System::IObserver_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver::__get_observer() const {
return ::cordl_internals::getInstanceField<System::IObserver_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver::New_ctor()  {
UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver>())};
return o;
}
 void UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::InputEventListener.op_Addition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::LowLevel::InputEventListener (*)(UnityEngine::InputSystem::LowLevel::InputEventListener, System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice>)>(&UnityEngine::InputSystem::LowLevel::InputEventListener::op_Addition)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x295271c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::InputEventListener>::get(),
                            "op_Addition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventListener>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::InputEventListener.op_Subtraction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::LowLevel::InputEventListener (*)(UnityEngine::InputSystem::LowLevel::InputEventListener, System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice>)>(&UnityEngine::InputSystem::LowLevel::InputEventListener::op_Subtraction)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2952a00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::InputEventListener>::get(),
                            "op_Subtraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventListener>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::InputEventListener.Subscribe
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IDisposable (UnityEngine::InputSystem::LowLevel::InputEventListener::*)(System::IObserver_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>)>(&UnityEngine::InputSystem::LowLevel::InputEventListener::Subscribe)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x29588bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::InputEventListener>::get(),
                            "Subscribe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IObserver_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>
constexpr  UnityEngine::InputSystem::LowLevel::InputEventListener::operator System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>() const {
return System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>(::cordl_internals::Box(this).convert());
}
 void UnityEngine::InputSystem::LowLevel::InputEventListener::__set_s_ObserverState(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState value)  {
::cordl_internals::setStaticField<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState, "s_ObserverState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::InputEventListener>::get>(std::forward<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState>(value));
}
 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState UnityEngine::InputSystem::LowLevel::InputEventListener::__get_s_ObserverState()  {
return ::cordl_internals::getStaticField<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState, "s_ObserverState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::InputEventListener>::get>();
}
 UnityEngine::InputSystem::LowLevel::InputEventListener UnityEngine::InputSystem::LowLevel::InputEventListener::op_Addition(UnityEngine::InputSystem::LowLevel::InputEventListener _, System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::InputEventListener>::get(),
                            "op_Addition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventListener>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::LowLevel::InputEventListener, false>(nullptr, ___internal_method, _, callback);
}
 UnityEngine::InputSystem::LowLevel::InputEventListener UnityEngine::InputSystem::LowLevel::InputEventListener::op_Subtraction(UnityEngine::InputSystem::LowLevel::InputEventListener _, System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::InputEventListener>::get(),
                            "op_Subtraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventListener>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::LowLevel::InputEventListener, false>(nullptr, ___internal_method, _, callback);
}
 System::IDisposable UnityEngine::InputSystem::LowLevel::InputEventListener::Subscribe(System::IObserver_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> observer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::InputEventListener>::get(),
                            "Subscribe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IObserver_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IDisposable, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, observer);
}
