#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Material;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class MaterialUtility;
}
// Type: UnityEngine.ProBuilder::MaterialUtility
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12080))
// CS Name: UnityEngine.ProBuilder.MaterialUtility
class CORDL_TYPE MaterialUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MaterialUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "MaterialUtility", modifiers: " const&", def_value: None }]
constexpr MaterialUtility(MaterialUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MaterialUtility", modifiers: "&&", def_value: None }]
constexpr MaterialUtility(MaterialUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MaterialUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MaterialUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MaterialUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MaterialUtility& operator=(MaterialUtility&& o) noexcept = default;
  constexpr MaterialUtility& operator=(MaterialUtility const& o) noexcept = default;
                


// Fields

static ::System::Collections::Generic::List_1<::UnityEngine::Material> __declspec(property(get=__get_s_MaterialArray, put=__set_s_MaterialArray))  s_MaterialArray;

static void __set_s_MaterialArray(::System::Collections::Generic::List_1<::UnityEngine::Material> value) ;

static ::System::Collections::Generic::List_1<::UnityEngine::Material> __get_s_MaterialArray() ;


// Methods

/// @brief Method GetMaterialCount addr 0x29b4554 size 0xd0 virtual false final false
static int32_t GetMaterialCount(::UnityEngine::Renderer renderer) ;

/// @brief Method GetSharedMaterial addr 0x29b4624 size 0x140 virtual false final false
static ::UnityEngine::Material GetSharedMaterial(::UnityEngine::Renderer renderer, int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ProBuilder::MaterialUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MaterialUtility, "UnityEngine.ProBuilder", "MaterialUtility");
