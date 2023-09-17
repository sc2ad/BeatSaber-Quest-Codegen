#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Newtonsoft::Json {
struct JsonToken;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class JsonTokenUtils;
}
// Type: Newtonsoft.Json.Utilities::JsonTokenUtils
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11790))
// CS Name: Newtonsoft.Json.Utilities.JsonTokenUtils
class CORDL_TYPE JsonTokenUtils : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~JsonTokenUtils() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonTokenUtils", modifiers: " const&", def_value: None }]
constexpr JsonTokenUtils(JsonTokenUtils const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonTokenUtils", modifiers: "&&", def_value: None }]
constexpr JsonTokenUtils(JsonTokenUtils&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonTokenUtils(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr JsonTokenUtils& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonTokenUtils& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonTokenUtils& operator=(JsonTokenUtils&& o) noexcept = default;
  constexpr JsonTokenUtils& operator=(JsonTokenUtils const& o) noexcept = default;
                


// Methods

/// @brief Method IsEndToken addr 0x24de2d0 size 0x10 virtual false final false
static bool IsEndToken(::Newtonsoft::Json::JsonToken token) ;

/// @brief Method IsStartToken addr 0x24de0d0 size 0x10 virtual false final false
static bool IsStartToken(::Newtonsoft::Json::JsonToken token) ;

/// @brief Method IsPrimitiveToken addr 0x24e1d6c size 0x24 virtual false final false
static bool IsPrimitiveToken(::Newtonsoft::Json::JsonToken token) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::Utilities::JsonTokenUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::JsonTokenUtils, "Newtonsoft.Json.Utilities", "JsonTokenUtils");
