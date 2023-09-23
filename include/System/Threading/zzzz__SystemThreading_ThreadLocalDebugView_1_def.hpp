#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System::Threading {
template<typename T>
class SystemThreading_ThreadLocalDebugView_1;
}
// Type: System.Threading::SystemThreading_ThreadLocalDebugView`1
namespace System::Threading {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2706))
// CS Name: System.Threading.SystemThreading_ThreadLocalDebugView`1
class CORDL_TYPE SystemThreading_ThreadLocalDebugView_1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SystemThreading_ThreadLocalDebugView_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "SystemThreading_ThreadLocalDebugView_1", modifiers: " const&", def_value: None }]
constexpr SystemThreading_ThreadLocalDebugView_1(SystemThreading_ThreadLocalDebugView_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SystemThreading_ThreadLocalDebugView_1", modifiers: "&&", def_value: None }]
constexpr SystemThreading_ThreadLocalDebugView_1(SystemThreading_ThreadLocalDebugView_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SystemThreading_ThreadLocalDebugView_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SystemThreading_ThreadLocalDebugView_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SystemThreading_ThreadLocalDebugView_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SystemThreading_ThreadLocalDebugView_1& operator=(SystemThreading_ThreadLocalDebugView_1&& o) noexcept = default;
  constexpr SystemThreading_ThreadLocalDebugView_1& operator=(SystemThreading_ThreadLocalDebugView_1 const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Threading::SystemThreading_ThreadLocalDebugView_1, "System.Threading", "SystemThreading_ThreadLocalDebugView`1");
