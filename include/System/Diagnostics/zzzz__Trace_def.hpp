#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Diagnostics {
class TraceListenerCollection;
}
namespace System::Diagnostics {
class CorrelationManager;
}
// Forward declare root types
namespace System::Diagnostics {
class Trace;
}
// Type: System.Diagnostics::Trace
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7788))
// CS Name: System.Diagnostics.Trace
class CORDL_TYPE Trace : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Trace() = default;

// Ctor Parameters [CppParam { name: "", ty: "Trace", modifiers: " const&", def_value: None }]
constexpr Trace(Trace const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Trace", modifiers: "&&", def_value: None }]
constexpr Trace(Trace&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Trace(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Trace& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Trace& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Trace& operator=(Trace&& o) noexcept = default;
  constexpr Trace& operator=(Trace const& o) noexcept = default;
                


// Fields

static System::Diagnostics::CorrelationManager __declspec(property(get=__get_correlationManager, put=__set_correlationManager))  correlationManager;

static void __set_correlationManager(System::Diagnostics::CorrelationManager value) ;

static System::Diagnostics::CorrelationManager __get_correlationManager() ;


// Properties

static System::Diagnostics::TraceListenerCollection __declspec(property(get=get_Listeners))  Listeners;

static bool __declspec(property(get=get_AutoFlush))  AutoFlush;

static System::Diagnostics::CorrelationManager __declspec(property(get=get_CorrelationManager))  CorrelationManager;


// Methods

/// @brief Method get_Listeners addr 0x27da3c4 size 0x4c virtual false final false
static System::Diagnostics::TraceListenerCollection get_Listeners() ;

/// @brief Method get_AutoFlush addr 0x27da664 size 0x4c virtual false final false
static bool get_AutoFlush() ;

/// @brief Method get_CorrelationManager addr 0x27da710 size 0xa4 virtual false final false
static System::Diagnostics::CorrelationManager get_CorrelationManager() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics
NEED_NO_BOX(System::Diagnostics::Trace);
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Trace, "System.Diagnostics", "Trace");
