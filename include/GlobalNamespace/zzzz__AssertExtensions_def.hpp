#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
// Forward declare root types
namespace GlobalNamespace {
class AssertExtensions;
}
// Type: ::AssertExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13752))
// CS Name: AssertExtensions
class CORDL_TYPE AssertExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AssertExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssertExtensions", modifiers: " const&", def_value: None }]
constexpr AssertExtensions(AssertExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssertExtensions", modifiers: "&&", def_value: None }]
constexpr AssertExtensions(AssertExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssertExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AssertExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssertExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssertExtensions& operator=(AssertExtensions&& o) noexcept = default;
  constexpr AssertExtensions& operator=(AssertExtensions const& o) noexcept = default;
                


// Fields

/// @brief Field kUnityAssertions offset 0
static constexpr ::ConstString  kUnityAssertions{u"UNITY_ASSERTIONS"};


// Methods

/// @brief Method LessThan addr 0x1f7337c size 0x4 virtual false final false
static void LessThan(float_t expected, float_t value, ::StringW message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::AssertExtensions);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AssertExtensions, "", "AssertExtensions");
