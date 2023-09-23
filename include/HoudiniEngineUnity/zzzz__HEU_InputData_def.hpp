#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InputData;
}
// Type: HoudiniEngineUnity::HEU_InputData
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9779))
// CS Name: HoudiniEngineUnity.HEU_InputData
class CORDL_TYPE HEU_InputData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~HEU_InputData() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InputData", modifiers: " const&", def_value: None }]
constexpr HEU_InputData(HEU_InputData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InputData", modifiers: "&&", def_value: None }]
constexpr HEU_InputData(HEU_InputData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_InputData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_InputData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_InputData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_InputData& operator=(HEU_InputData&& o) noexcept = default;
  constexpr HEU_InputData& operator=(HEU_InputData const& o) noexcept = default;
                


// Fields

 UnityEngine::GameObject __declspec(property(get=__get__inputObject, put=__set__inputObject))  _inputObject;

constexpr void __set__inputObject(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__inputObject() const;


// Methods

// Ctor Parameters []
explicit HEU_InputData() ;

/// @brief Method .ctor addr 0x20549f0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_InputData);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_InputData, "HoudiniEngineUnity", "HEU_InputData");
