#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System {
struct RuntimeTypeHandle;
}
namespace System {
struct RuntimeFieldHandle;
}
namespace System {
class Array;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class RuntimeHelpers;
}
// Type: System.Runtime.CompilerServices::RuntimeHelpers
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3415))
// CS Name: System.Runtime.CompilerServices.RuntimeHelpers
class CORDL_TYPE RuntimeHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RuntimeHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeHelpers", modifiers: " const&", def_value: None }]
constexpr RuntimeHelpers(RuntimeHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeHelpers", modifiers: "&&", def_value: None }]
constexpr RuntimeHelpers(RuntimeHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RuntimeHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RuntimeHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RuntimeHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RuntimeHelpers& operator=(RuntimeHelpers&& o) noexcept = default;
  constexpr RuntimeHelpers& operator=(RuntimeHelpers const& o) noexcept = default;
                


// Properties

static int32_t __declspec(property(get=get_OffsetToStringData))  OffsetToStringData;


// Methods

/// @brief Method InitializeArray addr 0x2370b18 size 0x4 virtual false final false
static void InitializeArray(::System::Array array, ::cordl_internals::intptr_t fldHandle) ;

/// @brief Method InitializeArray addr 0x2370b1c size 0xa8 virtual false final false
static void InitializeArray(::System::Array array, ::System::RuntimeFieldHandle fldHandle) ;

/// @brief Method get_OffsetToStringData addr 0x236c56c size 0x4 virtual false final false
static int32_t get_OffsetToStringData() ;

/// @brief Method GetHashCode addr 0x2370bc4 size 0x8 virtual false final false
static int32_t GetHashCode(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method RunClassConstructor addr 0x2370bcc size 0x4 virtual false final false
static void RunClassConstructor(::cordl_internals::intptr_t type) ;

/// @brief Method RunClassConstructor addr 0x2370bd0 size 0xc0 virtual false final false
static void RunClassConstructor(::System::RuntimeTypeHandle type) ;

/// @brief Method SufficientExecutionStack addr 0x2370c90 size 0x4 virtual false final false
static bool SufficientExecutionStack() ;

/// @brief Method TryEnsureSufficientExecutionStack addr 0x2370c94 size 0x4 virtual false final false
static bool TryEnsureSufficientExecutionStack() ;

/// @brief Method PrepareConstrainedRegions addr 0x2370c98 size 0x4 virtual false final false
static void PrepareConstrainedRegions() ;

/// @brief Method IsReferenceOrContainsReferences addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool IsReferenceOrContainsReferences() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::CompilerServices::RuntimeHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::RuntimeHelpers, "System.Runtime.CompilerServices", "RuntimeHelpers");
