#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System {
class EventArgs;
}
// Type: System::EventArgs
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2376))
// CS Name: System.EventArgs
class CORDL_TYPE EventArgs : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EventArgs() = default;

// Ctor Parameters [CppParam { name: "", ty: "EventArgs", modifiers: " const&", def_value: None }]
constexpr EventArgs(EventArgs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EventArgs", modifiers: "&&", def_value: None }]
constexpr EventArgs(EventArgs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EventArgs(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EventArgs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EventArgs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EventArgs& operator=(EventArgs&& o) noexcept = default;
  constexpr EventArgs& operator=(EventArgs const& o) noexcept = default;
                


// Fields

static System::EventArgs __declspec(property(get=__get_Empty, put=__set_Empty))  Empty;

static void __set_Empty(System::EventArgs value) ;

static System::EventArgs __get_Empty() ;


// Methods

// Ctor Parameters []
explicit EventArgs() ;

/// @brief Method .ctor addr 0x24290d8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::EventArgs);
DEFINE_IL2CPP_ARG_TYPE(System::EventArgs, "System", "EventArgs");
