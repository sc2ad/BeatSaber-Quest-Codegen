#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_BaseSync_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_GeoSync;
}
// Type: HoudiniEngineUnity::HEU_GeoSync
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9734))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9736))
// CS Name: HoudiniEngineUnity.HEU_GeoSync
class CORDL_TYPE HEU_GeoSync : public HoudiniEngineUnity::HEU_BaseSync {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~HEU_GeoSync() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_GeoSync", modifiers: " const&", def_value: None }]
constexpr HEU_GeoSync(HEU_GeoSync const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_GeoSync", modifiers: "&&", def_value: None }]
constexpr HEU_GeoSync(HEU_GeoSync&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_GeoSync(void* ptr) noexcept : HoudiniEngineUnity::HEU_BaseSync(ptr) {
}


  constexpr HEU_GeoSync& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_GeoSync& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_GeoSync& operator=(HEU_GeoSync&& o) noexcept = default;
  constexpr HEU_GeoSync& operator=(HEU_GeoSync const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__filePath, put=__set__filePath))  _filePath;

constexpr void __set__filePath(::StringW value) ;

constexpr ::StringW __get__filePath() const;


// Methods

/// @brief Method SetupLoadTask addr 0x20386e4 size 0x98 virtual true final false
 void SetupLoadTask(HoudiniEngineUnity::HEU_SessionBase session) ;

// Ctor Parameters []
explicit HEU_GeoSync() ;

/// @brief Method .ctor addr 0x2038790 size 0x4c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_GeoSync);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_GeoSync, "HoudiniEngineUnity", "HEU_GeoSync");
