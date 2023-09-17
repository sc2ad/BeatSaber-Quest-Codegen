#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
class BTSStarTextEffectValueParser;
}
// Type: ::BTSStarTextEffectValueParser
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3967))
// CS Name: BTSStarTextEffectValueParser
class CORDL_TYPE BTSStarTextEffectValueParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BTSStarTextEffectValueParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "BTSStarTextEffectValueParser", modifiers: " const&", def_value: None }]
constexpr BTSStarTextEffectValueParser(BTSStarTextEffectValueParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BTSStarTextEffectValueParser", modifiers: "&&", def_value: None }]
constexpr BTSStarTextEffectValueParser(BTSStarTextEffectValueParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BTSStarTextEffectValueParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BTSStarTextEffectValueParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BTSStarTextEffectValueParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BTSStarTextEffectValueParser& operator=(BTSStarTextEffectValueParser&& o) noexcept = default;
  constexpr BTSStarTextEffectValueParser& operator=(BTSStarTextEffectValueParser const& o) noexcept = default;
                


// Fields

/// @brief Field kTextMask offset 0
static constexpr int32_t  kTextMask{255};

/// @brief Field kTextBitOffset offset 0
static constexpr int32_t  kTextBitOffset{0};

/// @brief Field kPositionMask offset 0
static constexpr int32_t  kPositionMask{65280};

/// @brief Field kPositionBitOffset offset 0
static constexpr int32_t  kPositionBitOffset{8};


// Methods

/// @brief Method GetTextId addr 0x20aaf2c size 0x8 virtual false final false
static int32_t GetTextId(int32_t value) ;

/// @brief Method GetPositionId addr 0x20aaf34 size 0x8 virtual false final false
static int32_t GetPositionId(int32_t value) ;

/// @brief Method MergeValuesIntoOneInt addr 0x20aaf3c size 0x8 virtual false final false
static int32_t MergeValuesIntoOneInt(int32_t textId, int32_t positionId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BTSStarTextEffectValueParser);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSStarTextEffectValueParser, "", "BTSStarTextEffectValueParser");
