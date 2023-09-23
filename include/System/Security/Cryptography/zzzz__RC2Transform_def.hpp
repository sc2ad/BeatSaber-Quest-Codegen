#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Mono/Security/Cryptography/zzzz__SymmetricTransform_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Security::Cryptography {
class RC2;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RC2Transform;
}
// Type: System.Security.Cryptography::RC2Transform
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2284))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2977))
// CS Name: System.Security.Cryptography.RC2Transform
class CORDL_TYPE RC2Transform : public Mono::Security::Cryptography::SymmetricTransform {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~RC2Transform() = default;

// Ctor Parameters [CppParam { name: "", ty: "RC2Transform", modifiers: " const&", def_value: None }]
constexpr RC2Transform(RC2Transform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RC2Transform", modifiers: "&&", def_value: None }]
constexpr RC2Transform(RC2Transform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RC2Transform(void* ptr) noexcept : Mono::Security::Cryptography::SymmetricTransform(ptr) {
}


  constexpr RC2Transform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RC2Transform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RC2Transform& operator=(RC2Transform&& o) noexcept = default;
  constexpr RC2Transform& operator=(RC2Transform const& o) noexcept = default;
                


// Fields

 uint16_t __declspec(property(get=__get_R0, put=__set_R0))  R0;

constexpr void __set_R0(uint16_t value) ;

constexpr uint16_t __get_R0() const;

 uint16_t __declspec(property(get=__get_R1, put=__set_R1))  R1;

constexpr void __set_R1(uint16_t value) ;

constexpr uint16_t __get_R1() const;

 uint16_t __declspec(property(get=__get_R2, put=__set_R2))  R2;

constexpr void __set_R2(uint16_t value) ;

constexpr uint16_t __get_R2() const;

 uint16_t __declspec(property(get=__get_R3, put=__set_R3))  R3;

constexpr void __set_R3(uint16_t value) ;

constexpr uint16_t __get_R3() const;

 ::ArrayW<uint16_t> __declspec(property(get=__get_K, put=__set_K))  K;

constexpr void __set_K(::ArrayW<uint16_t> value) ;

constexpr ::ArrayW<uint16_t> __get_K() const;

 int32_t __declspec(property(get=__get_j, put=__set_j))  j;

constexpr void __set_j(int32_t value) ;

constexpr int32_t __get_j() const;

static ::ArrayW<uint8_t> __declspec(property(get=__get_pitable, put=__set_pitable))  pitable;

static void __set_pitable(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_pitable() ;


// Methods

// Ctor Parameters [CppParam { name: "rc2Algo", ty: "System::Security::Cryptography::RC2", modifiers: "", def_value: None }, CppParam { name: "encryption", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "key", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "iv", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit RC2Transform(System::Security::Cryptography::RC2 rc2Algo, bool encryption, ::ArrayW<uint8_t> key, ::ArrayW<uint8_t> iv) ;

/// @brief Method .ctor addr 0x2306b84 size 0x548 virtual false final false
 void _ctor(System::Security::Cryptography::RC2 rc2Algo, bool encryption, ::ArrayW<uint8_t> key, ::ArrayW<uint8_t> iv) ;

/// @brief Method ECB addr 0x23070cc size 0x930 virtual true final false
 void ECB(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::RC2Transform);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::RC2Transform, "System.Security.Cryptography", "RC2Transform");
