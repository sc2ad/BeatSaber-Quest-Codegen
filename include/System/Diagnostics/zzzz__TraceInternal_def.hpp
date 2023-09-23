#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Diagnostics {
class TraceListenerCollection;
}
// Forward declare root types
namespace System::Diagnostics {
class TraceInternal;
}
// Type: System.Diagnostics::TraceInternal
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7792))
// CS Name: System.Diagnostics.TraceInternal
class CORDL_TYPE TraceInternal : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TraceInternal() = default;

// Ctor Parameters [CppParam { name: "", ty: "TraceInternal", modifiers: " const&", def_value: None }]
constexpr TraceInternal(TraceInternal const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TraceInternal", modifiers: "&&", def_value: None }]
constexpr TraceInternal(TraceInternal&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TraceInternal(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TraceInternal& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TraceInternal& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TraceInternal& operator=(TraceInternal&& o) noexcept = default;
  constexpr TraceInternal& operator=(TraceInternal const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_appName, put=__set_appName))  appName;

static void __set_appName(::StringW value) ;

static ::StringW __get_appName() ;

static System::Diagnostics::TraceListenerCollection __declspec(property(get=__get_listeners, put=__set_listeners))  listeners;

static void __set_listeners(System::Diagnostics::TraceListenerCollection value) ;

static System::Diagnostics::TraceListenerCollection __get_listeners() ;

static bool __declspec(property(get=__get_autoFlush, put=__set_autoFlush))  autoFlush;

static void __set_autoFlush(bool value) ;

static bool __get_autoFlush() ;

static int32_t __declspec(property(get=__get_indentLevel, put=__set_indentLevel))  indentLevel;

static void __set_indentLevel(int32_t value) ;

static int32_t __get_indentLevel() ;

static int32_t __declspec(property(get=__get_indentSize, put=__set_indentSize))  indentSize;

static void __set_indentSize(int32_t value) ;

static int32_t __get_indentSize() ;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_critSec, put=__set_critSec))  critSec;

static void __set_critSec(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_critSec() ;


// Properties

static System::Diagnostics::TraceListenerCollection __declspec(property(get=get_Listeners))  Listeners;

static bool __declspec(property(get=get_AutoFlush))  AutoFlush;

static int32_t __declspec(property(get=get_IndentLevel))  IndentLevel;

static int32_t __declspec(property(get=get_IndentSize))  IndentSize;


// Methods

/// @brief Method get_Listeners addr 0x27da410 size 0x254 virtual false final false
static System::Diagnostics::TraceListenerCollection get_Listeners() ;

/// @brief Method get_AutoFlush addr 0x27da6b0 size 0x60 virtual false final false
static bool get_AutoFlush() ;

/// @brief Method get_IndentLevel addr 0x27db148 size 0x58 virtual false final false
static int32_t get_IndentLevel() ;

/// @brief Method get_IndentSize addr 0x27db1a0 size 0x60 virtual false final false
static int32_t get_IndentSize() ;

/// @brief Method InitializeSettings addr 0x27dae70 size 0x4 virtual false final false
static void InitializeSettings() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics
NEED_NO_BOX(System::Diagnostics::TraceInternal);
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::TraceInternal, "System.Diagnostics", "TraceInternal");
