#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Collections/Generic/zzzz__EqualityComparer_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class LongEnumEqualityComparer_1;
}
// Type: System.Collections.Generic::LongEnumEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1619 }), TypeDefinitionIndex(TypeDefinitionIndex(3854))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3862))
// CS Name: System.Collections.Generic.LongEnumEqualityComparer`1
class CORDL_TYPE LongEnumEqualityComparer_1 : public ::System::Collections::Generic::EqualityComparer_1<T> {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr operator  ::System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~LongEnumEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LongEnumEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr LongEnumEqualityComparer_1(LongEnumEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LongEnumEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr LongEnumEqualityComparer_1(LongEnumEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LongEnumEqualityComparer_1(void* ptr) noexcept : ::System::Collections::Generic::EqualityComparer_1<T>(ptr) {
}


  constexpr LongEnumEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LongEnumEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LongEnumEqualityComparer_1& operator=(LongEnumEqualityComparer_1&& o) noexcept = default;
  constexpr LongEnumEqualityComparer_1& operator=(LongEnumEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(T x, T y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(T obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit LongEnumEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "information", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit LongEnumEqualityComparer_1(::System::Runtime::Serialization::SerializationInfo information, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo information, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final true
 void GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::LongEnumEqualityComparer_1, "System.Collections.Generic", "LongEnumEqualityComparer`1");
