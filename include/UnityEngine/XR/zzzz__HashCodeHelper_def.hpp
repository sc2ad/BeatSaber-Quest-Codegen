#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace UnityEngine::XR {
class HashCodeHelper;
}
// Type: UnityEngine.XR::HashCodeHelper
namespace UnityEngine::XR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15585))
// CS Name: UnityEngine.XR.HashCodeHelper
class CORDL_TYPE HashCodeHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HashCodeHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "HashCodeHelper", modifiers: " const&", def_value: None }]
constexpr HashCodeHelper(HashCodeHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HashCodeHelper", modifiers: "&&", def_value: None }]
constexpr HashCodeHelper(HashCodeHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HashCodeHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HashCodeHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HashCodeHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HashCodeHelper& operator=(HashCodeHelper&& o) noexcept = default;
  constexpr HashCodeHelper& operator=(HashCodeHelper const& o) noexcept = default;
                


// Methods

/// @brief Method Combine addr 0x2d3a370 size 0x10 virtual false final false
static int32_t Combine(int32_t hash1, int32_t hash2) ;

/// @brief Method Combine addr 0x2d3a380 size 0x14 virtual false final false
static int32_t Combine(int32_t hash1, int32_t hash2, int32_t hash3) ;

/// @brief Method Combine addr 0x2d3a394 size 0x18 virtual false final false
static int32_t Combine(int32_t hash1, int32_t hash2, int32_t hash3, int32_t hash4) ;

/// @brief Method Combine addr 0x2d3a3ac size 0x1c virtual false final false
static int32_t Combine(int32_t hash1, int32_t hash2, int32_t hash3, int32_t hash4, int32_t hash5) ;

/// @brief Method Combine addr 0x2d3a3c8 size 0x20 virtual false final false
static int32_t Combine(int32_t hash1, int32_t hash2, int32_t hash3, int32_t hash4, int32_t hash5, int32_t hash6) ;

/// @brief Method Combine addr 0x2d3a3e8 size 0x24 virtual false final false
static int32_t Combine(int32_t hash1, int32_t hash2, int32_t hash3, int32_t hash4, int32_t hash5, int32_t hash6, int32_t hash7) ;

/// @brief Method Combine addr 0x2d3a40c size 0x28 virtual false final false
static int32_t Combine(int32_t hash1, int32_t hash2, int32_t hash3, int32_t hash4, int32_t hash5, int32_t hash6, int32_t hash7, int32_t hash8) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR
NEED_NO_BOX(UnityEngine::XR::HashCodeHelper);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::HashCodeHelper, "UnityEngine.XR", "HashCodeHelper");
