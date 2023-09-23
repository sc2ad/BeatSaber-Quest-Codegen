#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace System {
class DomainNameHelper;
}
// Type: System::DomainNameHelper
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7739))
// CS Name: System.DomainNameHelper
class CORDL_TYPE DomainNameHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DomainNameHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "DomainNameHelper", modifiers: " const&", def_value: None }]
constexpr DomainNameHelper(DomainNameHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DomainNameHelper", modifiers: "&&", def_value: None }]
constexpr DomainNameHelper(DomainNameHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DomainNameHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DomainNameHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DomainNameHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DomainNameHelper& operator=(DomainNameHelper&& o) noexcept = default;
  constexpr DomainNameHelper& operator=(DomainNameHelper const& o) noexcept = default;
                


// Methods

/// @brief Method ParseCanonicalName addr 0x27ba6f0 size 0x1a0 virtual false final false
static ::StringW ParseCanonicalName(::StringW str, int32_t start, int32_t end, ByRef<bool> loopback) ;

/// @brief Method IsValid addr 0x27ba890 size 0x17c virtual false final false
static bool IsValid(void* name, uint16_t pos, ByRef<int32_t> returnedEnd, ByRef<bool> notCanonical, bool notImplicitFile) ;

/// @brief Method IsValidByIri addr 0x27baabc size 0x1e8 virtual false final false
static bool IsValidByIri(void* name, uint16_t pos, ByRef<int32_t> returnedEnd, ByRef<bool> notCanonical, bool notImplicitFile) ;

/// @brief Method IdnEquivalent addr 0x27baca4 size 0x27c virtual false final false
static ::StringW IdnEquivalent(void* hostname, int32_t start, int32_t end, ByRef<bool> allAscii, ByRef<bool> atLeastOneValidIdn) ;

/// @brief Method IdnEquivalent addr 0x27baf20 size 0x1f4 virtual false final false
static ::StringW IdnEquivalent(void* hostname, int32_t start, int32_t end, ByRef<bool> allAscii, ByRef<::StringW> bidiStrippedHost) ;

/// @brief Method IsIdnAce addr 0x27bb160 size 0x98 virtual false final false
static bool IsIdnAce(::StringW input, int32_t index) ;

/// @brief Method IsIdnAce addr 0x27bb114 size 0x4c virtual false final false
static bool IsIdnAce(void* input, int32_t index) ;

/// @brief Method UnicodeEquivalent addr 0x27bb1f8 size 0x11c virtual false final false
static ::StringW UnicodeEquivalent(::StringW idnHost, void* hostname, int32_t start, int32_t end) ;

/// @brief Method UnicodeEquivalent addr 0x27bb314 size 0x458 virtual false final false
static ::StringW UnicodeEquivalent(void* hostname, int32_t start, int32_t end, ByRef<bool> allAscii, ByRef<bool> atLeastOneValidIdn) ;

/// @brief Method IsASCIILetterOrDigit addr 0x27baa0c size 0x4c virtual false final false
static bool IsASCIILetterOrDigit(char16_t character, ByRef<bool> notCanonical) ;

/// @brief Method IsValidDomainLabelCharacter addr 0x27baa58 size 0x64 virtual false final false
static bool IsValidDomainLabelCharacter(char16_t character, ByRef<bool> notCanonical) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::DomainNameHelper);
DEFINE_IL2CPP_ARG_TYPE(System::DomainNameHelper, "System", "DomainNameHelper");
