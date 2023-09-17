#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
class Texture3D;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class Noise3DTexturesGenerator;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__Noise3DTexturesGenerator__MaterialPropertyNameCouple;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__Noise3DTexturesGenerator__MaterialTextureParamsCouple;
}
// Type: ::MaterialTextureParamsCouple
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15321))
// CS Name: Noise3DTexturesGenerator::MaterialTextureParamsCouple
struct CORDL_TYPE ____GlobalNamespace__Noise3DTexturesGenerator__MaterialTextureParamsCouple : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "globalPropertyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "materialPropertyNameCouples", ty: "::ArrayW<::GlobalNamespace::____GlobalNamespace__Noise3DTexturesGenerator__MaterialPropertyNameCouple>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__Noise3DTexturesGenerator__MaterialTextureParamsCouple(::StringW globalPropertyName, ::ArrayW<::GlobalNamespace::____GlobalNamespace__Noise3DTexturesGenerator__MaterialPropertyNameCouple> materialPropertyNameCouples) noexcept;


                    constexpr ____GlobalNamespace__Noise3DTexturesGenerator__MaterialTextureParamsCouple(____GlobalNamespace__Noise3DTexturesGenerator__MaterialTextureParamsCouple const&) = default;
                    constexpr ____GlobalNamespace__Noise3DTexturesGenerator__MaterialTextureParamsCouple(____GlobalNamespace__Noise3DTexturesGenerator__MaterialTextureParamsCouple&&) = default;
                    constexpr ____GlobalNamespace__Noise3DTexturesGenerator__MaterialTextureParamsCouple& operator=(____GlobalNamespace__Noise3DTexturesGenerator__MaterialTextureParamsCouple const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__Noise3DTexturesGenerator__MaterialTextureParamsCouple& operator=(____GlobalNamespace__Noise3DTexturesGenerator__MaterialTextureParamsCouple&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__Noise3DTexturesGenerator__MaterialTextureParamsCouple(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_globalPropertyName, put=__set_globalPropertyName))  globalPropertyName;

constexpr void __set_globalPropertyName(::StringW value) ;

constexpr ::StringW __get_globalPropertyName() const;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__Noise3DTexturesGenerator__MaterialPropertyNameCouple> __declspec(property(get=__get_materialPropertyNameCouples, put=__set_materialPropertyNameCouples))  materialPropertyNameCouples;

constexpr void __set_materialPropertyNameCouples(::ArrayW<::GlobalNamespace::____GlobalNamespace__Noise3DTexturesGenerator__MaterialPropertyNameCouple> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__Noise3DTexturesGenerator__MaterialPropertyNameCouple> __get_materialPropertyNameCouples() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MaterialPropertyNameCouple
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15322))
// CS Name: Noise3DTexturesGenerator::MaterialPropertyNameCouple
struct CORDL_TYPE ____GlobalNamespace__Noise3DTexturesGenerator__MaterialPropertyNameCouple : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "texturePropertyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "material", ty: "::UnityEngine::Material", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__Noise3DTexturesGenerator__MaterialPropertyNameCouple(::StringW texturePropertyName, ::UnityEngine::Material material) noexcept;


                    constexpr ____GlobalNamespace__Noise3DTexturesGenerator__MaterialPropertyNameCouple(____GlobalNamespace__Noise3DTexturesGenerator__MaterialPropertyNameCouple const&) = default;
                    constexpr ____GlobalNamespace__Noise3DTexturesGenerator__MaterialPropertyNameCouple(____GlobalNamespace__Noise3DTexturesGenerator__MaterialPropertyNameCouple&&) = default;
                    constexpr ____GlobalNamespace__Noise3DTexturesGenerator__MaterialPropertyNameCouple& operator=(____GlobalNamespace__Noise3DTexturesGenerator__MaterialPropertyNameCouple const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__Noise3DTexturesGenerator__MaterialPropertyNameCouple& operator=(____GlobalNamespace__Noise3DTexturesGenerator__MaterialPropertyNameCouple&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__Noise3DTexturesGenerator__MaterialPropertyNameCouple(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_texturePropertyName, put=__set_texturePropertyName))  texturePropertyName;

constexpr void __set_texturePropertyName(::StringW value) ;

constexpr ::StringW __get_texturePropertyName() const;

 ::UnityEngine::Material __declspec(property(get=__get_material, put=__set_material))  material;

constexpr void __set_material(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get_material() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Noise3DTexturesGenerator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15323))
// CS Name: Noise3DTexturesGenerator
class CORDL_TYPE Noise3DTexturesGenerator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using MaterialPropertyNameCouple = ::GlobalNamespace::____GlobalNamespace__Noise3DTexturesGenerator__MaterialPropertyNameCouple;

using MaterialTextureParamsCouple = ::GlobalNamespace::____GlobalNamespace__Noise3DTexturesGenerator__MaterialTextureParamsCouple;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Noise3DTexturesGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "Noise3DTexturesGenerator", modifiers: " const&", def_value: None }]
constexpr Noise3DTexturesGenerator(Noise3DTexturesGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Noise3DTexturesGenerator", modifiers: "&&", def_value: None }]
constexpr Noise3DTexturesGenerator(Noise3DTexturesGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Noise3DTexturesGenerator(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr Noise3DTexturesGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Noise3DTexturesGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Noise3DTexturesGenerator& operator=(Noise3DTexturesGenerator&& o) noexcept = default;
  constexpr Noise3DTexturesGenerator& operator=(Noise3DTexturesGenerator const& o) noexcept = default;
                


// Fields

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__Noise3DTexturesGenerator__MaterialTextureParamsCouple> __declspec(property(get=__get__data, put=__set__data))  _data;

constexpr void __set__data(::ArrayW<::GlobalNamespace::____GlobalNamespace__Noise3DTexturesGenerator__MaterialTextureParamsCouple> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__Noise3DTexturesGenerator__MaterialTextureParamsCouple> __get__data() const;

static ::UnityEngine::Texture3D __declspec(property(get=__get__texture, put=__set__texture))  _texture;

static void __set__texture(::UnityEngine::Texture3D value) ;

static ::UnityEngine::Texture3D __get__texture() ;


// Methods

/// @brief Method Awake addr 0x2679a18 size 0x210 virtual false final false
 void Awake() ;

/// @brief Method CreateNoisePixels addr 0x2679c28 size 0x324 virtual false final false
static ::ArrayW<::UnityEngine::Color32> CreateNoisePixels(int32_t width, int32_t height, int32_t depth, float_t scale, int32_t repeat, float_t contrast) ;

// Ctor Parameters []
explicit Noise3DTexturesGenerator() ;

/// @brief Method .ctor addr 0x2679f4c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::Noise3DTexturesGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Noise3DTexturesGenerator, "", "Noise3DTexturesGenerator");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__Noise3DTexturesGenerator__MaterialPropertyNameCouple, "", "Noise3DTexturesGenerator/MaterialPropertyNameCouple");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__Noise3DTexturesGenerator__MaterialTextureParamsCouple, "", "Noise3DTexturesGenerator/MaterialTextureParamsCouple");
