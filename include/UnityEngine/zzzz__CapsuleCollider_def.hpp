#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class CapsuleCollider;
}
// Type: UnityEngine::CapsuleCollider
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15468))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15470))
// CS Name: UnityEngine.CapsuleCollider
class CORDL_TYPE CapsuleCollider : public UnityEngine::Collider {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CapsuleCollider() = default;

// Ctor Parameters [CppParam { name: "", ty: "CapsuleCollider", modifiers: " const&", def_value: None }]
constexpr CapsuleCollider(CapsuleCollider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CapsuleCollider", modifiers: "&&", def_value: None }]
constexpr CapsuleCollider(CapsuleCollider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CapsuleCollider(void* ptr) noexcept : UnityEngine::Collider(ptr) {
}


  constexpr CapsuleCollider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CapsuleCollider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CapsuleCollider& operator=(CapsuleCollider&& o) noexcept = default;
  constexpr CapsuleCollider& operator=(CapsuleCollider const& o) noexcept = default;
                


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_center, put=set_center))  center;

 float_t __declspec(property(get=get_radius, put=set_radius))  radius;

 float_t __declspec(property(get=get_height, put=set_height))  height;

 int32_t __declspec(property(put=set_direction))  direction;


// Methods

/// @brief Method get_center addr 0x2b9fe68 size 0x5c virtual false final false
 UnityEngine::Vector3 get_center() ;

/// @brief Method set_center addr 0x2b9ff08 size 0x54 virtual false final false
 void set_center(UnityEngine::Vector3 value) ;

/// @brief Method get_radius addr 0x2b9ffa0 size 0x3c virtual false final false
 float_t get_radius() ;

/// @brief Method set_radius addr 0x2b9ffdc size 0x4c virtual false final false
 void set_radius(float_t value) ;

/// @brief Method get_height addr 0x2ba0028 size 0x3c virtual false final false
 float_t get_height() ;

/// @brief Method set_height addr 0x2ba0064 size 0x4c virtual false final false
 void set_height(float_t value) ;

/// @brief Method set_direction addr 0x2ba00b0 size 0x44 virtual false final false
 void set_direction(int32_t value) ;

/// @brief Method get_center_Injected addr 0x2b9fec4 size 0x44 virtual false final false
 void get_center_Injected(ByRef<UnityEngine::Vector3> ret) ;

/// @brief Method set_center_Injected addr 0x2b9ff5c size 0x44 virtual false final false
 void set_center_Injected(ByRef<UnityEngine::Vector3> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::CapsuleCollider);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::CapsuleCollider, "UnityEngine", "CapsuleCollider");
