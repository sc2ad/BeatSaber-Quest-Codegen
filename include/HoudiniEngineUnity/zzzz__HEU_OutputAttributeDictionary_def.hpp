#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_OutputAttribute_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SerializableDictionary_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_OutputAttributeDictionary;
}
// Type: HoudiniEngineUnity::HEU_OutputAttributeDictionary
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9796), inst: 2474 }), TypeDefinitionIndex(TypeDefinitionIndex(9796)), TypeDefinitionIndex(TypeDefinitionIndex(9607))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9608))
// CS Name: HoudiniEngineUnity.HEU_OutputAttributeDictionary
class CORDL_TYPE HEU_OutputAttributeDictionary : public HoudiniEngineUnity::HEU_SerializableDictionary_2<::StringW,HoudiniEngineUnity::HEU_OutputAttribute> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~HEU_OutputAttributeDictionary() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_OutputAttributeDictionary", modifiers: " const&", def_value: None }]
constexpr HEU_OutputAttributeDictionary(HEU_OutputAttributeDictionary const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_OutputAttributeDictionary", modifiers: "&&", def_value: None }]
constexpr HEU_OutputAttributeDictionary(HEU_OutputAttributeDictionary&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_OutputAttributeDictionary(void* ptr) noexcept : HoudiniEngineUnity::HEU_SerializableDictionary_2<::StringW,HoudiniEngineUnity::HEU_OutputAttribute>(ptr) {
}


  constexpr HEU_OutputAttributeDictionary& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_OutputAttributeDictionary& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_OutputAttributeDictionary& operator=(HEU_OutputAttributeDictionary&& o) noexcept = default;
  constexpr HEU_OutputAttributeDictionary& operator=(HEU_OutputAttributeDictionary const& o) noexcept = default;
                


// Methods

static HoudiniEngineUnity::HEU_OutputAttributeDictionary New_ctor() ;

/// @brief Method .ctor addr 0x201115c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_OutputAttributeDictionary);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_OutputAttributeDictionary, "HoudiniEngineUnity", "HEU_OutputAttributeDictionary");
