#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine {
class CameraRaycastHelper;
}
// Type: UnityEngine::CameraRaycastHelper
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15838))
// CS Name: UnityEngine.CameraRaycastHelper
class CORDL_TYPE CameraRaycastHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CameraRaycastHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "CameraRaycastHelper", modifiers: " const&", def_value: None }]
constexpr CameraRaycastHelper(CameraRaycastHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CameraRaycastHelper", modifiers: "&&", def_value: None }]
constexpr CameraRaycastHelper(CameraRaycastHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CameraRaycastHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CameraRaycastHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CameraRaycastHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CameraRaycastHelper& operator=(CameraRaycastHelper&& o) noexcept = default;
  constexpr CameraRaycastHelper& operator=(CameraRaycastHelper const& o) noexcept = default;
                


// Methods

/// @brief Method RaycastTry addr 0x2b96038 size 0x64 virtual false final false
static UnityEngine::GameObject RaycastTry(UnityEngine::Camera cam, UnityEngine::Ray ray, float_t distance, int32_t layerMask) ;

/// @brief Method RaycastTry2D addr 0x2b96100 size 0x64 virtual false final false
static UnityEngine::GameObject RaycastTry2D(UnityEngine::Camera cam, UnityEngine::Ray ray, float_t distance, int32_t layerMask) ;

/// @brief Method RaycastTry_Injected addr 0x2b9609c size 0x64 virtual false final false
static UnityEngine::GameObject RaycastTry_Injected(UnityEngine::Camera cam, ByRef<UnityEngine::Ray> ray, float_t distance, int32_t layerMask) ;

/// @brief Method RaycastTry2D_Injected addr 0x2b96164 size 0x64 virtual false final false
static UnityEngine::GameObject RaycastTry2D_Injected(UnityEngine::Camera cam, ByRef<UnityEngine::Ray> ray, float_t distance, int32_t layerMask) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::CameraRaycastHelper);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::CameraRaycastHelper, "UnityEngine", "CameraRaycastHelper");
