#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace System::Threading {
class _ThreadPoolWaitCallback;
}
// Type: System.Threading::_ThreadPoolWaitCallback
namespace System::Threading {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2735))
// CS Name: System.Threading._ThreadPoolWaitCallback
class CORDL_TYPE _ThreadPoolWaitCallback : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~_ThreadPoolWaitCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "_ThreadPoolWaitCallback", modifiers: " const&", def_value: None }]
constexpr _ThreadPoolWaitCallback(_ThreadPoolWaitCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "_ThreadPoolWaitCallback", modifiers: "&&", def_value: None }]
constexpr _ThreadPoolWaitCallback(_ThreadPoolWaitCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit _ThreadPoolWaitCallback(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr _ThreadPoolWaitCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr _ThreadPoolWaitCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr _ThreadPoolWaitCallback& operator=(_ThreadPoolWaitCallback&& o) noexcept = default;
  constexpr _ThreadPoolWaitCallback& operator=(_ThreadPoolWaitCallback const& o) noexcept = default;
                


// Methods

/// @brief Method PerformWaitCallback addr 0x24aedb0 size 0x50 virtual false final false
static bool PerformWaitCallback() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
} // end anonymous namespace
NEED_NO_BOX(::System::Threading::_ThreadPoolWaitCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::_ThreadPoolWaitCallback, "System.Threading", "_ThreadPoolWaitCallback");
