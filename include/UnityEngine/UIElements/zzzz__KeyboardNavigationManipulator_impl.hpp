#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Manipulator_impl.hpp"
#include "UnityEngine/UIElements/zzzz__KeyboardNavigationManipulator_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationMoveEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyDownEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationCancelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyboardNavigationOperation_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationSubmitEvent_def.hpp"
// Ctor Parameters [CppParam { name: "evt", ty: "UnityEngine::UIElements::KeyDownEvent", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::UIElements::UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass5_0::UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass5_0(UnityEngine::UIElements::KeyDownEvent evt) noexcept : ::bs_hook::ValueTypeWrapper() {this->evt = evt;
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass5_0::__set_evt(UnityEngine::UIElements::KeyDownEvent value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::KeyDownEvent, 0x0>(this->__instance, std::forward<UnityEngine::UIElements::KeyDownEvent>(value));
}
constexpr UnityEngine::UIElements::KeyDownEvent UnityEngine::UIElements::UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass5_0::__get_evt() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::KeyDownEvent, 0x0>(this->__instance);
}
// Ctor Parameters [CppParam { name: "evt", ty: "UnityEngine::UIElements::KeyDownEvent", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::UIElements::UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass6_0::UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass6_0(UnityEngine::UIElements::KeyDownEvent evt) noexcept : ::bs_hook::ValueTypeWrapper() {this->evt = evt;
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass6_0::__set_evt(UnityEngine::UIElements::KeyDownEvent value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::KeyDownEvent, 0x0>(this->__instance, std::forward<UnityEngine::UIElements::KeyDownEvent>(value));
}
constexpr UnityEngine::UIElements::KeyDownEvent UnityEngine::UIElements::UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass6_0::__get_evt() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::KeyDownEvent, 0x0>(this->__instance);
}
//  Writing Method size for method: UnityEngine::UIElements::KeyboardNavigationManipulator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::KeyboardNavigationManipulator::*)(System::Action_2<UnityEngine::UIElements::KeyboardNavigationOperation,UnityEngine::UIElements::EventBase>)>(&UnityEngine::UIElements::KeyboardNavigationManipulator::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2c4af1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::KeyboardNavigationManipulator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<UnityEngine::UIElements::KeyboardNavigationOperation,UnityEngine::UIElements::EventBase>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::KeyboardNavigationManipulator.RegisterCallbacksOnTarget
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::KeyboardNavigationManipulator::*)()>(&UnityEngine::UIElements::KeyboardNavigationManipulator::RegisterCallbacksOnTarget)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2c4af44;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::KeyboardNavigationManipulator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::KeyboardNavigationManipulator>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::KeyboardNavigationManipulator.UnregisterCallbacksFromTarget
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::KeyboardNavigationManipulator::*)()>(&UnityEngine::UIElements::KeyboardNavigationManipulator::UnregisterCallbacksFromTarget)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2c4b198;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::KeyboardNavigationManipulator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::KeyboardNavigationManipulator>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::KeyboardNavigationManipulator.OnKeyDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::KeyboardNavigationManipulator::*)(UnityEngine::UIElements::KeyDownEvent)>(&UnityEngine::UIElements::KeyboardNavigationManipulator::OnKeyDown)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2c4b3ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::KeyboardNavigationManipulator>::get(),
                            "OnKeyDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::KeyDownEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::KeyboardNavigationManipulator.OnRuntimeKeyDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::KeyboardNavigationManipulator::*)(UnityEngine::UIElements::KeyDownEvent)>(&UnityEngine::UIElements::KeyboardNavigationManipulator::OnRuntimeKeyDown)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2c4b520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::KeyboardNavigationManipulator>::get(),
                            "OnRuntimeKeyDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::KeyDownEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::KeyboardNavigationManipulator.OnEditorKeyDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::KeyboardNavigationManipulator::*)(UnityEngine::UIElements::KeyDownEvent)>(&UnityEngine::UIElements::KeyboardNavigationManipulator::OnEditorKeyDown)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2c4b4d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::KeyboardNavigationManipulator>::get(),
                            "OnEditorKeyDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::KeyDownEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::KeyboardNavigationManipulator.OnNavigationCancel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::KeyboardNavigationManipulator::*)(UnityEngine::UIElements::NavigationCancelEvent)>(&UnityEngine::UIElements::KeyboardNavigationManipulator::OnNavigationCancel)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2c4b73c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::KeyboardNavigationManipulator>::get(),
                            "OnNavigationCancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::NavigationCancelEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::KeyboardNavigationManipulator.OnNavigationSubmit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::KeyboardNavigationManipulator::*)(UnityEngine::UIElements::NavigationSubmitEvent)>(&UnityEngine::UIElements::KeyboardNavigationManipulator::OnNavigationSubmit)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2c4b760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::KeyboardNavigationManipulator>::get(),
                            "OnNavigationSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::NavigationSubmitEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::KeyboardNavigationManipulator.OnNavigationMove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::KeyboardNavigationManipulator::*)(UnityEngine::UIElements::NavigationMoveEvent)>(&UnityEngine::UIElements::KeyboardNavigationManipulator::OnNavigationMove)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2c4b784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::KeyboardNavigationManipulator>::get(),
                            "OnNavigationMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::NavigationMoveEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::KeyboardNavigationManipulator.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::KeyboardNavigationManipulator::*)(UnityEngine::UIElements::KeyboardNavigationOperation, UnityEngine::UIElements::EventBase)>(&UnityEngine::UIElements::KeyboardNavigationManipulator::Invoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2c4b628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::KeyboardNavigationManipulator>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::KeyboardNavigationOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::EventBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::KeyboardNavigationManipulator._OnRuntimeKeyDown_g__GetOperation_5_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::KeyboardNavigationOperation (*)(ByRef<UnityEngine::UIElements::UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass5_0>)>(&UnityEngine::UIElements::KeyboardNavigationManipulator::_OnRuntimeKeyDown_g__GetOperation_5_0)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2c4b56c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::KeyboardNavigationManipulator>::get(),
                            "<OnRuntimeKeyDown>g__GetOperation|5_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::UIElements::UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass5_0>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::KeyboardNavigationManipulator._OnEditorKeyDown_g__GetOperation_6_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::KeyboardNavigationOperation (*)(ByRef<UnityEngine::UIElements::UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass6_0>)>(&UnityEngine::UIElements::KeyboardNavigationManipulator::_OnEditorKeyDown_g__GetOperation_6_0)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2c4b648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::KeyboardNavigationManipulator>::get(),
                            "<OnEditorKeyDown>g__GetOperation|6_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::UIElements::UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass6_0>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::KeyboardNavigationManipulator::__set_m_Action(System::Action_2<UnityEngine::UIElements::KeyboardNavigationOperation,UnityEngine::UIElements::EventBase> value)  {
