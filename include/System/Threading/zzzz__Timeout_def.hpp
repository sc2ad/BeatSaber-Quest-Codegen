#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Threading {
class Timeout;
}
// Type: System.Threading::Timeout
namespace System::Threading {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2673))
// CS Name: System.Threading.Timeout
class CORDL_TYPE Timeout : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Timeout() = default;

// Ctor Parameters [CppParam { name: "", ty: "Timeout", modifiers: " const&", def_value: None }]
constexpr Timeout(Timeout const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Timeout", modifiers: "&&", def_value: None }]
constexpr Timeout(Timeout&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Timeout(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Timeout& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Timeout& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Timeout& operator=(Timeout&& o) noexcept = default;
  constexpr Timeout& operator=(Timeout const& o) noexcept = default;
                


// Fields

static ::System::TimeSpan __declspec(property(get=__get_InfiniteTimeSpan, put=__set_InfiniteTimeSpan))  InfiniteTimeSpan;

static void __set_InfiniteTimeSpan(::System::TimeSpan value) ;

static ::System::TimeSpan __get_InfiniteTimeSpan() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
} // end anonymous namespace
NEED_NO_BOX(::System::Threading::Timeout);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Timeout, "System.Threading", "Timeout");
