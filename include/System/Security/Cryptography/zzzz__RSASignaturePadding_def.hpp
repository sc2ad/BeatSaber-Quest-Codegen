#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Security::Cryptography {
struct RSASignaturePaddingMode;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RSASignaturePadding;
}
namespace {
// Type: System.Security.Cryptography::RSASignaturePadding
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2414), inst: 3268 }), TypeDefinitionIndex(TypeDefinitionIndex(2414))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2914))
// CS Name: System.Security.Cryptography.RSASignaturePadding
class CORDL_TYPE RSASignaturePadding : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<System::Security::Cryptography::RSASignaturePadding>
constexpr operator  System::IEquatable_1<System::Security::Cryptography::RSASignaturePadding>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RSASignaturePadding() = default;

// Ctor Parameters [CppParam { name: "", ty: "RSASignaturePadding", modifiers: " const&", def_value: None }]
constexpr RSASignaturePadding(RSASignaturePadding const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RSASignaturePadding", modifiers: "&&", def_value: None }]
constexpr RSASignaturePadding(RSASignaturePadding&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RSASignaturePadding(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RSASignaturePadding& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RSASignaturePadding& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RSASignaturePadding& operator=(RSASignaturePadding&& o) noexcept = default;
  constexpr RSASignaturePadding& operator=(RSASignaturePadding const& o) noexcept = default;
                


// Fields

static System::Security::Cryptography::RSASignaturePadding __declspec(property(get=__get_s_pkcs1, put=__set_s_pkcs1))  s_pkcs1;

static void __set_s_pkcs1(System::Security::Cryptography::RSASignaturePadding value) ;

static System::Security::Cryptography::RSASignaturePadding __get_s_pkcs1() ;

static System::Security::Cryptography::RSASignaturePadding __declspec(property(get=__get_s_pss, put=__set_s_pss))  s_pss;

static void __set_s_pss(System::Security::Cryptography::RSASignaturePadding value) ;

static System::Security::Cryptography::RSASignaturePadding __get_s_pss() ;

 System::Security::Cryptography::RSASignaturePaddingMode __declspec(property(get=__get__mode, put=__set__mode))  _mode;

constexpr void __set__mode(System::Security::Cryptography::RSASignaturePaddingMode value) ;

constexpr System::Security::Cryptography::RSASignaturePaddingMode __get__mode() const;


// Properties

static System::Security::Cryptography::RSASignaturePadding __declspec(property(get=get_Pkcs1))  Pkcs1;


// Methods

// Ctor Parameters [CppParam { name: "mode", ty: "System::Security::Cryptography::RSASignaturePaddingMode", modifiers: "", def_value: None }]
explicit RSASignaturePadding(System::Security::Cryptography::RSASignaturePaddingMode mode) ;

/// @brief Method .ctor addr 0x23021f8 size 0x28 virtual false final false
 void _ctor(System::Security::Cryptography::RSASignaturePaddingMode mode) ;

/// @brief Method get_Pkcs1 addr 0x2302220 size 0x58 virtual false final false
static System::Security::Cryptography::RSASignaturePadding get_Pkcs1() ;

/// @brief Method GetHashCode addr 0x2302278 size 0xc virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2302284 size 0x64 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x23022e8 size 0x8c virtual true final true
 bool Equals(System::Security::Cryptography::RSASignaturePadding other) ;

/// @brief Method op_Equality addr 0x23023e4 size 0x14 virtual false final false
static bool op_Equality(System::Security::Cryptography::RSASignaturePadding left, System::Security::Cryptography::RSASignaturePadding right) ;

/// @brief Method op_Inequality addr 0x2302374 size 0x70 virtual false final false
static bool op_Inequality(System::Security::Cryptography::RSASignaturePadding left, System::Security::Cryptography::RSASignaturePadding right) ;

/// @brief Method ToString addr 0x23023f8 size 0x68 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RSASignaturePadding);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSASignaturePadding, "System.Security.Cryptography", "RSASignaturePadding");
} // end anonymous namespace
