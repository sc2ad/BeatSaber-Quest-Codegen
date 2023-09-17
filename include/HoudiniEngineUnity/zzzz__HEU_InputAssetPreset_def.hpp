#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InputAssetPreset;
}
// Type: HoudiniEngineUnity::HEU_InputAssetPreset
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9551))
// CS Name: HoudiniEngineUnity.HEU_InputAssetPreset
class CORDL_TYPE HEU_InputAssetPreset : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~HEU_InputAssetPreset() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InputAssetPreset", modifiers: " const&", def_value: None }]
constexpr HEU_InputAssetPreset(HEU_InputAssetPreset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InputAssetPreset", modifiers: "&&", def_value: None }]
constexpr HEU_InputAssetPreset(HEU_InputAssetPreset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_InputAssetPreset(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_InputAssetPreset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_InputAssetPreset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_InputAssetPreset& operator=(HEU_InputAssetPreset&& o) noexcept = default;
  constexpr HEU_InputAssetPreset& operator=(HEU_InputAssetPreset const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__gameObjectName, put=__set__gameObjectName))  _gameObjectName;

constexpr void __set__gameObjectName(::StringW value) ;

constexpr ::StringW __get__gameObjectName() const;


// Methods

// Ctor Parameters []
explicit HEU_InputAssetPreset() ;

/// @brief Method .ctor addr 0x1fdafdc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputAssetPreset);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputAssetPreset, "HoudiniEngineUnity", "HEU_InputAssetPreset");
