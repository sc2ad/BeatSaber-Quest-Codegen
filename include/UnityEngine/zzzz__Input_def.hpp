#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct IMECompositionMode;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct KeyCode;
}
namespace UnityEngine {
struct Touch;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class Input;
}
// Type: UnityEngine::Input
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15839))
// CS Name: UnityEngine.Input
class CORDL_TYPE Input : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Input() = default;

// Ctor Parameters [CppParam { name: "", ty: "Input", modifiers: " const&", def_value: None }]
constexpr Input(Input const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Input", modifiers: "&&", def_value: None }]
constexpr Input(Input&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Input(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Input& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Input& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Input& operator=(Input&& o) noexcept = default;
  constexpr Input& operator=(Input const& o) noexcept = default;
                


// Properties

static bool __declspec(property(get=get_anyKeyDown))  anyKeyDown;

static UnityEngine::Vector3 __declspec(property(get=get_mousePosition))  mousePosition;

static UnityEngine::Vector2 __declspec(property(get=get_mouseScrollDelta))  mouseScrollDelta;

static UnityEngine::IMECompositionMode __declspec(property(get=get_imeCompositionMode, put=set_imeCompositionMode))  imeCompositionMode;

static ::StringW __declspec(property(get=get_compositionString))  compositionString;

static UnityEngine::Vector2 __declspec(property(get=get_compositionCursorPos, put=set_compositionCursorPos))  compositionCursorPos;

static bool __declspec(property(get=get_mousePresent))  mousePresent;

static int32_t __declspec(property(get=get_touchCount))  touchCount;

static bool __declspec(property(get=get_touchSupported))  touchSupported;


// Methods

/// @brief Method GetKeyInt addr 0x2b961c8 size 0x3c virtual false final false
static bool GetKeyInt(UnityEngine::KeyCode key) ;

/// @brief Method GetKeyUpInt addr 0x2b96204 size 0x3c virtual false final false
static bool GetKeyUpInt(UnityEngine::KeyCode key) ;

/// @brief Method GetKeyDownInt addr 0x2b96240 size 0x3c virtual false final false
static bool GetKeyDownInt(UnityEngine::KeyCode key) ;

/// @brief Method GetAxis addr 0x2b9627c size 0x3c virtual false final false
static float_t GetAxis(::StringW axisName) ;

/// @brief Method GetAxisRaw addr 0x2b962b8 size 0x3c virtual false final false
static float_t GetAxisRaw(::StringW axisName) ;

/// @brief Method GetButton addr 0x2b962f4 size 0x3c virtual false final false
static bool GetButton(::StringW buttonName) ;

/// @brief Method GetButtonDown addr 0x2b96330 size 0x3c virtual false final false
static bool GetButtonDown(::StringW buttonName) ;

/// @brief Method GetMouseButton addr 0x2b9636c size 0x3c virtual false final false
static bool GetMouseButton(int32_t button) ;

/// @brief Method GetMouseButtonDown addr 0x2b963a8 size 0x3c virtual false final false
static bool GetMouseButtonDown(int32_t button) ;

/// @brief Method GetMouseButtonUp addr 0x2b963e4 size 0x3c virtual false final false
static bool GetMouseButtonUp(int32_t button) ;

/// @brief Method GetTouch addr 0x2b96420 size 0x70 virtual false final false
static UnityEngine::Touch GetTouch(int32_t index) ;

/// @brief Method GetKey addr 0x2b964d4 size 0x3c virtual false final false
static bool GetKey(UnityEngine::KeyCode key) ;

/// @brief Method GetKeyUp addr 0x2b96510 size 0x3c virtual false final false
static bool GetKeyUp(UnityEngine::KeyCode key) ;

/// @brief Method GetKeyDown addr 0x2b9654c size 0x3c virtual false final false
static bool GetKeyDown(UnityEngine::KeyCode key) ;

/// @brief Method get_anyKeyDown addr 0x2b96588 size 0x28 virtual false final false
static bool get_anyKeyDown() ;

/// @brief Method get_mousePosition addr 0x2b965b0 size 0x4c virtual false final false
static UnityEngine::Vector3 get_mousePosition() ;

/// @brief Method get_mouseScrollDelta addr 0x2b96638 size 0x44 virtual false final false
static UnityEngine::Vector2 get_mouseScrollDelta() ;

/// @brief Method get_imeCompositionMode addr 0x2b966b8 size 0x28 virtual false final false
static UnityEngine::IMECompositionMode get_imeCompositionMode() ;

/// @brief Method set_imeCompositionMode addr 0x2b966e0 size 0x3c virtual false final false
static void set_imeCompositionMode(UnityEngine::IMECompositionMode value) ;

/// @brief Method get_compositionString addr 0x2b9671c size 0x28 virtual false final false
static ::StringW get_compositionString() ;

/// @brief Method get_compositionCursorPos addr 0x2b96744 size 0x44 virtual false final false
static UnityEngine::Vector2 get_compositionCursorPos() ;

/// @brief Method set_compositionCursorPos addr 0x2b967c4 size 0x40 virtual false final false
static void set_compositionCursorPos(UnityEngine::Vector2 value) ;

/// @brief Method get_mousePresent addr 0x2b96840 size 0x28 virtual false final false
static bool get_mousePresent() ;

/// @brief Method get_touchCount addr 0x2b96868 size 0x28 virtual false final false
static int32_t get_touchCount() ;

/// @brief Method get_touchSupported addr 0x2b96890 size 0x28 virtual false final false
static bool get_touchSupported() ;

/// @brief Method CheckDisabled addr 0x2b968b8 size 0x28 virtual false final false
static bool CheckDisabled() ;

/// @brief Method GetTouch_Injected addr 0x2b96490 size 0x44 virtual false final false
static void GetTouch_Injected(int32_t index, ByRef<UnityEngine::Touch> ret) ;

/// @brief Method get_mousePosition_Injected addr 0x2b965fc size 0x3c virtual false final false
static void get_mousePosition_Injected(ByRef<UnityEngine::Vector3> ret) ;

/// @brief Method get_mouseScrollDelta_Injected addr 0x2b9667c size 0x3c virtual false final false
static void get_mouseScrollDelta_Injected(ByRef<UnityEngine::Vector2> ret) ;

/// @brief Method get_compositionCursorPos_Injected addr 0x2b96788 size 0x3c virtual false final false
static void get_compositionCursorPos_Injected(ByRef<UnityEngine::Vector2> ret) ;

/// @brief Method set_compositionCursorPos_Injected addr 0x2b96804 size 0x3c virtual false final false
static void set_compositionCursorPos_Injected(ByRef<UnityEngine::Vector2> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Input);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Input, "UnityEngine", "Input");
