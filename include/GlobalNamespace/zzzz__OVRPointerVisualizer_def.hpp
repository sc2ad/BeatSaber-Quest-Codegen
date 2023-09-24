#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRPointerVisualizer;
}
// Type: ::OVRPointerVisualizer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8806))
// CS Name: OVRPointerVisualizer
class CORDL_TYPE OVRPointerVisualizer : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~OVRPointerVisualizer() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRPointerVisualizer", modifiers: " const&", def_value: None }]
constexpr OVRPointerVisualizer(OVRPointerVisualizer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRPointerVisualizer", modifiers: "&&", def_value: None }]
constexpr OVRPointerVisualizer(OVRPointerVisualizer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRPointerVisualizer(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRPointerVisualizer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRPointerVisualizer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRPointerVisualizer& operator=(OVRPointerVisualizer&& o) noexcept = default;
  constexpr OVRPointerVisualizer& operator=(OVRPointerVisualizer const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get_rayTransform, put=__set_rayTransform))  rayTransform;

constexpr void __set_rayTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_rayTransform() const;

 UnityEngine::LineRenderer __declspec(property(get=__get_linePointer, put=__set_linePointer))  linePointer;

constexpr void __set_linePointer(UnityEngine::LineRenderer value) ;

constexpr UnityEngine::LineRenderer __get_linePointer() const;

 float_t __declspec(property(get=__get_rayDrawDistance, put=__set_rayDrawDistance))  rayDrawDistance;

constexpr void __set_rayDrawDistance(float_t value) ;

constexpr float_t __get_rayDrawDistance() const;


// Methods

/// @brief Method Update addr 0x2602008 size 0x1a0 virtual false final false
 void Update() ;

static GlobalNamespace::OVRPointerVisualizer New_ctor() ;

/// @brief Method .ctor addr 0x26021a8 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRPointerVisualizer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPointerVisualizer, "", "OVRPointerVisualizer");
