#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace GlobalNamespace {
struct ____GlobalNamespace__EditAvatarViewController__FinishAction;
}
namespace GlobalNamespace {
class EditAvatarViewController;
}
namespace GlobalNamespace {
class AvatarVisualController;
}
namespace GlobalNamespace {
class AvatarDataModel;
}
namespace UnityEngine {
struct Color;
}
namespace System {
class Action;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class EditColorController;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class AvatarTweenController;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__EditAvatarViewController__AvatarEditPart;
}
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType;
}
namespace GlobalNamespace {
class EditAvatarFlowCoordinator;
}
// Type: ::EditAvatarType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5589))
// CS Name: EditAvatarFlowCoordinator::EditAvatarType
struct CORDL_TYPE ____GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType(____GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType const&) = default;
                    constexpr ____GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType(____GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType&&) = default;
                    constexpr ____GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType& operator=(____GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType& operator=(____GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType_Unwrapped : int32_t {
__Create = 0,
__Edit = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Create offset 0
static ::GlobalNamespace::____GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType const Create;

/// @brief Field Edit offset 0
static ::GlobalNamespace::____GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType const Edit;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EditAvatarFlowCoordinator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13633))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5590))
// CS Name: EditAvatarFlowCoordinator
class CORDL_TYPE EditAvatarFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
// Declarations
using EditAvatarType = ::GlobalNamespace::____GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf8};

virtual ~EditAvatarFlowCoordinator() = default;

