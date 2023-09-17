#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Security::Cryptography {
struct HashAlgorithmName;
}
namespace {
// Type: System.Security.Cryptography::HashAlgorithmName
namespace System::Security::Cryptography {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2637)), TypeDefinitionIndex(TypeDefinitionIndex(2414)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2414), inst: 3229 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2913))
// CS Name: System.Security.Cryptography.HashAlgorithmName
struct CORDL_TYPE HashAlgorithmName : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<System::Security::Cryptography::HashAlgorithmName>
constexpr operator  System::IEquatable_1<System::Security::Cryptography::HashAlgorithmName>() const;

// Ctor Parameters [CppParam { name: "_name", ty: "::StringW", modifiers: "", def_value: None }]
constexpr HashAlgorithmName(::StringW _name) noexcept;


                    constexpr HashAlgorithmName(HashAlgorithmName const&) = default;
                    constexpr HashAlgorithmName(HashAlgorithmName&&) = default;
                    constexpr HashAlgorithmName& operator=(HashAlgorithmName const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HashAlgorithmName& operator=(HashAlgorithmName&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HashAlgorithmName(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get__name, put=__set__name))  _name;

constexpr void __set__name(::StringW value) ;

constexpr ::StringW __get__name() const;


// Properties

static System::Security::Cryptography::HashAlgorithmName __declspec(property(get=get_SHA256))  SHA256;

 ::StringW __declspec(property(get=get_Name))  Name;


// Methods

/// @brief Method get_SHA256 addr 0x23020b4 size 0x40 virtual false final false
static System::Security::Cryptography::HashAlgorithmName get_SHA256() ;

/// @brief Method .ctor addr 0x23020f4 size 0x8 virtual false final false
 void _ctor(::StringW name) ;

/// @brief Method get_Name addr 0x23020fc size 0x8 virtual false final false
 ::StringW get_Name() ;

/// @brief Method ToString addr 0x2302104 size 0x54 virtual true final false
 ::StringW ToString() ;

/// @brief Method Equals addr 0x2302158 size 0x7c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x23021d4 size 0xc virtual true final true
 bool Equals(System::Security::Cryptography::HashAlgorithmName other) ;

/// @brief Method GetHashCode addr 0x23021e0 size 0x18 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::HashAlgorithmName, "System.Security.Cryptography", "HashAlgorithmName");
} // end anonymous namespace
