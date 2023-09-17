#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Collections {
class Stack;
}
// Forward declare root types
namespace System::Diagnostics {
class CorrelationManager;
}
// Type: System.Diagnostics::CorrelationManager
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7785))
// CS Name: System.Diagnostics.CorrelationManager
class CORDL_TYPE CorrelationManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CorrelationManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "CorrelationManager", modifiers: " const&", def_value: None }]
constexpr CorrelationManager(CorrelationManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CorrelationManager", modifiers: "&&", def_value: None }]
constexpr CorrelationManager(CorrelationManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CorrelationManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CorrelationManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CorrelationManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CorrelationManager& operator=(CorrelationManager&& o) noexcept = default;
  constexpr CorrelationManager& operator=(CorrelationManager const& o) noexcept = default;
                


// Properties

 ::System::Collections::Stack __declspec(property(get=get_LogicalOperationStack))  LogicalOperationStack;


// Methods

// Ctor Parameters []
explicit CorrelationManager() ;

/// @brief Method .ctor addr 0x27d99f0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_LogicalOperationStack addr 0x27d99f8 size 0x4 virtual false final false
 ::System::Collections::Stack get_LogicalOperationStack() ;

/// @brief Method GetLogicalOperationStack addr 0x27d99fc size 0xc0 virtual false final false
 ::System::Collections::Stack GetLogicalOperationStack() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics
} // end anonymous namespace
NEED_NO_BOX(::System::Diagnostics::CorrelationManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::CorrelationManager, "System.Diagnostics", "CorrelationManager");
