#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Collections/Generic/zzzz__Comparer_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace System {
struct DateTime;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct Decimal;
}
namespace System {
struct Guid;
}
namespace System {
struct TimeSpan;
}
namespace System {
template<typename T1>
struct ValueTuple_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
struct Int32Enum;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::Utilities {
struct Substring;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class GenericComparer_1;
}
namespace System::Collections::Generic {
template<>
class GenericComparer_1<System::DateTime>;
}
namespace System::Collections::Generic {
template<>
class GenericComparer_1<System::DateTimeOffset>;
}
namespace System::Collections::Generic {
template<>
class GenericComparer_1<System::Decimal>;
}
namespace System::Collections::Generic {
template<>
class GenericComparer_1<System::Guid>;
}
namespace System::Collections::Generic {
template<>
class GenericComparer_1<System::TimeSpan>;
}
namespace System::Collections::Generic {
template<>
class GenericComparer_1<System::ValueTuple_1<bool>>;
}
namespace System::Collections::Generic {
template<>
class GenericComparer_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>;
}
namespace System::Collections::Generic {
template<>
class GenericComparer_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::Vector3>>;
}
namespace System::Collections::Generic {
template<>
class GenericComparer_1<System::ValueTuple_3<System::Int32Enum,System::Int32Enum,::bs_hook::Il2CppWrapperType>>;
}
namespace System::Collections::Generic {
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
class GenericComparer_1<T>;
}
namespace System::Collections::Generic {
template<::cordl_internals::is_or_is_backed_by<int64_t> T>
class GenericComparer_1<T>;
}
namespace System::Collections::Generic {
template<::cordl_internals::is_or_is_backed_by<uint32_t> T>
class GenericComparer_1<T>;
}
namespace System::Collections::Generic {
template<::cordl_internals::is_or_is_backed_by<uint64_t> T>
class GenericComparer_1<T>;
}
namespace System::Collections::Generic {
template<::cordl_internals::is_or_is_backed_by<uint8_t> T>
class GenericComparer_1<T>;
}
namespace System::Collections::Generic {
template<::cordl_internals::il2cpp_reference_type T>
class GenericComparer_1<T>;
}
namespace System::Collections::Generic {
template<::cordl_internals::is_or_is_backed_by<int8_t> T>
class GenericComparer_1<T>;
}
namespace System::Collections::Generic {
template<::cordl_internals::is_or_is_backed_by<uint16_t> T>
class GenericComparer_1<T>;
}
namespace System::Collections::Generic {
template<::cordl_internals::is_or_is_backed_by<int16_t> T>
class GenericComparer_1<T>;
}
namespace System::Collections::Generic {
template<>
class GenericComparer_1<UnityEngine::InputSystem::Utilities::InternedString>;
}
namespace System::Collections::Generic {
template<>
class GenericComparer_1<UnityEngine::InputSystem::Utilities::Substring>;
}
namespace System::Collections::Generic {
template<>
class GenericComparer_1<bool>;
}
namespace System::Collections::Generic {
template<>
class GenericComparer_1<char16_t>;
}
namespace System::Collections::Generic {
template<>
class GenericComparer_1<double_t>;
}
namespace System::Collections::Generic {
template<>
class GenericComparer_1<float_t>;
}
// Type: System.Collections.Generic::GenericComparer`1
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3850), inst: 997 }), TypeDefinitionIndex(TypeDefinitionIndex(3851)), TypeDefinitionIndex(TypeDefinitionIndex(3850))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3851), inst: 6702 })
// CS Name: System.Collections.Generic.GenericComparer`1
class CORDL_TYPE GenericComparer_1<System::ValueTuple_1<bool>> : public System::Collections::Generic::Comparer_1<System::ValueTuple_1<bool>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericComparer_1(void* ptr) noexcept : System::Collections::Generic::Comparer_1<System::ValueTuple_1<bool>>(ptr) {
}


  constexpr GenericComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericComparer_1& operator=(GenericComparer_1&& o) noexcept = default;
  constexpr GenericComparer_1& operator=(GenericComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Compare(System::ValueTuple_1<bool> x, System::ValueTuple_1<bool> y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static System::Collections::Generic::GenericComparer_1<System::ValueTuple_1<bool>> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3850)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3850), inst: 997 }), TypeDefinitionIndex(TypeDefinitionIndex(3851))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3851), inst: 6252 })
