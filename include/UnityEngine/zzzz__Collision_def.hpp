#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct ContactPoint;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace UnityEngine {
class Collision;
}
// Type: UnityEngine::Collision
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15467))
// CS Name: UnityEngine.Collision
class CORDL_TYPE Collision : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~Collision() = default;

// Ctor Parameters [CppParam { name: "", ty: "Collision", modifiers: " const&", def_value: None }]
constexpr Collision(Collision const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Collision", modifiers: "&&", def_value: None }]
constexpr Collision(Collision&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Collision(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Collision& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Collision& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Collision& operator=(Collision&& o) noexcept = default;
  constexpr Collision& operator=(Collision const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_m_Impulse, put=__set_m_Impulse))  m_Impulse;

constexpr void __set_m_Impulse(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_Impulse() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_RelativeVelocity, put=__set_m_RelativeVelocity))  m_RelativeVelocity;

constexpr void __set_m_RelativeVelocity(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_RelativeVelocity() const;

 UnityEngine::Component __declspec(property(get=__get_m_Body, put=__set_m_Body))  m_Body;

constexpr void __set_m_Body(UnityEngine::Component value) ;

constexpr UnityEngine::Component __get_m_Body() const;

 UnityEngine::Collider __declspec(property(get=__get_m_Collider, put=__set_m_Collider))  m_Collider;

constexpr void __set_m_Collider(UnityEngine::Collider value) ;

constexpr UnityEngine::Collider __get_m_Collider() const;

 int32_t __declspec(property(get=__get_m_ContactCount, put=__set_m_ContactCount))  m_ContactCount;

constexpr void __set_m_ContactCount(int32_t value) ;

constexpr int32_t __get_m_ContactCount() const;

 ::ArrayW<UnityEngine::ContactPoint> __declspec(property(get=__get_m_ReusedContacts, put=__set_m_ReusedContacts))  m_ReusedContacts;

constexpr void __set_m_ReusedContacts(::ArrayW<UnityEngine::ContactPoint> value) ;

constexpr ::ArrayW<UnityEngine::ContactPoint> __get_m_ReusedContacts() const;

 ::ArrayW<UnityEngine::ContactPoint> __declspec(property(get=__get_m_LegacyContacts, put=__set_m_LegacyContacts))  m_LegacyContacts;

constexpr void __set_m_LegacyContacts(::ArrayW<UnityEngine::ContactPoint> value) ;

constexpr ::ArrayW<UnityEngine::ContactPoint> __get_m_LegacyContacts() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Collision);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Collision, "UnityEngine", "Collision");
