#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
struct UnityEngine__EventSystems__PointerEventData__FramePressState;
}
// Forward declare root types
namespace VRUIControls {
class MouseButtonEventData;
}
// Type: VRUIControls::MouseButtonEventData
namespace VRUIControls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15635))
// CS Name: VRUIControls.MouseButtonEventData
class CORDL_TYPE MouseButtonEventData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MouseButtonEventData() = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseButtonEventData", modifiers: " const&", def_value: None }]
constexpr MouseButtonEventData(MouseButtonEventData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseButtonEventData", modifiers: "&&", def_value: None }]
constexpr MouseButtonEventData(MouseButtonEventData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MouseButtonEventData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MouseButtonEventData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MouseButtonEventData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MouseButtonEventData& operator=(MouseButtonEventData&& o) noexcept = default;
  constexpr MouseButtonEventData& operator=(MouseButtonEventData const& o) noexcept = default;
                


// Fields

 UnityEngine::EventSystems::UnityEngine__EventSystems__PointerEventData__FramePressState __declspec(property(get=__get_buttonState, put=__set_buttonState))  buttonState;

constexpr void __set_buttonState(UnityEngine::EventSystems::UnityEngine__EventSystems__PointerEventData__FramePressState value) ;

constexpr UnityEngine::EventSystems::UnityEngine__EventSystems__PointerEventData__FramePressState __get_buttonState() const;

 UnityEngine::EventSystems::PointerEventData __declspec(property(get=__get_buttonData, put=__set_buttonData))  buttonData;

constexpr void __set_buttonData(UnityEngine::EventSystems::PointerEventData value) ;

constexpr UnityEngine::EventSystems::PointerEventData __get_buttonData() const;


// Methods

/// @brief Method PressedThisFrame addr 0x2d3acb4 size 0x10 virtual false final false
 bool PressedThisFrame() ;

/// @brief Method ReleasedThisFrame addr 0x2d3acc4 size 0x14 virtual false final false
 bool ReleasedThisFrame() ;

// Ctor Parameters []
explicit MouseButtonEventData() ;

/// @brief Method .ctor addr 0x2d3acd8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def VRUIControls
NEED_NO_BOX(VRUIControls::MouseButtonEventData);
DEFINE_IL2CPP_ARG_TYPE(VRUIControls::MouseButtonEventData, "VRUIControls", "MouseButtonEventData");
