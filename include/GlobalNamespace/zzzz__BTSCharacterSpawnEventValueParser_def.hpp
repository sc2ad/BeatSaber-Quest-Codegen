#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
class BTSCharacterSpawnEventValueParser;
}
// Type: ::BTSCharacterSpawnEventValueParser
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3959))
// CS Name: BTSCharacterSpawnEventValueParser
class CORDL_TYPE BTSCharacterSpawnEventValueParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BTSCharacterSpawnEventValueParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "BTSCharacterSpawnEventValueParser", modifiers: " const&", def_value: None }]
constexpr BTSCharacterSpawnEventValueParser(BTSCharacterSpawnEventValueParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BTSCharacterSpawnEventValueParser", modifiers: "&&", def_value: None }]
constexpr BTSCharacterSpawnEventValueParser(BTSCharacterSpawnEventValueParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BTSCharacterSpawnEventValueParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BTSCharacterSpawnEventValueParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BTSCharacterSpawnEventValueParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BTSCharacterSpawnEventValueParser& operator=(BTSCharacterSpawnEventValueParser&& o) noexcept = default;
  constexpr BTSCharacterSpawnEventValueParser& operator=(BTSCharacterSpawnEventValueParser const& o) noexcept = default;
                


// Fields

/// @brief Field kPrefabMask offset 0
static constexpr int32_t  kPrefabMask{255};

/// @brief Field kPrefabBitOffset offset 0
static constexpr int32_t  kPrefabBitOffset{0};

/// @brief Field kAnimationMask offset 0
static constexpr int32_t  kAnimationMask{65280};

/// @brief Field kAnimationBitOffset offset 0
static constexpr int32_t  kAnimationBitOffset{8};

/// @brief Field kAlternativeMaterialMask offset 0
static constexpr int32_t  kAlternativeMaterialMask{65536};

/// @brief Field kAlternativeMaterialOffset offset 0
static constexpr int32_t  kAlternativeMaterialOffset{16};


// Methods

/// @brief Method GetPrefabId addr 0x20a953c size 0x8 virtual false final false
static int32_t GetPrefabId(int32_t value) ;

/// @brief Method GetAnimationId addr 0x20a9544 size 0x8 virtual false final false
static int32_t GetAnimationId(int32_t value) ;

/// @brief Method GetIsAlternativeMaterial addr 0x20a997c size 0x8 virtual false final false
static bool GetIsAlternativeMaterial(int32_t value) ;

/// @brief Method MergeValuesIntoOneInt addr 0x20a9ab4 size 0x18 virtual false final false
static int32_t MergeValuesIntoOneInt(int32_t prefabId, int32_t animationId, bool isAlternativeMaterial) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BTSCharacterSpawnEventValueParser);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSCharacterSpawnEventValueParser, "", "BTSCharacterSpawnEventValueParser");
