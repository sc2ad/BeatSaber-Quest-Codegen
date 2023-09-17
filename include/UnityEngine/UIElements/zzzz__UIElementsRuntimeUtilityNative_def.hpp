#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System {
class Action;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UIElementsRuntimeUtilityNative;
}
// Type: UnityEngine.UIElements::UIElementsRuntimeUtilityNative
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15397))
// CS Name: UnityEngine.UIElements.UIElementsRuntimeUtilityNative
class CORDL_TYPE UIElementsRuntimeUtilityNative : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UIElementsRuntimeUtilityNative() = default;

// Ctor Parameters [CppParam { name: "", ty: "UIElementsRuntimeUtilityNative", modifiers: " const&", def_value: None }]
constexpr UIElementsRuntimeUtilityNative(UIElementsRuntimeUtilityNative const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UIElementsRuntimeUtilityNative", modifiers: "&&", def_value: None }]
constexpr UIElementsRuntimeUtilityNative(UIElementsRuntimeUtilityNative&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UIElementsRuntimeUtilityNative(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UIElementsRuntimeUtilityNative& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UIElementsRuntimeUtilityNative& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UIElementsRuntimeUtilityNative& operator=(UIElementsRuntimeUtilityNative&& o) noexcept = default;
  constexpr UIElementsRuntimeUtilityNative& operator=(UIElementsRuntimeUtilityNative const& o) noexcept = default;
                


// Fields

static ::System::Action __declspec(property(get=__get_RepaintOverlayPanelsCallback, put=__set_RepaintOverlayPanelsCallback))  RepaintOverlayPanelsCallback;

static void __set_RepaintOverlayPanelsCallback(::System::Action value) ;

static ::System::Action __get_RepaintOverlayPanelsCallback() ;

static ::System::Action __declspec(property(get=__get_UpdateRuntimePanelsCallback, put=__set_UpdateRuntimePanelsCallback))  UpdateRuntimePanelsCallback;

static void __set_UpdateRuntimePanelsCallback(::System::Action value) ;

static ::System::Action __get_UpdateRuntimePanelsCallback() ;


// Methods

/// @brief Method RepaintOverlayPanels addr 0x2d2e4e8 size 0x64 virtual false final false
static void RepaintOverlayPanels() ;

/// @brief Method UpdateRuntimePanels addr 0x2d2e54c size 0x64 virtual false final false
static void UpdateRuntimePanels() ;

/// @brief Method RegisterPlayerloopCallback addr 0x2d2e5b0 size 0x28 virtual false final false
static void RegisterPlayerloopCallback() ;

/// @brief Method UnregisterPlayerloopCallback addr 0x2d2e5d8 size 0x28 virtual false final false
static void UnregisterPlayerloopCallback() ;

/// @brief Method VisualElementCreation addr 0x2d2e600 size 0x28 virtual false final false
static void VisualElementCreation() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::UIElementsRuntimeUtilityNative);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIElementsRuntimeUtilityNative, "UnityEngine.UIElements", "UIElementsRuntimeUtilityNative");
