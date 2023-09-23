#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Collections/zzzz__ReadOnlyCollectionBase_def.hpp"
// Forward declare root types
namespace System::Diagnostics {
class ProcessThreadCollection;
}
// Type: System.Diagnostics::ProcessThreadCollection
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3762))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7807))
// CS Name: System.Diagnostics.ProcessThreadCollection
class CORDL_TYPE ProcessThreadCollection : public System::Collections::ReadOnlyCollectionBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ProcessThreadCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProcessThreadCollection", modifiers: " const&", def_value: None }]
constexpr ProcessThreadCollection(ProcessThreadCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProcessThreadCollection", modifiers: "&&", def_value: None }]
constexpr ProcessThreadCollection(ProcessThreadCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProcessThreadCollection(void* ptr) noexcept : System::Collections::ReadOnlyCollectionBase(ptr) {
}


  constexpr ProcessThreadCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProcessThreadCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProcessThreadCollection& operator=(ProcessThreadCollection&& o) noexcept = default;
  constexpr ProcessThreadCollection& operator=(ProcessThreadCollection const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics
NEED_NO_BOX(System::Diagnostics::ProcessThreadCollection);
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::ProcessThreadCollection, "System.Diagnostics", "ProcessThreadCollection");
