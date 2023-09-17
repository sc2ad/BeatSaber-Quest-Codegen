#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct ContactPoint2D;
}
// Forward declare root types
namespace UnityEngine {
class Collision2D;
}
// Type: UnityEngine::Collision2D
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15816))
// CS Name: UnityEngine.Collision2D
class CORDL_TYPE Collision2D : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Collision2D() = default;

// Ctor Parameters [CppParam { name: "", ty: "Collision2D", modifiers: " const&", def_value: None }]
constexpr Collision2D(Collision2D const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Collision2D", modifiers: "&&", def_value: None }]
constexpr Collision2D(Collision2D&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Collision2D(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Collision2D& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Collision2D& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Collision2D& operator=(Collision2D&& o) noexcept = default;
  constexpr Collision2D& operator=(Collision2D const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_Collider, put=__set_m_Collider))  m_Collider;

constexpr void __set_m_Collider(int32_t value) ;

constexpr int32_t __get_m_Collider() const;

 int32_t __declspec(property(get=__get_m_OtherCollider, put=__set_m_OtherCollider))  m_OtherCollider;

constexpr void __set_m_OtherCollider(int32_t value) ;

constexpr int32_t __get_m_OtherCollider() const;

 int32_t __declspec(property(get=__get_m_Rigidbody, put=__set_m_Rigidbody))  m_Rigidbody;

constexpr void __set_m_Rigidbody(int32_t value) ;

constexpr int32_t __get_m_Rigidbody() const;

 int32_t __declspec(property(get=__get_m_OtherRigidbody, put=__set_m_OtherRigidbody))  m_OtherRigidbody;

constexpr void __set_m_OtherRigidbody(int32_t value) ;

constexpr int32_t __get_m_OtherRigidbody() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_m_RelativeVelocity, put=__set_m_RelativeVelocity))  m_RelativeVelocity;

constexpr void __set_m_RelativeVelocity(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_m_RelativeVelocity() const;

 int32_t __declspec(property(get=__get_m_Enabled, put=__set_m_Enabled))  m_Enabled;

constexpr void __set_m_Enabled(int32_t value) ;

constexpr int32_t __get_m_Enabled() const;

 int32_t __declspec(property(get=__get_m_ContactCount, put=__set_m_ContactCount))  m_ContactCount;

constexpr void __set_m_ContactCount(int32_t value) ;

constexpr int32_t __get_m_ContactCount() const;

 ::ArrayW<::UnityEngine::ContactPoint2D> __declspec(property(get=__get_m_ReusedContacts, put=__set_m_ReusedContacts))  m_ReusedContacts;

constexpr void __set_m_ReusedContacts(::ArrayW<::UnityEngine::ContactPoint2D> value) ;

constexpr ::ArrayW<::UnityEngine::ContactPoint2D> __get_m_ReusedContacts() const;

 ::ArrayW<::UnityEngine::ContactPoint2D> __declspec(property(get=__get_m_LegacyContacts, put=__set_m_LegacyContacts))  m_LegacyContacts;

constexpr void __set_m_LegacyContacts(::ArrayW<::UnityEngine::ContactPoint2D> value) ;

constexpr ::ArrayW<::UnityEngine::ContactPoint2D> __get_m_LegacyContacts() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Collision2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Collision2D, "UnityEngine", "Collision2D");
