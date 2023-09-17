#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace {
// Forward declare root types
namespace GlobalNamespace {
class HorizontalCameraFov;
}
// Type: ::HorizontalCameraFov
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13808))
// CS Name: HorizontalCameraFov
class CORDL_TYPE HorizontalCameraFov : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~HorizontalCameraFov() = default;

// Ctor Parameters [CppParam { name: "", ty: "HorizontalCameraFov", modifiers: " const&", def_value: None }]
constexpr HorizontalCameraFov(HorizontalCameraFov const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HorizontalCameraFov", modifiers: "&&", def_value: None }]
constexpr HorizontalCameraFov(HorizontalCameraFov&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HorizontalCameraFov(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr HorizontalCameraFov& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HorizontalCameraFov& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HorizontalCameraFov& operator=(HorizontalCameraFov&& o) noexcept = default;
  constexpr HorizontalCameraFov& operator=(HorizontalCameraFov const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__horizontalFOV, put=__set__horizontalFOV))  _horizontalFOV;

constexpr void __set__horizontalFOV(float_t value) ;

constexpr float_t __get__horizontalFOV() const;


// Methods

/// @brief Method Awake addr 0x1f78984 size 0xb8 virtual false final false
 void Awake() ;

// Ctor Parameters []
explicit HorizontalCameraFov() ;

/// @brief Method .ctor addr 0x1f78a3c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::HorizontalCameraFov);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HorizontalCameraFov, "", "HorizontalCameraFov");
