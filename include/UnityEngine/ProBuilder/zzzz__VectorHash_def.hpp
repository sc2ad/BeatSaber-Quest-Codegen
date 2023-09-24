#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class VectorHash;
}
// Type: UnityEngine.ProBuilder::VectorHash
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12157))
// CS Name: UnityEngine.ProBuilder.VectorHash
class CORDL_TYPE VectorHash : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~VectorHash() = default;

// Ctor Parameters [CppParam { name: "", ty: "VectorHash", modifiers: " const&", def_value: None }]
constexpr VectorHash(VectorHash const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VectorHash", modifiers: "&&", def_value: None }]
constexpr VectorHash(VectorHash&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VectorHash(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr VectorHash& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VectorHash& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VectorHash& operator=(VectorHash&& o) noexcept = default;
  constexpr VectorHash& operator=(VectorHash const& o) noexcept = default;
                


// Fields

/// @brief Field FltCompareResolution offset 0
static constexpr float_t  FltCompareResolution{1000};


// Methods

/// @brief Method HashFloat addr 0x29eab00 size 0x40 virtual false final false
static int32_t HashFloat(float_t f) ;

/// @brief Method GetHashCode addr 0x29eab40 size 0x7c virtual false final false
static int32_t GetHashCode(UnityEngine::Vector2 v) ;

/// @brief Method GetHashCode addr 0x29d546c size 0xb0 virtual false final false
static int32_t GetHashCode(UnityEngine::Vector3 v) ;

/// @brief Method GetHashCode addr 0x29eabbc size 0xe0 virtual false final false
static int32_t GetHashCode(UnityEngine::Vector4 v) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::VectorHash);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::VectorHash, "UnityEngine.ProBuilder", "VectorHash");
