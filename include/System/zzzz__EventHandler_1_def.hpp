#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type TEventArgs>
class EventHandler_1<TEventArgs>;
}
// Type: System::EventHandler`1
// Type: System::EventHandler`1
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type TEventArgs>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2378))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2378), inst: 2 })
// CS Name: System.EventHandler`1
class CORDL_TYPE EventHandler_1<TEventArgs> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~EventHandler_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EventHandler_1", modifiers: " const&", def_value: None }]
constexpr EventHandler_1(EventHandler_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EventHandler_1", modifiers: "&&", def_value: None }]
constexpr EventHandler_1(EventHandler_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EventHandler_1(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr EventHandler_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EventHandler_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EventHandler_1& operator=(EventHandler_1&& o) noexcept = default;
  constexpr EventHandler_1& operator=(EventHandler_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit EventHandler_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(::bs_hook::Il2CppWrapperType sender, TEventArgs e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::EventHandler_1, "System", "EventHandler`1");
