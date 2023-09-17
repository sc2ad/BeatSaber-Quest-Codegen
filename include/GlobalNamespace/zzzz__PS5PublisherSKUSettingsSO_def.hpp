#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SonyPublisherSKUSettingsSO_def.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class PS5PublisherSKUSettingsSO;
}
// Type: ::PS5PublisherSKUSettingsSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4689))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4653))
// CS Name: PS5PublisherSKUSettingsSO
class CORDL_TYPE PS5PublisherSKUSettingsSO : public ::GlobalNamespace::SonyPublisherSKUSettingsSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~PS5PublisherSKUSettingsSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "PS5PublisherSKUSettingsSO", modifiers: " const&", def_value: None }]
constexpr PS5PublisherSKUSettingsSO(PS5PublisherSKUSettingsSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PS5PublisherSKUSettingsSO", modifiers: "&&", def_value: None }]
constexpr PS5PublisherSKUSettingsSO(PS5PublisherSKUSettingsSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PS5PublisherSKUSettingsSO(void* ptr) noexcept : ::GlobalNamespace::SonyPublisherSKUSettingsSO(ptr) {
}


  constexpr PS5PublisherSKUSettingsSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PS5PublisherSKUSettingsSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PS5PublisherSKUSettingsSO& operator=(PS5PublisherSKUSettingsSO&& o) noexcept = default;
  constexpr PS5PublisherSKUSettingsSO& operator=(PS5PublisherSKUSettingsSO const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit PS5PublisherSKUSettingsSO() ;

/// @brief Method .ctor addr 0x221a854 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::PS5PublisherSKUSettingsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS5PublisherSKUSettingsSO, "", "PS5PublisherSKUSettingsSO");
