#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace GlobalNamespace {
class OVRSceneAnchor;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRScenePrefabOverride;
}
// Type: ::OVRScenePrefabOverride
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8835))
// CS Name: OVRScenePrefabOverride
class CORDL_TYPE OVRScenePrefabOverride : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::ISerializationCallbackReceiver
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~OVRScenePrefabOverride() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRScenePrefabOverride", modifiers: " const&", def_value: None }]
constexpr OVRScenePrefabOverride(OVRScenePrefabOverride const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRScenePrefabOverride", modifiers: "&&", def_value: None }]
constexpr OVRScenePrefabOverride(OVRScenePrefabOverride&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRScenePrefabOverride(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OVRScenePrefabOverride& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRScenePrefabOverride& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRScenePrefabOverride& operator=(OVRScenePrefabOverride&& o) noexcept = default;
  constexpr OVRScenePrefabOverride& operator=(OVRScenePrefabOverride const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::OVRSceneAnchor __declspec(property(get=__get_Prefab, put=__set_Prefab))  Prefab;

constexpr void __set_Prefab(::GlobalNamespace::OVRSceneAnchor value) ;

constexpr ::GlobalNamespace::OVRSceneAnchor __get_Prefab() const;

 ::StringW __declspec(property(get=__get_ClassificationLabel, put=__set_ClassificationLabel))  ClassificationLabel;

constexpr void __set_ClassificationLabel(::StringW value) ;

constexpr ::StringW __get_ClassificationLabel() const;

 int32_t __declspec(property(get=__get__editorClassificationIndex, put=__set__editorClassificationIndex))  _editorClassificationIndex;

constexpr void __set__editorClassificationIndex(int32_t value) ;

constexpr int32_t __get__editorClassificationIndex() const;


// Methods

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize addr 0x260c008 size 0x4 virtual true final true
 void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize addr 0x260c00c size 0x154 virtual true final true
 void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() ;

// Ctor Parameters []
explicit OVRScenePrefabOverride() ;

/// @brief Method .ctor addr 0x260c474 size 0x50 virtual false final false
 void _ctor() ;

/// @brief Method <UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize>g__IndexOf|4_0 addr 0x260c160 size 0x314 virtual false final false
static int32_t _UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_g__IndexOf_4_0(::StringW label, ::System::Collections::Generic::IEnumerable_1<::StringW> collection) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::OVRScenePrefabOverride);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRScenePrefabOverride, "", "OVRScenePrefabOverride");
