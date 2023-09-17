#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
class VersionStringHelper;
}
// Type: ::VersionStringHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13763))
// CS Name: VersionStringHelper
class CORDL_TYPE VersionStringHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~VersionStringHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "VersionStringHelper", modifiers: " const&", def_value: None }]
constexpr VersionStringHelper(VersionStringHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VersionStringHelper", modifiers: "&&", def_value: None }]
constexpr VersionStringHelper(VersionStringHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VersionStringHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr VersionStringHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VersionStringHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VersionStringHelper& operator=(VersionStringHelper&& o) noexcept = default;
  constexpr VersionStringHelper& operator=(VersionStringHelper const& o) noexcept = default;
                


// Methods

/// @brief Method GetMajorVersionNumber addr 0x1f74894 size 0x70 virtual false final false
static int32_t GetMajorVersionNumber(::StringW versionString) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::VersionStringHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VersionStringHelper, "", "VersionStringHelper");
