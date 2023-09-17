#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace HMUI {
class EventSystemHelpers;
}
// Type: HMUI::EventSystemHelpers
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13583))
// CS Name: HMUI.EventSystemHelpers
class CORDL_TYPE EventSystemHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EventSystemHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "EventSystemHelpers", modifiers: " const&", def_value: None }]
constexpr EventSystemHelpers(EventSystemHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EventSystemHelpers", modifiers: "&&", def_value: None }]
constexpr EventSystemHelpers(EventSystemHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EventSystemHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EventSystemHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EventSystemHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EventSystemHelpers& operator=(EventSystemHelpers&& o) noexcept = default;
  constexpr EventSystemHelpers& operator=(EventSystemHelpers const& o) noexcept = default;
                


// Methods

/// @brief Method IsInputFieldSelected addr 0x1fa9468 size 0xf8 virtual false final false
static bool IsInputFieldSelected() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
} // end anonymous namespace
NEED_NO_BOX(::HMUI::EventSystemHelpers);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::EventSystemHelpers, "HMUI", "EventSystemHelpers");