// Ctor Parameters [CppParam { name: "", ty: "EditAvatarFlowCoordinator", modifiers: " const&", def_value: None }]
constexpr EditAvatarFlowCoordinator(EditAvatarFlowCoordinator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EditAvatarFlowCoordinator", modifiers: "&&", def_value: None }]
constexpr EditAvatarFlowCoordinator(EditAvatarFlowCoordinator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EditAvatarFlowCoordinator(void* ptr) noexcept : ::HMUI::FlowCoordinator(ptr) {
}


  constexpr EditAvatarFlowCoordinator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EditAvatarFlowCoordinator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EditAvatarFlowCoordinator& operator=(EditAvatarFlowCoordinator&& o) noexcept = default;
  constexpr EditAvatarFlowCoordinator& operator=(EditAvatarFlowCoordinator const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::AvatarVisualController __declspec(property(get=__get__avatarVisualController, put=__set__avatarVisualController))  _avatarVisualController;

constexpr void __set__avatarVisualController(::GlobalNamespace::AvatarVisualController value) ;

constexpr ::GlobalNamespace::AvatarVisualController __get__avatarVisualController() const;

 ::GlobalNamespace::AvatarTweenController __declspec(property(get=__get__avatarTweenController, put=__set__avatarTweenController))  _avatarTweenController;

constexpr void __set__avatarTweenController(::GlobalNamespace::AvatarTweenController value) ;

constexpr ::GlobalNamespace::AvatarTweenController __get__avatarTweenController() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__avatarContainerGameObject, put=__set__avatarContainerGameObject))  _avatarContainerGameObject;

constexpr void __set__avatarContainerGameObject(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__avatarContainerGameObject() const;

 ::GlobalNamespace::EditAvatarViewController __declspec(property(get=__get__editAvatarViewController, put=__set__editAvatarViewController))  _editAvatarViewController;

constexpr void __set__editAvatarViewController(::GlobalNamespace::EditAvatarViewController value) ;

constexpr ::GlobalNamespace::EditAvatarViewController __get__editAvatarViewController() const;

 ::GlobalNamespace::EditColorController __declspec(property(get=__get__editColorViewController, put=__set__editColorViewController))  _editColorViewController;

constexpr void __set__editColorViewController(::GlobalNamespace::EditColorController value) ;

constexpr ::GlobalNamespace::EditColorController __get__editColorViewController() const;

 ::GlobalNamespace::AvatarDataModel __declspec(property(get=__get__avatarDataModel, put=__set__avatarDataModel))  _avatarDataModel;

constexpr void __set__avatarDataModel(::GlobalNamespace::AvatarDataModel value) ;

constexpr ::GlobalNamespace::AvatarDataModel __get__avatarDataModel() const;

 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart,::System::Action> __declspec(property(get=__get__parameterChangedAnimationCallbacks, put=__set__parameterChangedAnimationCallbacks))  _parameterChangedAnimationCallbacks;

constexpr void __set__parameterChangedAnimationCallbacks(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart,::System::Action> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart,::System::Action> __get__parameterChangedAnimationCallbacks() const;

 ::GlobalNamespace::____GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType __declspec(property(get=__get__editAvatarType, put=__set__editAvatarType))  _editAvatarType;

constexpr void __set__editAvatarType(::GlobalNamespace::____GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType __get__editAvatarType() const;

 ::System::Action_2<::GlobalNamespace::EditAvatarFlowCoordinator,::GlobalNamespace::____GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType> __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(::System::Action_2<::GlobalNamespace::EditAvatarFlowCoordinator,::GlobalNamespace::____GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType> value) ;

constexpr ::System::Action_2<::GlobalNamespace::EditAvatarFlowCoordinator,::GlobalNamespace::____GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType> __get_didFinishEvent() const;

 ::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType> __declspec(property(get=__get_wasSetupEvent, put=__set_wasSetupEvent))  wasSetupEvent;

constexpr void __set_wasSetupEvent(::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType> value) ;

constexpr ::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType> __get_wasSetupEvent() const;


// Methods

/// @brief Method add_didFinishEvent addr 0x2131c78 size 0xb0 virtual false final false
 void add_didFinishEvent(::System::Action_2<::GlobalNamespace::EditAvatarFlowCoordinator,::GlobalNamespace::____GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType> value) ;

/// @brief Method remove_didFinishEvent addr 0x2131d28 size 0xb0 virtual false final false
 void remove_didFinishEvent(::System::Action_2<::GlobalNamespace::EditAvatarFlowCoordinator,::GlobalNamespace::____GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType> value) ;

/// @brief Method add_wasSetupEvent addr 0x2131dd8 size 0xb0 virtual false final false
 void add_wasSetupEvent(::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType> value) ;

/// @brief Method remove_wasSetupEvent addr 0x2131e88 size 0xb0 virtual false final false
 void remove_wasSetupEvent(::System::Action_1<::GlobalNamespace::____GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType> value) ;

/// @brief Method Setup addr 0x2131f38 size 0x50 virtual false final false
 void Setup(::GlobalNamespace::____GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType editAvatarType) ;

/// @brief Method DidActivate addr 0x2131f88 size 0x4a4 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x213242c size 0x224 virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method HandleEditAvatarViewControllerDidRequestColorChange addr 0x2132650 size 0x78 virtual false final false
 void HandleEditAvatarViewControllerDidRequestColorChange(::System::Action_1<::UnityEngine::Color> colorCallback, ::UnityEngine::Color currentColor, ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart editPart, int32_t uvSegment) ;

/// @brief Method HandleEditAvatarViewControllerChangedAvatarPart addr 0x21326c8 size 0xa0 virtual false final false
 void HandleEditAvatarViewControllerChangedAvatarPart(::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart avatarPart) ;

/// @brief Method HandleEditAvatarViewControllerDidFinished addr 0x2132768 size 0x24 virtual false final false
 void HandleEditAvatarViewControllerDidFinished(::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__FinishAction _) ;

/// @brief Method HandleEditColorViewControllerDidChangedColor addr 0x213278c size 0x28 virtual false final false
 void HandleEditColorViewControllerDidChangedColor(::UnityEngine::Color color) ;

/// @brief Method HandleEditColorViewControllerDidFinish addr 0x21327b4 size 0x68 virtual false final false
 void HandleEditColorViewControllerDidFinish(bool apply) ;

// Ctor Parameters []
explicit EditAvatarFlowCoordinator() ;

/// @brief Method .ctor addr 0x213281c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType, "", "EditAvatarFlowCoordinator/EditAvatarType");
NEED_NO_BOX(::GlobalNamespace::EditAvatarFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EditAvatarFlowCoordinator, "", "EditAvatarFlowCoordinator");
