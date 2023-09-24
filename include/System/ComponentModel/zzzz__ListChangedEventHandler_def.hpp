#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::ComponentModel {
class ListChangedEventArgs;
}
// Forward declare root types
namespace System::ComponentModel {
class ListChangedEventHandler;
}
// Type: System.ComponentModel::ListChangedEventHandler
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8291))
// CS Name: System.ComponentModel.ListChangedEventHandler
class CORDL_TYPE ListChangedEventHandler : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~ListChangedEventHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "ListChangedEventHandler", modifiers: " const&", def_value: None }]
constexpr ListChangedEventHandler(ListChangedEventHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ListChangedEventHandler", modifiers: "&&", def_value: None }]
constexpr ListChangedEventHandler(ListChangedEventHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ListChangedEventHandler(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr ListChangedEventHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ListChangedEventHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ListChangedEventHandler& operator=(ListChangedEventHandler&& o) noexcept = default;
  constexpr ListChangedEventHandler& operator=(ListChangedEventHandler const& o) noexcept = default;
                


// Methods

static System::ComponentModel::ListChangedEventHandler New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x277ebe4 size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x277ed14 size 0x14 virtual true final false
 void Invoke(::bs_hook::Il2CppWrapperType sender, System::ComponentModel::ListChangedEventArgs e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::ListChangedEventHandler);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::ListChangedEventHandler, "System.ComponentModel", "ListChangedEventHandler");