// CS Name: System.Collections.Generic.GenericComparer`1
class CORDL_TYPE GenericComparer_1<System::ValueTuple_3<System::Int32Enum,System::Int32Enum,::bs_hook::Il2CppWrapperType>> : public System::Collections::Generic::Comparer_1<System::ValueTuple_3<System::Int32Enum,System::Int32Enum,::bs_hook::Il2CppWrapperType>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericComparer_1(void* ptr) noexcept : System::Collections::Generic::Comparer_1<System::ValueTuple_3<System::Int32Enum,System::Int32Enum,::bs_hook::Il2CppWrapperType>>(ptr) {
}


  constexpr GenericComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericComparer_1& operator=(GenericComparer_1&& o) noexcept = default;
  constexpr GenericComparer_1& operator=(GenericComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Compare(System::ValueTuple_3<System::Int32Enum,System::Int32Enum,::bs_hook::Il2CppWrapperType> x, System::ValueTuple_3<System::Int32Enum,System::Int32Enum,::bs_hook::Il2CppWrapperType> y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static System::Collections::Generic::GenericComparer_1<System::ValueTuple_3<System::Int32Enum,System::Int32Enum,::bs_hook::Il2CppWrapperType>> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3850)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3850), inst: 997 }), TypeDefinitionIndex(TypeDefinitionIndex(3851))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3851), inst: 6251 })
// CS Name: System.Collections.Generic.GenericComparer`1
class CORDL_TYPE GenericComparer_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::Vector3>> : public System::Collections::Generic::Comparer_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::Vector3>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericComparer_1(void* ptr) noexcept : System::Collections::Generic::Comparer_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::Vector3>>(ptr) {
}


  constexpr GenericComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericComparer_1& operator=(GenericComparer_1&& o) noexcept = default;
  constexpr GenericComparer_1& operator=(GenericComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Compare(System::ValueTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::Vector3> x, System::ValueTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::Vector3> y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static System::Collections::Generic::GenericComparer_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::Vector3>> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3850), inst: 997 }), TypeDefinitionIndex(TypeDefinitionIndex(3851)), TypeDefinitionIndex(TypeDefinitionIndex(3850))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3851), inst: 6250 })
// CS Name: System.Collections.Generic.GenericComparer`1
class CORDL_TYPE GenericComparer_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> : public System::Collections::Generic::Comparer_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericComparer_1(void* ptr) noexcept : System::Collections::Generic::Comparer_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>(ptr) {
}


  constexpr GenericComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericComparer_1& operator=(GenericComparer_1&& o) noexcept = default;
  constexpr GenericComparer_1& operator=(GenericComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Compare(System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> x, System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static System::Collections::Generic::GenericComparer_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3850)), TypeDefinitionIndex(TypeDefinitionIndex(3851)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3850), inst: 997 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3851), inst: 2605 })
// CS Name: System.Collections.Generic.GenericComparer`1
class CORDL_TYPE GenericComparer_1<System::TimeSpan> : public System::Collections::Generic::Comparer_1<System::TimeSpan> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericComparer_1(void* ptr) noexcept : System::Collections::Generic::Comparer_1<System::TimeSpan>(ptr) {
}


  constexpr GenericComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericComparer_1& operator=(GenericComparer_1&& o) noexcept = default;
  constexpr GenericComparer_1& operator=(GenericComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Compare(System::TimeSpan x, System::TimeSpan y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static System::Collections::Generic::GenericComparer_1<System::TimeSpan> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3851)), TypeDefinitionIndex(TypeDefinitionIndex(3850)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3850), inst: 997 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3851), inst: 2604 })
// CS Name: System.Collections.Generic.GenericComparer`1
class CORDL_TYPE GenericComparer_1<UnityEngine::InputSystem::Utilities::Substring> : public System::Collections::Generic::Comparer_1<UnityEngine::InputSystem::Utilities::Substring> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericComparer_1(void* ptr) noexcept : System::Collections::Generic::Comparer_1<UnityEngine::InputSystem::Utilities::Substring>(ptr) {
}


  constexpr GenericComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericComparer_1& operator=(GenericComparer_1&& o) noexcept = default;
  constexpr GenericComparer_1& operator=(GenericComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Compare(UnityEngine::InputSystem::Utilities::Substring x, UnityEngine::InputSystem::Utilities::Substring y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static System::Collections::Generic::GenericComparer_1<UnityEngine::InputSystem::Utilities::Substring> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int8_t> T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3851)), TypeDefinitionIndex(TypeDefinitionIndex(3850)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3850), inst: 997 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3851), inst: 2601 })
