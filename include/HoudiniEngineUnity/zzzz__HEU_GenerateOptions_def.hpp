#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
// Forward declare root types
namespace HoudiniEngineUnity {
struct HEU_GenerateOptions;
}
// Type: HoudiniEngineUnity::HEU_GenerateOptions
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9735))
// CS Name: HoudiniEngineUnity.HEU_GenerateOptions
struct CORDL_TYPE HEU_GenerateOptions : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_generateUVs", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_generateTangents", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_generateNormals", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_useLODGroups", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_splitPoints", ty: "bool", modifiers: "", def_value: None }]
constexpr HEU_GenerateOptions(bool _generateUVs, bool _generateTangents, bool _generateNormals, bool _useLODGroups, bool _splitPoints) noexcept;


                    constexpr HEU_GenerateOptions(HEU_GenerateOptions const&) = default;
                    constexpr HEU_GenerateOptions(HEU_GenerateOptions&&) = default;
                    constexpr HEU_GenerateOptions& operator=(HEU_GenerateOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HEU_GenerateOptions& operator=(HEU_GenerateOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x5};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HEU_GenerateOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get__generateUVs, put=__set__generateUVs))  _generateUVs;

constexpr void __set__generateUVs(bool value) ;

constexpr bool __get__generateUVs() const;

 bool __declspec(property(get=__get__generateTangents, put=__set__generateTangents))  _generateTangents;

constexpr void __set__generateTangents(bool value) ;

constexpr bool __get__generateTangents() const;

 bool __declspec(property(get=__get__generateNormals, put=__set__generateNormals))  _generateNormals;

constexpr void __set__generateNormals(bool value) ;

constexpr bool __get__generateNormals() const;

 bool __declspec(property(get=__get__useLODGroups, put=__set__useLODGroups))  _useLODGroups;

constexpr void __set__useLODGroups(bool value) ;

constexpr bool __get__useLODGroups() const;

 bool __declspec(property(get=__get__splitPoints, put=__set__splitPoints))  _splitPoints;

constexpr void __set__splitPoints(bool value) ;

constexpr bool __get__splitPoints() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_GenerateOptions, "HoudiniEngineUnity", "HEU_GenerateOptions");
