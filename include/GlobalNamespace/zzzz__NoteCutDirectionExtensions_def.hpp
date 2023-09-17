#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
struct NoteCutDirection;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteCutDirectionExtensions;
}
// Type: ::NoteCutDirectionExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14937))
// CS Name: NoteCutDirectionExtensions
class CORDL_TYPE NoteCutDirectionExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NoteCutDirectionExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteCutDirectionExtensions", modifiers: " const&", def_value: None }]
constexpr NoteCutDirectionExtensions(NoteCutDirectionExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteCutDirectionExtensions", modifiers: "&&", def_value: None }]
constexpr NoteCutDirectionExtensions(NoteCutDirectionExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoteCutDirectionExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NoteCutDirectionExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoteCutDirectionExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoteCutDirectionExtensions& operator=(NoteCutDirectionExtensions&& o) noexcept = default;
  constexpr NoteCutDirectionExtensions& operator=(NoteCutDirectionExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method Direction addr 0xd93bf4 size 0x2c virtual false final false
static ::UnityEngine::Vector2 Direction(::GlobalNamespace::NoteCutDirection cutDirection) ;

/// @brief Method RotationAngle addr 0xd93c20 size 0x20 virtual false final false
static float_t RotationAngle(::GlobalNamespace::NoteCutDirection cutDirection) ;

/// @brief Method Rotation addr 0xd93c40 size 0x38 virtual false final false
static ::UnityEngine::Quaternion Rotation(::GlobalNamespace::NoteCutDirection cutDirection, float_t offset) ;

/// @brief Method IsMainDirection addr 0xd93c78 size 0xc virtual false final false
static bool IsMainDirection(::GlobalNamespace::NoteCutDirection cutDirection) ;

/// @brief Method MainNoteCutDirectionFromCutDirAngle addr 0xd93c84 size 0x80 virtual false final false
static ::GlobalNamespace::NoteCutDirection MainNoteCutDirectionFromCutDirAngle(float_t angle) ;

/// @brief Method Mirrored addr 0xd93d04 size 0x1c virtual false final false
static ::GlobalNamespace::NoteCutDirection Mirrored(::GlobalNamespace::NoteCutDirection cutDirection) ;

/// @brief Method Opposite addr 0xd93d20 size 0x18 virtual false final false
static ::GlobalNamespace::NoteCutDirection Opposite(::GlobalNamespace::NoteCutDirection cutDirection) ;

/// @brief Method IsOnSamePlane addr 0xd93d38 size 0xd0 virtual false final false
static bool IsOnSamePlane(::GlobalNamespace::NoteCutDirection noteCutDirection1, ::GlobalNamespace::NoteCutDirection noteCutDirection2) ;

/// @brief Method NoteCutDirectionFromDirection addr 0xd93e08 size 0x218 virtual false final false
static ::GlobalNamespace::NoteCutDirection NoteCutDirectionFromDirection(::UnityEngine::Vector3 direction) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::NoteCutDirectionExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteCutDirectionExtensions, "", "NoteCutDirectionExtensions");
