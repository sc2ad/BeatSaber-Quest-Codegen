#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__EditAvatarViewController_def.hpp"
#include "GlobalNamespace/zzzz__AvatarPartCollection_1_def.hpp"
#include "GlobalNamespace/zzzz__AvatarPartsModel_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "GlobalNamespace/zzzz__NamedIntListController_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__SkinColorSO_def.hpp"
#include "GlobalNamespace/zzzz__NamedColorListController_def.hpp"
#include "GlobalNamespace/zzzz__NamedIntListController_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "GlobalNamespace/zzzz__AvatarEditHistory_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "HMUI/zzzz__ValueChangedBinder_1_def.hpp"
#include "HMUI/zzzz__CurvedTextMeshPro_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "GlobalNamespace/zzzz__AvatarDataModel_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__NamedColorListController_def.hpp"
#include "GlobalNamespace/zzzz__ColorPickerButtonController_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__FinishAction::____GlobalNamespace__EditAvatarViewController__FinishAction(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__FinishAction::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__FinishAction::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__FinishAction  ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__FinishAction::Cancel{0};
constexpr ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__FinishAction  ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__FinishAction::Apply{1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart::____GlobalNamespace__EditAvatarViewController__AvatarEditPart(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart  ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart::Unknown{0};
constexpr ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart  ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart::All{1};
constexpr ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart  ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart::SkinColor{2};
constexpr ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart  ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart::HeadTopModel{3};
constexpr ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart  ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart::HeadTopPrimaryColor{4};
constexpr ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart  ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart::HeadTopSecondaryColor{5};
constexpr ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart  ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart::GlassesModel{6};
constexpr ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart  ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart::GlassesColor{7};
constexpr ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart  ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart::FacialHairModel{8};
constexpr ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart  ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart::FacialHairColor{9};
constexpr ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart  ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart::HandsModel{10};
constexpr ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart  ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart::HandsColor{11};
constexpr ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart  ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart::ClothesModel{12};
constexpr ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart  ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart::ClothesModelPrimaryColor{13};
constexpr ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart  ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart::ClothesModelSecondaryColor{14};
constexpr ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart  ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart::ClothesModelDetailColor{15};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0::*)()>(&::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2159e90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0._SetupColorButton_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0::*)()>(&::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0::_SetupColorButton_b__0)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2159e98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0>::get(),
                            "<SetupColorButton>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0._SetupColorButton_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0::*)(::UnityEngine::Color)>(&::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0::_SetupColorButton_b__1)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2159f68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0>::get(),
                            "<SetupColorButton>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0::__set___4__this(::GlobalNamespace::EditAvatarViewController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EditAvatarViewController, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::EditAvatarViewController>(value));
}
constexpr ::GlobalNamespace::EditAvatarViewController ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EditAvatarViewController, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0::__set_colorSetter(::System::Action_1<::UnityEngine::Color> value)  {
::cordl_internals::setInstanceField<::System::Action_1<::UnityEngine::Color>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<::UnityEngine::Color>>(value));
}
constexpr ::System::Action_1<::UnityEngine::Color> ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0::__get_colorSetter() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::Color>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0::__set_avatarEditPart(::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0::__get_avatarEditPart() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0::__set_currentColor(::System::Func_1<::UnityEngine::Color> value)  {
::cordl_internals::setInstanceField<::System::Func_1<::UnityEngine::Color>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Func_1<::UnityEngine::Color>>(value));
}
constexpr ::System::Func_1<::UnityEngine::Color> ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0::__get_currentColor() const {
return ::cordl_internals::getInstanceField<::System::Func_1<::UnityEngine::Color>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0::__set_uvSegment(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0::__get_uvSegment() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0::__set___9__1(::System::Action_1<::UnityEngine::Color> value)  {
::cordl_internals::setInstanceField<::System::Action_1<::UnityEngine::Color>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<::UnityEngine::Color>>(value));
}
constexpr ::System::Action_1<::UnityEngine::Color> ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0::__get___9__1() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::Color>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0::____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0>())) {}
 void ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0::_SetupColorButton_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0>::get(),
                            "<SetupColorButton>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0::_SetupColorButton_b__1(::UnityEngine::Color c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0>::get(),
                            "<SetupColorButton>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c);
}
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.add_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__FinishAction>)>(&::GlobalNamespace::EditAvatarViewController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x215821c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__FinishAction>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.remove_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__FinishAction>)>(&::GlobalNamespace::EditAvatarViewController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x21582d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__FinishAction>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.add_didRequestColorChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(::System::Action_4<::System::Action_1<::UnityEngine::Color>,::UnityEngine::Color,::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart,int32_t>)>(&::GlobalNamespace::EditAvatarViewController::add_didRequestColorChangeEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2158384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "add_didRequestColorChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::System::Action_1<::UnityEngine::Color>,::UnityEngine::Color,::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.remove_didRequestColorChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(::System::Action_4<::System::Action_1<::UnityEngine::Color>,::UnityEngine::Color,::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart,int32_t>)>(&::GlobalNamespace::EditAvatarViewController::remove_didRequestColorChangeEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2158438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "remove_didRequestColorChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::System::Action_1<::UnityEngine::Color>,::UnityEngine::Color,::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.add_randomizeAllButtonWasPressedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(::System::Action)>(&::GlobalNamespace::EditAvatarViewController::add_randomizeAllButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x21584ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "add_randomizeAllButtonWasPressedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.remove_randomizeAllButtonWasPressedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(::System::Action)>(&::GlobalNamespace::EditAvatarViewController::remove_randomizeAllButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x215858c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "remove_randomizeAllButtonWasPressedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.add_didChangedAvatarPartEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart>)>(&::GlobalNamespace::EditAvatarViewController::add_didChangedAvatarPartEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x215862c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "add_didChangedAvatarPartEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.remove_didChangedAvatarPartEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart>)>(&::GlobalNamespace::EditAvatarViewController::remove_didChangedAvatarPartEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x21586e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "remove_didChangedAvatarPartEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.Setup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(bool)>(&::GlobalNamespace::EditAvatarViewController::Setup)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2158794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.InitHistory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)()>(&::GlobalNamespace::EditAvatarViewController::InitHistory)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2158824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "InitHistory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.DiscardLastEdit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)()>(&::GlobalNamespace::EditAvatarViewController::DiscardLastEdit)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x21588bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "DiscardLastEdit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)()>(&::GlobalNamespace::EditAvatarViewController::Update)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x21588ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(bool, bool, bool)>(&::GlobalNamespace::EditAvatarViewController::DidActivate)> {
  constexpr static std::size_t size = 0x85c;
  constexpr static std::size_t addrs = 0x2158a7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::EditAvatarViewController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.RefreshUi
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)()>(&::GlobalNamespace::EditAvatarViewController::RefreshUi)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x21594e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "RefreshUi",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.UpdateButtons
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)()>(&::GlobalNamespace::EditAvatarViewController::UpdateButtons)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2158864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "UpdateButtons",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.HandleSkinColorDidChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(int32_t)>(&::GlobalNamespace::EditAvatarViewController::HandleSkinColorDidChanged)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2159814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "HandleSkinColorDidChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.EyesValuePickerHasChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(::StringW)>(&::GlobalNamespace::EditAvatarViewController::EyesValuePickerHasChanged)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x21598a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "EyesValuePickerHasChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.HandleUndoButtonWasPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)()>(&::GlobalNamespace::EditAvatarViewController::HandleUndoButtonWasPressed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21589cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "HandleUndoButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.HandleRedoButtonWasPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)()>(&::GlobalNamespace::EditAvatarViewController::HandleRedoButtonWasPressed)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2159940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "HandleRedoButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.HandleRandomizeAllButtonWasPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)()>(&::GlobalNamespace::EditAvatarViewController::HandleRandomizeAllButtonWasPressed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2158930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "HandleRandomizeAllButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.HandleRandomizeModelsButtonWasPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)()>(&::GlobalNamespace::EditAvatarViewController::HandleRandomizeModelsButtonWasPressed)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2159a38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "HandleRandomizeModelsButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.HandleRandomizeColorsButtonWasPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)()>(&::GlobalNamespace::EditAvatarViewController::HandleRandomizeColorsButtonWasPressed)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2159ab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "HandleRandomizeColorsButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.ReportAllChangedAndUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)()>(&::GlobalNamespace::EditAvatarViewController::ReportAllChangedAndUpdate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21599e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "ReportAllChangedAndUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.HandleApplyButtonWasPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)()>(&::GlobalNamespace::EditAvatarViewController::HandleApplyButtonWasPressed)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2159b20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "HandleApplyButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.SaveAvatar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)()>(&::GlobalNamespace::EditAvatarViewController::SaveAvatar)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2159b54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "SaveAvatar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.HandleCancelButtonWasPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)()>(&::GlobalNamespace::EditAvatarViewController::HandleCancelButtonWasPressed)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2159b9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "HandleCancelButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.CreateColorValuePairsForAvatarPartCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::____GlobalNamespace__NamedColorListController__ColorValuePair> (::GlobalNamespace::EditAvatarViewController::*)(::ArrayW<::GlobalNamespace::SkinColorSO>)>(&::GlobalNamespace::EditAvatarViewController::CreateColorValuePairsForAvatarPartCollection)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x21593d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "CreateColorValuePairsForAvatarPartCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::SkinColorSO>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController.SetupColorButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(::UnityEngine::UI::Button, ::System::Action_1<::UnityEngine::Color>, ::System::Func_1<::UnityEngine::Color>, ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart, int32_t)>(&::GlobalNamespace::EditAvatarViewController::SetupColorButton)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x21592d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "SetupColorButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Button>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Color>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::UnityEngine::Color>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)()>(&::GlobalNamespace::EditAvatarViewController::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2159be0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController._DidActivate_b__44_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(::UnityEngine::Color)>(&::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2159c44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "<DidActivate>b__44_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController._DidActivate_b__44_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::EditAvatarViewController::*)()>(&::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2159c6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "<DidActivate>b__44_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController._DidActivate_b__44_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(::UnityEngine::Color)>(&::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_2)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2159c94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "<DidActivate>b__44_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController._DidActivate_b__44_3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::EditAvatarViewController::*)()>(&::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_3)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2159cbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "<DidActivate>b__44_3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController._DidActivate_b__44_4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(::UnityEngine::Color)>(&::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_4)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2159ce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "<DidActivate>b__44_4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController._DidActivate_b__44_5
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::EditAvatarViewController::*)()>(&::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_5)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2159d0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "<DidActivate>b__44_5",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController._DidActivate_b__44_6
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(::UnityEngine::Color)>(&::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_6)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2159d34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "<DidActivate>b__44_6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController._DidActivate_b__44_7
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::EditAvatarViewController::*)()>(&::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_7)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2159d5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "<DidActivate>b__44_7",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController._DidActivate_b__44_8
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(::UnityEngine::Color)>(&::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_8)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2159d84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "<DidActivate>b__44_8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController._DidActivate_b__44_9
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::EditAvatarViewController::*)()>(&::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_9)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2159dac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "<DidActivate>b__44_9",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController._DidActivate_b__44_10
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(::UnityEngine::Color)>(&::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_10)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2159dd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "<DidActivate>b__44_10",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController._DidActivate_b__44_11
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::EditAvatarViewController::*)()>(&::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_11)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2159dfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "<DidActivate>b__44_11",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController._DidActivate_b__44_12
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(::StringW)>(&::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_12)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2159e24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "<DidActivate>b__44_12",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController._DidActivate_b__44_13
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(::StringW)>(&::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_13)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2159e48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "<DidActivate>b__44_13",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarViewController._DidActivate_b__44_14
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EditAvatarViewController::*)(::StringW)>(&::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_14)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2159e6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "<DidActivate>b__44_14",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::EditAvatarViewController::__set__skinColorValuePicker(::GlobalNamespace::NamedColorListController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NamedColorListController, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::NamedColorListController>(value));
}
constexpr ::GlobalNamespace::NamedColorListController ::GlobalNamespace::EditAvatarViewController::__get__skinColorValuePicker() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NamedColorListController, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EditAvatarViewController::__set__headTopValuePicker(::GlobalNamespace::NamedIntListController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NamedIntListController, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::NamedIntListController>(value));
}
constexpr ::GlobalNamespace::NamedIntListController ::GlobalNamespace::EditAvatarViewController::__get__headTopValuePicker() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NamedIntListController, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EditAvatarViewController::__set__eyesValuePicker(::GlobalNamespace::NamedIntListController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NamedIntListController, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::NamedIntListController>(value));
}
constexpr ::GlobalNamespace::NamedIntListController ::GlobalNamespace::EditAvatarViewController::__get__eyesValuePicker() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NamedIntListController, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EditAvatarViewController::__set__handsValuePicker(::GlobalNamespace::NamedIntListController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NamedIntListController, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::NamedIntListController>(value));
}
constexpr ::GlobalNamespace::NamedIntListController ::GlobalNamespace::EditAvatarViewController::__get__handsValuePicker() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NamedIntListController, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EditAvatarViewController::__set__clothesValuePicker(::GlobalNamespace::NamedIntListController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NamedIntListController, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::NamedIntListController>(value));
}
constexpr ::GlobalNamespace::NamedIntListController ::GlobalNamespace::EditAvatarViewController::__get__clothesValuePicker() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NamedIntListController, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EditAvatarViewController::__set__headTopPrimaryColorButtonController(::GlobalNamespace::ColorPickerButtonController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorPickerButtonController, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::ColorPickerButtonController>(value));
}
constexpr ::GlobalNamespace::ColorPickerButtonController ::GlobalNamespace::EditAvatarViewController::__get__headTopPrimaryColorButtonController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorPickerButtonController, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EditAvatarViewController::__set__headTopSecondaryColorButtonController(::GlobalNamespace::ColorPickerButtonController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorPickerButtonController, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::ColorPickerButtonController>(value));
}
constexpr ::GlobalNamespace::ColorPickerButtonController ::GlobalNamespace::EditAvatarViewController::__get__headTopSecondaryColorButtonController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorPickerButtonController, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EditAvatarViewController::__set__handsColorButtonController(::GlobalNamespace::ColorPickerButtonController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorPickerButtonController, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::ColorPickerButtonController>(value));
}
constexpr ::GlobalNamespace::ColorPickerButtonController ::GlobalNamespace::EditAvatarViewController::__get__handsColorButtonController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorPickerButtonController, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EditAvatarViewController::__set__clothesColorButtonControllerPrimary(::GlobalNamespace::ColorPickerButtonController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorPickerButtonController, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::ColorPickerButtonController>(value));
}
constexpr ::GlobalNamespace::ColorPickerButtonController ::GlobalNamespace::EditAvatarViewController::__get__clothesColorButtonControllerPrimary() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorPickerButtonController, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EditAvatarViewController::__set__clothesColorButtonControllerSecondary(::GlobalNamespace::ColorPickerButtonController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorPickerButtonController, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::ColorPickerButtonController>(value));
}
constexpr ::GlobalNamespace::ColorPickerButtonController ::GlobalNamespace::EditAvatarViewController::__get__clothesColorButtonControllerSecondary() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorPickerButtonController, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EditAvatarViewController::__set__clothesColorButtonControllerDetail(::GlobalNamespace::ColorPickerButtonController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorPickerButtonController, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::ColorPickerButtonController>(value));
}
constexpr ::GlobalNamespace::ColorPickerButtonController ::GlobalNamespace::EditAvatarViewController::__get__clothesColorButtonControllerDetail() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorPickerButtonController, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EditAvatarViewController::__set__randomizeAllButton(::UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Button>(value));
}
constexpr ::UnityEngine::UI::Button ::GlobalNamespace::EditAvatarViewController::__get__randomizeAllButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EditAvatarViewController::__set__undoButton(::UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Button>(value));
}
constexpr ::UnityEngine::UI::Button ::GlobalNamespace::EditAvatarViewController::__get__undoButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EditAvatarViewController::__set__redoButton(::UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Button>(value));
}
constexpr ::UnityEngine::UI::Button ::GlobalNamespace::EditAvatarViewController::__get__redoButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EditAvatarViewController::__set__applyButton(::UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Button>(value));
}
constexpr ::UnityEngine::UI::Button ::GlobalNamespace::EditAvatarViewController::__get__applyButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EditAvatarViewController::__set__cancelButton(::UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Button>(value));
}
constexpr ::UnityEngine::UI::Button ::GlobalNamespace::EditAvatarViewController::__get__cancelButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EditAvatarViewController::__set__applyButtonText(::HMUI::CurvedTextMeshPro value)  {
::cordl_internals::setInstanceField<::HMUI::CurvedTextMeshPro, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::CurvedTextMeshPro>(value));
}
constexpr ::HMUI::CurvedTextMeshPro ::GlobalNamespace::EditAvatarViewController::__get__applyButtonText() const {
return ::cordl_internals::getInstanceField<::HMUI::CurvedTextMeshPro, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EditAvatarViewController::__set__eyesPreviewImage(::UnityEngine::UI::Image value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Image, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Image>(value));
}
constexpr ::UnityEngine::UI::Image ::GlobalNamespace::EditAvatarViewController::__get__eyesPreviewImage() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Image, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EditAvatarViewController::__set__avatarPartsModel(::GlobalNamespace::AvatarPartsModel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AvatarPartsModel, 0x100>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::AvatarPartsModel>(value));
}
constexpr ::GlobalNamespace::AvatarPartsModel ::GlobalNamespace::EditAvatarViewController::__get__avatarPartsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AvatarPartsModel, 0x100>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EditAvatarViewController::__set__avatarDataModel(::GlobalNamespace::AvatarDataModel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AvatarDataModel, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::AvatarDataModel>(value));
}
constexpr ::GlobalNamespace::AvatarDataModel ::GlobalNamespace::EditAvatarViewController::__get__avatarDataModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AvatarDataModel, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EditAvatarViewController::__set__playerDataModel(::GlobalNamespace::PlayerDataModel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerDataModel, 0x110>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::PlayerDataModel>(value));
}
constexpr ::GlobalNamespace::PlayerDataModel ::GlobalNamespace::EditAvatarViewController::__get__playerDataModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel, 0x110>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EditAvatarViewController::__set_didFinishEvent(::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__FinishAction> value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__FinishAction>, 0x118>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__FinishAction>>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__FinishAction> ::GlobalNamespace::EditAvatarViewController::__get_didFinishEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__FinishAction>, 0x118>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EditAvatarViewController::__set_didRequestColorChangeEvent(::System::Action_4<::System::Action_1<::UnityEngine::Color>,::UnityEngine::Color,::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart,int32_t> value)  {
::cordl_internals::setInstanceField<::System::Action_4<::System::Action_1<::UnityEngine::Color>,::UnityEngine::Color,::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart,int32_t>, 0x120>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_4<::System::Action_1<::UnityEngine::Color>,::UnityEngine::Color,::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart,int32_t>>(value));
}
constexpr ::System::Action_4<::System::Action_1<::UnityEngine::Color>,::UnityEngine::Color,::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart,int32_t> ::GlobalNamespace::EditAvatarViewController::__get_didRequestColorChangeEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_4<::System::Action_1<::UnityEngine::Color>,::UnityEngine::Color,::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart,int32_t>, 0x120>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EditAvatarViewController::__set_randomizeAllButtonWasPressedEvent(::System::Action value)  {
::cordl_internals::setInstanceField<::System::Action, 0x128>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action>(value));
}
constexpr ::System::Action ::GlobalNamespace::EditAvatarViewController::__get_randomizeAllButtonWasPressedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action, 0x128>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EditAvatarViewController::__set_didChangedAvatarPartEvent(::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart> value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart>, 0x130>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart>>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart> ::GlobalNamespace::EditAvatarViewController::__get_didChangedAvatarPartEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart>, 0x130>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EditAvatarViewController::__set__avatarEditHistory(::GlobalNamespace::AvatarEditHistory value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AvatarEditHistory, 0x138>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::AvatarEditHistory>(value));
}
constexpr ::GlobalNamespace::AvatarEditHistory ::GlobalNamespace::EditAvatarViewController::__get__avatarEditHistory() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AvatarEditHistory, 0x138>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EditAvatarViewController::__set__intPickerBinder(::HMUI::ValueChangedBinder_1<int32_t> value)  {
::cordl_internals::setInstanceField<::HMUI::ValueChangedBinder_1<int32_t>, 0x140>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::ValueChangedBinder_1<int32_t>>(value));
}
constexpr ::HMUI::ValueChangedBinder_1<int32_t> ::GlobalNamespace::EditAvatarViewController::__get__intPickerBinder() const {
return ::cordl_internals::getInstanceField<::HMUI::ValueChangedBinder_1<int32_t>, 0x140>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EditAvatarViewController::__set__lastEditedPart(::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart, 0x148>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart ::GlobalNamespace::EditAvatarViewController::__get__lastEditedPart() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart, 0x148>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::EditAvatarViewController::add_didFinishEvent(::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__FinishAction> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__FinishAction>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::EditAvatarViewController::remove_didFinishEvent(::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__FinishAction> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__FinishAction>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::EditAvatarViewController::add_didRequestColorChangeEvent(::System::Action_4<::System::Action_1<::UnityEngine::Color>,::UnityEngine::Color,::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart,int32_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "add_didRequestColorChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::System::Action_1<::UnityEngine::Color>,::UnityEngine::Color,::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::EditAvatarViewController::remove_didRequestColorChangeEvent(::System::Action_4<::System::Action_1<::UnityEngine::Color>,::UnityEngine::Color,::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart,int32_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "remove_didRequestColorChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::System::Action_1<::UnityEngine::Color>,::UnityEngine::Color,::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::EditAvatarViewController::add_randomizeAllButtonWasPressedEvent(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "add_randomizeAllButtonWasPressedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::EditAvatarViewController::remove_randomizeAllButtonWasPressedEvent(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "remove_randomizeAllButtonWasPressedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::EditAvatarViewController::add_didChangedAvatarPartEvent(::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "add_didChangedAvatarPartEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::EditAvatarViewController::remove_didChangedAvatarPartEvent(::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "remove_didChangedAvatarPartEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::EditAvatarViewController::Setup(bool showAsCreateView)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, showAsCreateView);
}
 void ::GlobalNamespace::EditAvatarViewController::InitHistory()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "InitHistory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::EditAvatarViewController::DiscardLastEdit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "DiscardLastEdit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::EditAvatarViewController::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::EditAvatarViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
 void ::GlobalNamespace::EditAvatarViewController::RefreshUi()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "RefreshUi",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::EditAvatarViewController::UpdateButtons()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "UpdateButtons",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::EditAvatarViewController::HandleSkinColorDidChanged(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "HandleSkinColorDidChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::EditAvatarViewController::EyesValuePickerHasChanged(::StringW eyesId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "EyesValuePickerHasChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eyesId);
}
 void ::GlobalNamespace::EditAvatarViewController::HandleUndoButtonWasPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "HandleUndoButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::EditAvatarViewController::HandleRedoButtonWasPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "HandleRedoButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::EditAvatarViewController::HandleRandomizeAllButtonWasPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "HandleRandomizeAllButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::EditAvatarViewController::HandleRandomizeModelsButtonWasPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "HandleRandomizeModelsButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::EditAvatarViewController::HandleRandomizeColorsButtonWasPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "HandleRandomizeColorsButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::EditAvatarViewController::ReportAllChangedAndUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "ReportAllChangedAndUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::EditAvatarViewController::HandleApplyButtonWasPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "HandleApplyButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::EditAvatarViewController::SaveAvatar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "SaveAvatar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::EditAvatarViewController::HandleCancelButtonWasPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "HandleCancelButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename T>
 ::ArrayW<::GlobalNamespace::____GlobalNamespace__NamedIntListController__TextValuePair> ::GlobalNamespace::EditAvatarViewController::CreateTextValuePairsForAvatarPartCollection(::GlobalNamespace::AvatarPartCollection_1<T> partCollection)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                        "CreateTextValuePairsForAvatarPartCollection",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AvatarPartCollection_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::____GlobalNamespace__NamedIntListController__TextValuePair>, false>(nullptr, ___internal_method, partCollection);
}
 ::ArrayW<::GlobalNamespace::____GlobalNamespace__NamedColorListController__ColorValuePair> ::GlobalNamespace::EditAvatarViewController::CreateColorValuePairsForAvatarPartCollection(::ArrayW<::GlobalNamespace::SkinColorSO> colors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "CreateColorValuePairsForAvatarPartCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::SkinColorSO>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::____GlobalNamespace__NamedColorListController__ColorValuePair>, false>(const_cast<void*>(instance), ___internal_method, colors);
}
/// @param uvSegment: int32_t (default: 0)
 void ::GlobalNamespace::EditAvatarViewController::SetupColorButton(::UnityEngine::UI::Button button, ::System::Action_1<::UnityEngine::Color> colorSetter, ::System::Func_1<::UnityEngine::Color> currentColor, ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart avatarEditPart, int32_t uvSegment)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "SetupColorButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Button>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Color>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::UnityEngine::Color>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, button, colorSetter, currentColor, avatarEditPart, uvSegment);
}
template<typename T>
 void ::GlobalNamespace::EditAvatarViewController::SetupValuePicker(::GlobalNamespace::AvatarPartCollection_1<T> partCollection, ::GlobalNamespace::NamedIntListController valuePicker, ::System::Action_1<::StringW> setIdAction, ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart avatarEditPart)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                        "SetupValuePicker",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AvatarPartCollection_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NamedIntListController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, partCollection, valuePicker, setIdAction, avatarEditPart);
}
// Ctor Parameters []
 ::GlobalNamespace::EditAvatarViewController::EditAvatarViewController()  : ::HMUI::ViewController(THROW_UNLESS(::il2cpp_utils::New<EditAvatarViewController>())) {}
 void ::GlobalNamespace::EditAvatarViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_0(::UnityEngine::Color color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "<DidActivate>b__44_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, color);
}
 ::UnityEngine::Color ::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "<DidActivate>b__44_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_2(::UnityEngine::Color color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "<DidActivate>b__44_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, color);
}
 ::UnityEngine::Color ::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_3()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "<DidActivate>b__44_3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_4(::UnityEngine::Color color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "<DidActivate>b__44_4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, color);
}
 ::UnityEngine::Color ::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_5()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "<DidActivate>b__44_5",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_6(::UnityEngine::Color color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "<DidActivate>b__44_6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, color);
}
 ::UnityEngine::Color ::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_7()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "<DidActivate>b__44_7",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_8(::UnityEngine::Color color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "<DidActivate>b__44_8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, color);
}
 ::UnityEngine::Color ::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_9()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "<DidActivate>b__44_9",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_10(::UnityEngine::Color color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "<DidActivate>b__44_10",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, color);
}
 ::UnityEngine::Color ::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_11()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "<DidActivate>b__44_11",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_12(::StringW s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "<DidActivate>b__44_12",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, s);
}
 void ::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_13(::StringW s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "<DidActivate>b__44_13",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, s);
}
 void ::GlobalNamespace::EditAvatarViewController::_DidActivate_b__44_14(::StringW s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EditAvatarViewController>::get(),
                            "<DidActivate>b__44_14",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, s);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1::*)()>(&::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1._SetupValuePicker_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1::*)(int32_t)>(&::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1::_SetupValuePicker_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1>::get(),
                            "<SetupValuePicker>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1::__set_setIdAction(::System::Action_1<::StringW> value)  {
::cordl_internals::setInstanceField<::System::Action_1<::StringW>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<::StringW>>(value));
}
constexpr ::System::Action_1<::StringW> ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1::__get_setIdAction() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::StringW>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1::__set_partCollection(::GlobalNamespace::AvatarPartCollection_1<T> value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AvatarPartCollection_1<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::AvatarPartCollection_1<T>>(value));
}
constexpr ::GlobalNamespace::AvatarPartCollection_1<T> ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1::__get_partCollection() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AvatarPartCollection_1<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1::__set___4__this(::GlobalNamespace::EditAvatarViewController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EditAvatarViewController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::EditAvatarViewController>(value));
}
constexpr ::GlobalNamespace::EditAvatarViewController ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EditAvatarViewController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1::__set_avatarEditPart(::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1::__get_avatarEditPart() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1::____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1>())) {}
 void ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1::_SetupValuePicker_b__0(int32_t idx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1>::get(),
                            "<SetupValuePicker>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, idx);
}
} // end anonymous namespace
