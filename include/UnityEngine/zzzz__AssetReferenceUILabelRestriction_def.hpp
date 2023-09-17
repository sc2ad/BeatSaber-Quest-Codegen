#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__AssetReferenceUIRestriction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class AssetReferenceUILabelRestriction;
}
// Type: UnityEngine::AssetReferenceUILabelRestriction
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14326))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14327))
// CS Name: UnityEngine.AssetReferenceUILabelRestriction
class CORDL_TYPE AssetReferenceUILabelRestriction : public ::UnityEngine::AssetReferenceUIRestriction {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AssetReferenceUILabelRestriction() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetReferenceUILabelRestriction", modifiers: " const&", def_value: None }]
constexpr AssetReferenceUILabelRestriction(AssetReferenceUILabelRestriction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetReferenceUILabelRestriction", modifiers: "&&", def_value: None }]
constexpr AssetReferenceUILabelRestriction(AssetReferenceUILabelRestriction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssetReferenceUILabelRestriction(void* ptr) noexcept : ::UnityEngine::AssetReferenceUIRestriction(ptr) {
}


  constexpr AssetReferenceUILabelRestriction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssetReferenceUILabelRestriction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssetReferenceUILabelRestriction& operator=(AssetReferenceUILabelRestriction&& o) noexcept = default;
  constexpr AssetReferenceUILabelRestriction& operator=(AssetReferenceUILabelRestriction const& o) noexcept = default;
                


// Fields

 ::ArrayW<::StringW> __declspec(property(get=__get_m_AllowedLabels, put=__set_m_AllowedLabels))  m_AllowedLabels;

constexpr void __set_m_AllowedLabels(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_m_AllowedLabels() const;

 ::StringW __declspec(property(get=__get_m_CachedToString, put=__set_m_CachedToString))  m_CachedToString;

constexpr void __set_m_CachedToString(::StringW value) ;

constexpr ::StringW __get_m_CachedToString() const;


// Methods

// Ctor Parameters [CppParam { name: "allowedLabels", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }]
explicit AssetReferenceUILabelRestriction(::ArrayW<::StringW> allowedLabels) ;

/// @brief Method .ctor addr 0x287d6ac size 0x28 virtual false final false
 void _ctor(::ArrayW<::StringW> allowedLabels) ;

/// @brief Method ValidateAsset addr 0x287d6d4 size 0x8 virtual true final false
 bool ValidateAsset(::UnityEngine::Object obj) ;

/// @brief Method ValidateAsset addr 0x287d6dc size 0x8 virtual true final false
 bool ValidateAsset(::StringW path) ;

/// @brief Method ToString addr 0x287d6e4 size 0xf4 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::AssetReferenceUILabelRestriction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AssetReferenceUILabelRestriction, "UnityEngine", "AssetReferenceUILabelRestriction");
