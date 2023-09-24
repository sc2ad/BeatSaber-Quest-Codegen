#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Runtime::Remoting::Contexts {
class CrossContextDelegate;
}
// Type: System.Runtime.Remoting.Contexts::CrossContextDelegate
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3100))
// CS Name: System.Runtime.Remoting.Contexts.CrossContextDelegate
class CORDL_TYPE CrossContextDelegate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~CrossContextDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "CrossContextDelegate", modifiers: " const&", def_value: None }]
constexpr CrossContextDelegate(CrossContextDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CrossContextDelegate", modifiers: "&&", def_value: None }]
constexpr CrossContextDelegate(CrossContextDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CrossContextDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr CrossContextDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CrossContextDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CrossContextDelegate& operator=(CrossContextDelegate&& o) noexcept = default;
  constexpr CrossContextDelegate& operator=(CrossContextDelegate const& o) noexcept = default;
                


// Methods

static System::Runtime::Remoting::Contexts::CrossContextDelegate New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2333844 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2333900 size 0x14 virtual true final false
 void Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Contexts
NEED_NO_BOX(System::Runtime::Remoting::Contexts::CrossContextDelegate);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Contexts::CrossContextDelegate, "System.Runtime.Remoting.Contexts", "CrossContextDelegate");
