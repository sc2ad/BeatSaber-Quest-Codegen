#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Collections {
class IComparer;
}
// Forward declare root types
namespace System::Net {
class Comparer;
}
// Type: System.Net::Comparer
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7976))
// CS Name: System.Net.Comparer
class CORDL_TYPE Comparer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::IComparer
constexpr operator  ::System::Collections::IComparer() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Comparer() = default;

// Ctor Parameters [CppParam { name: "", ty: "Comparer", modifiers: " const&", def_value: None }]
constexpr Comparer(Comparer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Comparer", modifiers: "&&", def_value: None }]
constexpr Comparer(Comparer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Comparer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Comparer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Comparer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Comparer& operator=(Comparer&& o) noexcept = default;
  constexpr Comparer& operator=(Comparer const& o) noexcept = default;
                


// Methods

/// @brief Method System.Collections.IComparer.Compare addr 0x281c550 size 0xdc virtual true final true
 int32_t System_Collections_IComparer_Compare(::bs_hook::Il2CppWrapperType ol, ::bs_hook::Il2CppWrapperType or) ;

// Ctor Parameters []
explicit Comparer() ;

/// @brief Method .ctor addr 0x281b53c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
NEED_NO_BOX(::System::Net::Comparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Comparer, "System.Net", "Comparer");
