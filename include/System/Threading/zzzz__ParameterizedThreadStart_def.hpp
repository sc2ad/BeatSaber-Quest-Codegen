#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Threading {
class ParameterizedThreadStart;
}
// Type: System.Threading::ParameterizedThreadStart
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2665))
// CS Name: System.Threading.ParameterizedThreadStart
class CORDL_TYPE ParameterizedThreadStart : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~ParameterizedThreadStart() = default;

// Ctor Parameters [CppParam { name: "", ty: "ParameterizedThreadStart", modifiers: " const&", def_value: None }]
constexpr ParameterizedThreadStart(ParameterizedThreadStart const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ParameterizedThreadStart", modifiers: "&&", def_value: None }]
constexpr ParameterizedThreadStart(ParameterizedThreadStart&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ParameterizedThreadStart(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr ParameterizedThreadStart& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ParameterizedThreadStart& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ParameterizedThreadStart& operator=(ParameterizedThreadStart&& o) noexcept = default;
  constexpr ParameterizedThreadStart& operator=(ParameterizedThreadStart const& o) noexcept = default;
                


// Methods

static System::Threading::ParameterizedThreadStart New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x24a2980 size 0x12c virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x24a2aac size 0x14 virtual true final false
 void Invoke(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
NEED_NO_BOX(System::Threading::ParameterizedThreadStart);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ParameterizedThreadStart, "System.Threading", "ParameterizedThreadStart");
