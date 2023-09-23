#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class OneWayAttribute;
}
// Type: System.Runtime.Remoting.Messaging::OneWayAttribute
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3178))
// CS Name: System.Runtime.Remoting.Messaging.OneWayAttribute
class CORDL_TYPE OneWayAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OneWayAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "OneWayAttribute", modifiers: " const&", def_value: None }]
constexpr OneWayAttribute(OneWayAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OneWayAttribute", modifiers: "&&", def_value: None }]
constexpr OneWayAttribute(OneWayAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OneWayAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr OneWayAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OneWayAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OneWayAttribute& operator=(OneWayAttribute&& o) noexcept = default;
  constexpr OneWayAttribute& operator=(OneWayAttribute const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
NEED_NO_BOX(System::Runtime::Remoting::Messaging::OneWayAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::OneWayAttribute, "System.Runtime.Remoting.Messaging", "OneWayAttribute");
