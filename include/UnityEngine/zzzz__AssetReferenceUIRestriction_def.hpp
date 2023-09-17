#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class AssetReferenceUIRestriction;
}
// Type: UnityEngine::AssetReferenceUIRestriction
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14326))
// CS Name: UnityEngine.AssetReferenceUIRestriction
class CORDL_TYPE AssetReferenceUIRestriction : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AssetReferenceUIRestriction() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetReferenceUIRestriction", modifiers: " const&", def_value: None }]
constexpr AssetReferenceUIRestriction(AssetReferenceUIRestriction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetReferenceUIRestriction", modifiers: "&&", def_value: None }]
constexpr AssetReferenceUIRestriction(AssetReferenceUIRestriction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssetReferenceUIRestriction(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr AssetReferenceUIRestriction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssetReferenceUIRestriction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssetReferenceUIRestriction& operator=(AssetReferenceUIRestriction&& o) noexcept = default;
  constexpr AssetReferenceUIRestriction& operator=(AssetReferenceUIRestriction const& o) noexcept = default;
                


// Methods

/// @brief Method ValidateAsset addr 0x287d694 size 0x8 virtual true final false
 bool ValidateAsset(::UnityEngine::Object obj) ;

/// @brief Method ValidateAsset addr 0x287d69c size 0x8 virtual true final false
 bool ValidateAsset(::StringW path) ;

// Ctor Parameters []
explicit AssetReferenceUIRestriction() ;

/// @brief Method .ctor addr 0x287d6a4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::AssetReferenceUIRestriction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AssetReferenceUIRestriction, "UnityEngine", "AssetReferenceUIRestriction");
