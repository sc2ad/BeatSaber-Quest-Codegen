#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
namespace {
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InstanceInputUIState;
}
// Type: HoudiniEngineUnity::HEU_InstanceInputUIState
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9592))
// CS Name: HoudiniEngineUnity.HEU_InstanceInputUIState
class CORDL_TYPE HEU_InstanceInputUIState : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Convert operator to ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InstanceInputUIState>
constexpr operator  ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InstanceInputUIState>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~HEU_InstanceInputUIState() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InstanceInputUIState", modifiers: " const&", def_value: None }]
constexpr HEU_InstanceInputUIState(HEU_InstanceInputUIState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InstanceInputUIState", modifiers: "&&", def_value: None }]
constexpr HEU_InstanceInputUIState(HEU_InstanceInputUIState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_InstanceInputUIState(void* ptr) noexcept : ::UnityEngine::ScriptableObject(ptr) {
}


  constexpr HEU_InstanceInputUIState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_InstanceInputUIState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_InstanceInputUIState& operator=(HEU_InstanceInputUIState&& o) noexcept = default;
  constexpr HEU_InstanceInputUIState& operator=(HEU_InstanceInputUIState const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__showInstanceInputs, put=__set__showInstanceInputs))  _showInstanceInputs;

constexpr void __set__showInstanceInputs(bool value) ;

constexpr bool __get__showInstanceInputs() const;

 int32_t __declspec(property(get=__get__numInputsToShowUI, put=__set__numInputsToShowUI))  _numInputsToShowUI;

constexpr void __set__numInputsToShowUI(int32_t value) ;

constexpr int32_t __get__numInputsToShowUI() const;

 int32_t __declspec(property(get=__get__inputsPageIndexUI, put=__set__inputsPageIndexUI))  _inputsPageIndexUI;

constexpr void __set__inputsPageIndexUI(int32_t value) ;

constexpr int32_t __get__inputsPageIndexUI() const;


// Methods

/// @brief Method CopyTo addr 0x1ffebe8 size 0x24 virtual false final false
 void CopyTo(::HoudiniEngineUnity::HEU_InstanceInputUIState dest) ;

/// @brief Method IsEquivalentTo addr 0x1ffec0c size 0x1e4 virtual true final true
 bool IsEquivalentTo(::HoudiniEngineUnity::HEU_InstanceInputUIState other) ;

// Ctor Parameters []
explicit HEU_InstanceInputUIState() ;

/// @brief Method .ctor addr 0x1ffedf0 size 0x18 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InstanceInputUIState);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InstanceInputUIState, "HoudiniEngineUnity", "HEU_InstanceInputUIState");
