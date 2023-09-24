#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Collections {
class EmptyEnumerable;
}
// Type: Org.BouncyCastle.Utilities.Collections::EmptyEnumerable
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1778))
// CS Name: Org.BouncyCastle.Utilities.Collections.EmptyEnumerable
class CORDL_TYPE EmptyEnumerable : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyEnumerable() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyEnumerable", modifiers: " const&", def_value: None }]
constexpr EmptyEnumerable(EmptyEnumerable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyEnumerable", modifiers: "&&", def_value: None }]
constexpr EmptyEnumerable(EmptyEnumerable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyEnumerable(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyEnumerable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyEnumerable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyEnumerable& operator=(EmptyEnumerable&& o) noexcept = default;
  constexpr EmptyEnumerable& operator=(EmptyEnumerable const& o) noexcept = default;
                


// Fields

static System::Collections::IEnumerable __declspec(property(get=__get_Instance, put=__set_Instance))  Instance;

static void __set_Instance(System::Collections::IEnumerable value) ;

static System::Collections::IEnumerable __get_Instance() ;


// Methods

static Org::BouncyCastle::Utilities::Collections::EmptyEnumerable New_ctor() ;

/// @brief Method .ctor addr 0x10cb844 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method GetEnumerator addr 0x10cb84c size 0x58 virtual true final true
 System::Collections::IEnumerator GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Collections
NEED_NO_BOX(Org::BouncyCastle::Utilities::Collections::EmptyEnumerable);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Collections::EmptyEnumerable, "Org.BouncyCastle.Utilities.Collections", "EmptyEnumerable");
