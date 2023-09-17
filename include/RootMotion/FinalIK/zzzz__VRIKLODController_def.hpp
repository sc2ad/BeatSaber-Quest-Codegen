#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace RootMotion::FinalIK {
class VRIK;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class VRIKLODController;
}
// Type: RootMotion.FinalIK::VRIKLODController
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12615))
// CS Name: RootMotion.FinalIK.VRIKLODController
class CORDL_TYPE VRIKLODController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~VRIKLODController() = default;

// Ctor Parameters [CppParam { name: "", ty: "VRIKLODController", modifiers: " const&", def_value: None }]
constexpr VRIKLODController(VRIKLODController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VRIKLODController", modifiers: "&&", def_value: None }]
constexpr VRIKLODController(VRIKLODController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VRIKLODController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr VRIKLODController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VRIKLODController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VRIKLODController& operator=(VRIKLODController&& o) noexcept = default;
  constexpr VRIKLODController& operator=(VRIKLODController const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Renderer __declspec(property(get=__get_LODRenderer, put=__set_LODRenderer))  LODRenderer;

constexpr void __set_LODRenderer(::UnityEngine::Renderer value) ;

constexpr ::UnityEngine::Renderer __get_LODRenderer() const;

 float_t __declspec(property(get=__get_LODDistance, put=__set_LODDistance))  LODDistance;

constexpr void __set_LODDistance(float_t value) ;

constexpr float_t __get_LODDistance() const;

 bool __declspec(property(get=__get_allowCulled, put=__set_allowCulled))  allowCulled;

constexpr void __set_allowCulled(bool value) ;

constexpr bool __get_allowCulled() const;

 ::RootMotion::FinalIK::VRIK __declspec(property(get=__get_ik, put=__set_ik))  ik;

constexpr void __set_ik(::RootMotion::FinalIK::VRIK value) ;

constexpr ::RootMotion::FinalIK::VRIK __get_ik() const;


// Methods

/// @brief Method Start addr 0x121036c size 0x50 virtual false final false
 void Start() ;

/// @brief Method Update addr 0x12103bc size 0x28 virtual false final false
 void Update() ;

/// @brief Method GetLODLevel addr 0x12103e4 size 0x120 virtual false final false
 int32_t GetLODLevel() ;

// Ctor Parameters []
explicit VRIKLODController() ;

/// @brief Method .ctor addr 0x1210504 size 0x18 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
} // end anonymous namespace
NEED_NO_BOX(::RootMotion::FinalIK::VRIKLODController);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::VRIKLODController, "RootMotion.FinalIK", "VRIKLODController");
