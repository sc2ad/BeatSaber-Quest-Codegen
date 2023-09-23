#pragma once
#include "UnityEngine/InputSystem/Utilities/zzzz__TakeNObservable_1_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
#include "System/zzzz__IObservable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take::*)(UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>, System::IObserver_1<TValue>)>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IObserver_1<TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take.OnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take::*)()>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take::OnCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take>::get(),
                            "OnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take.OnError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take::*)(System::Exception)>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take::OnError)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take>::get(),
                            "OnError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take.OnNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take::*)(TValue)>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take::OnNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take>::get(),
                            "OnNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IObserver_1<TValue>
constexpr  UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take::operator System::IObserver_1<TValue>() const noexcept {
return System::IObserver_1<TValue>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take::__set_m_Observer(System::IObserver_1<TValue> value)  {
::cordl_internals::setInstanceField<System::IObserver_1<TValue>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IObserver_1<TValue>>(value));
}
constexpr System::IObserver_1<TValue> UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take::__get_m_Observer() const {
return ::cordl_internals::getInstanceField<System::IObserver_1<TValue>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take::__set_m_Remaining(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take::__get_m_Remaining() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "observable", ty: "UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>", modifiers: "", def_value: None }, CppParam { name: "observer", ty: "System::IObserver_1<TValue>", modifiers: "", def_value: None }]
 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take(UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue> observable, System::IObserver_1<TValue> observer)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take>(observable, observer))) {}
 void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take::_ctor(UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue> observable, System::IObserver_1<TValue> observer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IObserver_1<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, observable, observer);
}
 void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take::OnCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take>::get(),
                            "OnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take::OnError(System::Exception error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take>::get(),
                            "OnError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, error);
}
 void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take::OnNext(TValue evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take>::get(),
                            "OnNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::TakeNObservable_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Utilities::TakeNObservable_1::*)(System::IObservable_1<TValue>, int32_t)>(&UnityEngine::InputSystem::Utilities::TakeNObservable_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::TakeNObservable_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IObservable_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::TakeNObservable_1.Subscribe
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IDisposable (UnityEngine::InputSystem::Utilities::TakeNObservable_1::*)(System::IObserver_1<TValue>)>(&UnityEngine::InputSystem::Utilities::TakeNObservable_1::Subscribe)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::TakeNObservable_1>::get(),
                            "Subscribe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IObserver_1<TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IObservable_1<TValue>
constexpr  UnityEngine::InputSystem::Utilities::TakeNObservable_1::operator System::IObservable_1<TValue>() const noexcept {
return System::IObservable_1<TValue>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Utilities::TakeNObservable_1::__set_m_Source(System::IObservable_1<TValue> value)  {
::cordl_internals::setInstanceField<System::IObservable_1<TValue>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IObservable_1<TValue>>(value));
}
constexpr System::IObservable_1<TValue> UnityEngine::InputSystem::Utilities::TakeNObservable_1::__get_m_Source() const {
return ::cordl_internals::getInstanceField<System::IObservable_1<TValue>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Utilities::TakeNObservable_1::__set_m_Count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Utilities::TakeNObservable_1::__get_m_Count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "source", ty: "System::IObservable_1<TValue>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }]
 UnityEngine::InputSystem::Utilities::TakeNObservable_1::TakeNObservable_1(System::IObservable_1<TValue> source, int32_t count)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<TakeNObservable_1>(source, count))) {}
 void UnityEngine::InputSystem::Utilities::TakeNObservable_1::_ctor(System::IObservable_1<TValue> source, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::TakeNObservable_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IObservable_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, source, count);
}
 System::IDisposable UnityEngine::InputSystem::Utilities::TakeNObservable_1::Subscribe(System::IObserver_1<TValue> observer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::TakeNObservable_1>::get(),
                            "Subscribe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IObserver_1<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IDisposable, false>(const_cast<void*>(instance), ___internal_method, observer);
}
