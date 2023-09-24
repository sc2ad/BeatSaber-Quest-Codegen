#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace GlobalNamespace {
class HEU_ScriptCallbackExample;
}
// Type: ::HEU_ScriptCallbackExample
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9530))
// CS Name: HEU_ScriptCallbackExample
class CORDL_TYPE HEU_ScriptCallbackExample : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~HEU_ScriptCallbackExample() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ScriptCallbackExample", modifiers: " const&", def_value: None }]
constexpr HEU_ScriptCallbackExample(HEU_ScriptCallbackExample const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ScriptCallbackExample", modifiers: "&&", def_value: None }]
constexpr HEU_ScriptCallbackExample(HEU_ScriptCallbackExample&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_ScriptCallbackExample(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr HEU_ScriptCallbackExample& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_ScriptCallbackExample& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_ScriptCallbackExample& operator=(HEU_ScriptCallbackExample&& o) noexcept = default;
  constexpr HEU_ScriptCallbackExample& operator=(HEU_ScriptCallbackExample const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__msg, put=__set__msg))  _msg;

constexpr void __set__msg(::StringW value) ;

constexpr ::StringW __get__msg() const;


// Methods

/// @brief Method AssetCallbackWithMsg addr 0x1fd9744 size 0x98 virtual false final false
 void AssetCallbackWithMsg(::StringW msg) ;

/// @brief Method AssetCallbackNoMsg addr 0x1fd97dc size 0x68 virtual false final false
 void AssetCallbackNoMsg() ;

static GlobalNamespace::HEU_ScriptCallbackExample New_ctor() ;

/// @brief Method .ctor addr 0x1fd9844 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::HEU_ScriptCallbackExample);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HEU_ScriptCallbackExample, "", "HEU_ScriptCallbackExample");
