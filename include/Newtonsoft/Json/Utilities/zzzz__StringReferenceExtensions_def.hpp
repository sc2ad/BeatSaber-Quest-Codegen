#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Newtonsoft::Json::Utilities {
struct StringReference;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class StringReferenceExtensions;
}
// Type: Newtonsoft.Json.Utilities::StringReferenceExtensions
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11809))
// CS Name: Newtonsoft.Json.Utilities.StringReferenceExtensions
class CORDL_TYPE StringReferenceExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~StringReferenceExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "StringReferenceExtensions", modifiers: " const&", def_value: None }]
constexpr StringReferenceExtensions(StringReferenceExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StringReferenceExtensions", modifiers: "&&", def_value: None }]
constexpr StringReferenceExtensions(StringReferenceExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StringReferenceExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StringReferenceExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StringReferenceExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StringReferenceExtensions& operator=(StringReferenceExtensions&& o) noexcept = default;
  constexpr StringReferenceExtensions& operator=(StringReferenceExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method IndexOf addr 0x24e3a48 size 0x84 virtual false final false
static int32_t IndexOf(::Newtonsoft::Json::Utilities::StringReference s, char16_t c, int32_t startIndex, int32_t length) ;

/// @brief Method StartsWith addr 0x24e3acc size 0xb4 virtual false final false
static bool StartsWith(::Newtonsoft::Json::Utilities::StringReference s, ::StringW text) ;

/// @brief Method EndsWith addr 0x24e3b80 size 0xb8 virtual false final false
static bool EndsWith(::Newtonsoft::Json::Utilities::StringReference s, ::StringW text) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::Utilities::StringReferenceExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::StringReferenceExtensions, "Newtonsoft.Json.Utilities", "StringReferenceExtensions");
