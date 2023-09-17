#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextUtilities;
}
// Type: UnityEngine.TextCore.Text::TextUtilities
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13514))
// CS Name: UnityEngine.TextCore.Text.TextUtilities
class CORDL_TYPE TextUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TextUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextUtilities", modifiers: " const&", def_value: None }]
constexpr TextUtilities(TextUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextUtilities", modifiers: "&&", def_value: None }]
constexpr TextUtilities(TextUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TextUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextUtilities& operator=(TextUtilities&& o) noexcept = default;
  constexpr TextUtilities& operator=(TextUtilities const& o) noexcept = default;
                


// Methods

/// @brief Method ToUpperFast addr 0x2bcc360 size 0x74 virtual false final false
static char16_t ToUpperFast(char16_t c) ;

/// @brief Method ToUpperASCIIFast addr 0x2bcc3d4 size 0x74 virtual false final false
static uint32_t ToUpperASCIIFast(uint32_t c) ;

/// @brief Method GetHashCodeCaseInSensitive addr 0x2bc0874 size 0x70 virtual false final false
static int32_t GetHashCodeCaseInSensitive(::StringW s) ;

/// @brief Method UintToString addr 0x2bc6d00 size 0xd8 virtual false final false
static ::StringW UintToString(::System::Collections::Generic::List_1<uint32_t> unicodes) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::TextCore::Text::TextUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextUtilities, "UnityEngine.TextCore.Text", "TextUtilities");
