#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace System::Diagnostics {
class ProcessInfo;
}
// Type: System.Diagnostics::ProcessInfo
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7803))
// CS Name: System.Diagnostics.ProcessInfo
class CORDL_TYPE ProcessInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ProcessInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProcessInfo", modifiers: " const&", def_value: None }]
constexpr ProcessInfo(ProcessInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProcessInfo", modifiers: "&&", def_value: None }]
constexpr ProcessInfo(ProcessInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProcessInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ProcessInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProcessInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProcessInfo& operator=(ProcessInfo&& o) noexcept = default;
  constexpr ProcessInfo& operator=(ProcessInfo const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics
} // end anonymous namespace
NEED_NO_BOX(::System::Diagnostics::ProcessInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::ProcessInfo, "System.Diagnostics", "ProcessInfo");
