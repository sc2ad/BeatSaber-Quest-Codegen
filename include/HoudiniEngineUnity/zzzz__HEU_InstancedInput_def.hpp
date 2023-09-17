#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace UnityEngine {
class GameObject;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InstancedInput;
}
// Type: HoudiniEngineUnity::HEU_InstancedInput
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9594))
// CS Name: HoudiniEngineUnity.HEU_InstancedInput
class CORDL_TYPE HEU_InstancedInput : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InstancedInput>
constexpr operator  ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InstancedInput>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HEU_InstancedInput() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InstancedInput", modifiers: " const&", def_value: None }]
constexpr HEU_InstancedInput(HEU_InstancedInput const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InstancedInput", modifiers: "&&", def_value: None }]
constexpr HEU_InstancedInput(HEU_InstancedInput&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_InstancedInput(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_InstancedInput& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_InstancedInput& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_InstancedInput& operator=(HEU_InstancedInput&& o) noexcept = default;
  constexpr HEU_InstancedInput& operator=(HEU_InstancedInput const& o) noexcept = default;
                


// Fields

 ::UnityEngine::GameObject __declspec(property(get=__get__instancedGameObject, put=__set__instancedGameObject))  _instancedGameObject;

constexpr void __set__instancedGameObject(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__instancedGameObject() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__rotationOffset, put=__set__rotationOffset))  _rotationOffset;

constexpr void __set__rotationOffset(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__rotationOffset() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__scaleOffset, put=__set__scaleOffset))  _scaleOffset;

constexpr void __set__scaleOffset(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__scaleOffset() const;


// Methods

/// @brief Method IsEquivalentTo addr 0x1fff018 size 0x1a0 virtual true final true
 bool IsEquivalentTo(::HoudiniEngineUnity::HEU_InstancedInput other) ;

// Ctor Parameters []
explicit HEU_InstancedInput() ;

/// @brief Method .ctor addr 0x1fff1b8 size 0x94 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InstancedInput);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InstancedInput, "HoudiniEngineUnity", "HEU_InstancedInput");
