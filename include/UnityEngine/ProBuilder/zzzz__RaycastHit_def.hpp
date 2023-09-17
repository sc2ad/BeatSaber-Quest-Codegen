#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class RaycastHit;
}
// Type: UnityEngine.ProBuilder::RaycastHit
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12123))
// CS Name: UnityEngine.ProBuilder.RaycastHit
class CORDL_TYPE RaycastHit : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~RaycastHit() = default;

// Ctor Parameters [CppParam { name: "", ty: "RaycastHit", modifiers: " const&", def_value: None }]
constexpr RaycastHit(RaycastHit const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RaycastHit", modifiers: "&&", def_value: None }]
constexpr RaycastHit(RaycastHit&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RaycastHit(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RaycastHit& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RaycastHit& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RaycastHit& operator=(RaycastHit&& o) noexcept = default;
  constexpr RaycastHit& operator=(RaycastHit const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_distance, put=__set_distance))  distance;

constexpr void __set_distance(float_t value) ;

constexpr float_t __get_distance() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_point, put=__set_point))  point;

constexpr void __set_point(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_point() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_normal, put=__set_normal))  normal;

constexpr void __set_normal(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_normal() const;

 int32_t __declspec(property(get=__get_face, put=__set_face))  face;

constexpr void __set_face(int32_t value) ;

constexpr int32_t __get_face() const;


// Methods

// Ctor Parameters [CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "point", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "face", ty: "int32_t", modifiers: "", def_value: None }]
explicit RaycastHit(float_t distance, ::UnityEngine::Vector3 point, ::UnityEngine::Vector3 normal, int32_t face) ;

/// @brief Method .ctor addr 0x29cf058 size 0x74 virtual false final false
 void _ctor(float_t distance, ::UnityEngine::Vector3 point, ::UnityEngine::Vector3 normal, int32_t face) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ProBuilder::RaycastHit);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::RaycastHit, "UnityEngine.ProBuilder", "RaycastHit");
