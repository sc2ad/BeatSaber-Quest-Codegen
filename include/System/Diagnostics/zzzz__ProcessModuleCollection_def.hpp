#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Collections/zzzz__ReadOnlyCollectionBase_def.hpp"
// Forward declare root types
namespace System::Diagnostics {
class ProcessModuleCollection;
}
// Type: System.Diagnostics::ProcessModuleCollection
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3762))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7805))
// CS Name: System.Diagnostics.ProcessModuleCollection
class CORDL_TYPE ProcessModuleCollection : public System::Collections::ReadOnlyCollectionBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ProcessModuleCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProcessModuleCollection", modifiers: " const&", def_value: None }]
constexpr ProcessModuleCollection(ProcessModuleCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProcessModuleCollection", modifiers: "&&", def_value: None }]
constexpr ProcessModuleCollection(ProcessModuleCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProcessModuleCollection(void* ptr) noexcept : System::Collections::ReadOnlyCollectionBase(ptr) {
}


  constexpr ProcessModuleCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProcessModuleCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProcessModuleCollection& operator=(ProcessModuleCollection&& o) noexcept = default;
  constexpr ProcessModuleCollection& operator=(ProcessModuleCollection const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics
NEED_NO_BOX(System::Diagnostics::ProcessModuleCollection);
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::ProcessModuleCollection, "System.Diagnostics", "ProcessModuleCollection");
