#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SerializationEventHandler;
}
// Type: System.Runtime.Serialization::SerializationEventHandler
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3197))
// CS Name: System.Runtime.Serialization.SerializationEventHandler
class CORDL_TYPE SerializationEventHandler : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~SerializationEventHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "SerializationEventHandler", modifiers: " const&", def_value: None }]
constexpr SerializationEventHandler(SerializationEventHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SerializationEventHandler", modifiers: "&&", def_value: None }]
constexpr SerializationEventHandler(SerializationEventHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SerializationEventHandler(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr SerializationEventHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SerializationEventHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SerializationEventHandler& operator=(SerializationEventHandler&& o) noexcept = default;
  constexpr SerializationEventHandler& operator=(SerializationEventHandler const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit SerializationEventHandler(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x234877c size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2348840 size 0x14 virtual true final false
 void Invoke(System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(System::Runtime::Serialization::SerializationEventHandler);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::SerializationEventHandler, "System.Runtime.Serialization", "SerializationEventHandler");