// CS Name: System.Collections.Generic.GenericComparer`1
class CORDL_TYPE GenericComparer_1<T> : public System::Collections::Generic::Comparer_1<T> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericComparer_1(void* ptr) noexcept : System::Collections::Generic::Comparer_1<T>(ptr) {
}


  constexpr GenericComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericComparer_1& operator=(GenericComparer_1&& o) noexcept = default;
  constexpr GenericComparer_1& operator=(GenericComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Compare(T x, T y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static System::Collections::Generic::GenericComparer_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3851)), TypeDefinitionIndex(TypeDefinitionIndex(3850)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3850), inst: 997 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3851), inst: 2598 })
// CS Name: System.Collections.Generic.GenericComparer`1
class CORDL_TYPE GenericComparer_1<double_t> : public System::Collections::Generic::Comparer_1<double_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericComparer_1(void* ptr) noexcept : System::Collections::Generic::Comparer_1<double_t>(ptr) {
}


  constexpr GenericComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericComparer_1& operator=(GenericComparer_1&& o) noexcept = default;
  constexpr GenericComparer_1& operator=(GenericComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Compare(double_t x, double_t y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static System::Collections::Generic::GenericComparer_1<double_t> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3851)), TypeDefinitionIndex(TypeDefinitionIndex(3850)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3850), inst: 997 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3851), inst: 2597 })
// CS Name: System.Collections.Generic.GenericComparer`1
class CORDL_TYPE GenericComparer_1<System::Decimal> : public System::Collections::Generic::Comparer_1<System::Decimal> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericComparer_1(void* ptr) noexcept : System::Collections::Generic::Comparer_1<System::Decimal>(ptr) {
}


  constexpr GenericComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericComparer_1& operator=(GenericComparer_1&& o) noexcept = default;
  constexpr GenericComparer_1& operator=(GenericComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Compare(System::Decimal x, System::Decimal y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static System::Collections::Generic::GenericComparer_1<System::Decimal> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3850)), TypeDefinitionIndex(TypeDefinitionIndex(3851)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3850), inst: 997 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3851), inst: 2596 })
// CS Name: System.Collections.Generic.GenericComparer`1
class CORDL_TYPE GenericComparer_1<System::DateTimeOffset> : public System::Collections::Generic::Comparer_1<System::DateTimeOffset> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericComparer_1(void* ptr) noexcept : System::Collections::Generic::Comparer_1<System::DateTimeOffset>(ptr) {
}


  constexpr GenericComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericComparer_1& operator=(GenericComparer_1&& o) noexcept = default;
  constexpr GenericComparer_1& operator=(GenericComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Compare(System::DateTimeOffset x, System::DateTimeOffset y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static System::Collections::Generic::GenericComparer_1<System::DateTimeOffset> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3850)), TypeDefinitionIndex(TypeDefinitionIndex(3851)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3850), inst: 997 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3851), inst: 2595 })
// CS Name: System.Collections.Generic.GenericComparer`1
class CORDL_TYPE GenericComparer_1<System::DateTime> : public System::Collections::Generic::Comparer_1<System::DateTime> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericComparer_1(void* ptr) noexcept : System::Collections::Generic::Comparer_1<System::DateTime>(ptr) {
}


  constexpr GenericComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericComparer_1& operator=(GenericComparer_1&& o) noexcept = default;
  constexpr GenericComparer_1& operator=(GenericComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Compare(System::DateTime x, System::DateTime y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static System::Collections::Generic::GenericComparer_1<System::DateTime> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3851)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3850), inst: 997 }), TypeDefinitionIndex(TypeDefinitionIndex(3850))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3851), inst: 2498 })
// CS Name: System.Collections.Generic.GenericComparer`1
class CORDL_TYPE GenericComparer_1<UnityEngine::InputSystem::Utilities::InternedString> : public System::Collections::Generic::Comparer_1<UnityEngine::InputSystem::Utilities::InternedString> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericComparer_1(void* ptr) noexcept : System::Collections::Generic::Comparer_1<UnityEngine::InputSystem::Utilities::InternedString>(ptr) {
}


  constexpr GenericComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericComparer_1& operator=(GenericComparer_1&& o) noexcept = default;
  constexpr GenericComparer_1& operator=(GenericComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Compare(UnityEngine::InputSystem::Utilities::InternedString x, UnityEngine::InputSystem::Utilities::InternedString y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static System::Collections::Generic::GenericComparer_1<UnityEngine::InputSystem::Utilities::InternedString> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3850), inst: 997 }), TypeDefinitionIndex(TypeDefinitionIndex(3850)), TypeDefinitionIndex(TypeDefinitionIndex(3851))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3851), inst: 2494 })
