#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System {
struct UriComponents;
}
// Forward declare root types
namespace System {
class IriHelper;
}
// Type: System::IriHelper
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7720))
// CS Name: System.IriHelper
class CORDL_TYPE IriHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IriHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "IriHelper", modifiers: " const&", def_value: None }]
constexpr IriHelper(IriHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IriHelper", modifiers: "&&", def_value: None }]
constexpr IriHelper(IriHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IriHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IriHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IriHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IriHelper& operator=(IriHelper&& o) noexcept = default;
  constexpr IriHelper& operator=(IriHelper const& o) noexcept = default;
                


// Methods

/// @brief Method CheckIriUnicodeRange addr 0x27b6910 size 0x58 virtual false final false
static bool CheckIriUnicodeRange(char16_t unicode, bool isQuery) ;

/// @brief Method CheckIriUnicodeRange addr 0x27b6968 size 0x630 virtual false final false
static bool CheckIriUnicodeRange(char16_t highSurr, char16_t lowSurr, ByRef<bool> surrogatePair, bool isQuery) ;

/// @brief Method CheckIsReserved addr 0x27b6f98 size 0x144 virtual false final false
static bool CheckIsReserved(char16_t ch, ::System::UriComponents component) ;

/// @brief Method EscapeUnescapeIri addr 0x27b70dc size 0x7fc virtual false final false
static ::StringW EscapeUnescapeIri(void* pInput, int32_t start, int32_t end, ::System::UriComponents component) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::IriHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::IriHelper, "System", "IriHelper");
