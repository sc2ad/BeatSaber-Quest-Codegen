#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
class TrackedReference;
}
// Type: UnityEngine::TrackedReference
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10150))
// CS Name: UnityEngine.TrackedReference
class CORDL_TYPE TrackedReference : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TrackedReference() = default;

// Ctor Parameters [CppParam { name: "", ty: "TrackedReference", modifiers: " const&", def_value: None }]
constexpr TrackedReference(TrackedReference const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TrackedReference", modifiers: "&&", def_value: None }]
constexpr TrackedReference(TrackedReference&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TrackedReference(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TrackedReference& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TrackedReference& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TrackedReference& operator=(TrackedReference&& o) noexcept = default;
  constexpr TrackedReference& operator=(TrackedReference const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr))  m_Ptr;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_Ptr() const;


// Methods

static UnityEngine::TrackedReference New_ctor() ;

/// @brief Method .ctor addr 0x2b5a1bc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method op_Equality addr 0x2b5a1c4 size 0x94 virtual false final false
static bool op_Equality(UnityEngine::TrackedReference x, UnityEngine::TrackedReference y) ;

/// @brief Method Equals addr 0x2b5a258 size 0x80 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method GetHashCode addr 0x2b5a2d8 size 0xc virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::TrackedReference);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TrackedReference, "UnityEngine", "TrackedReference");