// CS Name: System.Collections.Generic.GenericComparer`1
class CORDL_TYPE GenericComparer_1<System::Guid> : public System::Collections::Generic::Comparer_1<System::Guid> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericComparer_1(void* ptr) noexcept : System::Collections::Generic::Comparer_1<System::Guid>(ptr) {
}


  constexpr GenericComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericComparer_1& operator=(GenericComparer_1&& o) noexcept = default;
  constexpr GenericComparer_1& operator=(GenericComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Compare(System::Guid x, System::Guid y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static System::Collections::Generic::GenericComparer_1<System::Guid> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int64_t> T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3851)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3850), inst: 997 }), TypeDefinitionIndex(TypeDefinitionIndex(3850))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3851), inst: 830 })
// CS Name: System.Collections.Generic.GenericComparer`1
class CORDL_TYPE GenericComparer_1<T> : public System::Collections::Generic::Comparer_1<T> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericComparer_1(void* ptr) noexcept : System::Collections::Generic::Comparer_1<T>(ptr) {
}


  constexpr GenericComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericComparer_1& operator=(GenericComparer_1&& o) noexcept = default;
  constexpr GenericComparer_1& operator=(GenericComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Compare(T x, T y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static System::Collections::Generic::GenericComparer_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::is_or_is_backed_by<uint32_t> T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3851)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3850), inst: 997 }), TypeDefinitionIndex(TypeDefinitionIndex(3850))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3851), inst: 729 })
// CS Name: System.Collections.Generic.GenericComparer`1
class CORDL_TYPE GenericComparer_1<T> : public System::Collections::Generic::Comparer_1<T> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericComparer_1(void* ptr) noexcept : System::Collections::Generic::Comparer_1<T>(ptr) {
}


  constexpr GenericComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericComparer_1& operator=(GenericComparer_1&& o) noexcept = default;
  constexpr GenericComparer_1& operator=(GenericComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Compare(T x, T y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static System::Collections::Generic::GenericComparer_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::is_or_is_backed_by<uint16_t> T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3850)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3850), inst: 997 }), TypeDefinitionIndex(TypeDefinitionIndex(3851))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3851), inst: 728 })
// CS Name: System.Collections.Generic.GenericComparer`1
class CORDL_TYPE GenericComparer_1<T> : public System::Collections::Generic::Comparer_1<T> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericComparer_1(void* ptr) noexcept : System::Collections::Generic::Comparer_1<T>(ptr) {
}


  constexpr GenericComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericComparer_1& operator=(GenericComparer_1&& o) noexcept = default;
  constexpr GenericComparer_1& operator=(GenericComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Compare(T x, T y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static System::Collections::Generic::GenericComparer_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int16_t> T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3851)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3850), inst: 997 }), TypeDefinitionIndex(TypeDefinitionIndex(3850))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3851), inst: 721 })
// CS Name: System.Collections.Generic.GenericComparer`1
class CORDL_TYPE GenericComparer_1<T> : public System::Collections::Generic::Comparer_1<T> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericComparer_1(void* ptr) noexcept : System::Collections::Generic::Comparer_1<T>(ptr) {
}


  constexpr GenericComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericComparer_1& operator=(GenericComparer_1&& o) noexcept = default;
  constexpr GenericComparer_1& operator=(GenericComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Compare(T x, T y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static System::Collections::Generic::GenericComparer_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::is_or_is_backed_by<uint8_t> T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3851)), TypeDefinitionIndex(TypeDefinitionIndex(3850)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3850), inst: 997 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3851), inst: 717 })
// CS Name: System.Collections.Generic.GenericComparer`1
class CORDL_TYPE GenericComparer_1<T> : public System::Collections::Generic::Comparer_1<T> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericComparer_1(void* ptr) noexcept : System::Collections::Generic::Comparer_1<T>(ptr) {
}


  constexpr GenericComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericComparer_1& operator=(GenericComparer_1&& o) noexcept = default;
  constexpr GenericComparer_1& operator=(GenericComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Compare(T x, T y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static System::Collections::Generic::GenericComparer_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::is_or_is_backed_by<uint64_t> T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3850)), TypeDefinitionIndex(TypeDefinitionIndex(3851)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3850), inst: 997 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3851), inst: 389 })
