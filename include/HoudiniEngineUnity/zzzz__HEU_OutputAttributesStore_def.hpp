#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace HoudiniEngineUnity {
class HEU_OutputAttribute;
}
namespace HoudiniEngineUnity {
class HEU_OutputAttributeDictionary;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_OutputAttributesStore;
}
// Type: HoudiniEngineUnity::HEU_OutputAttributesStore
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9609))
// CS Name: HoudiniEngineUnity.HEU_OutputAttributesStore
class CORDL_TYPE HEU_OutputAttributesStore : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~HEU_OutputAttributesStore() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_OutputAttributesStore", modifiers: " const&", def_value: None }]
constexpr HEU_OutputAttributesStore(HEU_OutputAttributesStore const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_OutputAttributesStore", modifiers: "&&", def_value: None }]
constexpr HEU_OutputAttributesStore(HEU_OutputAttributesStore&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_OutputAttributesStore(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr HEU_OutputAttributesStore& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_OutputAttributesStore& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_OutputAttributesStore& operator=(HEU_OutputAttributesStore&& o) noexcept = default;
  constexpr HEU_OutputAttributesStore& operator=(HEU_OutputAttributesStore const& o) noexcept = default;
                


// Fields

 ::HoudiniEngineUnity::HEU_OutputAttributeDictionary __declspec(property(get=__get__attributes, put=__set__attributes))  _attributes;

constexpr void __set__attributes(::HoudiniEngineUnity::HEU_OutputAttributeDictionary value) ;

constexpr ::HoudiniEngineUnity::HEU_OutputAttributeDictionary __get__attributes() const;


// Methods

/// @brief Method SetAttribute addr 0x20111a4 size 0xfc virtual false final false
 void SetAttribute(::HoudiniEngineUnity::HEU_OutputAttribute attribute) ;

/// @brief Method GetAttribute addr 0x20112a0 size 0x70 virtual false final false
 ::HoudiniEngineUnity::HEU_OutputAttribute GetAttribute(::StringW name) ;

/// @brief Method Clear addr 0x2011310 size 0x50 virtual false final false
 void Clear() ;

// Ctor Parameters []
explicit HEU_OutputAttributesStore() ;

/// @brief Method .ctor addr 0x2011360 size 0x64 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
NEED_NO_BOX(::HoudiniEngineUnity::HEU_OutputAttributesStore);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_OutputAttributesStore, "HoudiniEngineUnity", "HEU_OutputAttributesStore");
