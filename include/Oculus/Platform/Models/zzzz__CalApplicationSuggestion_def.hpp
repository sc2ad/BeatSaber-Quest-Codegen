#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Oculus::Platform::Models {
class CalApplicationSuggestion;
}
// Type: Oculus.Platform.Models::CalApplicationSuggestion
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13399))
// CS Name: Oculus.Platform.Models.CalApplicationSuggestion
class CORDL_TYPE CalApplicationSuggestion : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CalApplicationSuggestion() = default;

// Ctor Parameters [CppParam { name: "", ty: "CalApplicationSuggestion", modifiers: " const&", def_value: None }]
constexpr CalApplicationSuggestion(CalApplicationSuggestion const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CalApplicationSuggestion", modifiers: "&&", def_value: None }]
constexpr CalApplicationSuggestion(CalApplicationSuggestion&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CalApplicationSuggestion(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CalApplicationSuggestion& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CalApplicationSuggestion& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CalApplicationSuggestion& operator=(CalApplicationSuggestion&& o) noexcept = default;
  constexpr CalApplicationSuggestion& operator=(CalApplicationSuggestion const& o) noexcept = default;
                


// Fields

 uint64_t __declspec(property(get=__get_ID, put=__set_ID))  ID;

constexpr void __set_ID(uint64_t value) ;

constexpr uint64_t __get_ID() const;

 ::StringW __declspec(property(get=__get_SocialContext, put=__set_SocialContext))  SocialContext;

constexpr void __set_SocialContext(::StringW value) ;

constexpr ::StringW __get_SocialContext() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit CalApplicationSuggestion(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259d4d8 size 0x88 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::Models::CalApplicationSuggestion);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::CalApplicationSuggestion, "Oculus.Platform.Models", "CalApplicationSuggestion");
