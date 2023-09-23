#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Threading {
class Thread;
}
namespace System::Threading {
class ParameterizedThreadStart;
}
// Forward declare root types
namespace Internal::Runtime::Augments {
class RuntimeThread;
}
// Type: Internal.Runtime.Augments::RuntimeThread
namespace Internal::Runtime::Augments {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2308))
// CS Name: Internal.Runtime.Augments.RuntimeThread
class CORDL_TYPE RuntimeThread : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RuntimeThread() = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeThread", modifiers: " const&", def_value: None }]
constexpr RuntimeThread(RuntimeThread const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeThread", modifiers: "&&", def_value: None }]
constexpr RuntimeThread(RuntimeThread&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RuntimeThread(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RuntimeThread& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RuntimeThread& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RuntimeThread& operator=(RuntimeThread&& o) noexcept = default;
  constexpr RuntimeThread& operator=(RuntimeThread const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_OptimalMaxSpinWaitsPerSpinIteration, put=__set_OptimalMaxSpinWaitsPerSpinIteration))  OptimalMaxSpinWaitsPerSpinIteration;

static void __set_OptimalMaxSpinWaitsPerSpinIteration(int32_t value) ;

static int32_t __get_OptimalMaxSpinWaitsPerSpinIteration() ;

 System::Threading::Thread __declspec(property(get=__get_thread, put=__set_thread))  thread;

constexpr void __set_thread(System::Threading::Thread value) ;

constexpr System::Threading::Thread __get_thread() const;


// Properties

 bool __declspec(property(put=set_IsBackground))  IsBackground;


// Methods

// Ctor Parameters [CppParam { name: "t", ty: "System::Threading::Thread", modifiers: "", def_value: None }]
explicit RuntimeThread(System::Threading::Thread t) ;

/// @brief Method .ctor addr 0x22bf100 size 0x28 virtual false final false
 void _ctor(System::Threading::Thread t) ;

/// @brief Method Create addr 0x22bf128 size 0xa4 virtual false final false
static Internal::Runtime::Augments::RuntimeThread Create(System::Threading::ParameterizedThreadStart start, int32_t maxStackSize) ;

/// @brief Method set_IsBackground addr 0x22bf1cc size 0x20 virtual false final false
 void set_IsBackground(bool value) ;

/// @brief Method Start addr 0x22bf1ec size 0x1c virtual false final false
 void Start(::bs_hook::Il2CppWrapperType state) ;

/// @brief Method Sleep addr 0x22bf208 size 0x8 virtual false final false
static void Sleep(int32_t millisecondsTimeout) ;

/// @brief Method Yield addr 0x22bf210 size 0x8 virtual false final false
static bool Yield() ;

/// @brief Method SpinWait addr 0x22bf218 size 0x18 virtual false final false
static bool SpinWait(int32_t iterations) ;

/// @brief Method GetCurrentProcessorId addr 0x22bf230 size 0x8 virtual false final false
static int32_t GetCurrentProcessorId() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Internal::Runtime::Augments
NEED_NO_BOX(Internal::Runtime::Augments::RuntimeThread);
DEFINE_IL2CPP_ARG_TYPE(Internal::Runtime::Augments::RuntimeThread, "Internal.Runtime.Augments", "RuntimeThread");