// CS Name: System.Collections.Generic.GenericComparer`1
class CORDL_TYPE GenericComparer_1<T> : public System::Collections::Generic::Comparer_1<T> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericComparer_1(void* ptr) noexcept : System::Collections::Generic::Comparer_1<T>(ptr) {
}


  constexpr GenericComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericComparer_1& operator=(GenericComparer_1&& o) noexcept = default;
  constexpr GenericComparer_1& operator=(GenericComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Compare(T x, T y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static System::Collections::Generic::GenericComparer_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3850), inst: 997 }), TypeDefinitionIndex(TypeDefinitionIndex(3851)), TypeDefinitionIndex(TypeDefinitionIndex(3850))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3851), inst: 374 })
// CS Name: System.Collections.Generic.GenericComparer`1
class CORDL_TYPE GenericComparer_1<float_t> : public System::Collections::Generic::Comparer_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericComparer_1(void* ptr) noexcept : System::Collections::Generic::Comparer_1<float_t>(ptr) {
}


  constexpr GenericComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericComparer_1& operator=(GenericComparer_1&& o) noexcept = default;
  constexpr GenericComparer_1& operator=(GenericComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Compare(float_t x, float_t y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static System::Collections::Generic::GenericComparer_1<float_t> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3851)), TypeDefinitionIndex(TypeDefinitionIndex(3850)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3850), inst: 997 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3851), inst: 279 })
// CS Name: System.Collections.Generic.GenericComparer`1
class CORDL_TYPE GenericComparer_1<char16_t> : public System::Collections::Generic::Comparer_1<char16_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericComparer_1(void* ptr) noexcept : System::Collections::Generic::Comparer_1<char16_t>(ptr) {
}


  constexpr GenericComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericComparer_1& operator=(GenericComparer_1&& o) noexcept = default;
  constexpr GenericComparer_1& operator=(GenericComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Compare(char16_t x, char16_t y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static System::Collections::Generic::GenericComparer_1<char16_t> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3851)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3850), inst: 997 }), TypeDefinitionIndex(TypeDefinitionIndex(3850))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3851), inst: 99 })
// CS Name: System.Collections.Generic.GenericComparer`1
class CORDL_TYPE GenericComparer_1<bool> : public System::Collections::Generic::Comparer_1<bool> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericComparer_1(void* ptr) noexcept : System::Collections::Generic::Comparer_1<bool>(ptr) {
}


  constexpr GenericComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericComparer_1& operator=(GenericComparer_1&& o) noexcept = default;
  constexpr GenericComparer_1& operator=(GenericComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Compare(bool x, bool y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static System::Collections::Generic::GenericComparer_1<bool> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3851)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3850), inst: 997 }), TypeDefinitionIndex(TypeDefinitionIndex(3850))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3851), inst: 92 })
// CS Name: System.Collections.Generic.GenericComparer`1
class CORDL_TYPE GenericComparer_1<T> : public System::Collections::Generic::Comparer_1<T> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericComparer_1(void* ptr) noexcept : System::Collections::Generic::Comparer_1<T>(ptr) {
}


  constexpr GenericComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericComparer_1& operator=(GenericComparer_1&& o) noexcept = default;
  constexpr GenericComparer_1& operator=(GenericComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Compare(T x, T y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static System::Collections::Generic::GenericComparer_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericComparer`1
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3851)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3850), inst: 997 }), TypeDefinitionIndex(TypeDefinitionIndex(3850))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3851), inst: 2 })
// CS Name: System.Collections.Generic.GenericComparer`1
class CORDL_TYPE GenericComparer_1<T> : public System::Collections::Generic::Comparer_1<T> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericComparer_1(GenericComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericComparer_1(void* ptr) noexcept : System::Collections::Generic::Comparer_1<T>(ptr) {
}


  constexpr GenericComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericComparer_1& operator=(GenericComparer_1&& o) noexcept = default;
  constexpr GenericComparer_1& operator=(GenericComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Compare(T x, T y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static System::Collections::Generic::GenericComparer_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::GenericComparer_1, "System.Collections.Generic", "GenericComparer`1");
