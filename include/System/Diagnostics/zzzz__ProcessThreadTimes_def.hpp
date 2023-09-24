#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Diagnostics {
class ProcessThreadTimes;
}
// Type: System.Diagnostics::ProcessThreadTimes
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7804))
// CS Name: System.Diagnostics.ProcessThreadTimes
class CORDL_TYPE ProcessThreadTimes : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ProcessThreadTimes() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProcessThreadTimes", modifiers: " const&", def_value: None }]
constexpr ProcessThreadTimes(ProcessThreadTimes const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProcessThreadTimes", modifiers: "&&", def_value: None }]
constexpr ProcessThreadTimes(ProcessThreadTimes&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProcessThreadTimes(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ProcessThreadTimes& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProcessThreadTimes& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProcessThreadTimes& operator=(ProcessThreadTimes&& o) noexcept = default;
  constexpr ProcessThreadTimes& operator=(ProcessThreadTimes const& o) noexcept = default;
                


// Fields

 int64_t __declspec(property(get=__get_create, put=__set_create))  create;

constexpr void __set_create(int64_t value) ;

constexpr int64_t __get_create() const;

 int64_t __declspec(property(get=__get_exit, put=__set_exit))  exit;

constexpr void __set_exit(int64_t value) ;

constexpr int64_t __get_exit() const;

 int64_t __declspec(property(get=__get_kernel, put=__set_kernel))  kernel;

constexpr void __set_kernel(int64_t value) ;

constexpr int64_t __get_kernel() const;

 int64_t __declspec(property(get=__get_user, put=__set_user))  user;

constexpr void __set_user(int64_t value) ;

constexpr int64_t __get_user() const;


// Properties

 System::TimeSpan __declspec(property(get=get_TotalProcessorTime))  TotalProcessorTime;


// Methods

/// @brief Method get_TotalProcessorTime addr 0x27ddd64 size 0xc virtual false final false
 System::TimeSpan get_TotalProcessorTime() ;

static System::Diagnostics::ProcessThreadTimes New_ctor() ;

/// @brief Method .ctor addr 0x27dd9c0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics
NEED_NO_BOX(System::Diagnostics::ProcessThreadTimes);
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::ProcessThreadTimes, "System.Diagnostics", "ProcessThreadTimes");
