#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Xml::Schema {
class ValidationEventArgs;
}
// Forward declare root types
namespace System::Xml::Schema {
class ValidationEventHandler;
}
// Type: System.Xml.Schema::ValidationEventHandler
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11652))
// CS Name: System.Xml.Schema.ValidationEventHandler
class CORDL_TYPE ValidationEventHandler : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~ValidationEventHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "ValidationEventHandler", modifiers: " const&", def_value: None }]
constexpr ValidationEventHandler(ValidationEventHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ValidationEventHandler", modifiers: "&&", def_value: None }]
constexpr ValidationEventHandler(ValidationEventHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ValidationEventHandler(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr ValidationEventHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ValidationEventHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ValidationEventHandler& operator=(ValidationEventHandler&& o) noexcept = default;
  constexpr ValidationEventHandler& operator=(ValidationEventHandler const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ValidationEventHandler(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2732294 size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x27323c4 size 0x14 virtual true final false
 void Invoke(::bs_hook::Il2CppWrapperType sender, System::Xml::Schema::ValidationEventArgs e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::ValidationEventHandler);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::ValidationEventHandler, "System.Xml.Schema", "ValidationEventHandler");
