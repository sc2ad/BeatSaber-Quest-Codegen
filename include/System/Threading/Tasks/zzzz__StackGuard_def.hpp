#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Threading::Tasks {
class StackGuard;
}
// Type: System.Threading.Tasks::StackGuard
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2789))
// CS Name: System.Threading.Tasks.StackGuard
class CORDL_TYPE StackGuard : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~StackGuard() = default;

// Ctor Parameters [CppParam { name: "", ty: "StackGuard", modifiers: " const&", def_value: None }]
constexpr StackGuard(StackGuard const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StackGuard", modifiers: "&&", def_value: None }]
constexpr StackGuard(StackGuard&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StackGuard(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StackGuard& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StackGuard& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StackGuard& operator=(StackGuard&& o) noexcept = default;
  constexpr StackGuard& operator=(StackGuard const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_inliningDepth, put=__set_m_inliningDepth))  m_inliningDepth;

constexpr void __set_m_inliningDepth(int32_t value) ;

constexpr int32_t __get_m_inliningDepth() const;

/// @brief Field MAX_UNCHECKED_INLINING_DEPTH offset 0
static constexpr int32_t  MAX_UNCHECKED_INLINING_DEPTH{20};


// Methods

/// @brief Method TryBeginInliningScope addr 0x24bce18 size 0x40 virtual false final false
 bool TryBeginInliningScope() ;

/// @brief Method EndInliningScope addr 0x24bce58 size 0x14 virtual false final false
 void EndInliningScope() ;

// Ctor Parameters []
explicit StackGuard() ;

/// @brief Method .ctor addr 0x24b6ae4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
} // end anonymous namespace
NEED_NO_BOX(::System::Threading::Tasks::StackGuard);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::StackGuard, "System.Threading.Tasks", "StackGuard");
