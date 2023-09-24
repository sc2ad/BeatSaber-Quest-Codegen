#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine {
class Gizmos;
}
// Type: UnityEngine::Gizmos
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10208))
// CS Name: UnityEngine.Gizmos
class CORDL_TYPE Gizmos : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Gizmos() = default;

// Ctor Parameters [CppParam { name: "", ty: "Gizmos", modifiers: " const&", def_value: None }]
constexpr Gizmos(Gizmos const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Gizmos", modifiers: "&&", def_value: None }]
constexpr Gizmos(Gizmos&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Gizmos(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Gizmos& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Gizmos& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Gizmos& operator=(Gizmos&& o) noexcept = default;
  constexpr Gizmos& operator=(Gizmos const& o) noexcept = default;
                


// Properties

static UnityEngine::Color __declspec(property(put=set_color))  color;

static UnityEngine::Matrix4x4 __declspec(property(put=set_matrix))  matrix;


// Methods

/// @brief Method DrawRay addr 0x2b68208 size 0x10 virtual false final false
static void DrawRay(UnityEngine::Vector3 from, UnityEngine::Vector3 direction) ;

/// @brief Method DrawLine addr 0x2b68218 size 0x50 virtual false final false
static void DrawLine(UnityEngine::Vector3 from, UnityEngine::Vector3 to) ;

/// @brief Method DrawWireSphere addr 0x2b682ac size 0x54 virtual false final false
static void DrawWireSphere(UnityEngine::Vector3 center, float_t radius) ;

/// @brief Method DrawSphere addr 0x2b6834c size 0x54 virtual false final false
static void DrawSphere(UnityEngine::Vector3 center, float_t radius) ;

/// @brief Method DrawWireCube addr 0x2b683ec size 0x50 virtual false final false
static void DrawWireCube(UnityEngine::Vector3 center, UnityEngine::Vector3 size) ;

/// @brief Method DrawCube addr 0x2b68480 size 0x50 virtual false final false
static void DrawCube(UnityEngine::Vector3 center, UnityEngine::Vector3 size) ;

/// @brief Method set_color addr 0x2b68514 size 0x44 virtual false final false
static void set_color(UnityEngine::Color value) ;

/// @brief Method set_matrix addr 0x2b68594 size 0x3c virtual false final false
static void set_matrix(UnityEngine::Matrix4x4 value) ;

/// @brief Method DrawLine_Injected addr 0x2b68268 size 0x44 virtual false final false
static void DrawLine_Injected(ByRef<UnityEngine::Vector3> from, ByRef<UnityEngine::Vector3> to) ;

/// @brief Method DrawWireSphere_Injected addr 0x2b68300 size 0x4c virtual false final false
static void DrawWireSphere_Injected(ByRef<UnityEngine::Vector3> center, float_t radius) ;

/// @brief Method DrawSphere_Injected addr 0x2b683a0 size 0x4c virtual false final false
static void DrawSphere_Injected(ByRef<UnityEngine::Vector3> center, float_t radius) ;

/// @brief Method DrawWireCube_Injected addr 0x2b6843c size 0x44 virtual false final false
static void DrawWireCube_Injected(ByRef<UnityEngine::Vector3> center, ByRef<UnityEngine::Vector3> size) ;

/// @brief Method DrawCube_Injected addr 0x2b684d0 size 0x44 virtual false final false
static void DrawCube_Injected(ByRef<UnityEngine::Vector3> center, ByRef<UnityEngine::Vector3> size) ;

/// @brief Method set_color_Injected addr 0x2b68558 size 0x3c virtual false final false
static void set_color_Injected(ByRef<UnityEngine::Color> value) ;

/// @brief Method set_matrix_Injected addr 0x2b685d0 size 0x3c virtual false final false
static void set_matrix_Injected(ByRef<UnityEngine::Matrix4x4> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Gizmos);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Gizmos, "UnityEngine", "Gizmos");
