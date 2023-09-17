#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System {
class Action;
}
namespace HMUI {
class DropdownWithTableView;
}
namespace HMUI {
class SimpleTextDropdown;
}
// Forward declare root types
namespace GlobalNamespace {
class DropdownSettingsController;
}
// Type: ::DropdownSettingsController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5679))
// CS Name: DropdownSettingsController
class CORDL_TYPE DropdownSettingsController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DropdownSettingsController() = default;

// Ctor Parameters [CppParam { name: "", ty: "DropdownSettingsController", modifiers: " const&", def_value: None }]
constexpr DropdownSettingsController(DropdownSettingsController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DropdownSettingsController", modifiers: "&&", def_value: None }]
constexpr DropdownSettingsController(DropdownSettingsController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DropdownSettingsController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr DropdownSettingsController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DropdownSettingsController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DropdownSettingsController& operator=(DropdownSettingsController&& o) noexcept = default;
  constexpr DropdownSettingsController& operator=(DropdownSettingsController const& o) noexcept = default;
                


// Fields

 ::HMUI::SimpleTextDropdown __declspec(property(get=__get__dropdown, put=__set__dropdown))  _dropdown;

constexpr void __set__dropdown(::HMUI::SimpleTextDropdown value) ;

constexpr ::HMUI::SimpleTextDropdown __get__dropdown() const;

 ::System::Action __declspec(property(get=__get_dropDownValueDidChangeEvent, put=__set_dropDownValueDidChangeEvent))  dropDownValueDidChangeEvent;

constexpr void __set_dropDownValueDidChangeEvent(::System::Action value) ;

constexpr ::System::Action __get_dropDownValueDidChangeEvent() const;

 int32_t __declspec(property(get=__get__idx, put=__set__idx))  _idx;

constexpr void __set__idx(int32_t value) ;

constexpr int32_t __get__idx() const;

 int32_t __declspec(property(get=__get__numberOfElements, put=__set__numberOfElements))  _numberOfElements;

constexpr void __set__numberOfElements(int32_t value) ;

constexpr int32_t __get__numberOfElements() const;


// Methods

/// @brief Method add_dropDownValueDidChangeEvent addr 0x2152468 size 0x9c virtual false final false
 void add_dropDownValueDidChangeEvent(::System::Action value) ;

/// @brief Method remove_dropDownValueDidChangeEvent addr 0x2152504 size 0x9c virtual false final false
 void remove_dropDownValueDidChangeEvent(::System::Action value) ;

/// @brief Method GetInitValues addr 0x0 size 0xffffffffffffffff virtual true final false
 bool GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements) ;

/// @brief Method ApplyValue addr 0x0 size 0xffffffffffffffff virtual true final false
 void ApplyValue(int32_t idx) ;

/// @brief Method TextForValue addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW TextForValue(int32_t idx) ;

/// @brief Method OnEnable addr 0x21525a0 size 0xbc virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x215279c size 0xd0 virtual false final false
 void OnDisable() ;

/// @brief Method HandleDropdownValueDidChange addr 0x215286c size 0x40 virtual false final false
 void HandleDropdownValueDidChange(::HMUI::DropdownWithTableView dropdownWithTableView, int32_t idx) ;

/// @brief Method RefreshUI addr 0x215265c size 0x140 virtual false final false
 void RefreshUI() ;

/// @brief Method Refresh addr 0x21528ac size 0x5c virtual false final false
 void Refresh(bool applyValue) ;

// Ctor Parameters []
explicit DropdownSettingsController() ;

/// @brief Method .ctor addr 0x2152908 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::DropdownSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DropdownSettingsController, "", "DropdownSettingsController");
