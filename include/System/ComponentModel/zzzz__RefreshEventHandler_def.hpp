#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::ComponentModel {
class RefreshEventArgs;
}
// Forward declare root types
namespace System::ComponentModel {
class RefreshEventHandler;
}
// Type: System.ComponentModel::RefreshEventHandler
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8303))
// CS Name: System.ComponentModel.RefreshEventHandler
class CORDL_TYPE RefreshEventHandler : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~RefreshEventHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "RefreshEventHandler", modifiers: " const&", def_value: None }]
constexpr RefreshEventHandler(RefreshEventHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RefreshEventHandler", modifiers: "&&", def_value: None }]
constexpr RefreshEventHandler(RefreshEventHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RefreshEventHandler(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr RefreshEventHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RefreshEventHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RefreshEventHandler& operator=(RefreshEventHandler&& o) noexcept = default;
  constexpr RefreshEventHandler& operator=(RefreshEventHandler const& o) noexcept = default;
                


// Methods

static System::ComponentModel::RefreshEventHandler New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2785530 size 0x12c virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x278565c size 0x14 virtual true final false
 void Invoke(System::ComponentModel::RefreshEventArgs e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::RefreshEventHandler);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::RefreshEventHandler, "System.ComponentModel", "RefreshEventHandler");
