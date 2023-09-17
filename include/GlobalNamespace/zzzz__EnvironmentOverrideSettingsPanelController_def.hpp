#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace GlobalNamespace {
class IRefreshable;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace HMUI {
class DropdownWithTableView;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace HMUI {
class PanelAnimationSO;
}
namespace GlobalNamespace {
class OverrideEnvironmentSettings;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class EnvironmentsListSO;
}
namespace HMUI {
class SimpleTextDropdown;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class EnvironmentTypeSO;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentOverrideSettingsPanelController;
}
namespace GlobalNamespace {
class ____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements;
}
namespace GlobalNamespace {
class ____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c;
}
// Type: ::Elements
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5581))
// CS Name: EnvironmentOverrideSettingsPanelController::Elements
class CORDL_TYPE ____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements(____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements(____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements& operator=(____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements&& o) noexcept = default;
  constexpr ____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements& operator=(____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements const& o) noexcept = default;
                


// Fields

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get_label, put=__set_label))  label;

constexpr void __set_label(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get_label() const;

 ::HMUI::SimpleTextDropdown __declspec(property(get=__get_simpleTextDropdown, put=__set_simpleTextDropdown))  simpleTextDropdown;

constexpr void __set_simpleTextDropdown(::HMUI::SimpleTextDropdown value) ;

constexpr ::HMUI::SimpleTextDropdown __get_simpleTextDropdown() const;

 ::GlobalNamespace::EnvironmentTypeSO __declspec(property(get=__get_environmentType, put=__set_environmentType))  environmentType;

constexpr void __set_environmentType(::GlobalNamespace::EnvironmentTypeSO value) ;

constexpr ::GlobalNamespace::EnvironmentTypeSO __get_environmentType() const;

 ::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO> __declspec(property(get=__get__environmentInfos_k__BackingField, put=__set__environmentInfos_k__BackingField))  _environmentInfos_k__BackingField;

constexpr void __set__environmentInfos_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO> __get__environmentInfos_k__BackingField() const;


// Properties

 ::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO> __declspec(property(get=get_environmentInfos, put=set_environmentInfos))  environmentInfos;


// Methods

/// @brief Method get_environmentInfos addr 0x2130560 size 0x8 virtual false final false
 ::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO> get_environmentInfos() ;

/// @brief Method set_environmentInfos addr 0x2130568 size 0x8 virtual false final false
 void set_environmentInfos(::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO> value) ;

// Ctor Parameters []
explicit ____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements() ;

/// @brief Method .ctor addr 0x2130570 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5582))
// CS Name: EnvironmentOverrideSettingsPanelController::<>c
class CORDL_TYPE ____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c(____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c(____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c& operator=(____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c&& o) noexcept = default;
  constexpr ____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c& operator=(____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c const& o) noexcept = default;
                


// Fields

static ::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c value) ;

static ::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c __get___9() ;

static ::System::Func_2<::GlobalNamespace::EnvironmentInfoSO,::StringW> __declspec(property(get=__get___9__12_0, put=__set___9__12_0))  __9__12_0;

static void __set___9__12_0(::System::Func_2<::GlobalNamespace::EnvironmentInfoSO,::StringW> value) ;

static ::System::Func_2<::GlobalNamespace::EnvironmentInfoSO,::StringW> __get___9__12_0() ;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c() ;

/// @brief Method .ctor addr 0x21305dc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SetData>b__12_0 addr 0x21305e4 size 0x18 virtual false final false
 ::StringW _SetData_b__12_0(::GlobalNamespace::EnvironmentInfoSO x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EnvironmentOverrideSettingsPanelController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5583))
// CS Name: EnvironmentOverrideSettingsPanelController
class CORDL_TYPE EnvironmentOverrideSettingsPanelController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c;

using Elements = ::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements;

/// @brief Convert operator to ::GlobalNamespace::IRefreshable
constexpr operator  ::GlobalNamespace::IRefreshable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~EnvironmentOverrideSettingsPanelController() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentOverrideSettingsPanelController", modifiers: " const&", def_value: None }]
constexpr EnvironmentOverrideSettingsPanelController(EnvironmentOverrideSettingsPanelController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentOverrideSettingsPanelController", modifiers: "&&", def_value: None }]
constexpr EnvironmentOverrideSettingsPanelController(EnvironmentOverrideSettingsPanelController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnvironmentOverrideSettingsPanelController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr EnvironmentOverrideSettingsPanelController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnvironmentOverrideSettingsPanelController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnvironmentOverrideSettingsPanelController& operator=(EnvironmentOverrideSettingsPanelController&& o) noexcept = default;
  constexpr EnvironmentOverrideSettingsPanelController& operator=(EnvironmentOverrideSettingsPanelController const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UI::Toggle __declspec(property(get=__get__overrideEnvironmentsToggle, put=__set__overrideEnvironmentsToggle))  _overrideEnvironmentsToggle;

constexpr void __set__overrideEnvironmentsToggle(::UnityEngine::UI::Toggle value) ;

constexpr ::UnityEngine::UI::Toggle __get__overrideEnvironmentsToggle() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__elementsGO, put=__set__elementsGO))  _elementsGO;

constexpr void __set__elementsGO(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__elementsGO() const;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements> __declspec(property(get=__get__elements, put=__set__elements))  _elements;

constexpr void __set__elements(::ArrayW<::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements> __get__elements() const;

 ::HMUI::PanelAnimationSO __declspec(property(get=__get__presentPanelAnimation, put=__set__presentPanelAnimation))  _presentPanelAnimation;

constexpr void __set__presentPanelAnimation(::HMUI::PanelAnimationSO value) ;

constexpr ::HMUI::PanelAnimationSO __get__presentPanelAnimation() const;

 ::HMUI::PanelAnimationSO __declspec(property(get=__get__dismissPanelAnimation, put=__set__dismissPanelAnimation))  _dismissPanelAnimation;

constexpr void __set__dismissPanelAnimation(::HMUI::PanelAnimationSO value) ;

constexpr ::HMUI::PanelAnimationSO __get__dismissPanelAnimation() const;

 ::GlobalNamespace::EnvironmentsListSO __declspec(property(get=__get__allEnvironments, put=__set__allEnvironments))  _allEnvironments;

constexpr void __set__allEnvironments(::GlobalNamespace::EnvironmentsListSO value) ;

constexpr ::GlobalNamespace::EnvironmentsListSO __get__allEnvironments() const;

 ::GlobalNamespace::IAnalyticsModel __declspec(property(get=__get__analyticsModel, put=__set__analyticsModel))  _analyticsModel;

constexpr void __set__analyticsModel(::GlobalNamespace::IAnalyticsModel value) ;

constexpr ::GlobalNamespace::IAnalyticsModel __get__analyticsModel() const;

 ::GlobalNamespace::OverrideEnvironmentSettings __declspec(property(get=__get__overrideEnvironmentSettings, put=__set__overrideEnvironmentSettings))  _overrideEnvironmentSettings;

constexpr void __set__overrideEnvironmentSettings(::GlobalNamespace::OverrideEnvironmentSettings value) ;

constexpr ::GlobalNamespace::OverrideEnvironmentSettings __get__overrideEnvironmentSettings() const;

 bool __declspec(property(get=__get__initialized, put=__set__initialized))  _initialized;

constexpr void __set__initialized(bool value) ;

constexpr bool __get__initialized() const;


// Properties

 ::GlobalNamespace::OverrideEnvironmentSettings __declspec(property(get=get_overrideEnvironmentSettings))  overrideEnvironmentSettings;


// Methods

/// @brief Method get_overrideEnvironmentSettings addr 0x212fad4 size 0x8 virtual false final false
 ::GlobalNamespace::OverrideEnvironmentSettings get_overrideEnvironmentSettings() ;

/// @brief Method SetData addr 0x212fadc size 0x2b0 virtual false final false
 void SetData(::GlobalNamespace::OverrideEnvironmentSettings overrideEnvironmentSettings) ;

/// @brief Method OnDestroy addr 0x212fd8c size 0x19c virtual false final false
 void OnDestroy() ;

/// @brief Method Refresh addr 0x212ff28 size 0x154 virtual true final true
 void Refresh() ;

/// @brief Method HandleDropDownDidSelectCellWithIdx addr 0x213007c size 0x290 virtual false final false
 void HandleDropDownDidSelectCellWithIdx(::HMUI::DropdownWithTableView dropDownWithTableView, int32_t idx) ;

/// @brief Method HandleOverrideEnvironmentsToggleValueChanged addr 0x213030c size 0x22c virtual false final false
 void HandleOverrideEnvironmentsToggleValueChanged(bool isOn) ;

// Ctor Parameters []
explicit EnvironmentOverrideSettingsPanelController() ;

/// @brief Method .ctor addr 0x2130538 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <HandleOverrideEnvironmentsToggleValueChanged>b__16_0 addr 0x2130540 size 0x20 virtual false final false
 void _HandleOverrideEnvironmentsToggleValueChanged_b__16_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentOverrideSettingsPanelController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentOverrideSettingsPanelController, "", "EnvironmentOverrideSettingsPanelController");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController__Elements, "", "EnvironmentOverrideSettingsPanelController/Elements");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__EnvironmentOverrideSettingsPanelController____c, "", "EnvironmentOverrideSettingsPanelController/<>c");
