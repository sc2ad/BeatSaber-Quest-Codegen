#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T>
class Predicate_1;
}
// Forward declare root types
namespace System::Diagnostics::Contracts {
class Contract;
}
// Type: System.Diagnostics.Contracts::Contract
namespace System::Diagnostics::Contracts {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3727))
// CS Name: System.Diagnostics.Contracts.Contract
class CORDL_TYPE Contract : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Contract() = default;

// Ctor Parameters [CppParam { name: "", ty: "Contract", modifiers: " const&", def_value: None }]
constexpr Contract(Contract const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Contract", modifiers: "&&", def_value: None }]
constexpr Contract(Contract&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Contract(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Contract& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Contract& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Contract& operator=(Contract&& o) noexcept = default;
  constexpr Contract& operator=(Contract const& o) noexcept = default;
                


// Methods

/// @brief Method ForAll addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool ForAll(System::Collections::Generic::IEnumerable_1<T> collection, System::Predicate_1<T> predicate) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics::Contracts
NEED_NO_BOX(System::Diagnostics::Contracts::Contract);
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Contracts::Contract, "System.Diagnostics.Contracts", "Contract");
