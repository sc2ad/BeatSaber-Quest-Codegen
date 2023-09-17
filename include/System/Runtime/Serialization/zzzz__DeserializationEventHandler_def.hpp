#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Runtime::Serialization {
class DeserializationEventHandler;
}
// Type: System.Runtime.Serialization::DeserializationEventHandler
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3196))
// CS Name: System.Runtime.Serialization.DeserializationEventHandler
class CORDL_TYPE DeserializationEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~DeserializationEventHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "DeserializationEventHandler", modifiers: " const&", def_value: None }]
constexpr DeserializationEventHandler(DeserializationEventHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DeserializationEventHandler", modifiers: "&&", def_value: None }]
constexpr DeserializationEventHandler(DeserializationEventHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DeserializationEventHandler(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr DeserializationEventHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DeserializationEventHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DeserializationEventHandler& operator=(DeserializationEventHandler&& o) noexcept = default;
  constexpr DeserializationEventHandler& operator=(DeserializationEventHandler const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit DeserializationEventHandler(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x234863c size 0x12c virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2348768 size 0x14 virtual true final false
 void Invoke(::bs_hook::Il2CppWrapperType sender) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Serialization::DeserializationEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::DeserializationEventHandler, "System.Runtime.Serialization", "DeserializationEventHandler");
