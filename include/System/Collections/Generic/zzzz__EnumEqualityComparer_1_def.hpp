#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Collections/Generic/zzzz__EqualityComparer_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System {
struct Int32Enum;
}
namespace System {
struct UInt16Enum;
}
namespace System {
struct UInt32Enum;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class EnumEqualityComparer_1;
}
namespace System::Collections::Generic {
template<>
class EnumEqualityComparer_1<System::Int32Enum>;
}
namespace System::Collections::Generic {
template<>
class EnumEqualityComparer_1<System::UInt16Enum>;
}
namespace System::Collections::Generic {
template<>
class EnumEqualityComparer_1<System::UInt32Enum>;
}
// Type: System.Collections.Generic::EnumEqualityComparer`1
// Type: System.Collections.Generic::EnumEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1616 }), TypeDefinitionIndex(TypeDefinitionIndex(3854)), TypeDefinitionIndex(TypeDefinitionIndex(3859))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3859), inst: 4825 })
// CS Name: System.Collections.Generic.EnumEqualityComparer`1
class CORDL_TYPE EnumEqualityComparer_1<System::Int32Enum> : public System::Collections::Generic::EqualityComparer_1<System::Int32Enum> {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EnumEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr EnumEqualityComparer_1(EnumEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr EnumEqualityComparer_1(EnumEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnumEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<System::Int32Enum>(ptr) {
}


  constexpr EnumEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnumEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnumEqualityComparer_1& operator=(EnumEqualityComparer_1&& o) noexcept = default;
  constexpr EnumEqualityComparer_1& operator=(EnumEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(System::Int32Enum x, System::Int32Enum y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(System::Int32Enum obj) ;

// Ctor Parameters []
explicit EnumEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "information", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit EnumEqualityComparer_1(System::Runtime::Serialization::SerializationInfo information, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo information, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final true
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::EnumEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3859)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1616 }), TypeDefinitionIndex(TypeDefinitionIndex(3854))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3859), inst: 6253 })
// CS Name: System.Collections.Generic.EnumEqualityComparer`1
class CORDL_TYPE EnumEqualityComparer_1<System::UInt16Enum> : public System::Collections::Generic::EqualityComparer_1<System::UInt16Enum> {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EnumEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr EnumEqualityComparer_1(EnumEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr EnumEqualityComparer_1(EnumEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnumEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<System::UInt16Enum>(ptr) {
}


  constexpr EnumEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnumEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnumEqualityComparer_1& operator=(EnumEqualityComparer_1&& o) noexcept = default;
  constexpr EnumEqualityComparer_1& operator=(EnumEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(System::UInt16Enum x, System::UInt16Enum y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(System::UInt16Enum obj) ;

// Ctor Parameters []
explicit EnumEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "information", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit EnumEqualityComparer_1(System::Runtime::Serialization::SerializationInfo information, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo information, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final true
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::EnumEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1616 }), TypeDefinitionIndex(TypeDefinitionIndex(3854)), TypeDefinitionIndex(TypeDefinitionIndex(3859))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3859), inst: 7029 })
// CS Name: System.Collections.Generic.EnumEqualityComparer`1
class CORDL_TYPE EnumEqualityComparer_1<System::UInt32Enum> : public System::Collections::Generic::EqualityComparer_1<System::UInt32Enum> {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EnumEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr EnumEqualityComparer_1(EnumEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr EnumEqualityComparer_1(EnumEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnumEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<System::UInt32Enum>(ptr) {
}


  constexpr EnumEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnumEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnumEqualityComparer_1& operator=(EnumEqualityComparer_1&& o) noexcept = default;
  constexpr EnumEqualityComparer_1& operator=(EnumEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(System::UInt32Enum x, System::UInt32Enum y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(System::UInt32Enum obj) ;

// Ctor Parameters []
explicit EnumEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "information", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit EnumEqualityComparer_1(System::Runtime::Serialization::SerializationInfo information, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo information, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final true
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::EnumEqualityComparer_1, "System.Collections.Generic", "EnumEqualityComparer`1");