::cordl_internals::setInstanceField<System::Action_2<UnityEngine::UIElements::KeyboardNavigationOperation,UnityEngine::UIElements::EventBase>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<UnityEngine::UIElements::KeyboardNavigationOperation,UnityEngine::UIElements::EventBase>>(value));
}
constexpr System::Action_2<UnityEngine::UIElements::KeyboardNavigationOperation,UnityEngine::UIElements::EventBase> UnityEngine::UIElements::KeyboardNavigationManipulator::__get_m_Action() const {
return ::cordl_internals::getInstanceField<System::Action_2<UnityEngine::UIElements::KeyboardNavigationOperation,UnityEngine::UIElements::EventBase>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "action", ty: "System::Action_2<UnityEngine::UIElements::KeyboardNavigationOperation,UnityEngine::UIElements::EventBase>", modifiers: "", def_value: None }]
 UnityEngine::UIElements::KeyboardNavigationManipulator::KeyboardNavigationManipulator(System::Action_2<UnityEngine::UIElements::KeyboardNavigationOperation,UnityEngine::UIElements::EventBase> action)  : UnityEngine::UIElements::Manipulator(THROW_UNLESS(::il2cpp_utils::New<KeyboardNavigationManipulator>(action))) {}
 void UnityEngine::UIElements::KeyboardNavigationManipulator::_ctor(System::Action_2<UnityEngine::UIElements::KeyboardNavigationOperation,UnityEngine::UIElements::EventBase> action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::KeyboardNavigationManipulator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<UnityEngine::UIElements::KeyboardNavigationOperation,UnityEngine::UIElements::EventBase>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, action);
}
 void UnityEngine::UIElements::KeyboardNavigationManipulator::RegisterCallbacksOnTarget()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::KeyboardNavigationManipulator>::get(),
                            "RegisterCallbacksOnTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::KeyboardNavigationManipulator::UnregisterCallbacksFromTarget()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::KeyboardNavigationManipulator>::get(),
                            "UnregisterCallbacksFromTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::KeyboardNavigationManipulator::OnKeyDown(UnityEngine::UIElements::KeyDownEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::KeyboardNavigationManipulator>::get(),
                            "OnKeyDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::KeyDownEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void UnityEngine::UIElements::KeyboardNavigationManipulator::OnRuntimeKeyDown(UnityEngine::UIElements::KeyDownEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::KeyboardNavigationManipulator>::get(),
                            "OnRuntimeKeyDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::KeyDownEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void UnityEngine::UIElements::KeyboardNavigationManipulator::OnEditorKeyDown(UnityEngine::UIElements::KeyDownEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::KeyboardNavigationManipulator>::get(),
                            "OnEditorKeyDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::KeyDownEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void UnityEngine::UIElements::KeyboardNavigationManipulator::OnNavigationCancel(UnityEngine::UIElements::NavigationCancelEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::KeyboardNavigationManipulator>::get(),
                            "OnNavigationCancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::NavigationCancelEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void UnityEngine::UIElements::KeyboardNavigationManipulator::OnNavigationSubmit(UnityEngine::UIElements::NavigationSubmitEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::KeyboardNavigationManipulator>::get(),
                            "OnNavigationSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::NavigationSubmitEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void UnityEngine::UIElements::KeyboardNavigationManipulator::OnNavigationMove(UnityEngine::UIElements::NavigationMoveEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::KeyboardNavigationManipulator>::get(),
                            "OnNavigationMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::NavigationMoveEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void UnityEngine::UIElements::KeyboardNavigationManipulator::Invoke(UnityEngine::UIElements::KeyboardNavigationOperation operation, UnityEngine::UIElements::EventBase evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::KeyboardNavigationManipulator>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::KeyboardNavigationOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::EventBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, operation, evt);
}
 UnityEngine::UIElements::KeyboardNavigationOperation UnityEngine::UIElements::KeyboardNavigationManipulator::_OnRuntimeKeyDown_g__GetOperation_5_0(ByRef<UnityEngine::UIElements::UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass5_0> )  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::KeyboardNavigationManipulator>::get(),
                            "<OnRuntimeKeyDown>g__GetOperation|5_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::UIElements::UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass5_0>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::KeyboardNavigationOperation, false>(nullptr, ___internal_method, );
}
 UnityEngine::UIElements::KeyboardNavigationOperation UnityEngine::UIElements::KeyboardNavigationManipulator::_OnEditorKeyDown_g__GetOperation_6_0(ByRef<UnityEngine::UIElements::UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass6_0> )  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::KeyboardNavigationManipulator>::get(),
                            "<OnEditorKeyDown>g__GetOperation|6_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::UIElements::UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass6_0>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::KeyboardNavigationOperation, false>(nullptr, ___internal_method, );
}
