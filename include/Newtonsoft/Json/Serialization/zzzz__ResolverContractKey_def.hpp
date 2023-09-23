#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
struct ResolverContractKey;
}
// Type: Newtonsoft.Json.Serialization::ResolverContractKey
namespace Newtonsoft::Json::Serialization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11861))
// CS Name: Newtonsoft.Json.Serialization.ResolverContractKey
struct CORDL_TYPE ResolverContractKey : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_resolverType", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "_contractType", ty: "System::Type", modifiers: "", def_value: None }]
constexpr ResolverContractKey(System::Type _resolverType, System::Type _contractType) noexcept;


                    constexpr ResolverContractKey(ResolverContractKey const&) = default;
                    constexpr ResolverContractKey(ResolverContractKey&&) = default;
                    constexpr ResolverContractKey& operator=(ResolverContractKey const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ResolverContractKey& operator=(ResolverContractKey&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ResolverContractKey(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Type __declspec(property(get=__get__resolverType, put=__set__resolverType))  _resolverType;

constexpr void __set__resolverType(System::Type value) ;

constexpr System::Type __get__resolverType() const;

 System::Type __declspec(property(get=__get__contractType, put=__set__contractType))  _contractType;

constexpr void __set__contractType(System::Type value) ;

constexpr System::Type __get__contractType() const;


// Methods

/// @brief Method .ctor addr 0x24f6c84 size 0x8 virtual false final false
 void _ctor(System::Type resolverType, System::Type contractType) ;

/// @brief Method GetHashCode addr 0x24f6c8c size 0x48 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x24f6cd4 size 0x88 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x24f6d5c size 0x24 virtual false final false
 bool Equals(Newtonsoft::Json::Serialization::ResolverContractKey other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::ResolverContractKey, "Newtonsoft.Json.Serialization", "ResolverContractKey");
