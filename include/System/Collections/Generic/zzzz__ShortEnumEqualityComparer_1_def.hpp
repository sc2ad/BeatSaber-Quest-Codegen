#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Collections/Generic/zzzz__EnumEqualityComparer_1_def.hpp"
#include <cstdint>
namespace {
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class ShortEnumEqualityComparer_1;
}
// Type: System.Collections.Generic::ShortEnumEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3859)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3859), inst: 1591 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3861))
// CS Name: System.Collections.Generic.ShortEnumEqualityComparer`1
class CORDL_TYPE ShortEnumEqualityComparer_1 : public ::System::Collections::Generic::EnumEqualityComparer_1<T> {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr operator  ::System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ShortEnumEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ShortEnumEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr ShortEnumEqualityComparer_1(ShortEnumEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ShortEnumEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr ShortEnumEqualityComparer_1(ShortEnumEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ShortEnumEqualityComparer_1(void* ptr) noexcept : ::System::Collections::Generic::EnumEqualityComparer_1<T>(ptr) {
}


  constexpr ShortEnumEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ShortEnumEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ShortEnumEqualityComparer_1& operator=(ShortEnumEqualityComparer_1&& o) noexcept = default;
  constexpr ShortEnumEqualityComparer_1& operator=(ShortEnumEqualityComparer_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ShortEnumEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "information", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit ShortEnumEqualityComparer_1(::System::Runtime::Serialization::SerializationInfo information, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo information, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(T obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::ShortEnumEqualityComparer_1, "System.Collections.Generic", "ShortEnumEqualityComparer`1");
