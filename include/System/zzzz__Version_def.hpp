#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class IFormatProvider;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
class IComparable;
}
namespace System {
class ICloneable;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class ISpanFormattable;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace System {
class Version;
}
// Type: System::Version
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2511))
// CS Name: System.Version
class CORDL_TYPE Version : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief Convert operator to System::IComparable
constexpr operator  System::IComparable() const noexcept;

/// @brief Convert operator to System::IComparable_1<System::Version>
constexpr operator  System::IComparable_1<System::Version>() const noexcept;

/// @brief Convert operator to System::IEquatable_1<System::Version>
constexpr operator  System::IEquatable_1<System::Version>() const noexcept;

/// @brief Convert operator to System::ISpanFormattable
constexpr operator  System::ISpanFormattable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Version() = default;

// Ctor Parameters [CppParam { name: "", ty: "Version", modifiers: " const&", def_value: None }]
constexpr Version(Version const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Version", modifiers: "&&", def_value: None }]
constexpr Version(Version&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Version(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Version& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Version& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Version& operator=(Version&& o) noexcept = default;
  constexpr Version& operator=(Version const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__Major, put=__set__Major))  _Major;

constexpr void __set__Major(int32_t value) ;

constexpr int32_t __get__Major() const;

 int32_t __declspec(property(get=__get__Minor, put=__set__Minor))  _Minor;

constexpr void __set__Minor(int32_t value) ;

constexpr int32_t __get__Minor() const;

 int32_t __declspec(property(get=__get__Build, put=__set__Build))  _Build;

constexpr void __set__Build(int32_t value) ;

constexpr int32_t __get__Build() const;

 int32_t __declspec(property(get=__get__Revision, put=__set__Revision))  _Revision;

constexpr void __set__Revision(int32_t value) ;

constexpr int32_t __get__Revision() const;


// Properties

 int32_t __declspec(property(get=get_Major))  Major;

 int32_t __declspec(property(get=get_Minor))  Minor;

 int32_t __declspec(property(get=get_Build))  Build;

 int32_t __declspec(property(get=get_Revision))  Revision;

 int32_t __declspec(property(get=get_DefaultFormatFieldCount))  DefaultFormatFieldCount;


// Methods

// Ctor Parameters [CppParam { name: "major", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minor", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "build", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "revision", ty: "int32_t", modifiers: "", def_value: None }]
explicit Version(int32_t major, int32_t minor, int32_t build, int32_t revision) ;

/// @brief Method .ctor addr 0x24604d4 size 0x124 virtual false final false
 void _ctor(int32_t major, int32_t minor, int32_t build, int32_t revision) ;

// Ctor Parameters [CppParam { name: "major", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minor", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "build", ty: "int32_t", modifiers: "", def_value: None }]
explicit Version(int32_t major, int32_t minor, int32_t build) ;

/// @brief Method .ctor addr 0x24605f8 size 0xf8 virtual false final false
 void _ctor(int32_t major, int32_t minor, int32_t build) ;

// Ctor Parameters [CppParam { name: "major", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minor", ty: "int32_t", modifiers: "", def_value: None }]
explicit Version(int32_t major, int32_t minor) ;

/// @brief Method .ctor addr 0x24606f0 size 0xc0 virtual false final false
 void _ctor(int32_t major, int32_t minor) ;

// Ctor Parameters [CppParam { name: "version", ty: "::StringW", modifiers: "", def_value: None }]
explicit Version(::StringW version) ;

/// @brief Method .ctor addr 0x24607b0 size 0x44 virtual false final false
 void _ctor(::StringW version) ;

// Ctor Parameters []
explicit Version() ;

/// @brief Method .ctor addr 0x2460890 size 0x24 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "version", ty: "System::Version", modifiers: "", def_value: None }]
explicit Version(System::Version version) ;

/// @brief Method .ctor addr 0x24608b4 size 0x3c virtual false final false
 void _ctor(System::Version version) ;

/// @brief Method Clone addr 0x24608f0 size 0x60 virtual true final true
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method get_Major addr 0x2460950 size 0x8 virtual false final false
 int32_t get_Major() ;

/// @brief Method get_Minor addr 0x2460958 size 0x8 virtual false final false
 int32_t get_Minor() ;

/// @brief Method get_Build addr 0x2460960 size 0x8 virtual false final false
 int32_t get_Build() ;

/// @brief Method get_Revision addr 0x2460968 size 0x8 virtual false final false
 int32_t get_Revision() ;

/// @brief Method CompareTo addr 0x2460970 size 0xbc virtual true final true
 int32_t CompareTo(::bs_hook::Il2CppWrapperType version) ;

/// @brief Method CompareTo addr 0x2460a40 size 0x68 virtual true final true
 int32_t CompareTo(System::Version value) ;

/// @brief Method Equals addr 0x2460aa8 size 0x64 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x2460b0c size 0x60 virtual true final true
 bool Equals(System::Version obj) ;

/// @brief Method GetHashCode addr 0x2460b6c size 0x1c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2460b88 size 0x28 virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x2460bd8 size 0x8c virtual false final false
 ::StringW ToString(int32_t fieldCount) ;

/// @brief Method TryFormat addr 0x2460eb0 size 0x2c virtual false final false
 bool TryFormat(System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten) ;

/// @brief Method TryFormat addr 0x2460edc size 0x128 virtual false final false
 bool TryFormat(System::Span_1<char16_t> destination, int32_t fieldCount, ByRef<int32_t> charsWritten) ;

/// @brief Method System.ISpanFormattable.TryFormat addr 0x2461004 size 0x2c virtual true final true
 bool System_ISpanFormattable_TryFormat(System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, System::ReadOnlySpan_1<char16_t> format, System::IFormatProvider provider) ;

/// @brief Method get_DefaultFormatFieldCount addr 0x2460bb0 size 0x28 virtual false final false
 int32_t get_DefaultFormatFieldCount() ;

/// @brief Method ToCachedStringBuilder addr 0x2460c64 size 0x24c virtual false final false
 System::Text::StringBuilder ToCachedStringBuilder(int32_t fieldCount) ;

/// @brief Method Parse addr 0x24607f4 size 0x9c virtual false final false
static System::Version Parse(::StringW input) ;

/// @brief Method ParseVersion addr 0x2461030 size 0x4d4 virtual false final false
static System::Version ParseVersion(System::ReadOnlySpan_1<char16_t> input, bool throwOnFailure) ;

/// @brief Method TryParseComponent addr 0x2461504 size 0x118 virtual false final false
static bool TryParseComponent(System::ReadOnlySpan_1<char16_t> component, ::StringW componentName, bool throwOnFailure, ByRef<int32_t> parsedComponent) ;

/// @brief Method op_Equality addr 0x2460a2c size 0x14 virtual false final false
static bool op_Equality(System::Version v1, System::Version v2) ;

/// @brief Method op_Inequality addr 0x246161c size 0x28 virtual false final false
static bool op_Inequality(System::Version v1, System::Version v2) ;

/// @brief Method op_LessThan addr 0x2461644 size 0x64 virtual false final false
static bool op_LessThan(System::Version v1, System::Version v2) ;

/// @brief Method op_LessThanOrEqual addr 0x24616a8 size 0x68 virtual false final false
static bool op_LessThanOrEqual(System::Version v1, System::Version v2) ;

/// @brief Method op_GreaterThan addr 0x2461710 size 0x10 virtual false final false
static bool op_GreaterThan(System::Version v1, System::Version v2) ;

/// @brief Method op_GreaterThanOrEqual addr 0x2461720 size 0x10 virtual false final false
static bool op_GreaterThanOrEqual(System::Version v1, System::Version v2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::Version);
DEFINE_IL2CPP_ARG_TYPE(System::Version, "System", "Version");
