#pragma once
#include "HMUI/zzzz__FlowCoordinator_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__EditAvatarFlowCoordinator_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "GlobalNamespace/zzzz__EditAvatarViewController_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__AvatarVisualController_def.hpp"
#include "GlobalNamespace/zzzz__AvatarDataModel_def.hpp"
#include "GlobalNamespace/zzzz__EditColorController_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__AvatarTweenController_def.hpp"
#include "GlobalNamespace/zzzz__EditAvatarViewController_def.hpp"
#include "GlobalNamespace/zzzz__EditAvatarViewController_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType  GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType::Create{0};
constexpr GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType  GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType::Edit{1};
//  Writing Method size for method: GlobalNamespace::EditAvatarFlowCoordinator.add_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditAvatarFlowCoordinator::*)(System::Action_2<GlobalNamespace::EditAvatarFlowCoordinator,GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType>)>(&GlobalNamespace::EditAvatarFlowCoordinator::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2131c78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EditAvatarFlowCoordinator>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::EditAvatarFlowCoordinator,GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EditAvatarFlowCoordinator.remove_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditAvatarFlowCoordinator::*)(System::Action_2<GlobalNamespace::EditAvatarFlowCoordinator,GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType>)>(&GlobalNamespace::EditAvatarFlowCoordinator::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2131d28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EditAvatarFlowCoordinator>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::EditAvatarFlowCoordinator,GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EditAvatarFlowCoordinator.add_wasSetupEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditAvatarFlowCoordinator::*)(System::Action_1<GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType>)>(&GlobalNamespace::EditAvatarFlowCoordinator::add_wasSetupEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2131dd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EditAvatarFlowCoordinator>::get(),
                            "add_wasSetupEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EditAvatarFlowCoordinator.remove_wasSetupEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditAvatarFlowCoordinator::*)(System::Action_1<GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType>)>(&GlobalNamespace::EditAvatarFlowCoordinator::remove_wasSetupEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2131e88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EditAvatarFlowCoordinator>::get(),
                            "remove_wasSetupEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EditAvatarFlowCoordinator.Setup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditAvatarFlowCoordinator::*)(GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType)>(&GlobalNamespace::EditAvatarFlowCoordinator::Setup)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2131f38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EditAvatarFlowCoordinator>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EditAvatarFlowCoordinator.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditAvatarFlowCoordinator::*)(bool, bool, bool)>(&GlobalNamespace::EditAvatarFlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x2131f88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::EditAvatarFlowCoordinator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EditAvatarFlowCoordinator>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EditAvatarFlowCoordinator.DidDeactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditAvatarFlowCoordinator::*)(bool, bool)>(&GlobalNamespace::EditAvatarFlowCoordinator::DidDeactivate)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x213242c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::EditAvatarFlowCoordinator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EditAvatarFlowCoordinator>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EditAvatarFlowCoordinator.HandleEditAvatarViewControllerDidRequestColorChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditAvatarFlowCoordinator::*)(System::Action_1<UnityEngine::Color>, UnityEngine::Color, GlobalNamespace::GlobalNamespace__EditAvatarViewController__AvatarEditPart, int32_t)>(&GlobalNamespace::EditAvatarFlowCoordinator::HandleEditAvatarViewControllerDidRequestColorChange)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2132650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EditAvatarFlowCoordinator>::get(),
                            "HandleEditAvatarViewControllerDidRequestColorChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::Color>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__EditAvatarViewController__AvatarEditPart>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EditAvatarFlowCoordinator.HandleEditAvatarViewControllerChangedAvatarPart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditAvatarFlowCoordinator::*)(GlobalNamespace::GlobalNamespace__EditAvatarViewController__AvatarEditPart)>(&GlobalNamespace::EditAvatarFlowCoordinator::HandleEditAvatarViewControllerChangedAvatarPart)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x21326c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EditAvatarFlowCoordinator>::get(),
                            "HandleEditAvatarViewControllerChangedAvatarPart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__EditAvatarViewController__AvatarEditPart>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EditAvatarFlowCoordinator.HandleEditAvatarViewControllerDidFinished
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditAvatarFlowCoordinator::*)(GlobalNamespace::GlobalNamespace__EditAvatarViewController__FinishAction)>(&GlobalNamespace::EditAvatarFlowCoordinator::HandleEditAvatarViewControllerDidFinished)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2132768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EditAvatarFlowCoordinator>::get(),
                            "HandleEditAvatarViewControllerDidFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__EditAvatarViewController__FinishAction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EditAvatarFlowCoordinator.HandleEditColorViewControllerDidChangedColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditAvatarFlowCoordinator::*)(UnityEngine::Color)>(&GlobalNamespace::EditAvatarFlowCoordinator::HandleEditColorViewControllerDidChangedColor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x213278c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EditAvatarFlowCoordinator>::get(),
                            "HandleEditColorViewControllerDidChangedColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EditAvatarFlowCoordinator.HandleEditColorViewControllerDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditAvatarFlowCoordinator::*)(bool)>(&GlobalNamespace::EditAvatarFlowCoordinator::HandleEditColorViewControllerDidFinish)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x21327b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EditAvatarFlowCoordinator>::get(),
                            "HandleEditColorViewControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EditAvatarFlowCoordinator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditAvatarFlowCoordinator::*)()>(&GlobalNamespace::EditAvatarFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x213281c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EditAvatarFlowCoordinator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::EditAvatarFlowCoordinator::__set__avatarVisualController(GlobalNamespace::AvatarVisualController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AvatarVisualController, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AvatarVisualController>(value));
}
constexpr GlobalNamespace::AvatarVisualController GlobalNamespace::EditAvatarFlowCoordinator::__get__avatarVisualController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AvatarVisualController, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinator::__set__avatarTweenController(GlobalNamespace::AvatarTweenController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AvatarTweenController, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AvatarTweenController>(value));
}
constexpr GlobalNamespace::AvatarTweenController GlobalNamespace::EditAvatarFlowCoordinator::__get__avatarTweenController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AvatarTweenController, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinator::__set__avatarContainerGameObject(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::EditAvatarFlowCoordinator::__get__avatarContainerGameObject() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinator::__set__editAvatarViewController(GlobalNamespace::EditAvatarViewController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::EditAvatarViewController, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::EditAvatarViewController>(value));
}
constexpr GlobalNamespace::EditAvatarViewController GlobalNamespace::EditAvatarFlowCoordinator::__get__editAvatarViewController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::EditAvatarViewController, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinator::__set__editColorViewController(GlobalNamespace::EditColorController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::EditColorController, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::EditColorController>(value));
}
constexpr GlobalNamespace::EditColorController GlobalNamespace::EditAvatarFlowCoordinator::__get__editColorViewController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::EditColorController, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinator::__set__avatarDataModel(GlobalNamespace::AvatarDataModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AvatarDataModel, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AvatarDataModel>(value));
}
constexpr GlobalNamespace::AvatarDataModel GlobalNamespace::EditAvatarFlowCoordinator::__get__avatarDataModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AvatarDataModel, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinator::__set__parameterChangedAnimationCallbacks(System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__EditAvatarViewController__AvatarEditPart,System::Action> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__EditAvatarViewController__AvatarEditPart,System::Action>, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__EditAvatarViewController__AvatarEditPart,System::Action>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__EditAvatarViewController__AvatarEditPart,System::Action> GlobalNamespace::EditAvatarFlowCoordinator::__get__parameterChangedAnimationCallbacks() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__EditAvatarViewController__AvatarEditPart,System::Action>, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinator::__set__editAvatarType(GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType GlobalNamespace::EditAvatarFlowCoordinator::__get__editAvatarType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinator::__set_didFinishEvent(System::Action_2<GlobalNamespace::EditAvatarFlowCoordinator,GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType> value)  {
::cordl_internals::setInstanceField<System::Action_2<GlobalNamespace::EditAvatarFlowCoordinator,GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType>, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<GlobalNamespace::EditAvatarFlowCoordinator,GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType>>(value));
}
constexpr System::Action_2<GlobalNamespace::EditAvatarFlowCoordinator,GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType> GlobalNamespace::EditAvatarFlowCoordinator::__get_didFinishEvent() const {
return ::cordl_internals::getInstanceField<System::Action_2<GlobalNamespace::EditAvatarFlowCoordinator,GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType>, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinator::__set_wasSetupEvent(System::Action_1<GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType>, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType>>(value));
}
constexpr System::Action_1<GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType> GlobalNamespace::EditAvatarFlowCoordinator::__get_wasSetupEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType>, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::EditAvatarFlowCoordinator::add_didFinishEvent(System::Action_2<GlobalNamespace::EditAvatarFlowCoordinator,GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EditAvatarFlowCoordinator>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::EditAvatarFlowCoordinator,GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::EditAvatarFlowCoordinator::remove_didFinishEvent(System::Action_2<GlobalNamespace::EditAvatarFlowCoordinator,GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EditAvatarFlowCoordinator>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::EditAvatarFlowCoordinator,GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::EditAvatarFlowCoordinator::add_wasSetupEvent(System::Action_1<GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EditAvatarFlowCoordinator>::get(),
                            "add_wasSetupEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::EditAvatarFlowCoordinator::remove_wasSetupEvent(System::Action_1<GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EditAvatarFlowCoordinator>::get(),
                            "remove_wasSetupEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::EditAvatarFlowCoordinator::Setup(GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType editAvatarType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EditAvatarFlowCoordinator>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, editAvatarType);
}
 void GlobalNamespace::EditAvatarFlowCoordinator::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EditAvatarFlowCoordinator>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
 void GlobalNamespace::EditAvatarFlowCoordinator::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EditAvatarFlowCoordinator>::get(),
                            "DidDeactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
 void GlobalNamespace::EditAvatarFlowCoordinator::HandleEditAvatarViewControllerDidRequestColorChange(System::Action_1<UnityEngine::Color> colorCallback, UnityEngine::Color currentColor, GlobalNamespace::GlobalNamespace__EditAvatarViewController__AvatarEditPart editPart, int32_t uvSegment)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EditAvatarFlowCoordinator>::get(),
                            "HandleEditAvatarViewControllerDidRequestColorChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::Color>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__EditAvatarViewController__AvatarEditPart>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, colorCallback, currentColor, editPart, uvSegment);
}
 void GlobalNamespace::EditAvatarFlowCoordinator::HandleEditAvatarViewControllerChangedAvatarPart(GlobalNamespace::GlobalNamespace__EditAvatarViewController__AvatarEditPart avatarPart)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EditAvatarFlowCoordinator>::get(),
                            "HandleEditAvatarViewControllerChangedAvatarPart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__EditAvatarViewController__AvatarEditPart>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, avatarPart);
}
 void GlobalNamespace::EditAvatarFlowCoordinator::HandleEditAvatarViewControllerDidFinished(GlobalNamespace::GlobalNamespace__EditAvatarViewController__FinishAction _)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EditAvatarFlowCoordinator>::get(),
                            "HandleEditAvatarViewControllerDidFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__EditAvatarViewController__FinishAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, _);
}
 void GlobalNamespace::EditAvatarFlowCoordinator::HandleEditColorViewControllerDidChangedColor(UnityEngine::Color color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EditAvatarFlowCoordinator>::get(),
                            "HandleEditColorViewControllerDidChangedColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, color);
}
 void GlobalNamespace::EditAvatarFlowCoordinator::HandleEditColorViewControllerDidFinish(bool apply)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EditAvatarFlowCoordinator>::get(),
                            "HandleEditColorViewControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, apply);
}
// Ctor Parameters []
 GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarFlowCoordinator()  : HMUI::FlowCoordinator(THROW_UNLESS(::il2cpp_utils::New<EditAvatarFlowCoordinator>())) {}
 void GlobalNamespace::EditAvatarFlowCoordinator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EditAvatarFlowCoordinator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
