#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections {
class IEqualityComparer;
}
namespace System::Collections {
class IHashCodeProvider;
}
namespace System::Collections {
class IComparer;
}
// Forward declare root types
namespace System::Collections {
class CompatibleComparer;
}
// Type: System.Collections::CompatibleComparer
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3755))
// CS Name: System.Collections.CompatibleComparer
class CORDL_TYPE CompatibleComparer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEqualityComparer
constexpr operator  System::Collections::IEqualityComparer() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CompatibleComparer() = default;

// Ctor Parameters [CppParam { name: "", ty: "CompatibleComparer", modifiers: " const&", def_value: None }]
constexpr CompatibleComparer(CompatibleComparer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CompatibleComparer", modifiers: "&&", def_value: None }]
constexpr CompatibleComparer(CompatibleComparer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CompatibleComparer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CompatibleComparer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CompatibleComparer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CompatibleComparer& operator=(CompatibleComparer&& o) noexcept = default;
  constexpr CompatibleComparer& operator=(CompatibleComparer const& o) noexcept = default;
                


// Fields

 System::Collections::IHashCodeProvider __declspec(property(get=__get__hcp, put=__set__hcp))  _hcp;

constexpr void __set__hcp(System::Collections::IHashCodeProvider value) ;

constexpr System::Collections::IHashCodeProvider __get__hcp() const;

 System::Collections::IComparer __declspec(property(get=__get__comparer, put=__set__comparer))  _comparer;

constexpr void __set__comparer(System::Collections::IComparer value) ;

constexpr System::Collections::IComparer __get__comparer() const;


// Properties

 System::Collections::IHashCodeProvider __declspec(property(get=get_HashCodeProvider))  HashCodeProvider;

 System::Collections::IComparer __declspec(property(get=get_Comparer))  Comparer;


// Methods

// Ctor Parameters [CppParam { name: "hashCodeProvider", ty: "System::Collections::IHashCodeProvider", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "System::Collections::IComparer", modifiers: "", def_value: None }]
explicit CompatibleComparer(System::Collections::IHashCodeProvider hashCodeProvider, System::Collections::IComparer comparer) ;

/// @brief Method .ctor addr 0x240fd70 size 0x2c virtual false final false
 void _ctor(System::Collections::IHashCodeProvider hashCodeProvider, System::Collections::IComparer comparer) ;

/// @brief Method get_HashCodeProvider addr 0x240fd9c size 0x8 virtual false final false
 System::Collections::IHashCodeProvider get_HashCodeProvider() ;

/// @brief Method get_Comparer addr 0x240fda4 size 0x8 virtual false final false
 System::Collections::IComparer get_Comparer() ;

/// @brief Method Equals addr 0x240fdac size 0x18 virtual true final true
 bool Equals(::bs_hook::Il2CppWrapperType a, ::bs_hook::Il2CppWrapperType b) ;

/// @brief Method Compare addr 0x240fdc4 size 0x1c4 virtual false final false
 int32_t Compare(::bs_hook::Il2CppWrapperType a, ::bs_hook::Il2CppWrapperType b) ;

/// @brief Method GetHashCode addr 0x240ff88 size 0x10c virtual true final true
 int32_t GetHashCode(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
NEED_NO_BOX(System::Collections::CompatibleComparer);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::CompatibleComparer, "System.Collections", "CompatibleComparer");
