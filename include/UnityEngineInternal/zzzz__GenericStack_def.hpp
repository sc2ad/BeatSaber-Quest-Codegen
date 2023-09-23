#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/Collections/zzzz__Stack_def.hpp"
// Forward declare root types
namespace UnityEngineInternal {
class GenericStack;
}
// Type: UnityEngineInternal::GenericStack
namespace UnityEngineInternal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3771))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9905))
// CS Name: UnityEngineInternal.GenericStack
class CORDL_TYPE GenericStack : public System::Collections::Stack {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GenericStack() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericStack", modifiers: " const&", def_value: None }]
constexpr GenericStack(GenericStack const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericStack", modifiers: "&&", def_value: None }]
constexpr GenericStack(GenericStack&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericStack(void* ptr) noexcept : System::Collections::Stack(ptr) {
}


  constexpr GenericStack& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericStack& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericStack& operator=(GenericStack&& o) noexcept = default;
  constexpr GenericStack& operator=(GenericStack const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GenericStack() ;

/// @brief Method .ctor addr 0x2b27a80 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngineInternal
NEED_NO_BOX(UnityEngineInternal::GenericStack);
DEFINE_IL2CPP_ARG_TYPE(UnityEngineInternal::GenericStack, "UnityEngineInternal", "GenericStack");
