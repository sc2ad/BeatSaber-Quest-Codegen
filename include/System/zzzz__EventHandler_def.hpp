#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
class EventArgs;
}
// Forward declare root types
namespace System {
class EventHandler;
}
// Type: System::EventHandler
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2377))
// CS Name: System.EventHandler
class CORDL_TYPE EventHandler : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~EventHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "EventHandler", modifiers: " const&", def_value: None }]
constexpr EventHandler(EventHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EventHandler", modifiers: "&&", def_value: None }]
constexpr EventHandler(EventHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EventHandler(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr EventHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EventHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EventHandler& operator=(EventHandler&& o) noexcept = default;
  constexpr EventHandler& operator=(EventHandler const& o) noexcept = default;
                


// Methods

static System::EventHandler New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2429144 size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2429274 size 0x14 virtual true final false
 void Invoke(::bs_hook::Il2CppWrapperType sender, System::EventArgs e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::EventHandler);
DEFINE_IL2CPP_ARG_TYPE(System::EventHandler, "System", "EventHandler");
