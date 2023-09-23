#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
struct HAPI_AttributeInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_AttributeOwner;
}
namespace System::Text {
class StringBuilder;
}
namespace UnityEngine {
class GameObject;
}
namespace HoudiniEngineUnity {
struct HAPI_GeoInfo;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
// Forward declare root types
namespace GlobalNamespace {
class HEU_ExampleEvergreenQuery;
}
// Type: ::HEU_ExampleEvergreenQuery
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9528))
// CS Name: HEU_ExampleEvergreenQuery
class CORDL_TYPE HEU_ExampleEvergreenQuery : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HEU_ExampleEvergreenQuery() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ExampleEvergreenQuery", modifiers: " const&", def_value: None }]
constexpr HEU_ExampleEvergreenQuery(HEU_ExampleEvergreenQuery const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ExampleEvergreenQuery", modifiers: "&&", def_value: None }]
constexpr HEU_ExampleEvergreenQuery(HEU_ExampleEvergreenQuery&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_ExampleEvergreenQuery(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_ExampleEvergreenQuery& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_ExampleEvergreenQuery& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_ExampleEvergreenQuery& operator=(HEU_ExampleEvergreenQuery&& o) noexcept = default;
  constexpr HEU_ExampleEvergreenQuery& operator=(HEU_ExampleEvergreenQuery const& o) noexcept = default;
                


// Methods

/// @brief Method StartQuery addr 0x1fd76ec size 0x274 virtual false final false
static void StartQuery() ;

/// @brief Method QueryHoudiniAsset addr 0x1fd7960 size 0x1c0 virtual false final false
static HoudiniEngineUnity::HEU_HoudiniAsset QueryHoudiniAsset(UnityEngine::GameObject rootGO) ;

/// @brief Method CookAsset addr 0x1fd7b20 size 0x10 virtual false final false
static void CookAsset(HoudiniEngineUnity::HEU_HoudiniAsset houdiniAsset) ;

/// @brief Method ChangeParmsAndCook addr 0x1fd7b30 size 0x390 virtual false final false
static void ChangeParmsAndCook(HoudiniEngineUnity::HEU_HoudiniAsset houdiniAsset) ;

/// @brief Method QueryObjects addr 0x1fd7ec0 size 0x2dc virtual false final false
static void QueryObjects(HoudiniEngineUnity::HEU_HoudiniAsset houdiniAsset) ;

/// @brief Method QueryGeoParts addr 0x1fd8740 size 0x42c virtual false final false
static void QueryGeoParts(HoudiniEngineUnity::HEU_SessionBase session, ByRef<HoudiniEngineUnity::HAPI_GeoInfo> geoInfo) ;

/// @brief Method QueryPartAttributeByOwner addr 0x1fd8b6c size 0x284 virtual false final false
static void QueryPartAttributeByOwner(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, HoudiniEngineUnity::HAPI_AttributeOwner owner, int32_t count, System::Text::StringBuilder sb) ;

/// @brief Method QueryAttributeByStorageType addr 0x1fd8df0 size 0x1d0 virtual false final false
static void QueryAttributeByStorageType(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::StringW attrName) ;

/// @brief Method QueryAttribute addr 0x1fd819c size 0x444 virtual false final false
static void QueryAttribute(HoudiniEngineUnity::HEU_HoudiniAsset houdiniAsset, ::StringW objName, ::StringW geoName, int32_t partID, ::StringW attrName) ;

// Ctor Parameters []
explicit HEU_ExampleEvergreenQuery() ;

/// @brief Method .ctor addr 0x1fd9234 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::HEU_ExampleEvergreenQuery);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HEU_ExampleEvergreenQuery, "", "HEU_ExampleEvergreenQuery");
