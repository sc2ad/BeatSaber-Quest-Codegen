#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
struct HEU_AssetEventType;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_AssetEventData;
}
// Type: HoudiniEngineUnity::HEU_AssetEventData
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9536))
// CS Name: HoudiniEngineUnity.HEU_AssetEventData
class CORDL_TYPE HEU_AssetEventData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HEU_AssetEventData() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_AssetEventData", modifiers: " const&", def_value: None }]
constexpr HEU_AssetEventData(HEU_AssetEventData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_AssetEventData", modifiers: "&&", def_value: None }]
constexpr HEU_AssetEventData(HEU_AssetEventData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_AssetEventData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_AssetEventData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_AssetEventData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_AssetEventData& operator=(HEU_AssetEventData&& o) noexcept = default;
  constexpr HEU_AssetEventData& operator=(HEU_AssetEventData const& o) noexcept = default;
                


// Fields

 ::HoudiniEngineUnity::HEU_HoudiniAsset __declspec(property(get=__get_Asset, put=__set_Asset))  Asset;

constexpr void __set_Asset(::HoudiniEngineUnity::HEU_HoudiniAsset value) ;

constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset __get_Asset() const;

 bool __declspec(property(get=__get_CookSuccess, put=__set_CookSuccess))  CookSuccess;

constexpr void __set_CookSuccess(bool value) ;

constexpr bool __get_CookSuccess() const;

 ::System::Collections::Generic::List_1<::UnityEngine::GameObject> __declspec(property(get=__get_OutputObjects, put=__set_OutputObjects))  OutputObjects;

constexpr void __set_OutputObjects(::System::Collections::Generic::List_1<::UnityEngine::GameObject> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::GameObject> __get_OutputObjects() const;

 ::HoudiniEngineUnity::HEU_AssetEventType __declspec(property(get=__get_EventType, put=__set_EventType))  EventType;

constexpr void __set_EventType(::HoudiniEngineUnity::HEU_AssetEventType value) ;

constexpr ::HoudiniEngineUnity::HEU_AssetEventType __get_EventType() const;


// Methods

// Ctor Parameters [CppParam { name: "asset", ty: "::HoudiniEngineUnity::HEU_HoudiniAsset", modifiers: "", def_value: None }, CppParam { name: "successful", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "outputObjects", ty: "::System::Collections::Generic::List_1<::UnityEngine::GameObject>", modifiers: "", def_value: None }]
explicit HEU_AssetEventData(::HoudiniEngineUnity::HEU_HoudiniAsset asset, bool successful, ::System::Collections::Generic::List_1<::UnityEngine::GameObject> outputObjects) ;

/// @brief Method .ctor addr 0x1fda9c8 size 0x40 virtual false final false
 void _ctor(::HoudiniEngineUnity::HEU_HoudiniAsset asset, bool successful, ::System::Collections::Generic::List_1<::UnityEngine::GameObject> outputObjects) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
NEED_NO_BOX(::HoudiniEngineUnity::HEU_AssetEventData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AssetEventData, "HoudiniEngineUnity", "HEU_AssetEventData");
