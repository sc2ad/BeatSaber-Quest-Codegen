#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Threading {
class TimeoutHelper;
}
// Type: System.Threading::TimeoutHelper
namespace System::Threading {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2681))
// CS Name: System.Threading.TimeoutHelper
class CORDL_TYPE TimeoutHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TimeoutHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeoutHelper", modifiers: " const&", def_value: None }]
constexpr TimeoutHelper(TimeoutHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeoutHelper", modifiers: "&&", def_value: None }]
constexpr TimeoutHelper(TimeoutHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimeoutHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TimeoutHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimeoutHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimeoutHelper& operator=(TimeoutHelper&& o) noexcept = default;
  constexpr TimeoutHelper& operator=(TimeoutHelper const& o) noexcept = default;
                


// Methods

/// @brief Method GetTime addr 0x24a4790 size 0x8 virtual false final false
static uint32_t GetTime() ;

/// @brief Method UpdateTimeOut addr 0x24a4844 size 0x3c virtual false final false
static int32_t UpdateTimeOut(uint32_t startTime, int32_t originalWaitMillisecondsTimeout) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
} // end anonymous namespace
NEED_NO_BOX(::System::Threading::TimeoutHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::TimeoutHelper, "System.Threading", "TimeoutHelper");
