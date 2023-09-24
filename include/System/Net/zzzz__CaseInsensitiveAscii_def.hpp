#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections {
class IEqualityComparer;
}
namespace System::Collections {
class IComparer;
}
// Forward declare root types
namespace System::Net {
class CaseInsensitiveAscii;
}
// Type: System.Net::CaseInsensitiveAscii
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7943))
// CS Name: System.Net.CaseInsensitiveAscii
class CORDL_TYPE CaseInsensitiveAscii : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEqualityComparer
constexpr operator  System::Collections::IEqualityComparer() const noexcept;

/// @brief Convert operator to System::Collections::IComparer
constexpr operator  System::Collections::IComparer() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CaseInsensitiveAscii() = default;

// Ctor Parameters [CppParam { name: "", ty: "CaseInsensitiveAscii", modifiers: " const&", def_value: None }]
constexpr CaseInsensitiveAscii(CaseInsensitiveAscii const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CaseInsensitiveAscii", modifiers: "&&", def_value: None }]
constexpr CaseInsensitiveAscii(CaseInsensitiveAscii&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CaseInsensitiveAscii(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CaseInsensitiveAscii& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CaseInsensitiveAscii& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CaseInsensitiveAscii& operator=(CaseInsensitiveAscii&& o) noexcept = default;
  constexpr CaseInsensitiveAscii& operator=(CaseInsensitiveAscii const& o) noexcept = default;
                


// Fields

static System::Net::CaseInsensitiveAscii __declspec(property(get=__get_StaticInstance, put=__set_StaticInstance))  StaticInstance;

static void __set_StaticInstance(System::Net::CaseInsensitiveAscii value) ;

static System::Net::CaseInsensitiveAscii __get_StaticInstance() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_AsciiToLower, put=__set_AsciiToLower))  AsciiToLower;

static void __set_AsciiToLower(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_AsciiToLower() ;


// Methods

/// @brief Method GetHashCode addr 0x2811024 size 0x118 virtual true final true
 int32_t GetHashCode(::bs_hook::Il2CppWrapperType myObject) ;

/// @brief Method Compare addr 0x281113c size 0x170 virtual true final true
 int32_t Compare(::bs_hook::Il2CppWrapperType firstObject, ::bs_hook::Il2CppWrapperType secondObject) ;

/// @brief Method FastGetHashCode addr 0x28112ac size 0xf0 virtual false final false
 int32_t FastGetHashCode(::StringW myString) ;

/// @brief Method Equals addr 0x281139c size 0x178 virtual true final true
 bool Equals(::bs_hook::Il2CppWrapperType firstObject, ::bs_hook::Il2CppWrapperType secondObject) ;

static System::Net::CaseInsensitiveAscii New_ctor() ;

/// @brief Method .ctor addr 0x2811514 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::CaseInsensitiveAscii);
DEFINE_IL2CPP_ARG_TYPE(System::Net::CaseInsensitiveAscii, "System.Net", "CaseInsensitiveAscii");
