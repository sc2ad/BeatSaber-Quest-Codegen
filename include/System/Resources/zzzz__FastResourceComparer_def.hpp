#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace System::Collections {
class IComparer;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
// Forward declare root types
namespace System::Resources {
class FastResourceComparer;
}
// Type: System.Resources::FastResourceComparer
namespace System::Resources {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3424))
// CS Name: System.Resources.FastResourceComparer
class CORDL_TYPE FastResourceComparer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IComparer
constexpr operator  System::Collections::IComparer() const noexcept;

/// @brief Convert operator to System::Collections::IEqualityComparer
constexpr operator  System::Collections::IEqualityComparer() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IComparer_1<::StringW>
constexpr operator  System::Collections::Generic::IComparer_1<::StringW>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEqualityComparer_1<::StringW>
constexpr operator  System::Collections::Generic::IEqualityComparer_1<::StringW>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FastResourceComparer() = default;

// Ctor Parameters [CppParam { name: "", ty: "FastResourceComparer", modifiers: " const&", def_value: None }]
constexpr FastResourceComparer(FastResourceComparer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FastResourceComparer", modifiers: "&&", def_value: None }]
constexpr FastResourceComparer(FastResourceComparer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FastResourceComparer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FastResourceComparer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FastResourceComparer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FastResourceComparer& operator=(FastResourceComparer&& o) noexcept = default;
  constexpr FastResourceComparer& operator=(FastResourceComparer const& o) noexcept = default;
                


// Fields

static System::Resources::FastResourceComparer __declspec(property(get=__get_Default, put=__set_Default))  Default;

static void __set_Default(System::Resources::FastResourceComparer value) ;

static System::Resources::FastResourceComparer __get_Default() ;


// Methods

/// @brief Method GetHashCode addr 0x2372e18 size 0x8c virtual true final true
 int32_t GetHashCode(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method GetHashCode addr 0x2372f10 size 0x54 virtual true final true
 int32_t GetHashCode(::StringW key) ;

/// @brief Method HashFunction addr 0x2372ea4 size 0x6c virtual false final false
static int32_t HashFunction(::StringW key) ;

/// @brief Method Compare addr 0x2372f64 size 0x9c virtual true final true
 int32_t Compare(::bs_hook::Il2CppWrapperType a, ::bs_hook::Il2CppWrapperType b) ;

/// @brief Method Compare addr 0x2373000 size 0x10 virtual true final true
 int32_t Compare(::StringW a, ::StringW b) ;

/// @brief Method Equals addr 0x2373010 size 0x10 virtual true final true
 bool Equals(::StringW a, ::StringW b) ;

/// @brief Method Equals addr 0x2373020 size 0x9c virtual true final true
 bool Equals(::bs_hook::Il2CppWrapperType a, ::bs_hook::Il2CppWrapperType b) ;

/// @brief Method CompareOrdinal addr 0x23730bc size 0xbc virtual false final false
static int32_t CompareOrdinal(::StringW a, ::ArrayW<uint8_t> bytes, int32_t bCharLength) ;

/// @brief Method CompareOrdinal addr 0x2373178 size 0x74 virtual false final false
static int32_t CompareOrdinal(::ArrayW<uint8_t> bytes, int32_t aCharLength, ::StringW b) ;

/// @brief Method CompareOrdinal addr 0x23731ec size 0x94 virtual false final false
static int32_t CompareOrdinal(void* a, int32_t byteLen, ::StringW b) ;

static System::Resources::FastResourceComparer New_ctor() ;

/// @brief Method .ctor addr 0x2373280 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Resources
NEED_NO_BOX(System::Resources::FastResourceComparer);
DEFINE_IL2CPP_ARG_TYPE(System::Resources::FastResourceComparer, "System.Resources", "FastResourceComparer");
