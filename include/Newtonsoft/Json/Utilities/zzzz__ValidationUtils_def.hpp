#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class ValidationUtils;
}
// Type: Newtonsoft.Json.Utilities::ValidationUtils
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11844))
// CS Name: Newtonsoft.Json.Utilities.ValidationUtils
class CORDL_TYPE ValidationUtils : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ValidationUtils() = default;

// Ctor Parameters [CppParam { name: "", ty: "ValidationUtils", modifiers: " const&", def_value: None }]
constexpr ValidationUtils(ValidationUtils const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ValidationUtils", modifiers: "&&", def_value: None }]
constexpr ValidationUtils(ValidationUtils&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ValidationUtils(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ValidationUtils& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ValidationUtils& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ValidationUtils& operator=(ValidationUtils&& o) noexcept = default;
  constexpr ValidationUtils& operator=(ValidationUtils const& o) noexcept = default;
                


// Methods

/// @brief Method ArgumentNotNull addr 0x24dd7e8 size 0x54 virtual false final false
static void ArgumentNotNull(::bs_hook::Il2CppWrapperType value, ::StringW parameterName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::Utilities::ValidationUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ValidationUtils, "Newtonsoft.Json.Utilities", "ValidationUtils");
