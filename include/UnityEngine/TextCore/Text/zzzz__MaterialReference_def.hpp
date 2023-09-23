#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class Material;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine::TextCore::Text {
class SpriteAsset;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct MaterialReference;
}
// Type: UnityEngine.TextCore.Text::MaterialReference
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13510))
// CS Name: UnityEngine.TextCore.Text.MaterialReference
struct CORDL_TYPE MaterialReference : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fontAsset", ty: "UnityEngine::TextCore::Text::FontAsset", modifiers: "", def_value: None }, CppParam { name: "spriteAsset", ty: "UnityEngine::TextCore::Text::SpriteAsset", modifiers: "", def_value: None }, CppParam { name: "material", ty: "UnityEngine::Material", modifiers: "", def_value: None }, CppParam { name: "isDefaultMaterial", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isFallbackMaterial", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "fallbackMaterial", ty: "UnityEngine::Material", modifiers: "", def_value: None }, CppParam { name: "padding", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "referenceCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MaterialReference(int32_t index, UnityEngine::TextCore::Text::FontAsset fontAsset, UnityEngine::TextCore::Text::SpriteAsset spriteAsset, UnityEngine::Material material, bool isDefaultMaterial, bool isFallbackMaterial, UnityEngine::Material fallbackMaterial, float_t padding, int32_t referenceCount) noexcept;


                    constexpr MaterialReference(MaterialReference const&) = default;
                    constexpr MaterialReference(MaterialReference&&) = default;
                    constexpr MaterialReference& operator=(MaterialReference const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MaterialReference& operator=(MaterialReference&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MaterialReference(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;

 UnityEngine::TextCore::Text::FontAsset __declspec(property(get=__get_fontAsset, put=__set_fontAsset))  fontAsset;

constexpr void __set_fontAsset(UnityEngine::TextCore::Text::FontAsset value) ;

constexpr UnityEngine::TextCore::Text::FontAsset __get_fontAsset() const;

 UnityEngine::TextCore::Text::SpriteAsset __declspec(property(get=__get_spriteAsset, put=__set_spriteAsset))  spriteAsset;

constexpr void __set_spriteAsset(UnityEngine::TextCore::Text::SpriteAsset value) ;

constexpr UnityEngine::TextCore::Text::SpriteAsset __get_spriteAsset() const;

 UnityEngine::Material __declspec(property(get=__get_material, put=__set_material))  material;

constexpr void __set_material(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_material() const;

 bool __declspec(property(get=__get_isDefaultMaterial, put=__set_isDefaultMaterial))  isDefaultMaterial;

constexpr void __set_isDefaultMaterial(bool value) ;

constexpr bool __get_isDefaultMaterial() const;

 bool __declspec(property(get=__get_isFallbackMaterial, put=__set_isFallbackMaterial))  isFallbackMaterial;

constexpr void __set_isFallbackMaterial(bool value) ;

constexpr bool __get_isFallbackMaterial() const;

 UnityEngine::Material __declspec(property(get=__get_fallbackMaterial, put=__set_fallbackMaterial))  fallbackMaterial;

constexpr void __set_fallbackMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_fallbackMaterial() const;

 float_t __declspec(property(get=__get_padding, put=__set_padding))  padding;

constexpr void __set_padding(float_t value) ;

constexpr float_t __get_padding() const;

 int32_t __declspec(property(get=__get_referenceCount, put=__set_referenceCount))  referenceCount;

constexpr void __set_referenceCount(int32_t value) ;

constexpr int32_t __get_referenceCount() const;


// Methods

/// @brief Method .ctor addr 0x2bcbeb8 size 0x7c virtual false final false
 void _ctor(int32_t index, UnityEngine::TextCore::Text::FontAsset fontAsset, UnityEngine::TextCore::Text::SpriteAsset spriteAsset, UnityEngine::Material material, float_t padding) ;

/// @brief Method AddMaterialReference addr 0x2bcbf34 size 0x20c virtual false final false
static int32_t AddMaterialReference(UnityEngine::Material material, UnityEngine::TextCore::Text::FontAsset fontAsset, ByRef<::ArrayW<UnityEngine::TextCore::Text::MaterialReference>> materialReferences, System::Collections::Generic::Dictionary_2<int32_t,int32_t> materialReferenceIndexLookup) ;

/// @brief Method AddMaterialReference addr 0x2bcc140 size 0x1d8 virtual false final false
static int32_t AddMaterialReference(UnityEngine::Material material, UnityEngine::TextCore::Text::SpriteAsset spriteAsset, ByRef<::ArrayW<UnityEngine::TextCore::Text::MaterialReference>> materialReferences, System::Collections::Generic::Dictionary_2<int32_t,int32_t> materialReferenceIndexLookup) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::Text::MaterialReference, "UnityEngine.TextCore.Text", "MaterialReference");
