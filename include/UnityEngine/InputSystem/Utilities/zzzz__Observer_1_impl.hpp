#pragma once
#include "UnityEngine/InputSystem/Utilities/zzzz__Observer_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::Observer_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Utilities::Observer_1::*)(System::Action_1<TValue>, System::Action)>(&UnityEngine::InputSystem::Utilities::Observer_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::Observer_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::Observer_1.OnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Utilities::Observer_1::*)()>(&UnityEngine::InputSystem::Utilities::Observer_1::OnCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::Observer_1>::get(),
                            "OnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::Observer_1.OnError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Utilities::Observer_1::*)(System::Exception)>(&UnityEngine::InputSystem::Utilities::Observer_1::OnError)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::Observer_1>::get(),
                            "OnError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::Observer_1.OnNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Utilities::Observer_1::*)(TValue)>(&UnityEngine::InputSystem::Utilities::Observer_1::OnNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::Observer_1>::get(),
                            "OnNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IObserver_1<TValue>
constexpr  UnityEngine::InputSystem::Utilities::Observer_1::operator System::IObserver_1<TValue>() const noexcept {
return System::IObserver_1<TValue>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Utilities::Observer_1::__set_m_OnNext(System::Action_1<TValue> value)  {
::cordl_internals::setInstanceField<System::Action_1<TValue>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<TValue>>(value));
}
constexpr System::Action_1<TValue> UnityEngine::InputSystem::Utilities::Observer_1::__get_m_OnNext() const {
return ::cordl_internals::getInstanceField<System::Action_1<TValue>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Utilities::Observer_1::__set_m_OnCompleted(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action UnityEngine::InputSystem::Utilities::Observer_1::__get_m_OnCompleted() const {
return ::cordl_internals::getInstanceField<System::Action, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "onNext", ty: "System::Action_1<TValue>", modifiers: "", def_value: None }, CppParam { name: "onCompleted", ty: "System::Action", modifiers: "", def_value: Some("csnull") }]
 UnityEngine::InputSystem::Utilities::Observer_1::Observer_1(System::Action_1<TValue> onNext, System::Action onCompleted)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Observer_1>(onNext, onCompleted))) {}
/// @param onCompleted: System::Action (default: csnull)
 void UnityEngine::InputSystem::Utilities::Observer_1::_ctor(System::Action_1<TValue> onNext, System::Action onCompleted)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::Observer_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, onNext, onCompleted);
}
 void UnityEngine::InputSystem::Utilities::Observer_1::OnCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::Observer_1>::get(),
                            "OnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Utilities::Observer_1::OnError(System::Exception error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::Observer_1>::get(),
                            "OnError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, error);
}
 void UnityEngine::InputSystem::Utilities::Observer_1::OnNext(TValue evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::Observer_1>::get(),
                            "OnNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
