#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::ComponentModel {
class PropertyChangedEventArgs;
}
// Forward declare root types
namespace System::ComponentModel {
class PropertyChangedEventHandler;
}
// Type: System.ComponentModel::PropertyChangedEventHandler
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8318))
// CS Name: System.ComponentModel.PropertyChangedEventHandler
class CORDL_TYPE PropertyChangedEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~PropertyChangedEventHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "PropertyChangedEventHandler", modifiers: " const&", def_value: None }]
constexpr PropertyChangedEventHandler(PropertyChangedEventHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PropertyChangedEventHandler", modifiers: "&&", def_value: None }]
constexpr PropertyChangedEventHandler(PropertyChangedEventHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PropertyChangedEventHandler(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr PropertyChangedEventHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PropertyChangedEventHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PropertyChangedEventHandler& operator=(PropertyChangedEventHandler&& o) noexcept = default;
  constexpr PropertyChangedEventHandler& operator=(PropertyChangedEventHandler const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit PropertyChangedEventHandler(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x27870ac size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x27871dc size 0x14 virtual true final false
 void Invoke(::bs_hook::Il2CppWrapperType sender, ::System::ComponentModel::PropertyChangedEventArgs e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
} // end anonymous namespace
NEED_NO_BOX(::System::ComponentModel::PropertyChangedEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::PropertyChangedEventHandler, "System.ComponentModel", "PropertyChangedEventHandler");
