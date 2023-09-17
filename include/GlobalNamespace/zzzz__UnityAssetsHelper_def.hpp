#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class UnityAssetsHelper;
}
// Type: ::UnityAssetsHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13750))
// CS Name: UnityAssetsHelper
class CORDL_TYPE UnityAssetsHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityAssetsHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityAssetsHelper", modifiers: " const&", def_value: None }]
constexpr UnityAssetsHelper(UnityAssetsHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityAssetsHelper", modifiers: "&&", def_value: None }]
constexpr UnityAssetsHelper(UnityAssetsHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityAssetsHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityAssetsHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityAssetsHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityAssetsHelper& operator=(UnityAssetsHelper&& o) noexcept = default;
  constexpr UnityAssetsHelper& operator=(UnityAssetsHelper const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::UnityAssetsHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UnityAssetsHelper, "", "UnityAssetsHelper");
