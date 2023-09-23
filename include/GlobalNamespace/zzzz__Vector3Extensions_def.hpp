#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace GlobalNamespace {
class Vector3Extensions;
}
// Type: ::Vector3Extensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16060))
// CS Name: Vector3Extensions
class CORDL_TYPE Vector3Extensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Vector3Extensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "Vector3Extensions", modifiers: " const&", def_value: None }]
constexpr Vector3Extensions(Vector3Extensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Vector3Extensions", modifiers: "&&", def_value: None }]
constexpr Vector3Extensions(Vector3Extensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Vector3Extensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Vector3Extensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Vector3Extensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Vector3Extensions& operator=(Vector3Extensions&& o) noexcept = default;
  constexpr Vector3Extensions& operator=(Vector3Extensions const& o) noexcept = default;
                


// Methods

/// @brief Method InverseLerp addr 0x227837c size 0x54 virtual false final false
static float_t InverseLerp(UnityEngine::Vector3 a, UnityEngine::Vector3 b, UnityEngine::Vector3 value) ;

/// @brief Method RotatedAroundPivot addr 0x22783d0 size 0x60 virtual false final false
static UnityEngine::Vector3 RotatedAroundPivot(UnityEngine::Vector3 vector, UnityEngine::Quaternion rotation, UnityEngine::Vector3 pivot) ;

/// @brief Method MirrorOnYZPlane addr 0x2277c20 size 0x8 virtual false final false
static UnityEngine::Vector3 MirrorOnYZPlane(UnityEngine::Vector3 vector) ;

/// @brief Method MirrorEulerAnglesOnYZPlane addr 0x2277c28 size 0xc virtual false final false
static UnityEngine::Vector3 MirrorEulerAnglesOnYZPlane(UnityEngine::Vector3 vector) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::Vector3Extensions);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Vector3Extensions, "", "Vector3Extensions");
