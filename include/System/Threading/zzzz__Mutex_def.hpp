#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
namespace {
// Forward declare root types
namespace System::Threading {
class Mutex;
}
// Type: System.Threading::Mutex
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2739))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2742))
// CS Name: System.Threading.Mutex
class CORDL_TYPE Mutex : public ::System::Threading::WaitHandle {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Mutex() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mutex", modifiers: " const&", def_value: None }]
constexpr Mutex(Mutex const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mutex", modifiers: "&&", def_value: None }]
constexpr Mutex(Mutex&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mutex(void* ptr) noexcept : ::System::Threading::WaitHandle(ptr) {
}


  constexpr Mutex& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mutex& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mutex& operator=(Mutex&& o) noexcept = default;
  constexpr Mutex& operator=(Mutex const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
} // end anonymous namespace
NEED_NO_BOX(::System::Threading::Mutex);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Mutex, "System.Threading", "Mutex");
