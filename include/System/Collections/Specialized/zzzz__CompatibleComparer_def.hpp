#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections {
class IEqualityComparer;
}
namespace System::Collections {
class IComparer;
}
namespace System::Collections {
class IHashCodeProvider;
}
// Forward declare root types
namespace System::Collections::Specialized {
class CompatibleComparer;
}
// Type: System.Collections.Specialized::CompatibleComparer
namespace System::Collections::Specialized {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8374))
// CS Name: System.Collections.Specialized.CompatibleComparer
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

 System::Collections::IComparer __declspec(property(get=__get__comparer, put=__set__comparer))  _comparer;

constexpr void __set__comparer(System::Collections::IComparer value) ;

constexpr System::Collections::IComparer __get__comparer() const;

static System::Collections::IComparer __declspec(property(get=__get_defaultComparer, put=__set_defaultComparer))  defaultComparer;

static void __set_defaultComparer(System::Collections::IComparer value) ;

static System::Collections::IComparer __get_defaultComparer() ;

 System::Collections::IHashCodeProvider __declspec(property(get=__get__hcp, put=__set__hcp))  _hcp;

constexpr void __set__hcp(System::Collections::IHashCodeProvider value) ;

constexpr System::Collections::IHashCodeProvider __get__hcp() const;

static System::Collections::IHashCodeProvider __declspec(property(get=__get_defaultHashProvider, put=__set_defaultHashProvider))  defaultHashProvider;

static void __set_defaultHashProvider(System::Collections::IHashCodeProvider value) ;

static System::Collections::IHashCodeProvider __get_defaultHashProvider() ;


// Properties

 System::Collections::IComparer __declspec(property(get=get_Comparer))  Comparer;

 System::Collections::IHashCodeProvider __declspec(property(get=get_HashCodeProvider))  HashCodeProvider;

static System::Collections::IComparer __declspec(property(get=get_DefaultComparer))  DefaultComparer;

static System::Collections::IHashCodeProvider __declspec(property(get=get_DefaultHashCodeProvider))  DefaultHashCodeProvider;


// Methods

// Ctor Parameters [CppParam { name: "comparer", ty: "System::Collections::IComparer", modifiers: "", def_value: None }, CppParam { name: "hashCodeProvider", ty: "System::Collections::IHashCodeProvider", modifiers: "", def_value: None }]
explicit CompatibleComparer(System::Collections::IComparer comparer, System::Collections::IHashCodeProvider hashCodeProvider) ;

/// @brief Method .ctor addr 0x27ae584 size 0x2c virtual false final false
 void _ctor(System::Collections::IComparer comparer, System::Collections::IHashCodeProvider hashCodeProvider) ;

/// @brief Method Equals addr 0x27aedc0 size 0x200 virtual true final true
 bool Equals(::bs_hook::Il2CppWrapperType a, ::bs_hook::Il2CppWrapperType b) ;

/// @brief Method GetHashCode addr 0x27aefc0 size 0x10c virtual true final true
 int32_t GetHashCode(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_Comparer addr 0x27af0cc size 0x8 virtual false final false
 System::Collections::IComparer get_Comparer() ;

/// @brief Method get_HashCodeProvider addr 0x27af0d4 size 0x8 virtual false final false
 System::Collections::IHashCodeProvider get_HashCodeProvider() ;

/// @brief Method get_DefaultComparer addr 0x27adcc4 size 0xdc virtual false final false
static System::Collections::IComparer get_DefaultComparer() ;

/// @brief Method get_DefaultHashCodeProvider addr 0x27adbe4 size 0xe0 virtual false final false
static System::Collections::IHashCodeProvider get_DefaultHashCodeProvider() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Specialized
NEED_NO_BOX(System::Collections::Specialized::CompatibleComparer);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Specialized::CompatibleComparer, "System.Collections.Specialized", "CompatibleComparer");
