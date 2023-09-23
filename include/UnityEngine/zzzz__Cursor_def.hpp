#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace UnityEngine {
struct CursorLockMode;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct CursorMode;
}
// Forward declare root types
namespace UnityEngine {
class Cursor;
}
// Type: UnityEngine::Cursor
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10003))
// CS Name: UnityEngine.Cursor
class CORDL_TYPE Cursor : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Cursor() = default;

// Ctor Parameters [CppParam { name: "", ty: "Cursor", modifiers: " const&", def_value: None }]
constexpr Cursor(Cursor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Cursor", modifiers: "&&", def_value: None }]
constexpr Cursor(Cursor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Cursor(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Cursor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Cursor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Cursor& operator=(Cursor&& o) noexcept = default;
  constexpr Cursor& operator=(Cursor const& o) noexcept = default;
                


// Properties

static bool __declspec(property(put=set_visible))  visible;

static UnityEngine::CursorLockMode __declspec(property(get=get_lockState, put=set_lockState))  lockState;


// Methods

/// @brief Method SetCursor addr 0x2b2c6b4 size 0x58 virtual false final false
static void SetCursor(UnityEngine::Texture2D texture, UnityEngine::Vector2 hotspot, UnityEngine::CursorMode cursorMode) ;

/// @brief Method set_visible addr 0x2b2c760 size 0x3c virtual false final false
static void set_visible(bool value) ;

/// @brief Method get_lockState addr 0x2b2c79c size 0x28 virtual false final false
static UnityEngine::CursorLockMode get_lockState() ;

/// @brief Method set_lockState addr 0x2b2c7c4 size 0x3c virtual false final false
static void set_lockState(UnityEngine::CursorLockMode value) ;

/// @brief Method SetCursor_Injected addr 0x2b2c70c size 0x54 virtual false final false
static void SetCursor_Injected(UnityEngine::Texture2D texture, ByRef<UnityEngine::Vector2> hotspot, UnityEngine::CursorMode cursorMode) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Cursor);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Cursor, "UnityEngine", "Cursor");
