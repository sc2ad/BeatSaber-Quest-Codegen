#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRControllerHelper_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRControllerHelper__ControllerType::GlobalNamespace__OVRControllerHelper__ControllerType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRControllerHelper__ControllerType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRControllerHelper__ControllerType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVRControllerHelper__ControllerType  GlobalNamespace::GlobalNamespace__OVRControllerHelper__ControllerType::QuestAndRiftS{1};
constexpr GlobalNamespace::GlobalNamespace__OVRControllerHelper__ControllerType  GlobalNamespace::GlobalNamespace__OVRControllerHelper__ControllerType::Rift{2};
constexpr GlobalNamespace::GlobalNamespace__OVRControllerHelper__ControllerType  GlobalNamespace::GlobalNamespace__OVRControllerHelper__ControllerType::Quest2{3};
constexpr GlobalNamespace::GlobalNamespace__OVRControllerHelper__ControllerType  GlobalNamespace::GlobalNamespace__OVRControllerHelper__ControllerType::TouchPro{4};
//  Writing Method size for method: GlobalNamespace::OVRControllerHelper.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRControllerHelper::*)()>(&GlobalNamespace::OVRControllerHelper::Start)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x261968c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRControllerHelper>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRControllerHelper.InitializeControllerModels
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRControllerHelper::*)()>(&GlobalNamespace::OVRControllerHelper::InitializeControllerModels)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x26196fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRControllerHelper>::get(),
                            "InitializeControllerModels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRControllerHelper.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRControllerHelper::*)()>(&GlobalNamespace::OVRControllerHelper::Update)> {
  constexpr static std::size_t size = 0x6a4;
  constexpr static std::size_t addrs = 0x2619b1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRControllerHelper>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRControllerHelper.InputFocusAquired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRControllerHelper::*)()>(&GlobalNamespace::OVRControllerHelper::InputFocusAquired)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x261a1c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRControllerHelper>::get(),
                            "InputFocusAquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRControllerHelper.InputFocusLost
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRControllerHelper::*)()>(&GlobalNamespace::OVRControllerHelper::InputFocusLost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x261a1cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRControllerHelper>::get(),
                            "InputFocusLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRControllerHelper._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRControllerHelper::*)()>(&GlobalNamespace::OVRControllerHelper::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x261a1d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRControllerHelper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OVRControllerHelper::__set_m_modelOculusTouchQuestAndRiftSLeftController(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::OVRControllerHelper::__get_m_modelOculusTouchQuestAndRiftSLeftController() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRControllerHelper::__set_m_modelOculusTouchQuestAndRiftSRightController(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::OVRControllerHelper::__get_m_modelOculusTouchQuestAndRiftSRightController() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRControllerHelper::__set_m_modelOculusTouchRiftLeftController(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::OVRControllerHelper::__get_m_modelOculusTouchRiftLeftController() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRControllerHelper::__set_m_modelOculusTouchRiftRightController(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::OVRControllerHelper::__get_m_modelOculusTouchRiftRightController() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRControllerHelper::__set_m_modelOculusTouchQuest2LeftController(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::OVRControllerHelper::__get_m_modelOculusTouchQuest2LeftController() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRControllerHelper::__set_m_modelOculusTouchQuest2RightController(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::OVRControllerHelper::__get_m_modelOculusTouchQuest2RightController() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRControllerHelper::__set_m_modelMetaTouchProLeftController(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::OVRControllerHelper::__get_m_modelMetaTouchProLeftController() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRControllerHelper::__set_m_modelMetaTouchProRightController(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::OVRControllerHelper::__get_m_modelMetaTouchProRightController() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRControllerHelper::__set_m_controller(GlobalNamespace::GlobalNamespace__OVRInput__Controller value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__Controller, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRInput__Controller>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRInput__Controller GlobalNamespace::OVRControllerHelper::__get_m_controller() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRInput__Controller, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRControllerHelper::__set_m_animator(UnityEngine::Animator value)  {
::cordl_internals::setInstanceField<UnityEngine::Animator, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Animator>(value));
}
constexpr UnityEngine::Animator GlobalNamespace::OVRControllerHelper::__get_m_animator() const {
return ::cordl_internals::getInstanceField<UnityEngine::Animator, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRControllerHelper::__set_m_activeController(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::OVRControllerHelper::__get_m_activeController() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRControllerHelper::__set_m_controllerModelsInitialized(bool value)  {
::cordl_internals::setInstanceField<bool, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVRControllerHelper::__get_m_controllerModelsInitialized() const {
return ::cordl_internals::getInstanceField<bool, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRControllerHelper::__set_m_hasInputFocus(bool value)  {
::cordl_internals::setInstanceField<bool, 0x71>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVRControllerHelper::__get_m_hasInputFocus() const {
return ::cordl_internals::getInstanceField<bool, 0x71>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRControllerHelper::__set_m_hasInputFocusPrev(bool value)  {
::cordl_internals::setInstanceField<bool, 0x72>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVRControllerHelper::__get_m_hasInputFocusPrev() const {
return ::cordl_internals::getInstanceField<bool, 0x72>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRControllerHelper::__set_activeControllerType(GlobalNamespace::GlobalNamespace__OVRControllerHelper__ControllerType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRControllerHelper__ControllerType, 0x74>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRControllerHelper__ControllerType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRControllerHelper__ControllerType GlobalNamespace::OVRControllerHelper::__get_activeControllerType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRControllerHelper__ControllerType, 0x74>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRControllerHelper::__set_m_prevControllerConnected(bool value)  {
::cordl_internals::setInstanceField<bool, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVRControllerHelper::__get_m_prevControllerConnected() const {
return ::cordl_internals::getInstanceField<bool, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRControllerHelper::__set_m_prevControllerConnectedCached(bool value)  {
::cordl_internals::setInstanceField<bool, 0x79>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVRControllerHelper::__get_m_prevControllerConnectedCached() const {
return ::cordl_internals::getInstanceField<bool, 0x79>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::OVRControllerHelper::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRControllerHelper>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRControllerHelper::InitializeControllerModels()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRControllerHelper>::get(),
                            "InitializeControllerModels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRControllerHelper::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRControllerHelper>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRControllerHelper::InputFocusAquired()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRControllerHelper>::get(),
                            "InputFocusAquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRControllerHelper::InputFocusLost()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRControllerHelper>::get(),
                            "InputFocusLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::OVRControllerHelper::OVRControllerHelper()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<OVRControllerHelper>())) {}
 void GlobalNamespace::OVRControllerHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRControllerHelper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
