#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System {
class AppContextSwitches;
}
// Type: System::AppContextSwitches
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2539))
// CS Name: System.AppContextSwitches
class CORDL_TYPE AppContextSwitches : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AppContextSwitches() = default;

// Ctor Parameters [CppParam { name: "", ty: "AppContextSwitches", modifiers: " const&", def_value: None }]
constexpr AppContextSwitches(AppContextSwitches const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AppContextSwitches", modifiers: "&&", def_value: None }]
constexpr AppContextSwitches(AppContextSwitches&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AppContextSwitches(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AppContextSwitches& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AppContextSwitches& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AppContextSwitches& operator=(AppContextSwitches&& o) noexcept = default;
  constexpr AppContextSwitches& operator=(AppContextSwitches const& o) noexcept = default;
                


// Fields

static bool __declspec(property(get=__get_SetActorAsReferenceWhenCopyingClaimsIdentity, put=__set_SetActorAsReferenceWhenCopyingClaimsIdentity))  SetActorAsReferenceWhenCopyingClaimsIdentity;

static void __set_SetActorAsReferenceWhenCopyingClaimsIdentity(bool value) ;

static bool __get_SetActorAsReferenceWhenCopyingClaimsIdentity() ;

static bool __declspec(property(get=__get_NoAsyncCurrentCulture, put=__set_NoAsyncCurrentCulture))  NoAsyncCurrentCulture;

static void __set_NoAsyncCurrentCulture(bool value) ;

static bool __get_NoAsyncCurrentCulture() ;

static bool __declspec(property(get=__get_EnforceJapaneseEraYearRanges, put=__set_EnforceJapaneseEraYearRanges))  EnforceJapaneseEraYearRanges;

static void __set_EnforceJapaneseEraYearRanges(bool value) ;

static bool __get_EnforceJapaneseEraYearRanges() ;

static bool __declspec(property(get=__get_FormatJapaneseFirstYearAsANumber, put=__set_FormatJapaneseFirstYearAsANumber))  FormatJapaneseFirstYearAsANumber;

static void __set_FormatJapaneseFirstYearAsANumber(bool value) ;

static bool __get_FormatJapaneseFirstYearAsANumber() ;

static bool __declspec(property(get=__get_EnforceLegacyJapaneseDateParsing, put=__set_EnforceLegacyJapaneseDateParsing))  EnforceLegacyJapaneseDateParsing;

static void __set_EnforceLegacyJapaneseDateParsing(bool value) ;

static bool __get_EnforceLegacyJapaneseDateParsing() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::AppContextSwitches);
DEFINE_IL2CPP_ARG_TYPE(System::AppContextSwitches, "System", "AppContextSwitches");
