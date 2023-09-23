#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class EditAvatarViewController;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
struct GlobalNamespace__EditAvatarViewController__FinishAction;
}
namespace GlobalNamespace {
class AvatarDataModel;
}
namespace GlobalNamespace {
struct GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType;
}
namespace GlobalNamespace {
class EditAvatarFlowCoordinator;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class EditAvatarAnalytics;
}
// Type: ::EditAvatarAnalytics
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3999))
// CS Name: EditAvatarAnalytics
class CORDL_TYPE EditAvatarAnalytics : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~EditAvatarAnalytics() = default;

// Ctor Parameters [CppParam { name: "", ty: "EditAvatarAnalytics", modifiers: " const&", def_value: None }]
constexpr EditAvatarAnalytics(EditAvatarAnalytics const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EditAvatarAnalytics", modifiers: "&&", def_value: None }]
constexpr EditAvatarAnalytics(EditAvatarAnalytics&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EditAvatarAnalytics(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr EditAvatarAnalytics& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EditAvatarAnalytics& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EditAvatarAnalytics& operator=(EditAvatarAnalytics&& o) noexcept = default;
  constexpr EditAvatarAnalytics& operator=(EditAvatarAnalytics const& o) noexcept = default;
                


// Fields

 GlobalNamespace::EditAvatarFlowCoordinator __declspec(property(get=__get__editAvatarFlowCoordinator, put=__set__editAvatarFlowCoordinator))  _editAvatarFlowCoordinator;

constexpr void __set__editAvatarFlowCoordinator(GlobalNamespace::EditAvatarFlowCoordinator value) ;

constexpr GlobalNamespace::EditAvatarFlowCoordinator __get__editAvatarFlowCoordinator() const;

 GlobalNamespace::EditAvatarViewController __declspec(property(get=__get__editAvatarViewController, put=__set__editAvatarViewController))  _editAvatarViewController;

constexpr void __set__editAvatarViewController(GlobalNamespace::EditAvatarViewController value) ;

constexpr GlobalNamespace::EditAvatarViewController __get__editAvatarViewController() const;

 GlobalNamespace::IAnalyticsModel __declspec(property(get=__get__analyticsModel, put=__set__analyticsModel))  _analyticsModel;

constexpr void __set__analyticsModel(GlobalNamespace::IAnalyticsModel value) ;

constexpr GlobalNamespace::IAnalyticsModel __get__analyticsModel() const;

 GlobalNamespace::AvatarDataModel __declspec(property(get=__get__avatarDataModel, put=__set__avatarDataModel))  _avatarDataModel;

constexpr void __set__avatarDataModel(GlobalNamespace::AvatarDataModel value) ;

constexpr GlobalNamespace::AvatarDataModel __get__avatarDataModel() const;

 GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType __declspec(property(get=__get__lastEditAvatarType, put=__set__lastEditAvatarType))  _lastEditAvatarType;

constexpr void __set__lastEditAvatarType(GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType value) ;

constexpr GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType __get__lastEditAvatarType() const;


// Methods

/// @brief Method Awake addr 0x20b0a00 size 0x154 virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x20b0b54 size 0x1c8 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleEditAvatarFlowCoordinatorWasSetup addr 0x20b0d1c size 0xd8 virtual false final false
 void HandleEditAvatarFlowCoordinatorWasSetup(GlobalNamespace::GlobalNamespace__EditAvatarFlowCoordinator__EditAvatarType editAvatarType) ;

/// @brief Method HandleEditAvatarViewControllerDidFinish addr 0x20b106c size 0xf8 virtual false final false
 void HandleEditAvatarViewControllerDidFinish(GlobalNamespace::GlobalNamespace__EditAvatarViewController__FinishAction finishAction) ;

/// @brief Method HandleEditAvatarViewControllerRandomizeAllButtonWasPressed addr 0x20b1164 size 0xd0 virtual false final false
 void HandleEditAvatarViewControllerRandomizeAllButtonWasPressed() ;

/// @brief Method CreateEditAvatarEventData addr 0x20b0df4 size 0x278 virtual false final false
 System::Collections::Generic::Dictionary_2<::StringW,::StringW> CreateEditAvatarEventData() ;

// Ctor Parameters []
explicit EditAvatarAnalytics() ;

/// @brief Method .ctor addr 0x20b1234 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::EditAvatarAnalytics);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EditAvatarAnalytics, "", "EditAvatarAnalytics");
