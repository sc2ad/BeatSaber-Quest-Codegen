#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace GlobalNamespace {
class GeometryTools;
}
// Type: ::GeometryTools
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13803))
// CS Name: GeometryTools
class CORDL_TYPE GeometryTools : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GeometryTools() = default;

// Ctor Parameters [CppParam { name: "", ty: "GeometryTools", modifiers: " const&", def_value: None }]
constexpr GeometryTools(GeometryTools const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GeometryTools", modifiers: "&&", def_value: None }]
constexpr GeometryTools(GeometryTools&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GeometryTools(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GeometryTools& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GeometryTools& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GeometryTools& operator=(GeometryTools&& o) noexcept = default;
  constexpr GeometryTools& operator=(GeometryTools const& o) noexcept = default;
                


// Methods

/// @brief Method ThreePointsToBox addr 0x1f78274 size 0x3ec virtual false final false
static bool ThreePointsToBox(UnityEngine::Vector3 p0, UnityEngine::Vector3 p1, UnityEngine::Vector3 p2, ByRef<UnityEngine::Vector3> center, ByRef<UnityEngine::Vector3> halfSize, ByRef<UnityEngine::Quaternion> orientation) ;

// Ctor Parameters []
explicit GeometryTools() ;

/// @brief Method .ctor addr 0x1f78660 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GeometryTools);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GeometryTools, "", "GeometryTools");
