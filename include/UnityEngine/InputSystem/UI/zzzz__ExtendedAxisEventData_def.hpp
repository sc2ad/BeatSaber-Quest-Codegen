#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__AxisEventData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::EventSystems {
class EventSystem;
}
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
class ExtendedAxisEventData;
}
// Type: UnityEngine.InputSystem.UI::ExtendedAxisEventData
namespace UnityEngine::InputSystem::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13102))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6453))
// CS Name: UnityEngine.InputSystem.UI.ExtendedAxisEventData
class CORDL_TYPE ExtendedAxisEventData : public UnityEngine::EventSystems::AxisEventData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ExtendedAxisEventData() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExtendedAxisEventData", modifiers: " const&", def_value: None }]
constexpr ExtendedAxisEventData(ExtendedAxisEventData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExtendedAxisEventData", modifiers: "&&", def_value: None }]
constexpr ExtendedAxisEventData(ExtendedAxisEventData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExtendedAxisEventData(void* ptr) noexcept : UnityEngine::EventSystems::AxisEventData(ptr) {
}


  constexpr ExtendedAxisEventData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExtendedAxisEventData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExtendedAxisEventData& operator=(ExtendedAxisEventData&& o) noexcept = default;
  constexpr ExtendedAxisEventData& operator=(ExtendedAxisEventData const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "eventSystem", ty: "UnityEngine::EventSystems::EventSystem", modifiers: "", def_value: None }]
explicit ExtendedAxisEventData(UnityEngine::EventSystems::EventSystem eventSystem) ;

/// @brief Method .ctor addr 0x293bdc8 size 0x8 virtual false final false
 void _ctor(UnityEngine::EventSystems::EventSystem eventSystem) ;

/// @brief Method ToString addr 0x293bdd0 size 0xbc virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::UI
NEED_NO_BOX(UnityEngine::InputSystem::UI::ExtendedAxisEventData);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UI::ExtendedAxisEventData, "UnityEngine.InputSystem.UI", "ExtendedAxisEventData");
