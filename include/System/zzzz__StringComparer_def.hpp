#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class OrdinalCaseSensitiveComparer;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System {
class OrdinalIgnoreCaseComparer;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace System {
class CultureAwareComparer;
}
namespace System::Collections {
class IComparer;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
// Forward declare root types
namespace System {
class StringComparer;
}
// Type: System::StringComparer
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2473))
// CS Name: System.StringComparer
class CORDL_TYPE StringComparer : public ::bs_hook::Il2CppWrapperType {
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

virtual ~StringComparer() = default;

// Ctor Parameters [CppParam { name: "", ty: "StringComparer", modifiers: " const&", def_value: None }]
constexpr StringComparer(StringComparer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StringComparer", modifiers: "&&", def_value: None }]
constexpr StringComparer(StringComparer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StringComparer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StringComparer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StringComparer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StringComparer& operator=(StringComparer&& o) noexcept = default;
  constexpr StringComparer& operator=(StringComparer const& o) noexcept = default;
                


// Fields

static System::CultureAwareComparer __declspec(property(get=__get_s_invariantCulture, put=__set_s_invariantCulture))  s_invariantCulture;

static void __set_s_invariantCulture(System::CultureAwareComparer value) ;

static System::CultureAwareComparer __get_s_invariantCulture() ;

static System::CultureAwareComparer __declspec(property(get=__get_s_invariantCultureIgnoreCase, put=__set_s_invariantCultureIgnoreCase))  s_invariantCultureIgnoreCase;

static void __set_s_invariantCultureIgnoreCase(System::CultureAwareComparer value) ;

static System::CultureAwareComparer __get_s_invariantCultureIgnoreCase() ;

static System::OrdinalCaseSensitiveComparer __declspec(property(get=__get_s_ordinal, put=__set_s_ordinal))  s_ordinal;

static void __set_s_ordinal(System::OrdinalCaseSensitiveComparer value) ;

static System::OrdinalCaseSensitiveComparer __get_s_ordinal() ;

static System::OrdinalIgnoreCaseComparer __declspec(property(get=__get_s_ordinalIgnoreCase, put=__set_s_ordinalIgnoreCase))  s_ordinalIgnoreCase;

static void __set_s_ordinalIgnoreCase(System::OrdinalIgnoreCaseComparer value) ;

static System::OrdinalIgnoreCaseComparer __get_s_ordinalIgnoreCase() ;


// Properties

static System::StringComparer __declspec(property(get=get_InvariantCultureIgnoreCase))  InvariantCultureIgnoreCase;

static System::StringComparer __declspec(property(get=get_Ordinal))  Ordinal;

static System::StringComparer __declspec(property(get=get_OrdinalIgnoreCase))  OrdinalIgnoreCase;


// Methods

/// @brief Method get_InvariantCultureIgnoreCase addr 0x24569bc size 0x58 virtual false final false
static System::StringComparer get_InvariantCultureIgnoreCase() ;

/// @brief Method get_Ordinal addr 0x2456a14 size 0x58 virtual false final false
static System::StringComparer get_Ordinal() ;

/// @brief Method get_OrdinalIgnoreCase addr 0x2456a6c size 0x58 virtual false final false
static System::StringComparer get_OrdinalIgnoreCase() ;

/// @brief Method Compare addr 0x2456ac4 size 0x190 virtual true final true
 int32_t Compare(::bs_hook::Il2CppWrapperType x, ::bs_hook::Il2CppWrapperType y) ;

/// @brief Method Equals addr 0x2456c54 size 0xc8 virtual true final true
 bool Equals(::bs_hook::Il2CppWrapperType x, ::bs_hook::Il2CppWrapperType y) ;

/// @brief Method GetHashCode addr 0x2456d1c size 0xc8 virtual true final true
 int32_t GetHashCode(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Compare(::StringW x, ::StringW y) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::StringW x, ::StringW y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(::StringW obj) ;

static System::StringComparer New_ctor() ;

/// @brief Method .ctor addr 0x2456de4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::StringComparer);
DEFINE_IL2CPP_ARG_TYPE(System::StringComparer, "System", "StringComparer");
