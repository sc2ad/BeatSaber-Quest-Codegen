#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
class GameObject;
}
namespace HoudiniEngineUnity {
class HEU_InstancedInput;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace HoudiniEngineUnity {
class HEU_PartData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_ObjectInstanceInfo;
}
// Type: HoudiniEngineUnity::HEU_ObjectInstanceInfo
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9593))
// CS Name: HoudiniEngineUnity.HEU_ObjectInstanceInfo
class CORDL_TYPE HEU_ObjectInstanceInfo : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Convert operator to ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo>
constexpr operator  ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~HEU_ObjectInstanceInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ObjectInstanceInfo", modifiers: " const&", def_value: None }]
constexpr HEU_ObjectInstanceInfo(HEU_ObjectInstanceInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ObjectInstanceInfo", modifiers: "&&", def_value: None }]
constexpr HEU_ObjectInstanceInfo(HEU_ObjectInstanceInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_ObjectInstanceInfo(void* ptr) noexcept : ::UnityEngine::ScriptableObject(ptr) {
}


  constexpr HEU_ObjectInstanceInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_ObjectInstanceInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_ObjectInstanceInfo& operator=(HEU_ObjectInstanceInfo&& o) noexcept = default;
  constexpr HEU_ObjectInstanceInfo& operator=(HEU_ObjectInstanceInfo const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InstancedInput> __declspec(property(get=__get__instancedInputs, put=__set__instancedInputs))  _instancedInputs;

constexpr void __set__instancedInputs(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InstancedInput> value) ;

constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InstancedInput> __get__instancedInputs() const;

 ::HoudiniEngineUnity::HEU_PartData __declspec(property(get=__get__partTarget, put=__set__partTarget))  _partTarget;

constexpr void __set__partTarget(::HoudiniEngineUnity::HEU_PartData value) ;

constexpr ::HoudiniEngineUnity::HEU_PartData __get__partTarget() const;

 int32_t __declspec(property(get=__get__instancedObjectNodeID, put=__set__instancedObjectNodeID))  _instancedObjectNodeID;

constexpr void __set__instancedObjectNodeID(int32_t value) ;

constexpr int32_t __get__instancedObjectNodeID() const;

 ::StringW __declspec(property(get=__get__instancedObjectPath, put=__set__instancedObjectPath))  _instancedObjectPath;

constexpr void __set__instancedObjectPath(::StringW value) ;

constexpr ::StringW __get__instancedObjectPath() const;

 ::System::Collections::Generic::List_1<::UnityEngine::GameObject> __declspec(property(get=__get__instances, put=__set__instances))  _instances;

constexpr void __set__instances(::System::Collections::Generic::List_1<::UnityEngine::GameObject> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::GameObject> __get__instances() const;


// Methods

/// @brief Method IsEquivalentTo addr 0x1ffee08 size 0x148 virtual true final true
 bool IsEquivalentTo(::HoudiniEngineUnity::HEU_ObjectInstanceInfo other) ;

// Ctor Parameters []
explicit HEU_ObjectInstanceInfo() ;

/// @brief Method .ctor addr 0x1ffef50 size 0xc8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
NEED_NO_BOX(::HoudiniEngineUnity::HEU_ObjectInstanceInfo);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_ObjectInstanceInfo, "HoudiniEngineUnity", "HEU_ObjectInstanceInfo");
