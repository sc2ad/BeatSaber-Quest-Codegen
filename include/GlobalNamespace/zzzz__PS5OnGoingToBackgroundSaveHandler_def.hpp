#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SonyOnGoingToBackgroundSaveHandler_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class PS5OnGoingToBackgroundSaveHandler;
}
// Type: ::PS5OnGoingToBackgroundSaveHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4680))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4651))
// CS Name: PS5OnGoingToBackgroundSaveHandler
class CORDL_TYPE PS5OnGoingToBackgroundSaveHandler : public GlobalNamespace::SonyOnGoingToBackgroundSaveHandler {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~PS5OnGoingToBackgroundSaveHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "PS5OnGoingToBackgroundSaveHandler", modifiers: " const&", def_value: None }]
constexpr PS5OnGoingToBackgroundSaveHandler(PS5OnGoingToBackgroundSaveHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PS5OnGoingToBackgroundSaveHandler", modifiers: "&&", def_value: None }]
constexpr PS5OnGoingToBackgroundSaveHandler(PS5OnGoingToBackgroundSaveHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PS5OnGoingToBackgroundSaveHandler(void* ptr) noexcept : GlobalNamespace::SonyOnGoingToBackgroundSaveHandler(ptr) {
}


  constexpr PS5OnGoingToBackgroundSaveHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PS5OnGoingToBackgroundSaveHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PS5OnGoingToBackgroundSaveHandler& operator=(PS5OnGoingToBackgroundSaveHandler&& o) noexcept = default;
  constexpr PS5OnGoingToBackgroundSaveHandler& operator=(PS5OnGoingToBackgroundSaveHandler const& o) noexcept = default;
                


// Methods

/// @brief Method Subscribe addr 0x221a7f4 size 0x4 virtual true final false
 void Subscribe() ;

/// @brief Method Unsubscribe addr 0x221a7f8 size 0x4 virtual true final false
 void Unsubscribe() ;

static GlobalNamespace::PS5OnGoingToBackgroundSaveHandler New_ctor() ;

/// @brief Method .ctor addr 0x221a7fc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PS5OnGoingToBackgroundSaveHandler);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS5OnGoingToBackgroundSaveHandler, "", "PS5OnGoingToBackgroundSaveHandler");
