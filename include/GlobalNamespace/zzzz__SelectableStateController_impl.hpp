#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SelectableStateController_def.hpp"
#include "GlobalNamespace/zzzz__SelectableStateController_def.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState::GlobalNamespace__SelectableStateController__ViewState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState  GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState::Normal{0};
constexpr GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState  GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState::Highlighted{1};
constexpr GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState  GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState::Pressed{2};
constexpr GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState  GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState::Disabled{3};
constexpr GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState  GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState::Selected{4};
constexpr GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState  GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState::SelectedAndHighlighted{5};
//  Writing Method size for method: GlobalNamespace::SelectableStateController.add_stateDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectableStateController::*)(System::Action_2<GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState,bool>)>(&GlobalNamespace::SelectableStateController::add_stateDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x212b678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectableStateController>::get(),
                            "add_stateDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState,bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SelectableStateController.remove_stateDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectableStateController::*)(System::Action_2<GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState,bool>)>(&GlobalNamespace::SelectableStateController::remove_stateDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x212b728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectableStateController>::get(),
                            "remove_stateDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState,bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SelectableStateController.get_tweeningManager
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Tweening::TimeTweeningManager (GlobalNamespace::SelectableStateController::*)()>(&GlobalNamespace::SelectableStateController::get_tweeningManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x212b7d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectableStateController>::get(),
                            "get_tweeningManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SelectableStateController.get_viewState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState (GlobalNamespace::SelectableStateController::*)()>(&GlobalNamespace::SelectableStateController::get_viewState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x212b7e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectableStateController>::get(),
                            "get_viewState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SelectableStateController.get_currentViewState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState (GlobalNamespace::SelectableStateController::*)()>(&GlobalNamespace::SelectableStateController::get_currentViewState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x212b7e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectableStateController>::get(),
                            "get_currentViewState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SelectableStateController.set_currentViewState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectableStateController::*)(GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState)>(&GlobalNamespace::SelectableStateController::set_currentViewState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x212b7f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectableStateController>::get(),
                            "set_currentViewState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SelectableStateController.SetState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectableStateController::*)(GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState, bool)>(&GlobalNamespace::SelectableStateController::SetState)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x212b7f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectableStateController>::get(),
                            "SetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SelectableStateController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectableStateController::*)()>(&GlobalNamespace::SelectableStateController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x212b81c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectableStateController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SelectableStateController::__set__tweeningManager(Tweening::TimeTweeningManager value)  {
::cordl_internals::setInstanceField<Tweening::TimeTweeningManager, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Tweening::TimeTweeningManager>(value));
}
constexpr Tweening::TimeTweeningManager GlobalNamespace::SelectableStateController::__get__tweeningManager() const {
return ::cordl_internals::getInstanceField<Tweening::TimeTweeningManager, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SelectableStateController::__set_stateDidChangeEvent(System::Action_2<GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState,bool> value)  {
::cordl_internals::setInstanceField<System::Action_2<GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState,bool>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState,bool>>(value));
}
constexpr System::Action_2<GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState,bool> GlobalNamespace::SelectableStateController::__get_stateDidChangeEvent() const {
return ::cordl_internals::getInstanceField<System::Action_2<GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState,bool>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SelectableStateController::__set__currentViewState_k__BackingField(GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState>(value));
}
constexpr GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState GlobalNamespace::SelectableStateController::__get__currentViewState_k__BackingField() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::SelectableStateController::add_stateDidChangeEvent(System::Action_2<GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState,bool> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectableStateController>::get(),
                            "add_stateDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState,bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::SelectableStateController::remove_stateDidChangeEvent(System::Action_2<GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState,bool> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectableStateController>::get(),
                            "remove_stateDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState,bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 Tweening::TimeTweeningManager GlobalNamespace::SelectableStateController::get_tweeningManager()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectableStateController>::get(),
                            "get_tweeningManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Tweening::TimeTweeningManager, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState GlobalNamespace::SelectableStateController::get_viewState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectableStateController>::get(),
                            "get_viewState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState GlobalNamespace::SelectableStateController::get_currentViewState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectableStateController>::get(),
                            "get_currentViewState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::SelectableStateController::set_currentViewState(GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectableStateController>::get(),
                            "set_currentViewState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::SelectableStateController::SetState(GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState state, bool animated)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectableStateController>::get(),
                            "SetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state, animated);
}
 GlobalNamespace::SelectableStateController GlobalNamespace::SelectableStateController::New_ctor()  {
GlobalNamespace::SelectableStateController o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::SelectableStateController>())};
return o;
}
 void GlobalNamespace::SelectableStateController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectableStateController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
