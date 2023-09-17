#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Threading {
class ThreadStart;
}
// Type: System.Threading::ThreadStart
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2670))
// CS Name: System.Threading.ThreadStart
class CORDL_TYPE ThreadStart : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~ThreadStart() = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadStart", modifiers: " const&", def_value: None }]
constexpr ThreadStart(ThreadStart const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadStart", modifiers: "&&", def_value: None }]
constexpr ThreadStart(ThreadStart&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ThreadStart(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ThreadStart& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ThreadStart& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ThreadStart& operator=(ThreadStart&& o) noexcept = default;
  constexpr ThreadStart& operator=(ThreadStart const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ThreadStart(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x24a2cdc size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x24a2d98 size 0x14 virtual true final false
 void Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
} // end anonymous namespace
NEED_NO_BOX(::System::Threading::ThreadStart);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ThreadStart, "System.Threading", "ThreadStart");
