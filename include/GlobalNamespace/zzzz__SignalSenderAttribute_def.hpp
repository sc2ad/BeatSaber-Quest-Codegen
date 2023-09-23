#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class SignalSenderAttribute;
}
// Type: ::SignalSenderAttribute
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10112))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13886))
// CS Name: SignalSenderAttribute
class CORDL_TYPE SignalSenderAttribute : public UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SignalSenderAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalSenderAttribute", modifiers: " const&", def_value: None }]
constexpr SignalSenderAttribute(SignalSenderAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalSenderAttribute", modifiers: "&&", def_value: None }]
constexpr SignalSenderAttribute(SignalSenderAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignalSenderAttribute(void* ptr) noexcept : UnityEngine::PropertyAttribute(ptr) {
}


  constexpr SignalSenderAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignalSenderAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignalSenderAttribute& operator=(SignalSenderAttribute&& o) noexcept = default;
  constexpr SignalSenderAttribute& operator=(SignalSenderAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit SignalSenderAttribute() ;

/// @brief Method .ctor addr 0x1f83808 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SignalSenderAttribute);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SignalSenderAttribute, "", "SignalSenderAttribute");
