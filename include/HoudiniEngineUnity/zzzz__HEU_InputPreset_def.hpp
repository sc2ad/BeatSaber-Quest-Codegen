#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
class HEU_InputAssetPreset;
}
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_InputNode__InputObjectType;
}
namespace HoudiniEngineUnity {
class HEU_InputObjectPreset;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InputPreset;
}
// Type: HoudiniEngineUnity::HEU_InputPreset
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9549))
// CS Name: HoudiniEngineUnity.HEU_InputPreset
class CORDL_TYPE HEU_InputPreset : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~HEU_InputPreset() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InputPreset", modifiers: " const&", def_value: None }]
constexpr HEU_InputPreset(HEU_InputPreset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InputPreset", modifiers: "&&", def_value: None }]
constexpr HEU_InputPreset(HEU_InputPreset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_InputPreset(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_InputPreset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_InputPreset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_InputPreset& operator=(HEU_InputPreset&& o) noexcept = default;
  constexpr HEU_InputPreset& operator=(HEU_InputPreset const& o) noexcept = default;
                


// Fields

 HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType __declspec(property(get=__get__inputObjectType, put=__set__inputObjectType))  _inputObjectType;

constexpr void __set__inputObjectType(HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType value) ;

constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType __get__inputObjectType() const;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputObjectPreset> __declspec(property(get=__get__inputObjectPresets, put=__set__inputObjectPresets))  _inputObjectPresets;

constexpr void __set__inputObjectPresets(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputObjectPreset> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputObjectPreset> __get__inputObjectPresets() const;

 ::StringW __declspec(property(get=__get__inputAssetName, put=__set__inputAssetName))  _inputAssetName;

constexpr void __set__inputAssetName(::StringW value) ;

constexpr ::StringW __get__inputAssetName() const;

 int32_t __declspec(property(get=__get__inputIndex, put=__set__inputIndex))  _inputIndex;

constexpr void __set__inputIndex(int32_t value) ;

constexpr int32_t __get__inputIndex() const;

 ::StringW __declspec(property(get=__get__inputName, put=__set__inputName))  _inputName;

constexpr void __set__inputName(::StringW value) ;

constexpr ::StringW __get__inputName() const;

 bool __declspec(property(get=__get__keepWorldTransform, put=__set__keepWorldTransform))  _keepWorldTransform;

constexpr void __set__keepWorldTransform(bool value) ;

constexpr bool __get__keepWorldTransform() const;

 bool __declspec(property(get=__get__packGeometryBeforeMerging, put=__set__packGeometryBeforeMerging))  _packGeometryBeforeMerging;

constexpr void __set__packGeometryBeforeMerging(bool value) ;

constexpr bool __get__packGeometryBeforeMerging() const;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputAssetPreset> __declspec(property(get=__get__inputAssetPresets, put=__set__inputAssetPresets))  _inputAssetPresets;

constexpr void __set__inputAssetPresets(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputAssetPreset> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputAssetPreset> __get__inputAssetPresets() const;


// Methods

// Ctor Parameters []
explicit HEU_InputPreset() ;

/// @brief Method .ctor addr 0x1fdae74 size 0xc0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_InputPreset);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_InputPreset, "HoudiniEngineUnity", "HEU_InputPreset");
