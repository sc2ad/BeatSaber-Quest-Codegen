#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_UnityMaterialInfo;
}
// Type: HoudiniEngineUnity::HEU_UnityMaterialInfo
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9721))
// CS Name: HoudiniEngineUnity.HEU_UnityMaterialInfo
class CORDL_TYPE HEU_UnityMaterialInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~HEU_UnityMaterialInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_UnityMaterialInfo", modifiers: " const&", def_value: None }]
constexpr HEU_UnityMaterialInfo(HEU_UnityMaterialInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_UnityMaterialInfo", modifiers: "&&", def_value: None }]
constexpr HEU_UnityMaterialInfo(HEU_UnityMaterialInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_UnityMaterialInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_UnityMaterialInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_UnityMaterialInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_UnityMaterialInfo& operator=(HEU_UnityMaterialInfo&& o) noexcept = default;
  constexpr HEU_UnityMaterialInfo& operator=(HEU_UnityMaterialInfo const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__unityMaterialPath, put=__set__unityMaterialPath))  _unityMaterialPath;

constexpr void __set__unityMaterialPath(::StringW value) ;

constexpr ::StringW __get__unityMaterialPath() const;

 ::StringW __declspec(property(get=__get__substancePath, put=__set__substancePath))  _substancePath;

constexpr void __set__substancePath(::StringW value) ;

constexpr ::StringW __get__substancePath() const;

 int32_t __declspec(property(get=__get__substanceIndex, put=__set__substanceIndex))  _substanceIndex;

constexpr void __set__substanceIndex(int32_t value) ;

constexpr int32_t __get__substanceIndex() const;


// Methods

// Ctor Parameters [CppParam { name: "unityMaterialPath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "substancePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "substanceIndex", ty: "int32_t", modifiers: "", def_value: None }]
explicit HEU_UnityMaterialInfo(::StringW unityMaterialPath, ::StringW substancePath, int32_t substanceIndex) ;

/// @brief Method .ctor addr 0x2030150 size 0x3c virtual false final false
 void _ctor(::StringW unityMaterialPath, ::StringW substancePath, int32_t substanceIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_UnityMaterialInfo);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_UnityMaterialInfo, "HoudiniEngineUnity", "HEU_UnityMaterialInfo");
