#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace TMPro {
class CodePoint;
}
// Type: TMPro::CodePoint
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12353))
// CS Name: TMPro.CodePoint
class CORDL_TYPE CodePoint : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CodePoint() = default;

// Ctor Parameters [CppParam { name: "", ty: "CodePoint", modifiers: " const&", def_value: None }]
constexpr CodePoint(CodePoint const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CodePoint", modifiers: "&&", def_value: None }]
constexpr CodePoint(CodePoint&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CodePoint(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CodePoint& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CodePoint& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CodePoint& operator=(CodePoint&& o) noexcept = default;
  constexpr CodePoint& operator=(CodePoint const& o) noexcept = default;
                


// Fields

/// @brief Field SPACE offset 0
static constexpr uint32_t  SPACE{32u};

/// @brief Field DOUBLE_QUOTE offset 0
static constexpr uint32_t  DOUBLE_QUOTE{34u};

/// @brief Field NUMBER_SIGN offset 0
static constexpr uint32_t  NUMBER_SIGN{35u};

/// @brief Field PERCENTAGE offset 0
static constexpr uint32_t  PERCENTAGE{37u};

/// @brief Field PLUS offset 0
static constexpr uint32_t  PLUS{43u};

/// @brief Field MINUS offset 0
static constexpr uint32_t  MINUS{45u};

/// @brief Field PERIOD offset 0
static constexpr uint32_t  PERIOD{46u};

/// @brief Field HYPHEN_MINUS offset 0
static constexpr uint32_t  HYPHEN_MINUS{45u};

/// @brief Field SOFT_HYPHEN offset 0
static constexpr uint32_t  SOFT_HYPHEN{173u};

/// @brief Field HYPHEN offset 0
static constexpr uint32_t  HYPHEN{8208u};

/// @brief Field NON_BREAKING_HYPHEN offset 0
static constexpr uint32_t  NON_BREAKING_HYPHEN{8209u};

/// @brief Field ZERO_WIDTH_SPACE offset 0
static constexpr uint32_t  ZERO_WIDTH_SPACE{8203u};

/// @brief Field RIGHT_SINGLE_QUOTATION offset 0
static constexpr uint32_t  RIGHT_SINGLE_QUOTATION{8217u};

/// @brief Field APOSTROPHE offset 0
static constexpr uint32_t  APOSTROPHE{39u};

/// @brief Field WORD_JOINER offset 0
static constexpr uint32_t  WORD_JOINER{8288u};

/// @brief Field HIGH_SURROGATE_START offset 0
static constexpr uint32_t  HIGH_SURROGATE_START{55296u};

/// @brief Field HIGH_SURROGATE_END offset 0
static constexpr uint32_t  HIGH_SURROGATE_END{56319u};

/// @brief Field LOW_SURROGATE_START offset 0
static constexpr uint32_t  LOW_SURROGATE_START{56320u};

/// @brief Field LOW_SURROGATE_END offset 0
static constexpr uint32_t  LOW_SURROGATE_END{57343u};

/// @brief Field UNICODE_PLANE01_START offset 0
static constexpr uint32_t  UNICODE_PLANE01_START{65536u};

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
NEED_NO_BOX(TMPro::CodePoint);
DEFINE_IL2CPP_ARG_TYPE(TMPro::CodePoint, "TMPro", "CodePoint");
