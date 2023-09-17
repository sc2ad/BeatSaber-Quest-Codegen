#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct Normal;
}
// Type: UnityEngine.ProBuilder::Normal
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12087))
// CS Name: UnityEngine.ProBuilder.Normal
struct CORDL_TYPE Normal : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::ProBuilder::Normal>
constexpr operator  ::System::IEquatable_1<::UnityEngine::ProBuilder::Normal>() const;

// Ctor Parameters [CppParam { name: "_normal_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_tangent_k__BackingField", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "_bitangent_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr Normal(::UnityEngine::Vector3 _normal_k__BackingField, ::UnityEngine::Vector4 _tangent_k__BackingField, ::UnityEngine::Vector3 _bitangent_k__BackingField) noexcept;


                    constexpr Normal(Normal const&) = default;
                    constexpr Normal(Normal&&) = default;
                    constexpr Normal& operator=(Normal const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Normal& operator=(Normal&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Normal(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Vector3 __declspec(property(get=__get__normal_k__BackingField, put=__set__normal_k__BackingField))  _normal_k__BackingField;

constexpr void __set__normal_k__BackingField(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__normal_k__BackingField() const;

 ::UnityEngine::Vector4 __declspec(property(get=__get__tangent_k__BackingField, put=__set__tangent_k__BackingField))  _tangent_k__BackingField;

constexpr void __set__tangent_k__BackingField(::UnityEngine::Vector4 value) ;

constexpr ::UnityEngine::Vector4 __get__tangent_k__BackingField() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__bitangent_k__BackingField, put=__set__bitangent_k__BackingField))  _bitangent_k__BackingField;

constexpr void __set__bitangent_k__BackingField(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__bitangent_k__BackingField() const;


// Properties

 ::UnityEngine::Vector3 __declspec(property(get=get_normal, put=set_normal))  normal;

 ::UnityEngine::Vector4 __declspec(property(get=get_tangent, put=set_tangent))  tangent;

 ::UnityEngine::Vector3 __declspec(property(get=get_bitangent, put=set_bitangent))  bitangent;


// Methods

/// @brief Method get_normal addr 0x29c0120 size 0xc virtual false final false
 ::UnityEngine::Vector3 get_normal() ;

/// @brief Method set_normal addr 0x29c012c size 0xc virtual false final false
 void set_normal(::UnityEngine::Vector3 value) ;

/// @brief Method get_tangent addr 0x29c0138 size 0xc virtual false final false
 ::UnityEngine::Vector4 get_tangent() ;

/// @brief Method set_tangent addr 0x29c0144 size 0xc virtual false final false
 void set_tangent(::UnityEngine::Vector4 value) ;

/// @brief Method get_bitangent addr 0x29c0150 size 0xc virtual false final false
 ::UnityEngine::Vector3 get_bitangent() ;

/// @brief Method set_bitangent addr 0x29c015c size 0xc virtual false final false
 void set_bitangent(::UnityEngine::Vector3 value) ;

/// @brief Method Equals addr 0x29c0168 size 0x90 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x29c0290 size 0x64 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x29c01f8 size 0x98 virtual true final true
 bool Equals(::UnityEngine::ProBuilder::Normal other) ;

/// @brief Method op_Equality addr 0x29c02f4 size 0x30 virtual false final false
static bool op_Equality(::UnityEngine::ProBuilder::Normal a, ::UnityEngine::ProBuilder::Normal b) ;

/// @brief Method op_Inequality addr 0x29c0324 size 0x48 virtual false final false
static bool op_Inequality(::UnityEngine::ProBuilder::Normal a, ::UnityEngine::ProBuilder::Normal b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Normal, "UnityEngine.ProBuilder", "Normal");
