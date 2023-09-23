#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Runtime::CompilerServices {
template<typename TKey,typename TValue>
class ConditionalWeakTable_2;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Collections {
class HashHelpers;
}
// Type: System.Collections::HashHelpers
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3739))
// CS Name: System.Collections.HashHelpers
class CORDL_TYPE HashHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HashHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "HashHelpers", modifiers: " const&", def_value: None }]
constexpr HashHelpers(HashHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HashHelpers", modifiers: "&&", def_value: None }]
constexpr HashHelpers(HashHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HashHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HashHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HashHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HashHelpers& operator=(HashHelpers&& o) noexcept = default;
  constexpr HashHelpers& operator=(HashHelpers const& o) noexcept = default;
                


// Fields

static ::ArrayW<int32_t> __declspec(property(get=__get_primes, put=__set_primes))  primes;

static void __set_primes(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_primes() ;

static System::Runtime::CompilerServices::ConditionalWeakTable_2<::bs_hook::Il2CppWrapperType,System::Runtime::Serialization::SerializationInfo> __declspec(property(get=__get_s_serializationInfoTable, put=__set_s_serializationInfoTable))  s_serializationInfoTable;

static void __set_s_serializationInfoTable(System::Runtime::CompilerServices::ConditionalWeakTable_2<::bs_hook::Il2CppWrapperType,System::Runtime::Serialization::SerializationInfo> value) ;

static System::Runtime::CompilerServices::ConditionalWeakTable_2<::bs_hook::Il2CppWrapperType,System::Runtime::Serialization::SerializationInfo> __get_s_serializationInfoTable() ;


// Properties

static System::Runtime::CompilerServices::ConditionalWeakTable_2<::bs_hook::Il2CppWrapperType,System::Runtime::Serialization::SerializationInfo> __declspec(property(get=get_SerializationInfoTable))  SerializationInfoTable;


// Methods

/// @brief Method IsPrime addr 0x240e800 size 0xb0 virtual false final false
static bool IsPrime(int32_t candidate) ;

/// @brief Method GetPrime addr 0x240e8b0 size 0x190 virtual false final false
static int32_t GetPrime(int32_t min) ;

/// @brief Method ExpandPrime addr 0x240ea40 size 0x84 virtual false final false
static int32_t ExpandPrime(int32_t oldSize) ;

/// @brief Method get_SerializationInfoTable addr 0x240eac4 size 0xe0 virtual false final false
static System::Runtime::CompilerServices::ConditionalWeakTable_2<::bs_hook::Il2CppWrapperType,System::Runtime::Serialization::SerializationInfo> get_SerializationInfoTable() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
NEED_NO_BOX(System::Collections::HashHelpers);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::HashHelpers, "System.Collections", "HashHelpers");
