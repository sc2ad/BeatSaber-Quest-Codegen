#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class MaterialManager;
}
// Type: UnityEngine.TextCore.Text::MaterialManager
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13509))
// CS Name: UnityEngine.TextCore.Text.MaterialManager
class CORDL_TYPE MaterialManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MaterialManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "MaterialManager", modifiers: " const&", def_value: None }]
constexpr MaterialManager(MaterialManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MaterialManager", modifiers: "&&", def_value: None }]
constexpr MaterialManager(MaterialManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MaterialManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MaterialManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MaterialManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MaterialManager& operator=(MaterialManager&& o) noexcept = default;
  constexpr MaterialManager& operator=(MaterialManager const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::Dictionary_2<int64_t,UnityEngine::Material> __declspec(property(get=__get_s_FallbackMaterials, put=__set_s_FallbackMaterials))  s_FallbackMaterials;

static void __set_s_FallbackMaterials(System::Collections::Generic::Dictionary_2<int64_t,UnityEngine::Material> value) ;

static System::Collections::Generic::Dictionary_2<int64_t,UnityEngine::Material> __get_s_FallbackMaterials() ;


// Methods

/// @brief Method GetFallbackMaterial addr 0x2bcb8fc size 0x360 virtual false final false
static UnityEngine::Material GetFallbackMaterial(UnityEngine::Material sourceMaterial, UnityEngine::Material targetMaterial) ;

/// @brief Method GetFallbackMaterial addr 0x2bcbc5c size 0x1d0 virtual false final false
static UnityEngine::Material GetFallbackMaterial(UnityEngine::TextCore::Text::FontAsset fontAsset, UnityEngine::Material sourceMaterial, int32_t atlasIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
NEED_NO_BOX(UnityEngine::TextCore::Text::MaterialManager);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::Text::MaterialManager, "UnityEngine.TextCore.Text", "MaterialManager");
