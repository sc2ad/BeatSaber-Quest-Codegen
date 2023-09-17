#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SonyOnGoingToBackgroundSaveHandler_def.hpp"
namespace {
namespace GlobalNamespace {
class PS4Helper;
}
// Forward declare root types
namespace GlobalNamespace {
class PS4OnGoingToBackgroundSaveHandler;
}
// Type: ::PS4OnGoingToBackgroundSaveHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4680))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4639))
// CS Name: PS4OnGoingToBackgroundSaveHandler
class CORDL_TYPE PS4OnGoingToBackgroundSaveHandler : public ::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~PS4OnGoingToBackgroundSaveHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "PS4OnGoingToBackgroundSaveHandler", modifiers: " const&", def_value: None }]
constexpr PS4OnGoingToBackgroundSaveHandler(PS4OnGoingToBackgroundSaveHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PS4OnGoingToBackgroundSaveHandler", modifiers: "&&", def_value: None }]
constexpr PS4OnGoingToBackgroundSaveHandler(PS4OnGoingToBackgroundSaveHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PS4OnGoingToBackgroundSaveHandler(void* ptr) noexcept : ::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler(ptr) {
}


  constexpr PS4OnGoingToBackgroundSaveHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PS4OnGoingToBackgroundSaveHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PS4OnGoingToBackgroundSaveHandler& operator=(PS4OnGoingToBackgroundSaveHandler&& o) noexcept = default;
  constexpr PS4OnGoingToBackgroundSaveHandler& operator=(PS4OnGoingToBackgroundSaveHandler const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::PS4Helper __declspec(property(get=__get__ps4Helper, put=__set__ps4Helper))  _ps4Helper;

constexpr void __set__ps4Helper(::GlobalNamespace::PS4Helper value) ;

constexpr ::GlobalNamespace::PS4Helper __get__ps4Helper() const;


// Methods

/// @brief Method Subscribe addr 0x221a5c8 size 0x88 virtual true final false
 void Subscribe() ;

/// @brief Method Unsubscribe addr 0x221a650 size 0x94 virtual true final false
 void Unsubscribe() ;

// Ctor Parameters []
explicit PS4OnGoingToBackgroundSaveHandler() ;

/// @brief Method .ctor addr 0x221a6e4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::PS4OnGoingToBackgroundSaveHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS4OnGoingToBackgroundSaveHandler, "", "PS4OnGoingToBackgroundSaveHandler");
