#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Collections {
class EmptyEnumerator;
}
// Type: Org.BouncyCastle.Utilities.Collections::EmptyEnumerator
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1779))
// CS Name: Org.BouncyCastle.Utilities.Collections.EmptyEnumerator
class CORDL_TYPE EmptyEnumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyEnumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyEnumerator", modifiers: " const&", def_value: None }]
constexpr EmptyEnumerator(EmptyEnumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyEnumerator", modifiers: "&&", def_value: None }]
constexpr EmptyEnumerator(EmptyEnumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyEnumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyEnumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyEnumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyEnumerator& operator=(EmptyEnumerator&& o) noexcept = default;
  constexpr EmptyEnumerator& operator=(EmptyEnumerator const& o) noexcept = default;
                


// Fields

static System::Collections::IEnumerator __declspec(property(get=__get_Instance, put=__set_Instance))  Instance;

static void __set_Instance(System::Collections::IEnumerator value) ;

static System::Collections::IEnumerator __get_Instance() ;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Current))  Current;


// Methods

// Ctor Parameters []
explicit EmptyEnumerator() ;

/// @brief Method .ctor addr 0x10cb908 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method MoveNext addr 0x10cb910 size 0x8 virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x10cb918 size 0x4 virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x10cb91c size 0x50 virtual true final true
 ::bs_hook::Il2CppWrapperType get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Collections
NEED_NO_BOX(Org::BouncyCastle::Utilities::Collections::EmptyEnumerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Collections::EmptyEnumerator, "Org.BouncyCastle.Utilities.Collections", "EmptyEnumerator");
