#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class CharacterController;
}
// Forward declare root types
namespace UnityEngine {
class ControllerColliderHit;
}
// Type: UnityEngine::ControllerColliderHit
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15477))
// CS Name: UnityEngine.ControllerColliderHit
class CORDL_TYPE ControllerColliderHit : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~ControllerColliderHit() = default;

// Ctor Parameters [CppParam { name: "", ty: "ControllerColliderHit", modifiers: " const&", def_value: None }]
constexpr ControllerColliderHit(ControllerColliderHit const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ControllerColliderHit", modifiers: "&&", def_value: None }]
constexpr ControllerColliderHit(ControllerColliderHit&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ControllerColliderHit(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ControllerColliderHit& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ControllerColliderHit& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ControllerColliderHit& operator=(ControllerColliderHit&& o) noexcept = default;
  constexpr ControllerColliderHit& operator=(ControllerColliderHit const& o) noexcept = default;
                


// Fields

 ::UnityEngine::CharacterController __declspec(property(get=__get_m_Controller, put=__set_m_Controller))  m_Controller;

constexpr void __set_m_Controller(::UnityEngine::CharacterController value) ;

constexpr ::UnityEngine::CharacterController __get_m_Controller() const;

 ::UnityEngine::Collider __declspec(property(get=__get_m_Collider, put=__set_m_Collider))  m_Collider;

constexpr void __set_m_Collider(::UnityEngine::Collider value) ;

constexpr ::UnityEngine::Collider __get_m_Collider() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_m_Point, put=__set_m_Point))  m_Point;

constexpr void __set_m_Point(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_m_Point() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_m_Normal, put=__set_m_Normal))  m_Normal;

constexpr void __set_m_Normal(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_m_Normal() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_m_MoveDirection, put=__set_m_MoveDirection))  m_MoveDirection;

constexpr void __set_m_MoveDirection(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_m_MoveDirection() const;

 float_t __declspec(property(get=__get_m_MoveLength, put=__set_m_MoveLength))  m_MoveLength;

constexpr void __set_m_MoveLength(float_t value) ;

constexpr float_t __get_m_MoveLength() const;

 int32_t __declspec(property(get=__get_m_Push, put=__set_m_Push))  m_Push;

constexpr void __set_m_Push(int32_t value) ;

constexpr int32_t __get_m_Push() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ControllerColliderHit);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ControllerColliderHit, "UnityEngine", "ControllerColliderHit");
