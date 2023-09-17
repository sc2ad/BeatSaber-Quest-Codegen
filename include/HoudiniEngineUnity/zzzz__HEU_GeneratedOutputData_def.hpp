#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Material;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_GeneratedOutputData;
}
// Type: HoudiniEngineUnity::HEU_GeneratedOutputData
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9569))
// CS Name: HoudiniEngineUnity.HEU_GeneratedOutputData
class CORDL_TYPE HEU_GeneratedOutputData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_GeneratedOutputData>
constexpr operator  ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_GeneratedOutputData>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~HEU_GeneratedOutputData() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_GeneratedOutputData", modifiers: " const&", def_value: None }]
constexpr HEU_GeneratedOutputData(HEU_GeneratedOutputData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_GeneratedOutputData", modifiers: "&&", def_value: None }]
constexpr HEU_GeneratedOutputData(HEU_GeneratedOutputData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_GeneratedOutputData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_GeneratedOutputData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_GeneratedOutputData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_GeneratedOutputData& operator=(HEU_GeneratedOutputData&& o) noexcept = default;
  constexpr HEU_GeneratedOutputData& operator=(HEU_GeneratedOutputData const& o) noexcept = default;
                


// Fields

 ::UnityEngine::GameObject __declspec(property(get=__get__gameObject, put=__set__gameObject))  _gameObject;

constexpr void __set__gameObject(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__gameObject() const;

 ::ArrayW<::UnityEngine::Material> __declspec(property(get=__get__renderMaterials, put=__set__renderMaterials))  _renderMaterials;

constexpr void __set__renderMaterials(::ArrayW<::UnityEngine::Material> value) ;

constexpr ::ArrayW<::UnityEngine::Material> __get__renderMaterials() const;

 ::System::Collections::Generic::List_1<::UnityEngine::Collider> __declspec(property(get=__get__colliders, put=__set__colliders))  _colliders;

constexpr void __set__colliders(::System::Collections::Generic::List_1<::UnityEngine::Collider> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Collider> __get__colliders() const;


// Methods

/// @brief Method IsEquivalentTo addr 0x1fe38e0 size 0x1ec virtual true final true
 bool IsEquivalentTo(::HoudiniEngineUnity::HEU_GeneratedOutputData other) ;

// Ctor Parameters []
explicit HEU_GeneratedOutputData() ;

/// @brief Method .ctor addr 0x1fe3864 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
NEED_NO_BOX(::HoudiniEngineUnity::HEU_GeneratedOutputData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_GeneratedOutputData, "HoudiniEngineUnity", "HEU_GeneratedOutputData");
