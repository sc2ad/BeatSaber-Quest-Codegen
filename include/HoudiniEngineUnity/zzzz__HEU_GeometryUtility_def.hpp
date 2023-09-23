#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_GeometryUtility;
}
// Type: HoudiniEngineUnity::HEU_GeometryUtility
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9778))
// CS Name: HoudiniEngineUnity.HEU_GeometryUtility
class CORDL_TYPE HEU_GeometryUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HEU_GeometryUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_GeometryUtility", modifiers: " const&", def_value: None }]
constexpr HEU_GeometryUtility(HEU_GeometryUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_GeometryUtility", modifiers: "&&", def_value: None }]
constexpr HEU_GeometryUtility(HEU_GeometryUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_GeometryUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_GeometryUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_GeometryUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_GeometryUtility& operator=(HEU_GeometryUtility&& o) noexcept = default;
  constexpr HEU_GeometryUtility& operator=(HEU_GeometryUtility const& o) noexcept = default;
                


// Methods

/// @brief Method GeneratePerTriangle addr 0x204e690 size 0x4c virtual false final false
static ::ArrayW<UnityEngine::Vector2> GeneratePerTriangle(UnityEngine::Mesh meshSrc) ;

/// @brief Method GenerateSecondaryUVSet addr 0x2053df0 size 0x44 virtual false final false
static void GenerateSecondaryUVSet(UnityEngine::Mesh meshsrc) ;

/// @brief Method CalculateMeshTangents addr 0x204d634 size 0x4d8 virtual false final false
static void CalculateMeshTangents(UnityEngine::Mesh mesh) ;

/// @brief Method GenerateCubeMeshFromPoints addr 0x2053e34 size 0xb00 virtual false final false
static UnityEngine::Mesh GenerateCubeMeshFromPoints(::ArrayW<UnityEngine::Vector3> points, ::ArrayW<UnityEngine::Color> pointsColor, float_t size) ;

/// @brief Method GetInstanceOutputName addr 0x2054934 size 0xbc virtual false final false
static ::StringW GetInstanceOutputName(::StringW partName, ::ArrayW<::StringW> userPrefix, int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_GeometryUtility);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_GeometryUtility, "HoudiniEngineUnity", "HEU_GeometryUtility");
