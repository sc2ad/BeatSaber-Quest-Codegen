#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Diagnostics/zzzz__Switch_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System::Diagnostics {
class BooleanSwitch;
}
// Type: System.Diagnostics::BooleanSwitch
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7786))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7784))
// CS Name: System.Diagnostics.BooleanSwitch
class CORDL_TYPE BooleanSwitch : public System::Diagnostics::Switch {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BooleanSwitch() = default;

// Ctor Parameters [CppParam { name: "", ty: "BooleanSwitch", modifiers: " const&", def_value: None }]
constexpr BooleanSwitch(BooleanSwitch const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BooleanSwitch", modifiers: "&&", def_value: None }]
constexpr BooleanSwitch(BooleanSwitch&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BooleanSwitch(void* ptr) noexcept : System::Diagnostics::Switch(ptr) {
}


  constexpr BooleanSwitch& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BooleanSwitch& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BooleanSwitch& operator=(BooleanSwitch&& o) noexcept = default;
  constexpr BooleanSwitch& operator=(BooleanSwitch const& o) noexcept = default;
                


// Methods

static System::Diagnostics::BooleanSwitch New_ctor(::StringW displayName, ::StringW description) ;

/// @brief Method .ctor addr 0x27d8980 size 0x1070 virtual false final false
 void _ctor(::StringW displayName, ::StringW description) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics
NEED_NO_BOX(System::Diagnostics::BooleanSwitch);
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::BooleanSwitch, "System.Diagnostics", "BooleanSwitch");
