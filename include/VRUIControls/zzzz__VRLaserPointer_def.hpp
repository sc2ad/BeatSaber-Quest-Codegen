#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
// Forward declare root types
namespace VRUIControls {
class VRLaserPointer;
}
// Type: VRUIControls::VRLaserPointer
namespace VRUIControls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15643))
// CS Name: VRUIControls.VRLaserPointer
class CORDL_TYPE VRLaserPointer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~VRLaserPointer() = default;

// Ctor Parameters [CppParam { name: "", ty: "VRLaserPointer", modifiers: " const&", def_value: None }]
constexpr VRLaserPointer(VRLaserPointer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VRLaserPointer", modifiers: "&&", def_value: None }]
constexpr VRLaserPointer(VRLaserPointer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VRLaserPointer(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr VRLaserPointer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VRLaserPointer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VRLaserPointer& operator=(VRLaserPointer&& o) noexcept = default;
  constexpr VRLaserPointer& operator=(VRLaserPointer const& o) noexcept = default;
                


// Fields

 ::UnityEngine::MeshRenderer __declspec(property(get=__get__renderer, put=__set__renderer))  _renderer;

constexpr void __set__renderer(::UnityEngine::MeshRenderer value) ;

constexpr ::UnityEngine::MeshRenderer __get__renderer() const;

static int32_t __declspec(property(get=__get__fadeStartNormalizedDistanceId, put=__set__fadeStartNormalizedDistanceId))  _fadeStartNormalizedDistanceId;

static void __set__fadeStartNormalizedDistanceId(int32_t value) ;

static int32_t __get__fadeStartNormalizedDistanceId() ;

static ::UnityEngine::MaterialPropertyBlock __declspec(property(get=__get__materialPropertyBlock, put=__set__materialPropertyBlock))  _materialPropertyBlock;

static void __set__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock value) ;

static ::UnityEngine::MaterialPropertyBlock __get__materialPropertyBlock() ;


// Methods

/// @brief Method SetLocalPosition addr 0x2d3f354 size 0x48 virtual false final false
 void SetLocalPosition(::UnityEngine::Vector3 position) ;

/// @brief Method SetLocalScale addr 0x2d3f39c size 0x48 virtual false final false
 void SetLocalScale(::UnityEngine::Vector3 scale) ;

/// @brief Method SetFadeDistance addr 0x2d3f3e4 size 0xfc virtual false final false
 void SetFadeDistance(float_t distance) ;

// Ctor Parameters []
explicit VRLaserPointer() ;

/// @brief Method .ctor addr 0x2d3f4e0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def VRUIControls
} // end anonymous namespace
NEED_NO_BOX(::VRUIControls::VRLaserPointer);
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::VRLaserPointer, "VRUIControls", "VRLaserPointer");
