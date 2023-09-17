#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace GlobalNamespace {
template<typename T>
class AvatarPartCollection_1;
}
namespace GlobalNamespace {
class AvatarPartsModel;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class ____GlobalNamespace__NamedIntListController__TextValuePair;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class SkinColorSO;
}
namespace GlobalNamespace {
class NamedColorListController;
}
namespace GlobalNamespace {
class NamedIntListController;
}
namespace UnityEngine::UI {
class Image;
}
namespace GlobalNamespace {
class AvatarEditHistory;
}
namespace UnityEngine::UI {
class Button;
}
namespace HMUI {
template<typename T>
class ValueChangedBinder_1;
}
namespace HMUI {
class CurvedTextMeshPro;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Action_4;
}
namespace GlobalNamespace {
class AvatarDataModel;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class ____GlobalNamespace__NamedColorListController__ColorValuePair;
}
namespace GlobalNamespace {
class ColorPickerButtonController;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class ____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__EditAvatarViewController__AvatarEditPart;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__EditAvatarViewController__FinishAction;
}
namespace GlobalNamespace {
class EditAvatarViewController;
}
namespace GlobalNamespace {
class ____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class ____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1<T>;
}
// Type: ::FinishAction
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5713))
// CS Name: EditAvatarViewController::FinishAction
struct CORDL_TYPE ____GlobalNamespace__EditAvatarViewController__FinishAction : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__EditAvatarViewController__FinishAction(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__EditAvatarViewController__FinishAction(____GlobalNamespace__EditAvatarViewController__FinishAction const&) = default;
                    constexpr ____GlobalNamespace__EditAvatarViewController__FinishAction(____GlobalNamespace__EditAvatarViewController__FinishAction&&) = default;
                    constexpr ____GlobalNamespace__EditAvatarViewController__FinishAction& operator=(____GlobalNamespace__EditAvatarViewController__FinishAction const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__EditAvatarViewController__FinishAction& operator=(____GlobalNamespace__EditAvatarViewController__FinishAction&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__EditAvatarViewController__FinishAction(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__EditAvatarViewController__FinishAction_Unwrapped : int32_t {
__Cancel = 0,
__Apply = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__EditAvatarViewController__FinishAction_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__EditAvatarViewController__FinishAction_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Cancel offset 0
static ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__FinishAction const Cancel;

/// @brief Field Apply offset 0
static ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__FinishAction const Apply;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::AvatarEditPart
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5714))
// CS Name: EditAvatarViewController::AvatarEditPart
struct CORDL_TYPE ____GlobalNamespace__EditAvatarViewController__AvatarEditPart : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__EditAvatarViewController__AvatarEditPart(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__EditAvatarViewController__AvatarEditPart(____GlobalNamespace__EditAvatarViewController__AvatarEditPart const&) = default;
                    constexpr ____GlobalNamespace__EditAvatarViewController__AvatarEditPart(____GlobalNamespace__EditAvatarViewController__AvatarEditPart&&) = default;
                    constexpr ____GlobalNamespace__EditAvatarViewController__AvatarEditPart& operator=(____GlobalNamespace__EditAvatarViewController__AvatarEditPart const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__EditAvatarViewController__AvatarEditPart& operator=(____GlobalNamespace__EditAvatarViewController__AvatarEditPart&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__EditAvatarViewController__AvatarEditPart(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__EditAvatarViewController__AvatarEditPart_Unwrapped : int32_t {
__Unknown = 0,
__All = 1,
__SkinColor = 2,
__HeadTopModel = 3,
__HeadTopPrimaryColor = 4,
__HeadTopSecondaryColor = 5,
__GlassesModel = 6,
__GlassesColor = 7,
__FacialHairModel = 8,
__FacialHairColor = 9,
__HandsModel = 10,
__HandsColor = 11,
__ClothesModel = 12,
__ClothesModelPrimaryColor = 13,
__ClothesModelSecondaryColor = 14,
__ClothesModelDetailColor = 15,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__EditAvatarViewController__AvatarEditPart_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__EditAvatarViewController__AvatarEditPart_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart const Unknown;

/// @brief Field All offset 0
static ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart const All;

/// @brief Field SkinColor offset 0
static ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart const SkinColor;

/// @brief Field HeadTopModel offset 0
static ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart const HeadTopModel;

/// @brief Field HeadTopPrimaryColor offset 0
static ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart const HeadTopPrimaryColor;

/// @brief Field HeadTopSecondaryColor offset 0
static ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart const HeadTopSecondaryColor;

/// @brief Field GlassesModel offset 0
static ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart const GlassesModel;

/// @brief Field GlassesColor offset 0
static ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart const GlassesColor;

/// @brief Field FacialHairModel offset 0
static ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart const FacialHairModel;

/// @brief Field FacialHairColor offset 0
static ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart const FacialHairColor;

/// @brief Field HandsModel offset 0
static ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart const HandsModel;

/// @brief Field HandsColor offset 0
static ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart const HandsColor;

/// @brief Field ClothesModel offset 0
static ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart const ClothesModel;

/// @brief Field ClothesModelPrimaryColor offset 0
static ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart const ClothesModelPrimaryColor;

/// @brief Field ClothesModelSecondaryColor offset 0
static ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart const ClothesModelSecondaryColor;

/// @brief Field ClothesModelDetailColor offset 0
static ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart const ClothesModelDetailColor;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass60_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5715))
// CS Name: EditAvatarViewController::<>c__DisplayClass60_0
class CORDL_TYPE ____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0(____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0(____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0& operator=(____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0& operator=(____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::EditAvatarViewController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::EditAvatarViewController value) ;

constexpr ::GlobalNamespace::EditAvatarViewController __get___4__this() const;

 ::System::Action_1<::UnityEngine::Color> __declspec(property(get=__get_colorSetter, put=__set_colorSetter))  colorSetter;

constexpr void __set_colorSetter(::System::Action_1<::UnityEngine::Color> value) ;

constexpr ::System::Action_1<::UnityEngine::Color> __get_colorSetter() const;

 ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart __declspec(property(get=__get_avatarEditPart, put=__set_avatarEditPart))  avatarEditPart;

constexpr void __set_avatarEditPart(::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart __get_avatarEditPart() const;

 ::System::Func_1<::UnityEngine::Color> __declspec(property(get=__get_currentColor, put=__set_currentColor))  currentColor;

constexpr void __set_currentColor(::System::Func_1<::UnityEngine::Color> value) ;

constexpr ::System::Func_1<::UnityEngine::Color> __get_currentColor() const;

 int32_t __declspec(property(get=__get_uvSegment, put=__set_uvSegment))  uvSegment;

constexpr void __set_uvSegment(int32_t value) ;

constexpr int32_t __get_uvSegment() const;

 ::System::Action_1<::UnityEngine::Color> __declspec(property(get=__get___9__1, put=__set___9__1))  __9__1;

constexpr void __set___9__1(::System::Action_1<::UnityEngine::Color> value) ;

constexpr ::System::Action_1<::UnityEngine::Color> __get___9__1() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0() ;

/// @brief Method .ctor addr 0x2159e90 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SetupColorButton>b__0 addr 0x2159e98 size 0xd0 virtual false final false
 void _SetupColorButton_b__0() ;

/// @brief Method <SetupColorButton>b__1 addr 0x2159f68 size 0x60 virtual false final false
 void _SetupColorButton_b__1(::UnityEngine::Color c) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass61_0`1
// Type: ::EditAvatarViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5717))
// CS Name: EditAvatarViewController
class CORDL_TYPE EditAvatarViewController : public ::HMUI::ViewController {
public:
// Declarations
template<typename T>
using __c__DisplayClass61_0_1 = ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1<T>;

using __c__DisplayClass60_0 = ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0;

using AvatarEditPart = ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart;

using FinishAction = ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__FinishAction;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x150};

virtual ~EditAvatarViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "EditAvatarViewController", modifiers: " const&", def_value: None }]
constexpr EditAvatarViewController(EditAvatarViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EditAvatarViewController", modifiers: "&&", def_value: None }]
constexpr EditAvatarViewController(EditAvatarViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EditAvatarViewController(void* ptr) noexcept : ::HMUI::ViewController(ptr) {
}


  constexpr EditAvatarViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EditAvatarViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EditAvatarViewController& operator=(EditAvatarViewController&& o) noexcept = default;
  constexpr EditAvatarViewController& operator=(EditAvatarViewController const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::NamedColorListController __declspec(property(get=__get__skinColorValuePicker, put=__set__skinColorValuePicker))  _skinColorValuePicker;

constexpr void __set__skinColorValuePicker(::GlobalNamespace::NamedColorListController value) ;

constexpr ::GlobalNamespace::NamedColorListController __get__skinColorValuePicker() const;

 ::GlobalNamespace::NamedIntListController __declspec(property(get=__get__headTopValuePicker, put=__set__headTopValuePicker))  _headTopValuePicker;

constexpr void __set__headTopValuePicker(::GlobalNamespace::NamedIntListController value) ;

constexpr ::GlobalNamespace::NamedIntListController __get__headTopValuePicker() const;

 ::GlobalNamespace::NamedIntListController __declspec(property(get=__get__eyesValuePicker, put=__set__eyesValuePicker))  _eyesValuePicker;

constexpr void __set__eyesValuePicker(::GlobalNamespace::NamedIntListController value) ;

constexpr ::GlobalNamespace::NamedIntListController __get__eyesValuePicker() const;

 ::GlobalNamespace::NamedIntListController __declspec(property(get=__get__handsValuePicker, put=__set__handsValuePicker))  _handsValuePicker;

constexpr void __set__handsValuePicker(::GlobalNamespace::NamedIntListController value) ;

constexpr ::GlobalNamespace::NamedIntListController __get__handsValuePicker() const;

 ::GlobalNamespace::NamedIntListController __declspec(property(get=__get__clothesValuePicker, put=__set__clothesValuePicker))  _clothesValuePicker;

constexpr void __set__clothesValuePicker(::GlobalNamespace::NamedIntListController value) ;

constexpr ::GlobalNamespace::NamedIntListController __get__clothesValuePicker() const;

 ::GlobalNamespace::ColorPickerButtonController __declspec(property(get=__get__headTopPrimaryColorButtonController, put=__set__headTopPrimaryColorButtonController))  _headTopPrimaryColorButtonController;

constexpr void __set__headTopPrimaryColorButtonController(::GlobalNamespace::ColorPickerButtonController value) ;

constexpr ::GlobalNamespace::ColorPickerButtonController __get__headTopPrimaryColorButtonController() const;

 ::GlobalNamespace::ColorPickerButtonController __declspec(property(get=__get__headTopSecondaryColorButtonController, put=__set__headTopSecondaryColorButtonController))  _headTopSecondaryColorButtonController;

constexpr void __set__headTopSecondaryColorButtonController(::GlobalNamespace::ColorPickerButtonController value) ;

constexpr ::GlobalNamespace::ColorPickerButtonController __get__headTopSecondaryColorButtonController() const;

 ::GlobalNamespace::ColorPickerButtonController __declspec(property(get=__get__handsColorButtonController, put=__set__handsColorButtonController))  _handsColorButtonController;

constexpr void __set__handsColorButtonController(::GlobalNamespace::ColorPickerButtonController value) ;

constexpr ::GlobalNamespace::ColorPickerButtonController __get__handsColorButtonController() const;

 ::GlobalNamespace::ColorPickerButtonController __declspec(property(get=__get__clothesColorButtonControllerPrimary, put=__set__clothesColorButtonControllerPrimary))  _clothesColorButtonControllerPrimary;

constexpr void __set__clothesColorButtonControllerPrimary(::GlobalNamespace::ColorPickerButtonController value) ;

constexpr ::GlobalNamespace::ColorPickerButtonController __get__clothesColorButtonControllerPrimary() const;

 ::GlobalNamespace::ColorPickerButtonController __declspec(property(get=__get__clothesColorButtonControllerSecondary, put=__set__clothesColorButtonControllerSecondary))  _clothesColorButtonControllerSecondary;

constexpr void __set__clothesColorButtonControllerSecondary(::GlobalNamespace::ColorPickerButtonController value) ;

constexpr ::GlobalNamespace::ColorPickerButtonController __get__clothesColorButtonControllerSecondary() const;

 ::GlobalNamespace::ColorPickerButtonController __declspec(property(get=__get__clothesColorButtonControllerDetail, put=__set__clothesColorButtonControllerDetail))  _clothesColorButtonControllerDetail;

constexpr void __set__clothesColorButtonControllerDetail(::GlobalNamespace::ColorPickerButtonController value) ;

constexpr ::GlobalNamespace::ColorPickerButtonController __get__clothesColorButtonControllerDetail() const;

 ::UnityEngine::UI::Button __declspec(property(get=__get__randomizeAllButton, put=__set__randomizeAllButton))  _randomizeAllButton;

constexpr void __set__randomizeAllButton(::UnityEngine::UI::Button value) ;

constexpr ::UnityEngine::UI::Button __get__randomizeAllButton() const;

 ::UnityEngine::UI::Button __declspec(property(get=__get__undoButton, put=__set__undoButton))  _undoButton;

constexpr void __set__undoButton(::UnityEngine::UI::Button value) ;

constexpr ::UnityEngine::UI::Button __get__undoButton() const;

 ::UnityEngine::UI::Button __declspec(property(get=__get__redoButton, put=__set__redoButton))  _redoButton;

constexpr void __set__redoButton(::UnityEngine::UI::Button value) ;

constexpr ::UnityEngine::UI::Button __get__redoButton() const;

 ::UnityEngine::UI::Button __declspec(property(get=__get__applyButton, put=__set__applyButton))  _applyButton;

constexpr void __set__applyButton(::UnityEngine::UI::Button value) ;

constexpr ::UnityEngine::UI::Button __get__applyButton() const;

 ::UnityEngine::UI::Button __declspec(property(get=__get__cancelButton, put=__set__cancelButton))  _cancelButton;

constexpr void __set__cancelButton(::UnityEngine::UI::Button value) ;

constexpr ::UnityEngine::UI::Button __get__cancelButton() const;

 ::HMUI::CurvedTextMeshPro __declspec(property(get=__get__applyButtonText, put=__set__applyButtonText))  _applyButtonText;

constexpr void __set__applyButtonText(::HMUI::CurvedTextMeshPro value) ;

constexpr ::HMUI::CurvedTextMeshPro __get__applyButtonText() const;

 ::UnityEngine::UI::Image __declspec(property(get=__get__eyesPreviewImage, put=__set__eyesPreviewImage))  _eyesPreviewImage;

constexpr void __set__eyesPreviewImage(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get__eyesPreviewImage() const;

 ::GlobalNamespace::AvatarPartsModel __declspec(property(get=__get__avatarPartsModel, put=__set__avatarPartsModel))  _avatarPartsModel;

constexpr void __set__avatarPartsModel(::GlobalNamespace::AvatarPartsModel value) ;

constexpr ::GlobalNamespace::AvatarPartsModel __get__avatarPartsModel() const;

 ::GlobalNamespace::AvatarDataModel __declspec(property(get=__get__avatarDataModel, put=__set__avatarDataModel))  _avatarDataModel;

constexpr void __set__avatarDataModel(::GlobalNamespace::AvatarDataModel value) ;

constexpr ::GlobalNamespace::AvatarDataModel __get__avatarDataModel() const;

 ::GlobalNamespace::PlayerDataModel __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel))  _playerDataModel;

constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel value) ;

constexpr ::GlobalNamespace::PlayerDataModel __get__playerDataModel() const;

/// @brief Field kEditApplyButtonLocalizationKey offset 0
static constexpr ::ConstString  kEditApplyButtonLocalizationKey{u"BUTTON_APPLY"};

/// @brief Field kCreateApplyButtonLocalizationKey offset 0
static constexpr ::ConstString  kCreateApplyButtonLocalizationKey{u"BUTTON_CREATE_AVATAR"};

 ::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__FinishAction> __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__FinishAction> value) ;

constexpr ::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__FinishAction> __get_didFinishEvent() const;

 ::System::Action_4<::System::Action_1<::UnityEngine::Color>,::UnityEngine::Color,::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart,int32_t> __declspec(property(get=__get_didRequestColorChangeEvent, put=__set_didRequestColorChangeEvent))  didRequestColorChangeEvent;

constexpr void __set_didRequestColorChangeEvent(::System::Action_4<::System::Action_1<::UnityEngine::Color>,::UnityEngine::Color,::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart,int32_t> value) ;

constexpr ::System::Action_4<::System::Action_1<::UnityEngine::Color>,::UnityEngine::Color,::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart,int32_t> __get_didRequestColorChangeEvent() const;

 ::System::Action __declspec(property(get=__get_randomizeAllButtonWasPressedEvent, put=__set_randomizeAllButtonWasPressedEvent))  randomizeAllButtonWasPressedEvent;

constexpr void __set_randomizeAllButtonWasPressedEvent(::System::Action value) ;

constexpr ::System::Action __get_randomizeAllButtonWasPressedEvent() const;

 ::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart> __declspec(property(get=__get_didChangedAvatarPartEvent, put=__set_didChangedAvatarPartEvent))  didChangedAvatarPartEvent;

constexpr void __set_didChangedAvatarPartEvent(::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart> value) ;

constexpr ::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart> __get_didChangedAvatarPartEvent() const;

 ::GlobalNamespace::AvatarEditHistory __declspec(property(get=__get__avatarEditHistory, put=__set__avatarEditHistory))  _avatarEditHistory;

constexpr void __set__avatarEditHistory(::GlobalNamespace::AvatarEditHistory value) ;

constexpr ::GlobalNamespace::AvatarEditHistory __get__avatarEditHistory() const;

 ::HMUI::ValueChangedBinder_1<int32_t> __declspec(property(get=__get__intPickerBinder, put=__set__intPickerBinder))  _intPickerBinder;

constexpr void __set__intPickerBinder(::HMUI::ValueChangedBinder_1<int32_t> value) ;

constexpr ::HMUI::ValueChangedBinder_1<int32_t> __get__intPickerBinder() const;

 ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart __declspec(property(get=__get__lastEditedPart, put=__set__lastEditedPart))  _lastEditedPart;

constexpr void __set__lastEditedPart(::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart __get__lastEditedPart() const;


// Methods

/// @brief Method add_didFinishEvent addr 0x215821c size 0xb4 virtual false final false
 void add_didFinishEvent(::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__FinishAction> value) ;

/// @brief Method remove_didFinishEvent addr 0x21582d0 size 0xb4 virtual false final false
 void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__FinishAction> value) ;

/// @brief Method add_didRequestColorChangeEvent addr 0x2158384 size 0xb4 virtual false final false
 void add_didRequestColorChangeEvent(::System::Action_4<::System::Action_1<::UnityEngine::Color>,::UnityEngine::Color,::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart,int32_t> value) ;

/// @brief Method remove_didRequestColorChangeEvent addr 0x2158438 size 0xb4 virtual false final false
 void remove_didRequestColorChangeEvent(::System::Action_4<::System::Action_1<::UnityEngine::Color>,::UnityEngine::Color,::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart,int32_t> value) ;

/// @brief Method add_randomizeAllButtonWasPressedEvent addr 0x21584ec size 0xa0 virtual false final false
 void add_randomizeAllButtonWasPressedEvent(::System::Action value) ;

/// @brief Method remove_randomizeAllButtonWasPressedEvent addr 0x215858c size 0xa0 virtual false final false
 void remove_randomizeAllButtonWasPressedEvent(::System::Action value) ;

/// @brief Method add_didChangedAvatarPartEvent addr 0x215862c size 0xb4 virtual false final false
 void add_didChangedAvatarPartEvent(::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart> value) ;

/// @brief Method remove_didChangedAvatarPartEvent addr 0x21586e0 size 0xb4 virtual false final false
 void remove_didChangedAvatarPartEvent(::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart> value) ;

/// @brief Method Setup addr 0x2158794 size 0x90 virtual false final false
 void Setup(bool showAsCreateView) ;

/// @brief Method InitHistory addr 0x2158824 size 0x40 virtual false final false
 void InitHistory() ;

/// @brief Method DiscardLastEdit addr 0x21588bc size 0x30 virtual false final false
 void DiscardLastEdit() ;

/// @brief Method Update addr 0x21588ec size 0x44 virtual false final false
 void Update() ;

/// @brief Method DidActivate addr 0x2158a7c size 0x85c virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method RefreshUi addr 0x21594e8 size 0x32c virtual false final false
 void RefreshUi() ;

/// @brief Method UpdateButtons addr 0x2158864 size 0x58 virtual false final false
 void UpdateButtons() ;

/// @brief Method HandleSkinColorDidChanged addr 0x2159814 size 0x94 virtual false final false
 void HandleSkinColorDidChanged(int32_t value) ;

/// @brief Method EyesValuePickerHasChanged addr 0x21598a8 size 0x98 virtual false final false
 void EyesValuePickerHasChanged(::StringW eyesId) ;

/// @brief Method HandleUndoButtonWasPressed addr 0x21589cc size 0xb0 virtual false final false
 void HandleUndoButtonWasPressed() ;

/// @brief Method HandleRedoButtonWasPressed addr 0x2159940 size 0xa0 virtual false final false
 void HandleRedoButtonWasPressed() ;

/// @brief Method HandleRandomizeAllButtonWasPressed addr 0x2158930 size 0x9c virtual false final false
 void HandleRandomizeAllButtonWasPressed() ;

/// @brief Method HandleRandomizeModelsButtonWasPressed addr 0x2159a38 size 0x78 virtual false final false
 void HandleRandomizeModelsButtonWasPressed() ;

/// @brief Method HandleRandomizeColorsButtonWasPressed addr 0x2159ab0 size 0x70 virtual false final false
 void HandleRandomizeColorsButtonWasPressed() ;

/// @brief Method ReportAllChangedAndUpdate addr 0x21599e0 size 0x58 virtual false final false
 void ReportAllChangedAndUpdate() ;

/// @brief Method HandleApplyButtonWasPressed addr 0x2159b20 size 0x34 virtual false final false
 void HandleApplyButtonWasPressed() ;

/// @brief Method SaveAvatar addr 0x2159b54 size 0x48 virtual false final false
 void SaveAvatar() ;

/// @brief Method HandleCancelButtonWasPressed addr 0x2159b9c size 0x44 virtual false final false
 void HandleCancelButtonWasPressed() ;

/// @brief Method CreateTextValuePairsForAvatarPartCollection addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::ArrayW<::GlobalNamespace::____GlobalNamespace__NamedIntListController__TextValuePair> CreateTextValuePairsForAvatarPartCollection(::GlobalNamespace::AvatarPartCollection_1<T> partCollection) ;

/// @brief Method CreateColorValuePairsForAvatarPartCollection addr 0x21593d0 size 0x118 virtual false final false
 ::ArrayW<::GlobalNamespace::____GlobalNamespace__NamedColorListController__ColorValuePair> CreateColorValuePairsForAvatarPartCollection(::ArrayW<::GlobalNamespace::SkinColorSO> colors) ;

/// @brief Method SetupColorButton addr 0x21592d8 size 0xf8 virtual false final false
 void SetupColorButton(::UnityEngine::UI::Button button, ::System::Action_1<::UnityEngine::Color> colorSetter, ::System::Func_1<::UnityEngine::Color> currentColor, ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart avatarEditPart, int32_t uvSegment) ;

/// @brief Method SetupValuePicker addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetupValuePicker(::GlobalNamespace::AvatarPartCollection_1<T> partCollection, ::GlobalNamespace::NamedIntListController valuePicker, ::System::Action_1<::StringW> setIdAction, ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart avatarEditPart) ;

// Ctor Parameters []
explicit EditAvatarViewController() ;

/// @brief Method .ctor addr 0x2159be0 size 0x64 virtual false final false
 void _ctor() ;

/// @brief Method <DidActivate>b__44_0 addr 0x2159c44 size 0x28 virtual false final false
 void _DidActivate_b__44_0(::UnityEngine::Color color) ;

/// @brief Method <DidActivate>b__44_1 addr 0x2159c6c size 0x28 virtual false final false
 ::UnityEngine::Color _DidActivate_b__44_1() ;

/// @brief Method <DidActivate>b__44_2 addr 0x2159c94 size 0x28 virtual false final false
 void _DidActivate_b__44_2(::UnityEngine::Color color) ;

/// @brief Method <DidActivate>b__44_3 addr 0x2159cbc size 0x28 virtual false final false
 ::UnityEngine::Color _DidActivate_b__44_3() ;

/// @brief Method <DidActivate>b__44_4 addr 0x2159ce4 size 0x28 virtual false final false
 void _DidActivate_b__44_4(::UnityEngine::Color color) ;

/// @brief Method <DidActivate>b__44_5 addr 0x2159d0c size 0x28 virtual false final false
 ::UnityEngine::Color _DidActivate_b__44_5() ;

/// @brief Method <DidActivate>b__44_6 addr 0x2159d34 size 0x28 virtual false final false
 void _DidActivate_b__44_6(::UnityEngine::Color color) ;

/// @brief Method <DidActivate>b__44_7 addr 0x2159d5c size 0x28 virtual false final false
 ::UnityEngine::Color _DidActivate_b__44_7() ;

/// @brief Method <DidActivate>b__44_8 addr 0x2159d84 size 0x28 virtual false final false
 void _DidActivate_b__44_8(::UnityEngine::Color color) ;

/// @brief Method <DidActivate>b__44_9 addr 0x2159dac size 0x28 virtual false final false
 ::UnityEngine::Color _DidActivate_b__44_9() ;

/// @brief Method <DidActivate>b__44_10 addr 0x2159dd4 size 0x28 virtual false final false
 void _DidActivate_b__44_10(::UnityEngine::Color color) ;

/// @brief Method <DidActivate>b__44_11 addr 0x2159dfc size 0x28 virtual false final false
 ::UnityEngine::Color _DidActivate_b__44_11() ;

/// @brief Method <DidActivate>b__44_12 addr 0x2159e24 size 0x24 virtual false final false
 void _DidActivate_b__44_12(::StringW s) ;

/// @brief Method <DidActivate>b__44_13 addr 0x2159e48 size 0x24 virtual false final false
 void _DidActivate_b__44_13(::StringW s) ;

/// @brief Method <DidActivate>b__44_14 addr 0x2159e6c size 0x24 virtual false final false
 void _DidActivate_b__44_14(::StringW s) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass61_0`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5716))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5716), inst: 2 })
// CS Name: EditAvatarViewController::<>c__DisplayClass61_0`1
class CORDL_TYPE ____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1(____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1(____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1& operator=(____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1&& o) noexcept = default;
  constexpr ____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1& operator=(____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1 const& o) noexcept = default;
                


// Fields

 ::System::Action_1<::StringW> __declspec(property(get=__get_setIdAction, put=__set_setIdAction))  setIdAction;

constexpr void __set_setIdAction(::System::Action_1<::StringW> value) ;

constexpr ::System::Action_1<::StringW> __get_setIdAction() const;

 ::GlobalNamespace::AvatarPartCollection_1<T> __declspec(property(get=__get_partCollection, put=__set_partCollection))  partCollection;

constexpr void __set_partCollection(::GlobalNamespace::AvatarPartCollection_1<T> value) ;

constexpr ::GlobalNamespace::AvatarPartCollection_1<T> __get_partCollection() const;

 ::GlobalNamespace::EditAvatarViewController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::EditAvatarViewController value) ;

constexpr ::GlobalNamespace::EditAvatarViewController __get___4__this() const;

 ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart __declspec(property(get=__get_avatarEditPart, put=__set_avatarEditPart))  avatarEditPart;

constexpr void __set_avatarEditPart(::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart __get_avatarEditPart() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <SetupValuePicker>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _SetupValuePicker_b__0(int32_t idx) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass61_0_1, "", "EditAvatarViewController/<>c__DisplayClass61_0`1");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart, "", "EditAvatarViewController/AvatarEditPart");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__FinishAction, "", "EditAvatarViewController/FinishAction");
NEED_NO_BOX(::GlobalNamespace::EditAvatarViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EditAvatarViewController, "", "EditAvatarViewController");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__EditAvatarViewController____c__DisplayClass60_0, "", "EditAvatarViewController/<>c__DisplayClass60_0");
