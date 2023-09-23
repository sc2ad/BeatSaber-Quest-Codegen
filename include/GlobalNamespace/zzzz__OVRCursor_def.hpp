#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRCursor;
}
// Type: ::OVRCursor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8887))
// CS Name: OVRCursor
class CORDL_TYPE OVRCursor : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~OVRCursor() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRCursor", modifiers: " const&", def_value: None }]
constexpr OVRCursor(OVRCursor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRCursor", modifiers: "&&", def_value: None }]
constexpr OVRCursor(OVRCursor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRCursor(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRCursor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRCursor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRCursor& operator=(OVRCursor&& o) noexcept = default;
  constexpr OVRCursor& operator=(OVRCursor const& o) noexcept = default;
                


// Methods

/// @brief Method SetCursorRay addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetCursorRay(UnityEngine::Transform ray) ;

/// @brief Method SetCursorStartDest addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetCursorStartDest(UnityEngine::Vector3 start, UnityEngine::Vector3 dest, UnityEngine::Vector3 normal) ;

// Ctor Parameters []
explicit OVRCursor() ;

/// @brief Method .ctor addr 0x261ec70 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRCursor);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRCursor, "", "OVRCursor");
