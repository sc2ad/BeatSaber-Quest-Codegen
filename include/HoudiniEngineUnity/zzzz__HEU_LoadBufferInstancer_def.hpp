#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace HoudiniEngineUnity {
struct HAPI_Transform;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_LoadBufferInstancer;
}
// Type: HoudiniEngineUnity::HEU_LoadBufferInstancer
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9745))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9749))
// CS Name: HoudiniEngineUnity.HEU_LoadBufferInstancer
class CORDL_TYPE HEU_LoadBufferInstancer : public ::HoudiniEngineUnity::HEU_LoadBufferBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~HEU_LoadBufferInstancer() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_LoadBufferInstancer", modifiers: " const&", def_value: None }]
constexpr HEU_LoadBufferInstancer(HEU_LoadBufferInstancer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_LoadBufferInstancer", modifiers: "&&", def_value: None }]
constexpr HEU_LoadBufferInstancer(HEU_LoadBufferInstancer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_LoadBufferInstancer(void* ptr) noexcept : ::HoudiniEngineUnity::HEU_LoadBufferBase(ptr) {
}


  constexpr HEU_LoadBufferInstancer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_LoadBufferInstancer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_LoadBufferInstancer& operator=(HEU_LoadBufferInstancer&& o) noexcept = default;
  constexpr HEU_LoadBufferInstancer& operator=(HEU_LoadBufferInstancer const& o) noexcept = default;
                


// Fields

 ::ArrayW<::HoudiniEngineUnity::HAPI_Transform> __declspec(property(get=__get__instanceTransforms, put=__set__instanceTransforms))  _instanceTransforms;

constexpr void __set__instanceTransforms(::ArrayW<::HoudiniEngineUnity::HAPI_Transform> value) ;

constexpr ::ArrayW<::HoudiniEngineUnity::HAPI_Transform> __get__instanceTransforms() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__instancePrefixes, put=__set__instancePrefixes))  _instancePrefixes;

constexpr void __set__instancePrefixes(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__instancePrefixes() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__instanceNodeIDs, put=__set__instanceNodeIDs))  _instanceNodeIDs;

constexpr void __set__instanceNodeIDs(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__instanceNodeIDs() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__assetPaths, put=__set__assetPaths))  _assetPaths;

constexpr void __set__assetPaths(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__assetPaths() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__collisionAssetPaths, put=__set__collisionAssetPaths))  _collisionAssetPaths;

constexpr void __set__collisionAssetPaths(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__collisionAssetPaths() const;


// Methods

// Ctor Parameters []
explicit HEU_LoadBufferInstancer() ;

/// @brief Method .ctor addr 0x203a514 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
NEED_NO_BOX(::HoudiniEngineUnity::HEU_LoadBufferInstancer);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_LoadBufferInstancer, "HoudiniEngineUnity", "HEU_LoadBufferInstancer");
