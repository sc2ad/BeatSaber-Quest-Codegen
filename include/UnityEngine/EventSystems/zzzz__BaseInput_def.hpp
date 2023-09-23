#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Touch;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct IMECompositionMode;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class BaseInput;
}
// Type: UnityEngine.EventSystems::BaseInput
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13153))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13137))
// CS Name: UnityEngine.EventSystems.BaseInput
class CORDL_TYPE BaseInput : public UnityEngine::EventSystems::UIBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BaseInput() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseInput", modifiers: " const&", def_value: None }]
constexpr BaseInput(BaseInput const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseInput", modifiers: "&&", def_value: None }]
constexpr BaseInput(BaseInput&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseInput(void* ptr) noexcept : UnityEngine::EventSystems::UIBehaviour(ptr) {
}


  constexpr BaseInput& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseInput& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseInput& operator=(BaseInput&& o) noexcept = default;
  constexpr BaseInput& operator=(BaseInput const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_compositionString))  compositionString;

 UnityEngine::IMECompositionMode __declspec(property(get=get_imeCompositionMode, put=set_imeCompositionMode))  imeCompositionMode;

 UnityEngine::Vector2 __declspec(property(get=get_compositionCursorPos, put=set_compositionCursorPos))  compositionCursorPos;

 bool __declspec(property(get=get_mousePresent))  mousePresent;

 UnityEngine::Vector2 __declspec(property(get=get_mousePosition))  mousePosition;

 UnityEngine::Vector2 __declspec(property(get=get_mouseScrollDelta))  mouseScrollDelta;

 bool __declspec(property(get=get_touchSupported))  touchSupported;

 int32_t __declspec(property(get=get_touchCount))  touchCount;


// Methods

/// @brief Method get_compositionString addr 0x2c215cc size 0x8 virtual true final false
 ::StringW get_compositionString() ;

/// @brief Method get_imeCompositionMode addr 0x2c215d4 size 0x8 virtual true final false
 UnityEngine::IMECompositionMode get_imeCompositionMode() ;

/// @brief Method set_imeCompositionMode addr 0x2c215dc size 0xc virtual true final false
 void set_imeCompositionMode(UnityEngine::IMECompositionMode value) ;

/// @brief Method get_compositionCursorPos addr 0x2c215e8 size 0x8 virtual true final false
 UnityEngine::Vector2 get_compositionCursorPos() ;

/// @brief Method set_compositionCursorPos addr 0x2c215f0 size 0x8 virtual true final false
 void set_compositionCursorPos(UnityEngine::Vector2 value) ;

/// @brief Method get_mousePresent addr 0x2c215f8 size 0x8 virtual true final false
 bool get_mousePresent() ;

/// @brief Method GetMouseButtonDown addr 0x2c21600 size 0xc virtual true final false
 bool GetMouseButtonDown(int32_t button) ;

/// @brief Method GetMouseButtonUp addr 0x2c2160c size 0xc virtual true final false
 bool GetMouseButtonUp(int32_t button) ;

/// @brief Method GetMouseButton addr 0x2c21618 size 0xc virtual true final false
 bool GetMouseButton(int32_t button) ;

/// @brief Method get_mousePosition addr 0x2c21624 size 0x8 virtual true final false
 UnityEngine::Vector2 get_mousePosition() ;

/// @brief Method get_mouseScrollDelta addr 0x2c2162c size 0x8 virtual true final false
 UnityEngine::Vector2 get_mouseScrollDelta() ;

/// @brief Method get_touchSupported addr 0x2c21634 size 0x8 virtual true final false
 bool get_touchSupported() ;

/// @brief Method get_touchCount addr 0x2c2163c size 0x8 virtual true final false
 int32_t get_touchCount() ;

/// @brief Method GetTouch addr 0x2c21644 size 0x38 virtual true final false
 UnityEngine::Touch GetTouch(int32_t index) ;

/// @brief Method GetAxisRaw addr 0x2c2167c size 0xc virtual true final false
 float_t GetAxisRaw(::StringW axisName) ;

/// @brief Method GetButtonDown addr 0x2c21688 size 0xc virtual true final false
 bool GetButtonDown(::StringW buttonName) ;

// Ctor Parameters []
explicit BaseInput() ;

/// @brief Method .ctor addr 0x2c21694 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
NEED_NO_BOX(UnityEngine::EventSystems::BaseInput);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::BaseInput, "UnityEngine.EventSystems", "BaseInput");
