#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Buffers {
template<typename T>
class ArrayPool_1;
}
namespace System::Buffers {
template<::cordl_internals::il2cpp_reference_type T>
class ArrayPool_1<T>;
}
namespace System::Buffers {
template<>
class ArrayPool_1<char16_t>;
}
namespace System::Buffers {
template<>
class ArrayPool_1<int32_t>;
}
namespace System::Buffers {
template<>
class ArrayPool_1<uint8_t>;
}
// Type: System.Buffers::ArrayPool`1
// Type: System.Buffers::ArrayPool`1
namespace System::Buffers {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3865))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3865), inst: 2 })
// CS Name: System.Buffers.ArrayPool`1
class CORDL_TYPE ArrayPool_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ArrayPool_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ArrayPool_1", modifiers: " const&", def_value: None }]
constexpr ArrayPool_1(ArrayPool_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ArrayPool_1", modifiers: "&&", def_value: None }]
constexpr ArrayPool_1(ArrayPool_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ArrayPool_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ArrayPool_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ArrayPool_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ArrayPool_1& operator=(ArrayPool_1&& o) noexcept = default;
  constexpr ArrayPool_1& operator=(ArrayPool_1 const& o) noexcept = default;
                


// Fields

static ::System::Buffers::ArrayPool_1<T> __declspec(property(get=__get__Shared_k__BackingField, put=__set__Shared_k__BackingField))  _Shared_k__BackingField;

static void __set__Shared_k__BackingField(::System::Buffers::ArrayPool_1<T> value) ;

static ::System::Buffers::ArrayPool_1<T> __get__Shared_k__BackingField() ;


// Properties

static ::System::Buffers::ArrayPool_1<T> __declspec(property(get=get_Shared))  Shared;


// Methods

/// @brief Method get_Shared addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Buffers::ArrayPool_1<T> get_Shared() ;

/// @brief Method Rent addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<T> Rent(int32_t minimumLength) ;

/// @brief Method Return addr 0x0 size 0xffffffffffffffff virtual true final false
 void Return(::ArrayW<T> array, bool clearArray) ;

// Ctor Parameters []
explicit ArrayPool_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: System.Buffers::ArrayPool`1
namespace System::Buffers {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3865))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3865), inst: 92 })
// CS Name: System.Buffers.ArrayPool`1
class CORDL_TYPE ArrayPool_1<int32_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ArrayPool_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ArrayPool_1", modifiers: " const&", def_value: None }]
constexpr ArrayPool_1(ArrayPool_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ArrayPool_1", modifiers: "&&", def_value: None }]
constexpr ArrayPool_1(ArrayPool_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ArrayPool_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ArrayPool_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ArrayPool_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ArrayPool_1& operator=(ArrayPool_1&& o) noexcept = default;
  constexpr ArrayPool_1& operator=(ArrayPool_1 const& o) noexcept = default;
                


// Fields

static ::System::Buffers::ArrayPool_1<int32_t> __declspec(property(get=__get__Shared_k__BackingField, put=__set__Shared_k__BackingField))  _Shared_k__BackingField;

static void __set__Shared_k__BackingField(::System::Buffers::ArrayPool_1<int32_t> value) ;

static ::System::Buffers::ArrayPool_1<int32_t> __get__Shared_k__BackingField() ;


// Properties

static ::System::Buffers::ArrayPool_1<int32_t> __declspec(property(get=get_Shared))  Shared;


// Methods

/// @brief Method get_Shared addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Buffers::ArrayPool_1<int32_t> get_Shared() ;

/// @brief Method Rent addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<int32_t> Rent(int32_t minimumLength) ;

/// @brief Method Return addr 0x0 size 0xffffffffffffffff virtual true final false
 void Return(::ArrayW<int32_t> array, bool clearArray) ;

// Ctor Parameters []
explicit ArrayPool_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: System.Buffers::ArrayPool`1
namespace System::Buffers {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3865))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3865), inst: 279 })
// CS Name: System.Buffers.ArrayPool`1
class CORDL_TYPE ArrayPool_1<char16_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ArrayPool_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ArrayPool_1", modifiers: " const&", def_value: None }]
constexpr ArrayPool_1(ArrayPool_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ArrayPool_1", modifiers: "&&", def_value: None }]
constexpr ArrayPool_1(ArrayPool_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ArrayPool_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ArrayPool_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ArrayPool_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ArrayPool_1& operator=(ArrayPool_1&& o) noexcept = default;
  constexpr ArrayPool_1& operator=(ArrayPool_1 const& o) noexcept = default;
                


// Fields

static ::System::Buffers::ArrayPool_1<char16_t> __declspec(property(get=__get__Shared_k__BackingField, put=__set__Shared_k__BackingField))  _Shared_k__BackingField;

static void __set__Shared_k__BackingField(::System::Buffers::ArrayPool_1<char16_t> value) ;

static ::System::Buffers::ArrayPool_1<char16_t> __get__Shared_k__BackingField() ;


// Properties

static ::System::Buffers::ArrayPool_1<char16_t> __declspec(property(get=get_Shared))  Shared;


// Methods

/// @brief Method get_Shared addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Buffers::ArrayPool_1<char16_t> get_Shared() ;

/// @brief Method Rent addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<char16_t> Rent(int32_t minimumLength) ;

/// @brief Method Return addr 0x0 size 0xffffffffffffffff virtual true final false
 void Return(::ArrayW<char16_t> array, bool clearArray) ;

// Ctor Parameters []
explicit ArrayPool_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: System.Buffers::ArrayPool`1
namespace System::Buffers {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3865))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3865), inst: 717 })
// CS Name: System.Buffers.ArrayPool`1
class CORDL_TYPE ArrayPool_1<uint8_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ArrayPool_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ArrayPool_1", modifiers: " const&", def_value: None }]
constexpr ArrayPool_1(ArrayPool_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ArrayPool_1", modifiers: "&&", def_value: None }]
constexpr ArrayPool_1(ArrayPool_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ArrayPool_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ArrayPool_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ArrayPool_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ArrayPool_1& operator=(ArrayPool_1&& o) noexcept = default;
  constexpr ArrayPool_1& operator=(ArrayPool_1 const& o) noexcept = default;
                


// Fields

static ::System::Buffers::ArrayPool_1<uint8_t> __declspec(property(get=__get__Shared_k__BackingField, put=__set__Shared_k__BackingField))  _Shared_k__BackingField;

static void __set__Shared_k__BackingField(::System::Buffers::ArrayPool_1<uint8_t> value) ;

static ::System::Buffers::ArrayPool_1<uint8_t> __get__Shared_k__BackingField() ;


// Properties

static ::System::Buffers::ArrayPool_1<uint8_t> __declspec(property(get=get_Shared))  Shared;


// Methods

/// @brief Method get_Shared addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Buffers::ArrayPool_1<uint8_t> get_Shared() ;

/// @brief Method Rent addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> Rent(int32_t minimumLength) ;

/// @brief Method Return addr 0x0 size 0xffffffffffffffff virtual true final false
 void Return(::ArrayW<uint8_t> array, bool clearArray) ;

// Ctor Parameters []
explicit ArrayPool_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Buffers::ArrayPool_1, "System.Buffers", "ArrayPool`1");
